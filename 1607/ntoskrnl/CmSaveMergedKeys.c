/*
 * XREFs of CmSaveMergedKeys @ 0x14060CF28
 * Callers:
 *     NtSaveMergedKeys @ 0x1405FAD88 (NtSaveMergedKeys.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140067CE0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400684C0 (ExReleaseResourceLite.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     CmpBlockTwoHiveWrites @ 0x1403E16A4 (CmpBlockTwoHiveWrites.c)
 *     CmpUnlockRegistry @ 0x14040362C (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x140403660 (CmpLockRegistry.c)
 *     CmpLockTwoKcbsShared @ 0x140437AF0 (CmpLockTwoKcbsShared.c)
 *     CmpUnlockTwoKcbs @ 0x140437EA0 (CmpUnlockTwoKcbs.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x1404382D0 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpCopyKeyPartial @ 0x1404CDE74 (CmpCopyKeyPartial.c)
 *     CmpUuidCreate @ 0x1405179A4 (CmpUuidCreate.c)
 *     HvWriteExternal @ 0x1406065A8 (HvWriteExternal.c)
 *     CmpCopySyncTree @ 0x140608258 (CmpCopySyncTree.c)
 *     CmpMergeKeyValues @ 0x14060903C (CmpMergeKeyValues.c)
 *     CmpLogUnsupportedOperation @ 0x14060BDC0 (CmpLogUnsupportedOperation.c)
 *     CmpCreateTemporaryHive @ 0x14060D2A0 (CmpCreateTemporaryHive.c)
 *     CmpDestroyTemporaryHive @ 0x14060D354 (CmpDestroyTemporaryHive.c)
 */

NTSTATUS __fastcall CmSaveMergedKeys(__int64 a1, __int64 a2, __int64 a3)
{
  char v5; // r12
  NTSTATUS result; // eax
  __int64 v7; // r14
  unsigned __int64 v8; // rsi
  __int64 v9; // r15
  __int64 v10; // rbx
  __int64 v11; // rcx
  unsigned int v12; // r13d
  int v13; // ebx
  ULONG_PTR v14; // rdi
  int v15; // eax
  unsigned int v16; // r13d
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r13
  int v20; // eax
  __int64 v21; // [rsp+28h] [rbp-41h]
  unsigned int v22; // [rsp+40h] [rbp-29h]
  unsigned int v23; // [rsp+44h] [rbp-25h]
  int v24; // [rsp+48h] [rbp-21h]
  _DWORD *v25; // [rsp+48h] [rbp-21h]
  _DWORD v26[2]; // [rsp+50h] [rbp-19h] BYREF
  _DWORD v27[2]; // [rsp+58h] [rbp-11h] BYREF
  __int64 v28; // [rsp+60h] [rbp-9h]
  UUID v29; // [rsp+68h] [rbp-1h] BYREF
  UUID Uuid; // [rsp+78h] [rbp+Fh] BYREF

  v28 = a3;
  v27[0] = -1;
  v26[0] = -1;
  v5 = 0;
  v27[1] = 0;
  v26[1] = 0;
  result = CmpUuidCreate(&Uuid);
  if ( result >= 0 )
  {
    result = CmpUuidCreate(&v29);
    if ( result >= 0 )
    {
      v7 = *(_QWORD *)(a1 + 8);
      v8 = *(_QWORD *)(a2 + 8);
      v9 = *(_QWORD *)(v7 + 24);
      v10 = *(_QWORD *)(v8 + 24);
      if ( v10 == v9 )
        return -1073741811;
      CmpLockRegistry();
      CmpLockTwoKcbsShared(v7, v8);
      if ( *(_WORD *)(v7 + 58) || *(_WORD *)(v8 + 58) )
      {
        CmpLogUnsupportedOperation(0x13u);
        CmpUnlockTwoKcbs((char *)v7, v8);
        CmpUnlockRegistry();
        return -1073741822;
      }
      else
      {
        if ( CmpIsKeyDeletedForKeyBody(a1, 0LL) || CmpIsKeyDeletedForKeyBody(a2, 0LL) )
        {
          v13 = -1073741444;
          goto LABEL_36;
        }
        v12 = *(_DWORD *)(v7 + 32);
        v23 = *(_DWORD *)(v8 + 32);
        v24 = v12;
        if ( (*(_DWORD *)(v9 + 144) & 2) != 0 && *(_DWORD *)(v9 + 88)
          || (*(_DWORD *)(v10 + 144) & 2) != 0 && *(_DWORD *)(v10 + 88) )
        {
          v13 = -1073741811;
LABEL_36:
          CmpUnlockTwoKcbs((char *)v7, v8);
          CmpUnlockRegistry();
          return v13;
        }
        v14 = CmpCreateTemporaryHive(v11, &Uuid, &v29);
        if ( v14 )
        {
          CmpBlockTwoHiveWrites(v10, v9, 0);
          ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v14 + 2848), 1u);
          v5 = 7;
          v15 = CmpCopyKeyPartial(v9, v12, v14, 0xFFFFFFFF, 6, v21, 0);
          v22 = v15;
          v16 = v15;
          if ( v15 != -1 )
          {
            *(_DWORD *)(*(_QWORD *)(v14 + 64) + 36LL) = v15;
            if ( CmpCopySyncTree(v9, v24, v14, v15, 2, 0) )
            {
              ExReleaseResourceLite(*(PERESOURCE *)(v9 + 2848));
              v5 = 5;
              v25 = (_DWORD *)(*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *))(v10 + 8))(v10, v23, v26);
              if ( v25 )
              {
                v17 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v14 + 8))(v14, v16, v27);
                v19 = v17;
                if ( v17 )
                {
                  if ( CmpMergeKeyValues(v10, v18, v25, v14, v22, v17) )
                  {
                    (*(void (__fastcall **)(__int64, _DWORD *))(v10 + 16))(v10, v26);
                    v25 = 0LL;
                    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v14 + 16))(v14, v27);
                    v19 = 0LL;
                    if ( CmpCopySyncTree(v10, v23, v14, v22, 2, 2) )
                    {
                      ExReleaseResourceLite(*(PERESOURCE *)(v10 + 2848));
                      ExReleaseResourceLite(*(PERESOURCE *)(v14 + 2848));
                      CmpUnlockTwoKcbs((char *)v7, v8);
                      CmpUnlockRegistry();
                      *(_QWORD *)(v14 + 2680) = v28;
                      v20 = HvWriteExternal(v14);
                      *(_QWORD *)(v14 + 2680) = 0LL;
                      v13 = v20;
                      CmpDestroyTemporaryHive(v14);
                      return v13;
                    }
                  }
                }
                if ( v25 )
                  (*(void (__fastcall **)(__int64, _DWORD *))(v10 + 16))(v10, v26);
                if ( v19 )
                  (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v14 + 16))(v14, v27);
              }
            }
          }
        }
        if ( (v5 & 4) != 0 )
          ExReleaseResourceLite(*(PERESOURCE *)(v10 + 2848));
        if ( (v5 & 2) != 0 )
          ExReleaseResourceLite(*(PERESOURCE *)(v9 + 2848));
        if ( (v5 & 1) != 0 )
          ExReleaseResourceLite(*(PERESOURCE *)(v14 + 2848));
        CmpUnlockTwoKcbs((char *)v7, v8);
        CmpUnlockRegistry();
        if ( v14 )
          CmpDestroyTemporaryHive(v14);
        return -1073741670;
      }
    }
  }
  return result;
}
