/*
 * XREFs of CmSaveKey @ 0x140661710
 * Callers:
 *     NtSaveKey @ 0x1406519CC (NtSaveKey.c)
 *     NtSaveKeyEx @ 0x140651DA0 (NtSaveKeyEx.c)
 * Callees:
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400C8A30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     ExfAcquireRundownProtection @ 0x1400D4A40 (ExfAcquireRundownProtection.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     CmpLockKcbShared @ 0x140427A50 (CmpLockKcbShared.c)
 *     CmpUnlockKcb @ 0x1404C53F0 (CmpUnlockKcb.c)
 *     CmpUnlockRegistry @ 0x1404C6A10 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1404C7410 (CmpLockRegistry.c)
 *     CmpUuidCreate @ 0x1404EB848 (CmpUuidCreate.c)
 *     CmpCopyKeyPartial @ 0x1404F2C38 (CmpCopyKeyPartial.c)
 *     CmpCopySyncTree @ 0x140585040 (CmpCopySyncTree.c)
 *     CmpTraceHiveSaveFileCopied @ 0x140653660 (CmpTraceHiveSaveFileCopied.c)
 *     CmpTraceHiveSaveFileWritten @ 0x1406536C8 (CmpTraceHiveSaveFileWritten.c)
 *     CmpTraceHiveSaveStart @ 0x140653730 (CmpTraceHiveSaveStart.c)
 *     CmpTraceHiveSaveStop @ 0x1406537F4 (CmpTraceHiveSaveStop.c)
 *     CmpTraceHiveSaveTreeCopied @ 0x14065387C (CmpTraceHiveSaveTreeCopied.c)
 *     HvWriteExternal @ 0x14065E3F4 (HvWriteExternal.c)
 *     CmpCreateTemporaryHive @ 0x140661CA8 (CmpCreateTemporaryHive.c)
 *     CmpDestroyTemporaryHive @ 0x140661D60 (CmpDestroyTemporaryHive.c)
 *     CmpSaveKeyByFileCopy @ 0x140662794 (CmpSaveKeyByFileCopy.c)
 */

NTSTATUS __fastcall CmSaveKey(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rsi
  NTSTATUS result; // eax
  __int64 v8; // rcx
  ULONG_PTR v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // ebx
  BOOLEAN v14; // bl
  unsigned int v15; // r14d
  _QWORD *v16; // r14
  unsigned __int64 v17; // rtt
  unsigned __int64 v18; // rtt
  int v19; // ebx
  char v20; // [rsp+28h] [rbp-70h]
  ULONG_PTR v21; // [rsp+30h] [rbp-68h]
  UUID v22; // [rsp+48h] [rbp-50h] BYREF
  UUID Uuid; // [rsp+58h] [rbp-40h] BYREF

  v3 = *(_QWORD *)(a1 + 32);
  if ( v3 == CmpMasterHive )
    return -1073741790;
  result = CmpUuidCreate(&Uuid);
  if ( result >= 0 )
  {
    result = CmpUuidCreate(&v22);
    if ( result >= 0 )
    {
      v9 = CmpCreateTemporaryHive(v8, &Uuid, &v22);
      if ( !v9 )
        return -1073741670;
      CmpLockRegistry();
      CmpLockKcbShared(a1, v10, v11, v12);
      CmpTraceHiveSaveStart(a1);
      if ( (*(_DWORD *)(a1 + 4) & 0x20000) != 0 )
      {
        v13 = -1073741444;
      }
      else
      {
        v14 = 1;
        ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v3 + 2848), 1u);
        v15 = *(_DWORD *)(a1 + 40);
        if ( (*(_DWORD *)(v3 + 144) & 2) != 0 && *(_DWORD *)(v3 + 88) && *(_QWORD *)(v3 + 2664) )
        {
          v16 = (_QWORD *)(v3 + 2776);
          _m_prefetchw((const void *)(v3 + 2776));
          v17 = *(_QWORD *)(v3 + 2776) & 0xFFFFFFFFFFFFFFFEuLL;
          if ( v17 != _InterlockedCompareExchange64((volatile signed __int64 *)(v3 + 2776), v17 + 2, v17) )
            v14 = ExfAcquireRundownProtection((PEX_RUNDOWN_REF)(v3 + 2776));
          ExReleaseResourceLite(*(PERESOURCE *)(v3 + 2848));
          CmpUnlockKcb((char *)a1);
          CmpUnlockRegistry();
          if ( v14 )
          {
            v13 = CmpSaveKeyByFileCopy(v3, a2);
            _m_prefetchw(v16);
            v18 = *v16 & 0xFFFFFFFFFFFFFFFEuLL;
            if ( v18 != _InterlockedCompareExchange64(v16, v18 - 2, v18) )
              ExfReleaseRundownProtection((PEX_RUNDOWN_REF)(v3 + 2776));
            if ( v13 >= 0 )
              CmpTraceHiveSaveFileCopied();
          }
          else
          {
            v13 = -1073741444;
          }
          goto LABEL_26;
        }
        LODWORD(v21) = 0;
        *(_DWORD *)(*(_QWORD *)(v9 + 64) + 24LL) = a3;
        *(_DWORD *)(v9 + 196) = a3;
        v19 = CmpCopyKeyPartial(v3, v15, v9, 0xFFFFFFFF, 6, v20, v21);
        if ( v19 != -1 )
        {
          CmpTraceHiveSaveTreeCopied();
          *(_DWORD *)(*(_QWORD *)(v9 + 64) + 36LL) = v19;
          if ( CmpCopySyncTree(v3, v15, v9, v19, 2, 0) )
          {
            ExReleaseResourceLite(*(PERESOURCE *)(v3 + 2848));
            CmpUnlockKcb((char *)a1);
            CmpUnlockRegistry();
            *(_QWORD *)(v9 + 2680) = a2;
            v13 = HvWriteExternal(v9);
            if ( v13 >= 0 )
              CmpTraceHiveSaveFileWritten();
            goto LABEL_26;
          }
        }
        v13 = -1073741670;
        ExReleaseResourceLite(*(PERESOURCE *)(v3 + 2848));
      }
      CmpUnlockKcb((char *)a1);
      CmpUnlockRegistry();
LABEL_26:
      *(_QWORD *)(v9 + 2680) = 0LL;
      CmpDestroyTemporaryHive(v9);
      CmpTraceHiveSaveStop(v13);
      return v13;
    }
  }
  return result;
}
