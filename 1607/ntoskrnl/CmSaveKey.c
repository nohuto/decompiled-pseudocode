/*
 * XREFs of CmSaveKey @ 0x14060CCD0
 * Callers:
 *     NtSaveKey @ 0x1405FA8B4 (NtSaveKey.c)
 *     NtSaveKeyEx @ 0x1405FAAF0 (NtSaveKeyEx.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140067CE0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400684C0 (ExReleaseResourceLite.c)
 *     ExAcquireRundownProtection @ 0x1400D1D70 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400D1DA0 (ExReleaseRundownProtection.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     CmpUnlockRegistry @ 0x14040362C (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x140403660 (CmpLockRegistry.c)
 *     CmpLockKcbShared @ 0x140434310 (CmpLockKcbShared.c)
 *     CmpUnlockKcb @ 0x1404374E0 (CmpUnlockKcb.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x1404382D0 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpCopyKeyPartial @ 0x1404CDE74 (CmpCopyKeyPartial.c)
 *     CmpUuidCreate @ 0x1405179A4 (CmpUuidCreate.c)
 *     CmpTraceHiveSaveFileCopied @ 0x1405FC090 (CmpTraceHiveSaveFileCopied.c)
 *     CmpTraceHiveSaveFileWritten @ 0x1405FC0F8 (CmpTraceHiveSaveFileWritten.c)
 *     CmpTraceHiveSaveStart @ 0x1405FC160 (CmpTraceHiveSaveStart.c)
 *     CmpTraceHiveSaveStop @ 0x1405FC224 (CmpTraceHiveSaveStop.c)
 *     CmpTraceHiveSaveTreeCopied @ 0x1405FC2AC (CmpTraceHiveSaveTreeCopied.c)
 *     HvWriteExternal @ 0x1406065A8 (HvWriteExternal.c)
 *     CmpCopySyncTree @ 0x140608258 (CmpCopySyncTree.c)
 *     CmpLogUnsupportedOperation @ 0x14060BDC0 (CmpLogUnsupportedOperation.c)
 *     CmpCreateTemporaryHive @ 0x14060D2A0 (CmpCreateTemporaryHive.c)
 *     CmpDestroyTemporaryHive @ 0x14060D354 (CmpDestroyTemporaryHive.c)
 *     CmpSaveKeyByFileCopy @ 0x14060DB48 (CmpSaveKeyByFileCopy.c)
 */

NTSTATUS __fastcall CmSaveKey(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rbp
  __int64 v7; // rdi
  NTSTATUS result; // eax
  __int64 v9; // rcx
  ULONG_PTR v10; // rsi
  int v11; // ebx
  unsigned int v12; // r14d
  BOOLEAN v13; // bl
  int v14; // ebx
  __int64 v15; // [rsp+28h] [rbp-80h]
  UUID v16; // [rsp+40h] [rbp-68h] BYREF
  UUID Uuid; // [rsp+50h] [rbp-58h] BYREF

  v3 = *(_QWORD *)(a1 + 8);
  v7 = *(_QWORD *)(v3 + 24);
  if ( v7 == CmpMasterHive )
    return -1073741790;
  if ( *(_WORD *)(v3 + 58) )
  {
    CmpLogUnsupportedOperation(0x12u);
    return -1073741822;
  }
  result = CmpUuidCreate(&Uuid);
  if ( result >= 0 )
  {
    result = CmpUuidCreate(&v16);
    if ( result >= 0 )
    {
      v10 = CmpCreateTemporaryHive(v9, &Uuid, &v16);
      if ( !v10 )
        return -1073741670;
      CmpLockRegistry();
      CmpLockKcbShared(v3);
      CmpTraceHiveSaveStart(v3);
      if ( CmpIsKeyDeletedForKeyBody(a1, 0LL) )
      {
        v11 = -1073741444;
      }
      else
      {
        ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v7 + 2848), 1u);
        v12 = *(_DWORD *)(v3 + 32);
        if ( (*(_DWORD *)(v7 + 144) & 2) != 0 && *(_DWORD *)(v7 + 88) && *(_QWORD *)(v7 + 2664) )
        {
          v13 = ExAcquireRundownProtection((PEX_RUNDOWN_REF)(v7 + 2776));
          ExReleaseResourceLite(*(PERESOURCE *)(v7 + 2848));
          CmpUnlockKcb((char *)v3);
          CmpUnlockRegistry();
          if ( v13 )
          {
            v11 = CmpSaveKeyByFileCopy(v7, a2);
            ExReleaseRundownProtection((PEX_RUNDOWN_REF)(v7 + 2776));
            if ( v11 >= 0 )
              CmpTraceHiveSaveFileCopied();
          }
          else
          {
            v11 = -1073741444;
          }
          goto LABEL_24;
        }
        *(_DWORD *)(*(_QWORD *)(v10 + 64) + 24LL) = a3;
        *(_DWORD *)(v10 + 196) = a3;
        v14 = CmpCopyKeyPartial(v7, v12, v10, 0xFFFFFFFF, 6, v15, 0);
        if ( v14 != -1 )
        {
          CmpTraceHiveSaveTreeCopied();
          *(_DWORD *)(*(_QWORD *)(v10 + 64) + 36LL) = v14;
          if ( CmpCopySyncTree(v7, v12, v10, v14, 2, 0) )
          {
            ExReleaseResourceLite(*(PERESOURCE *)(v7 + 2848));
            CmpUnlockKcb((char *)v3);
            CmpUnlockRegistry();
            *(_QWORD *)(v10 + 2680) = a2;
            v11 = HvWriteExternal(v10);
            if ( v11 >= 0 )
              CmpTraceHiveSaveFileWritten();
            goto LABEL_24;
          }
        }
        v11 = -1073741670;
        ExReleaseResourceLite(*(PERESOURCE *)(v7 + 2848));
      }
      CmpUnlockKcb((char *)v3);
      CmpUnlockRegistry();
LABEL_24:
      *(_QWORD *)(v10 + 2680) = 0LL;
      CmpDestroyTemporaryHive(v10);
      CmpTraceHiveSaveStop(v11);
      return v11;
    }
  }
  return result;
}
