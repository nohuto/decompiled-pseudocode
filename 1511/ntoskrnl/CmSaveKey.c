/*
 * XREFs of CmSaveKey @ 0x1405E9ED0
 * Callers:
 *     NtSaveKey @ 0x1405DC954 (NtSaveKey.c)
 *     NtSaveKeyEx @ 0x1405DCB94 (NtSaveKeyEx.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14003F890 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14003FBB0 (ExReleaseResourceLite.c)
 *     ExReleaseRundownProtection_0 @ 0x14006EE30 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection @ 0x140079FF0 (ExAcquireRundownProtection.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     CmpUnlockKcb @ 0x1403FE4F0 (CmpUnlockKcb.c)
 *     CmpUnlockRegistry @ 0x140423B00 (CmpUnlockRegistry.c)
 *     CmpLockKcbShared @ 0x140423B90 (CmpLockKcbShared.c)
 *     CmpLockRegistry @ 0x140423C10 (CmpLockRegistry.c)
 *     CmpUuidCreate @ 0x14048548C (CmpUuidCreate.c)
 *     CmpCopyKeyPartial @ 0x1404B3BE4 (CmpCopyKeyPartial.c)
 *     CmpCopySyncTree @ 0x14050EEBC (CmpCopySyncTree.c)
 *     CmpTraceHiveSaveFileCopied @ 0x1405DE134 (CmpTraceHiveSaveFileCopied.c)
 *     CmpTraceHiveSaveFileWritten @ 0x1405DE19C (CmpTraceHiveSaveFileWritten.c)
 *     CmpTraceHiveSaveStart @ 0x1405DE204 (CmpTraceHiveSaveStart.c)
 *     CmpTraceHiveSaveStop @ 0x1405DE2C8 (CmpTraceHiveSaveStop.c)
 *     CmpTraceHiveSaveTreeCopied @ 0x1405DE350 (CmpTraceHiveSaveTreeCopied.c)
 *     HvWriteExternal @ 0x1405E6F98 (HvWriteExternal.c)
 *     CmpCreateTemporaryHive @ 0x1405EA420 (CmpCreateTemporaryHive.c)
 *     CmpDestroyTemporaryHive @ 0x1405EA4D8 (CmpDestroyTemporaryHive.c)
 *     CmpSaveKeyByFileCopy @ 0x1405EAD8C (CmpSaveKeyByFileCopy.c)
 */

NTSTATUS __fastcall CmSaveKey(_QWORD *P, __int64 a2, int a3)
{
  __int64 v3; // rdi
  NTSTATUS result; // eax
  __int64 v8; // rcx
  ULONG_PTR v9; // rsi
  int v10; // ebx
  unsigned int v11; // r14d
  BOOLEAN v12; // bl
  int v13; // ebx
  char v14; // [rsp+28h] [rbp-70h]
  ULONG_PTR v15; // [rsp+30h] [rbp-68h]
  UUID v16; // [rsp+40h] [rbp-58h] BYREF
  UUID Uuid; // [rsp+50h] [rbp-48h] BYREF

  v3 = P[4];
  if ( v3 == CmpMasterHive )
    return -1073741790;
  result = CmpUuidCreate(&Uuid);
  if ( result >= 0 )
  {
    result = CmpUuidCreate(&v16);
    if ( result >= 0 )
    {
      v9 = CmpCreateTemporaryHive(v8, &Uuid, &v16);
      if ( !v9 )
        return -1073741670;
      CmpLockRegistry();
      CmpLockKcbShared((__int64)P);
      CmpTraceHiveSaveStart((__int64)P);
      if ( (*((_DWORD *)P + 1) & 0x20000) != 0 )
      {
        v10 = -1073741444;
      }
      else
      {
        ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v3 + 2848), 1u);
        v11 = *((_DWORD *)P + 10);
        if ( (*(_DWORD *)(v3 + 144) & 2) != 0 && *(_DWORD *)(v3 + 88) && *(_QWORD *)(v3 + 2664) )
        {
          v12 = ExAcquireRundownProtection((PEX_RUNDOWN_REF)(v3 + 2776));
          ExReleaseResourceLite(*(PERESOURCE *)(v3 + 2848));
          CmpUnlockKcb((char *)P);
          CmpUnlockRegistry();
          if ( v12 )
          {
            v10 = CmpSaveKeyByFileCopy(v3, a2);
            ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(v3 + 2776));
            if ( v10 >= 0 )
              CmpTraceHiveSaveFileCopied();
          }
          else
          {
            v10 = -1073741444;
          }
          goto LABEL_22;
        }
        LODWORD(v15) = 0;
        *(_DWORD *)(*(_QWORD *)(v9 + 64) + 24LL) = a3;
        *(_DWORD *)(v9 + 196) = a3;
        v13 = CmpCopyKeyPartial(v3, v11, v9, 0xFFFFFFFF, 6, v14, v15);
        if ( v13 != -1 )
        {
          CmpTraceHiveSaveTreeCopied();
          *(_DWORD *)(*(_QWORD *)(v9 + 64) + 36LL) = v13;
          if ( CmpCopySyncTree(v3, v11, v9, v13, 2, 0) )
          {
            ExReleaseResourceLite(*(PERESOURCE *)(v3 + 2848));
            CmpUnlockKcb((char *)P);
            CmpUnlockRegistry();
            *(_QWORD *)(v9 + 2680) = a2;
            v10 = HvWriteExternal(v9);
            if ( v10 >= 0 )
              CmpTraceHiveSaveFileWritten();
            goto LABEL_22;
          }
        }
        v10 = -1073741670;
        ExReleaseResourceLite(*(PERESOURCE *)(v3 + 2848));
      }
      CmpUnlockKcb((char *)P);
      CmpUnlockRegistry();
LABEL_22:
      *(_QWORD *)(v9 + 2680) = 0LL;
      CmpDestroyTemporaryHive(v9);
      CmpTraceHiveSaveStop(v10);
      return v10;
    }
  }
  return result;
}
