/*
 * XREFs of LdrAddDllDirectory @ 0x180090690
 * Callers:
 *     LdrpInitializePerUserWindowsDirectory @ 0x180085D2C (LdrpInitializePerUserWindowsDirectory.c)
 * Callees:
 *     RtlpInvalidatePathCache @ 0x180008EF0 (RtlpInvalidatePathCache.c)
 *     RtlDetermineDosPathNameType_U @ 0x1800095E0 (RtlDetermineDosPathNameType_U.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001C550 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BF0 (RtlAcquireSRWLockExclusive.c)
 *     RtlDosPathNameToRelativeNtPathName @ 0x1800222B0 (RtlDosPathNameToRelativeNtPathName.c)
 *     RtlAllocateHeap @ 0x180022DB0 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800466F0 (RtlFreeHeap.c)
 *     __security_check_cookie @ 0x180096C40 (__security_check_cookie.c)
 *     _local_unwind @ 0x180097810 (_local_unwind.c)
 *     ZwQueryAttributesFile @ 0x1800A6BC0 (ZwQueryAttributesFile.c)
 *     memmove @ 0x1800AC980 (memmove.c)
 */

__int64 __fastcall LdrAddDllDirectory(unsigned __int16 *a1, __int64 *a2)
{
  unsigned int v4; // eax
  int v5; // ebx
  __int64 Heap; // rax
  __int64 v7; // rbx
  char *v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned int v11; // ecx
  _QWORD *v12; // rax
  char *v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned __int64 v16; // rdi
  int v18; // ecx
  _DWORD v19[18]; // [rsp+0h] [rbp-C8h] BYREF
  unsigned __int16 v20; // [rsp+48h] [rbp-80h] BYREF
  unsigned __int64 v21; // [rsp+50h] [rbp-78h]
  _DWORD *v22; // [rsp+58h] [rbp-70h]
  int v23; // [rsp+60h] [rbp-68h] BYREF
  __int64 v24; // [rsp+68h] [rbp-60h]
  unsigned __int16 *v25; // [rsp+70h] [rbp-58h]
  int v26; // [rsp+78h] [rbp-50h]
  __int128 v27; // [rsp+80h] [rbp-48h]
  char v28[40]; // [rsp+90h] [rbp-38h] BYREF

  v22 = v19;
  if ( (LdrpPolicyBits & 4) == 0 )
    return 3221225485LL;
  v4 = RtlDetermineDosPathNameType_U(*((_WORD **)a1 + 1));
  if ( v4 <= 5 )
  {
    v18 = 41;
    if ( _bittest(&v18, v4) )
      return 3221225485LL;
  }
  v5 = RtlDosPathNameToRelativeNtPathName(0, 0, (__m128i *)a1, 0LL, &v20, 0LL, 0LL, 0LL);
  if ( v5 >= 0 )
  {
    v23 = 48;
    v24 = 0LL;
    v26 = 64;
    v25 = &v20;
    v27 = 0LL;
    v5 = ZwQueryAttributesFile(&v23, v28);
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v21);
  }
  if ( v5 < 0 )
    return (unsigned int)v5;
  Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned int)*a1 + 18);
  v7 = Heap;
  if ( !Heap )
    return 3221225495LL;
  memmove((void *)(Heap + 18), *((const void **)a1 + 1), *a1);
  *(_WORD *)(v7 + 16) = *a1;
  RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpDllDirectoryLock, v8, v9, v10);
  v11 = *a1 + (unsigned __int16)word_18014C3E8 + 2;
  v19[16] = v11;
  if ( v11 > 0xFFFE )
  {
    local_unwind(v22, &loc_1800CE5E8);
LABEL_11:
    __fastfail(3u);
  }
  word_18014C3E8 = v11;
  v12 = LdrpUserDllDirectories;
  if ( *((_UNKNOWN ***)LdrpUserDllDirectories + 1) != &LdrpUserDllDirectories )
    goto LABEL_11;
  *(_QWORD *)v7 = LdrpUserDllDirectories;
  *(_QWORD *)(v7 + 8) = &LdrpUserDllDirectories;
  v12[1] = v7;
  LdrpUserDllDirectories = (_UNKNOWN *)v7;
  RtlReleaseSRWLockExclusive(&LdrpDllDirectoryLock);
  RtlAcquireSRWLockExclusive((unsigned __int64)&RtlpCachedPathLock, v13, v14, v15);
  v16 = RtlpInvalidatePathCache(&RtlpDllSearchPathWithOptions);
  RtlReleaseSRWLockExclusive(&RtlpCachedPathLock);
  if ( v16 )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v16);
  *a2 = v7;
  return 0LL;
}
