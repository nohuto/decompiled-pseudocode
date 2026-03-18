/*
 * XREFs of CmKeyBodyRemapToVirtualForEnum @ 0x1403FD380
 * Callers:
 *     NtEnumerateKey @ 0x1403FD480 (NtEnumerateKey.c)
 *     NtEnumerateValueKey @ 0x140423C60 (NtEnumerateValueKey.c)
 *     NtQueryMultipleValueKey @ 0x1404A8360 (NtQueryMultipleValueKey.c)
 * Callees:
 *     memset @ 0x140166CC0 (memset.c)
 *     CmpIsSystemEntity @ 0x1403FBD30 (CmpIsSystemEntity.c)
 *     CmpUnlockKcb @ 0x1403FE4F0 (CmpUnlockKcb.c)
 *     CmpUnlockRegistry @ 0x140423B00 (CmpUnlockRegistry.c)
 *     CmpLockKcbShared @ 0x140423B90 (CmpLockKcbShared.c)
 *     CmpLockRegistry @ 0x140423C10 (CmpLockRegistry.c)
 *     RtlFreeAnsiString @ 0x140445624 (RtlFreeAnsiString.c)
 *     ObReferenceObjectByName @ 0x14046F95C (ObReferenceObjectByName.c)
 *     CmVirtualKCBToRealPath @ 0x1405E1C6C (CmVirtualKCBToRealPath.c)
 *     CmpReparseToVirtualPath @ 0x1405E2990 (CmpReparseToVirtualPath.c)
 */

__int64 __fastcall CmKeyBodyRemapToVirtualForEnum(__int64 a1, _QWORD *a2)
{
  unsigned int v4; // edi
  char v5; // r8
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v12; // rcx
  __int64 v13; // rdx
  _DWORD *v14; // rcx
  char v15; // al
  void *v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  int v21; // ebx
  int v22; // ebx
  UNICODE_STRING UnicodeString; // [rsp+40h] [rbp-A8h] BYREF
  int v24; // [rsp+50h] [rbp-98h]
  int v25[35]; // [rsp+54h] [rbp-94h] BYREF

  v4 = 0;
  memset(v25, 0, 0x84uLL);
  v5 = CmpVEEnabled;
  *a2 = 0LL;
  v24 = 8;
  if ( !v5 )
    return v4;
  v6 = *(_QWORD *)(*(_QWORD *)a1 + 8LL);
  if ( (*(_WORD *)(v6 + 186) & 0x200) != 0
    || (v7 = *(_QWORD *)(v6 + 32), v7 == CmpMasterHive)
    || (*(_DWORD *)(v6 + 4) & 0x20000) == 0
    && (*(_WORD *)(v6 + 186) & 0x200) == 0
    && (*(_BYTE *)(v7 + 5360) & 0x10) == 0 )
  {
LABEL_8:
    if ( !v5 || (*(_WORD *)(*(_QWORD *)(*(_QWORD *)a1 + 8LL) + 186LL) & 0x100) == 0 || CmpIsSystemEntity(&v25[3]) )
      return v4;
    CmpLockRegistry(v18, v17, v19, v20);
    CmpLockKcbShared(*(_QWORD *)(*(_QWORD *)a1 + 8LL));
    v21 = CmVirtualKCBToRealPath(*(_QWORD *)(*(_QWORD *)a1 + 8LL), &UnicodeString);
    CmpUnlockKcb(*(PVOID *)(*(_QWORD *)a1 + 8LL));
    CmpUnlockRegistry();
    if ( v21 >= 0 )
    {
      *(_QWORD *)&v25[19] = *(_QWORD *)(*(_QWORD *)a1 + 56LL);
      v22 = ObReferenceObjectByName(&UnicodeString, 576LL, 0LL);
      RtlFreeAnsiString(&UnicodeString);
      if ( v22 >= 0 )
      {
        *a2 = *(_QWORD *)a1;
        *(_QWORD *)a1 = 0LL;
      }
      return v4;
    }
    return 0LL;
  }
  if ( CmpIsSystemEntity(&v25[3]) )
  {
    v5 = CmpVEEnabled;
    goto LABEL_8;
  }
  v12 = *(_QWORD *)(*(_QWORD *)a1 + 8LL);
  if ( *(char *)(v12 + 186) >= 0 )
    return 0LL;
  CmpLockRegistry(v12, v8, v9, v10);
  CmpLockKcbShared(*(_QWORD *)(*(_QWORD *)a1 + 8LL));
  v14 = *(_DWORD **)(*(_QWORD *)a1 + 8LL);
  if ( (v14[1] & 0x20000) == 0 )
  {
    v15 = CmpReparseToVirtualPath(v14, v13, &UnicodeString);
    v16 = *(void **)(*(_QWORD *)a1 + 8LL);
    if ( v15 )
    {
      CmpUnlockKcb(v16);
      CmpUnlockRegistry();
      *(_QWORD *)&v25[19] = *(_QWORD *)(*(_QWORD *)a1 + 56LL);
      v4 = ObReferenceObjectByName(&UnicodeString, 576LL, 0LL);
      RtlFreeAnsiString(&UnicodeString);
      return v4;
    }
    CmpUnlockKcb(v16);
    CmpUnlockRegistry();
    return 0LL;
  }
  CmpUnlockKcb(v14);
  CmpUnlockRegistry();
  return 3221225852LL;
}
