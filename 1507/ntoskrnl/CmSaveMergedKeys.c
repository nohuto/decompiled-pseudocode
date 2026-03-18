/*
 * XREFs of CmSaveMergedKeys @ 0x140661980
 * Callers:
 *     NtSaveMergedKeys @ 0x1406521DC (NtSaveMergedKeys.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x1400C8A30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     CmpBlockTwoHiveWrites @ 0x140407890 (CmpBlockTwoHiveWrites.c)
 *     CmpUnlockRegistry @ 0x1404C6A10 (CmpUnlockRegistry.c)
 *     CmpUnlockTwoKcbs @ 0x1404C6A80 (CmpUnlockTwoKcbs.c)
 *     CmpLockTwoKcbsShared @ 0x1404C6EF0 (CmpLockTwoKcbsShared.c)
 *     CmpLockRegistry @ 0x1404C7410 (CmpLockRegistry.c)
 *     CmpUuidCreate @ 0x1404EB848 (CmpUuidCreate.c)
 *     CmpCopyKeyPartial @ 0x1404F2C38 (CmpCopyKeyPartial.c)
 *     CmpCopySyncTree @ 0x140585040 (CmpCopySyncTree.c)
 *     HvWriteExternal @ 0x14065E3F4 (HvWriteExternal.c)
 *     CmpMergeKeyValues @ 0x14065FFA8 (CmpMergeKeyValues.c)
 *     CmpCreateTemporaryHive @ 0x140661CA8 (CmpCreateTemporaryHive.c)
 *     CmpDestroyTemporaryHive @ 0x140661D60 (CmpDestroyTemporaryHive.c)
 */

NTSTATUS __fastcall CmSaveMergedKeys(unsigned __int64 a1, unsigned __int64 a2, __int64 a3)
{
  char v5; // r12
  NTSTATUS result; // eax
  __int64 v7; // r15
  unsigned __int64 v8; // rbx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned int v11; // r13d
  int v12; // eax
  ULONG_PTR v13; // rdi
  int v14; // eax
  unsigned int v15; // r13d
  int v16; // edx
  __int64 v17; // rax
  unsigned int v18; // edx
  __int64 v19; // r13
  int v20; // eax
  int v21; // ebx
  char v22; // [rsp+28h] [rbp-41h]
  ULONG_PTR v23; // [rsp+30h] [rbp-39h]
  int v24; // [rsp+40h] [rbp-29h] BYREF
  int v25; // [rsp+44h] [rbp-25h] BYREF
  unsigned int v26; // [rsp+48h] [rbp-21h]
  unsigned int v27; // [rsp+4Ch] [rbp-1Dh]
  _DWORD *v28; // [rsp+50h] [rbp-19h]
  __int64 v29; // [rsp+58h] [rbp-11h]
  UUID v30; // [rsp+60h] [rbp-9h] BYREF
  UUID Uuid; // [rsp+70h] [rbp+7h] BYREF

  v29 = a3;
  v25 = -1;
  v24 = -1;
  v5 = 0;
  result = CmpUuidCreate(&Uuid);
  if ( result >= 0 )
  {
    result = CmpUuidCreate(&v30);
    if ( result >= 0 )
    {
      v7 = *(_QWORD *)(a1 + 32);
      v8 = *(_QWORD *)(a2 + 32);
      if ( v8 == v7 )
        return -1073741811;
      CmpLockRegistry();
      CmpLockTwoKcbsShared(a1, a2, v9, v10);
      if ( (*(_DWORD *)(a1 + 4) & 0x20000) != 0 || (*(_DWORD *)(a2 + 4) & 0x20000) != 0 )
      {
        CmpUnlockTwoKcbs(a1, a2);
        CmpUnlockRegistry();
        return -1073741444;
      }
      else
      {
        v11 = *(_DWORD *)(a1 + 40);
        v26 = *(_DWORD *)(a2 + 40);
        v12 = *(_DWORD *)(v7 + 144);
        LODWORD(v28) = v11;
        if ( (v12 & 2) != 0 && *(_DWORD *)(v7 + 88) || (*(_DWORD *)(v8 + 144) & 2) != 0 && *(_DWORD *)(v8 + 88) )
        {
          CmpUnlockTwoKcbs(a1, a2);
          CmpUnlockRegistry();
          return -1073741811;
        }
        v13 = CmpCreateTemporaryHive(0x20000LL, &Uuid, &v30);
        if ( v13 )
        {
          CmpBlockTwoHiveWrites(v8, v7, 0);
          ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v13 + 2848), 1u);
          LODWORD(v23) = 0;
          v5 = 7;
          v14 = CmpCopyKeyPartial(v7, v11, v13, 0xFFFFFFFF, 6, v22, v23);
          v27 = v14;
          v15 = v14;
          if ( v14 != -1 )
          {
            v16 = (int)v28;
            *(_DWORD *)(*(_QWORD *)(v13 + 64) + 36LL) = v14;
            if ( CmpCopySyncTree(v7, v16, v13, v14, 2, 0) )
            {
              ExReleaseResourceLite(*(PERESOURCE *)(v7 + 2848));
              v5 = 5;
              v28 = (_DWORD *)(*(__int64 (__fastcall **)(unsigned __int64, _QWORD, int *))(v8 + 8))(v8, v26, &v24);
              if ( v28 )
              {
                v17 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(v13 + 8))(v13, v15, &v25);
                v19 = v17;
                if ( v17 )
                {
                  if ( CmpMergeKeyValues(v8, v18, v28, v13, v27, v17) )
                  {
                    (*(void (__fastcall **)(unsigned __int64, int *))(v8 + 16))(v8, &v24);
                    v28 = 0LL;
                    (*(void (__fastcall **)(ULONG_PTR, int *))(v13 + 16))(v13, &v25);
                    v19 = 0LL;
                    if ( CmpCopySyncTree(v8, v26, v13, v27, 2, 2) )
                    {
                      ExReleaseResourceLite(*(PERESOURCE *)(v8 + 2848));
                      ExReleaseResourceLite(*(PERESOURCE *)(v13 + 2848));
                      CmpUnlockTwoKcbs(a1, a2);
                      CmpUnlockRegistry();
                      *(_QWORD *)(v13 + 2680) = v29;
                      v20 = HvWriteExternal(v13);
                      *(_QWORD *)(v13 + 2680) = 0LL;
                      v21 = v20;
                      CmpDestroyTemporaryHive(v13);
                      return v21;
                    }
                  }
                }
                if ( v28 )
                  (*(void (__fastcall **)(unsigned __int64, int *))(v8 + 16))(v8, &v24);
                if ( v19 )
                  (*(void (__fastcall **)(ULONG_PTR, int *))(v13 + 16))(v13, &v25);
              }
            }
          }
        }
        if ( (v5 & 4) != 0 )
          ExReleaseResourceLite(*(PERESOURCE *)(v8 + 2848));
        if ( (v5 & 2) != 0 )
          ExReleaseResourceLite(*(PERESOURCE *)(v7 + 2848));
        if ( (v5 & 1) != 0 )
          ExReleaseResourceLite(*(PERESOURCE *)(v13 + 2848));
        CmpUnlockTwoKcbs(a1, a2);
        CmpUnlockRegistry();
        if ( v13 )
          CmpDestroyTemporaryHive(v13);
        return -1073741670;
      }
    }
  }
  return result;
}
