/*
 * XREFs of CmKeyBodyRemapToVirtualForEnum @ 0x1404C7070
 * Callers:
 *     NtEnumerateValueKey @ 0x1404273A0 (NtEnumerateValueKey.c)
 *     NtQueryValueKey @ 0x1404C0BB0 (NtQueryValueKey.c)
 *     NtQueryKey @ 0x1404C1230 (NtQueryKey.c)
 *     NtEnumerateKey @ 0x1404C6220 (NtEnumerateKey.c)
 *     NtQueryMultipleValueKey @ 0x140542CE4 (NtQueryMultipleValueKey.c)
 * Callees:
 *     memset @ 0x140195A80 (memset.c)
 *     CmpLockKcbShared @ 0x140427A50 (CmpLockKcbShared.c)
 *     RtlFreeAnsiString @ 0x140450CB8 (RtlFreeAnsiString.c)
 *     CmpIsSystemEntity @ 0x140481E04 (CmpIsSystemEntity.c)
 *     CmpUnlockKcb @ 0x1404C53F0 (CmpUnlockKcb.c)
 *     CmpUnlockRegistry @ 0x1404C6A10 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1404C7410 (CmpLockRegistry.c)
 *     CmVirtualKCBToRealPath @ 0x140657A00 (CmVirtualKCBToRealPath.c)
 *     CmpReparseToVirtualPath @ 0x140658F0C (CmpReparseToVirtualPath.c)
 *     CmObReferenceObjectByName @ 0x14065EAB8 (CmObReferenceObjectByName.c)
 */

__int64 __fastcall CmKeyBodyRemapToVirtualForEnum(__int64 a1, char a2, int a3, _QWORD *a4)
{
  unsigned int v8; // esi
  char v9; // r10
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // rcx
  char v18; // al
  char *v19; // rcx
  int v20; // edx
  int v21; // r9d
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  int v26; // ebx
  int v27; // edx
  int v28; // r9d
  int v29; // eax
  int v30; // ebx
  UNICODE_STRING UnicodeString; // [rsp+40h] [rbp-C0h] BYREF
  int v32; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v33; // [rsp+58h] [rbp-A8h]
  UNICODE_STRING *p_UnicodeString; // [rsp+60h] [rbp-A0h]
  int v35; // [rsp+68h] [rbp-98h]
  __int128 v36; // [rsp+70h] [rbp-90h]
  _QWORD v37[18]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v38; // [rsp+158h] [rbp+58h] BYREF

  v8 = 0;
  memset((char *)v37 + 4, 0, 0x84uLL);
  v9 = CmpVEEnabled;
  *a4 = 0LL;
  LODWORD(v37[0]) = 8;
  if ( !v9 )
    return v8;
  v10 = *(_QWORD *)(*(_QWORD *)a1 + 8LL);
  if ( (*(_WORD *)(v10 + 186) & 0x200) != 0 )
    goto LABEL_20;
  v11 = *(_QWORD *)(v10 + 32);
  if ( v11 == CmpMasterHive
    || (*(_DWORD *)(v10 + 4) & 0x20000) == 0
    && (*(_DWORD *)(v11 + 5360) & 0x10) == 0
    && (*(_WORD *)(v10 + 186) & 0x200) == 0 )
  {
    goto LABEL_20;
  }
  if ( CmpIsSystemEntity((int *)&v37[2]) )
  {
    v9 = CmpVEEnabled;
LABEL_20:
    if ( v9 && (*(_WORD *)(*(_QWORD *)(*(_QWORD *)a1 + 8LL) + 186LL) & 0x100) != 0 && !CmpIsSystemEntity((int *)&v37[2]) )
    {
      v38 = 0LL;
      CmpLockRegistry();
      CmpLockKcbShared(*(_QWORD *)(*(_QWORD *)a1 + 8LL), v23, v24, v25);
      v26 = CmVirtualKCBToRealPath(*(_QWORD *)(*(_QWORD *)a1 + 8LL), &UnicodeString);
      CmpUnlockKcb(*(char **)(*(_QWORD *)a1 + 8LL));
      CmpUnlockRegistry();
      if ( v26 < 0 )
        return 0LL;
      v37[10] = *(_QWORD *)(*(_QWORD *)a1 + 56LL);
      if ( !a3 )
        LODWORD(v37[0]) |= 0x800u;
      v29 = 576;
      v32 = 48;
      v33 = 0LL;
      if ( a2 == 1 )
        v29 = 1600;
      v35 = v29;
      p_UnicodeString = &UnicodeString;
      v36 = 0LL;
      v30 = CmObReferenceObjectByName((unsigned int)&v32, v27, a3, v28, 0, (__int64)v37, (__int64)&v38);
      RtlFreeAnsiString(&UnicodeString);
      if ( v30 >= 0 )
      {
        *a4 = *(_QWORD *)a1;
        *(_QWORD *)a1 = v38;
      }
    }
    return v8;
  }
  if ( *(char *)(*(_QWORD *)(*(_QWORD *)a1 + 8LL) + 186LL) >= 0 )
    return 0LL;
  CmpLockRegistry();
  CmpLockKcbShared(*(_QWORD *)(*(_QWORD *)a1 + 8LL), v12, v13, v14);
  v16 = *(_QWORD *)(*(_QWORD *)a1 + 8LL);
  if ( (*(_DWORD *)(v16 + 4) & 0x20000) != 0 )
  {
    CmpUnlockKcb((char *)v16);
    CmpUnlockRegistry();
    return 3221225852LL;
  }
  v18 = CmpReparseToVirtualPath(v16, v15, &UnicodeString);
  v19 = *(char **)(*(_QWORD *)a1 + 8LL);
  if ( !v18 )
  {
    CmpUnlockKcb(v19);
    CmpUnlockRegistry();
    return 0LL;
  }
  CmpUnlockKcb(v19);
  CmpUnlockRegistry();
  v37[10] = *(_QWORD *)(*(_QWORD *)a1 + 56LL);
  if ( !a3 )
    LODWORD(v37[0]) |= 0x800u;
  v22 = 576;
  v32 = 48;
  v33 = 0LL;
  v36 = 0LL;
  if ( a2 == 1 )
    v22 = 1600;
  v35 = v22;
  p_UnicodeString = &UnicodeString;
  v8 = CmObReferenceObjectByName((unsigned int)&v32, v20, a3, v21, 0, (__int64)v37, (__int64)a4);
  RtlFreeAnsiString(&UnicodeString);
  return v8;
}
