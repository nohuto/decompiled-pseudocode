/*
 * XREFs of LdrAddDllDirectory @ 0x180059AB0
 * Callers:
 *     LdrpInitializePerUserWindowsDirectory @ 0x180074FC8 (LdrpInitializePerUserWindowsDirectory.c)
 * Callees:
 *     RtlDosPathNameToRelativeNtPathName @ 0x180025B80 (RtlDosPathNameToRelativeNtPathName.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002A460 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x18002AB90 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002ED40 (RtlAllocateHeap.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033470 (RtlReleaseSRWLockExclusive.c)
 *     RtlDetermineDosPathNameType_U @ 0x180057B40 (RtlDetermineDosPathNameType_U.c)
 *     RtlpInvalidatePathCache @ 0x180059D70 (RtlpInvalidatePathCache.c)
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     _local_unwind @ 0x180084C50 (_local_unwind.c)
 *     ZwQueryAttributesFile @ 0x180093CD0 (ZwQueryAttributesFile.c)
 *     memmove @ 0x180098200 (memmove.c)
 */

__int64 __fastcall LdrAddDllDirectory(unsigned __int16 *a1, __int64 *a2)
{
  unsigned int v4; // eax
  int v5; // ecx
  int v6; // ebx
  __int64 Heap; // rax
  __int64 v8; // rbx
  char *v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned int v12; // ecx
  _UNKNOWN ***v13; // rax
  char *v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned __int64 v17; // rdi
  _DWORD v19[18]; // [rsp+0h] [rbp-C8h] BYREF
  unsigned __int16 v20; // [rsp+48h] [rbp-80h] BYREF
  unsigned __int64 v21; // [rsp+50h] [rbp-78h]
  int v22; // [rsp+58h] [rbp-70h] BYREF
  __int64 v23; // [rsp+60h] [rbp-68h]
  unsigned __int16 *v24; // [rsp+68h] [rbp-60h]
  int v25; // [rsp+70h] [rbp-58h]
  __int128 v26; // [rsp+78h] [rbp-50h]
  _DWORD *v27; // [rsp+88h] [rbp-40h]
  char v28[40]; // [rsp+90h] [rbp-38h] BYREF

  v27 = v19;
  if ( LdrpAppPackagesPath.Buffer )
    return 3221225485LL;
  v4 = RtlDetermineDosPathNameType_U(*((_WORD **)a1 + 1));
  if ( v4 <= 5 )
  {
    v5 = 41;
    if ( _bittest(&v5, v4) )
      return 3221225485LL;
  }
  v6 = RtlDosPathNameToRelativeNtPathName(0, 0, (__int128 *)a1, 0LL, &v20, 0LL, 0LL, 0LL);
  if ( v6 >= 0 )
  {
    v22 = 48;
    v23 = 0LL;
    v25 = 64;
    v24 = &v20;
    v26 = 0LL;
    v6 = ZwQueryAttributesFile(&v22, v28);
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v21);
  }
  if ( v6 < 0 )
    return (unsigned int)v6;
  Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned int)*a1 + 18);
  v8 = Heap;
  if ( !Heap )
    return 3221225495LL;
  memmove((void *)(Heap + 18), *((const void **)a1 + 1), *a1);
  *(_WORD *)(v8 + 16) = *a1;
  RtlAcquireSRWLockExclusive(&LdrpDllDirectoryLock, v9, v10, v11);
  v12 = *a1 + (unsigned __int16)word_180143068 + 2;
  v19[16] = v12;
  if ( v12 > 0xFFFE )
  {
    local_unwind(v27, &loc_1800AF33E);
LABEL_12:
    __fastfail(3u);
  }
  word_180143068 = v12;
  v13 = (_UNKNOWN ***)LdrpUserDllDirectories;
  *(_QWORD *)v8 = LdrpUserDllDirectories;
  *(_QWORD *)(v8 + 8) = &LdrpUserDllDirectories;
  if ( v13[1] != &LdrpUserDllDirectories )
    goto LABEL_12;
  v13[1] = (_UNKNOWN **)v8;
  LdrpUserDllDirectories = (_UNKNOWN *)v8;
  RtlReleaseSRWLockExclusive(&LdrpDllDirectoryLock);
  RtlAcquireSRWLockExclusive(&RtlpCachedPathLock, v14, v15, v16);
  v17 = RtlpInvalidatePathCache(&RtlpDllSearchPathWithOptions);
  RtlReleaseSRWLockExclusive(&RtlpCachedPathLock);
  if ( v17 )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v17);
  *a2 = v8;
  return 0LL;
}
