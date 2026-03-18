/*
 * XREFs of CmSaveMergedKeys @ 0x1405EA0F8
 * Callers:
 *     NtSaveMergedKeys @ 0x1405DCE34 (NtSaveMergedKeys.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14003F890 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14003FBB0 (ExReleaseResourceLite.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     CmpBlockTwoHiveWrites @ 0x1403DE0D8 (CmpBlockTwoHiveWrites.c)
 *     CmpLockTwoKcbsShared @ 0x1403FD8E0 (CmpLockTwoKcbsShared.c)
 *     CmpUnlockTwoKcbs @ 0x1403FDDA0 (CmpUnlockTwoKcbs.c)
 *     CmpUnlockRegistry @ 0x140423B00 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x140423C10 (CmpLockRegistry.c)
 *     CmpUuidCreate @ 0x14048548C (CmpUuidCreate.c)
 *     CmpCopyKeyPartial @ 0x1404B3BE4 (CmpCopyKeyPartial.c)
 *     CmpCopySyncTree @ 0x14050EEBC (CmpCopySyncTree.c)
 *     HvWriteExternal @ 0x1405E6F98 (HvWriteExternal.c)
 *     CmpMergeKeyValues @ 0x1405E8A90 (CmpMergeKeyValues.c)
 *     CmpCreateTemporaryHive @ 0x1405EA420 (CmpCreateTemporaryHive.c)
 *     CmpDestroyTemporaryHive @ 0x1405EA4D8 (CmpDestroyTemporaryHive.c)
 */

NTSTATUS __fastcall CmSaveMergedKeys(unsigned __int64 a1, unsigned __int64 a2, __int64 a3)
{
  char v5; // r12
  NTSTATUS result; // eax
  __int64 v7; // r15
  unsigned __int64 v8; // rbx
  unsigned int v9; // r13d
  int v10; // eax
  ULONG_PTR v11; // rdi
  int v12; // eax
  unsigned int v13; // r13d
  int v14; // edx
  __int64 v15; // rax
  unsigned int v16; // edx
  __int64 v17; // r13
  int v18; // eax
  int v19; // ebx
  char v20; // [rsp+28h] [rbp-41h]
  ULONG_PTR v21; // [rsp+30h] [rbp-39h]
  int v22; // [rsp+40h] [rbp-29h] BYREF
  int v23; // [rsp+44h] [rbp-25h] BYREF
  unsigned int v24; // [rsp+48h] [rbp-21h]
  unsigned int v25; // [rsp+4Ch] [rbp-1Dh]
  _DWORD *v26; // [rsp+50h] [rbp-19h]
  __int64 v27; // [rsp+58h] [rbp-11h]
  UUID v28; // [rsp+60h] [rbp-9h] BYREF
  UUID Uuid; // [rsp+70h] [rbp+7h] BYREF

  v27 = a3;
  v23 = -1;
  v22 = -1;
  v5 = 0;
  result = CmpUuidCreate(&Uuid);
  if ( result >= 0 )
  {
    result = CmpUuidCreate(&v28);
    if ( result >= 0 )
    {
      v7 = *(_QWORD *)(a1 + 32);
      v8 = *(_QWORD *)(a2 + 32);
      if ( v8 == v7 )
        return -1073741811;
      CmpLockRegistry();
      CmpLockTwoKcbsShared(a1, a2);
      if ( (*(_DWORD *)(a1 + 4) & 0x20000) != 0 || (*(_DWORD *)(a2 + 4) & 0x20000) != 0 )
      {
        CmpUnlockTwoKcbs((char *)a1, (char *)a2);
        CmpUnlockRegistry();
        return -1073741444;
      }
      else
      {
        v9 = *(_DWORD *)(a1 + 40);
        v24 = *(_DWORD *)(a2 + 40);
        v10 = *(_DWORD *)(v7 + 144);
        LODWORD(v26) = v9;
        if ( (v10 & 2) != 0 && *(_DWORD *)(v7 + 88) || (*(_DWORD *)(v8 + 144) & 2) != 0 && *(_DWORD *)(v8 + 88) )
        {
          CmpUnlockTwoKcbs((char *)a1, (char *)a2);
          CmpUnlockRegistry();
          return -1073741811;
        }
        v11 = CmpCreateTemporaryHive(0x20000LL, &Uuid, &v28);
        if ( v11 )
        {
          CmpBlockTwoHiveWrites(v8, v7, 0);
          ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v11 + 2848), 1u);
          LODWORD(v21) = 0;
          v5 = 7;
          v12 = CmpCopyKeyPartial(v7, v9, v11, 0xFFFFFFFF, 6, v20, v21);
          v25 = v12;
          v13 = v12;
          if ( v12 != -1 )
          {
            v14 = (int)v26;
            *(_DWORD *)(*(_QWORD *)(v11 + 64) + 36LL) = v12;
            if ( CmpCopySyncTree(v7, v14, v11, v12, 2, 0) )
            {
              ExReleaseResourceLite(*(PERESOURCE *)(v7 + 2848));
              v5 = 5;
              v26 = (_DWORD *)(*(__int64 (__fastcall **)(unsigned __int64, _QWORD, int *))(v8 + 8))(v8, v24, &v22);
              if ( v26 )
              {
                v15 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(v11 + 8))(v11, v13, &v23);
                v17 = v15;
                if ( v15 )
                {
                  if ( CmpMergeKeyValues(v8, v16, v26, v11, v25, v15) )
                  {
                    (*(void (__fastcall **)(unsigned __int64, int *))(v8 + 16))(v8, &v22);
                    v26 = 0LL;
                    (*(void (__fastcall **)(ULONG_PTR, int *))(v11 + 16))(v11, &v23);
                    v17 = 0LL;
                    if ( CmpCopySyncTree(v8, v24, v11, v25, 2, 2) )
                    {
                      ExReleaseResourceLite(*(PERESOURCE *)(v8 + 2848));
                      ExReleaseResourceLite(*(PERESOURCE *)(v11 + 2848));
                      CmpUnlockTwoKcbs((char *)a1, (char *)a2);
                      CmpUnlockRegistry();
                      *(_QWORD *)(v11 + 2680) = v27;
                      v18 = HvWriteExternal(v11);
                      *(_QWORD *)(v11 + 2680) = 0LL;
                      v19 = v18;
                      CmpDestroyTemporaryHive(v11);
                      return v19;
                    }
                  }
                }
                if ( v26 )
                  (*(void (__fastcall **)(unsigned __int64, int *))(v8 + 16))(v8, &v22);
                if ( v17 )
                  (*(void (__fastcall **)(ULONG_PTR, int *))(v11 + 16))(v11, &v23);
              }
            }
          }
        }
        if ( (v5 & 4) != 0 )
          ExReleaseResourceLite(*(PERESOURCE *)(v8 + 2848));
        if ( (v5 & 2) != 0 )
          ExReleaseResourceLite(*(PERESOURCE *)(v7 + 2848));
        if ( (v5 & 1) != 0 )
          ExReleaseResourceLite(*(PERESOURCE *)(v11 + 2848));
        CmpUnlockTwoKcbs((char *)a1, (char *)a2);
        CmpUnlockRegistry();
        if ( v11 )
          CmpDestroyTemporaryHive(v11);
        return -1073741670;
      }
    }
  }
  return result;
}
