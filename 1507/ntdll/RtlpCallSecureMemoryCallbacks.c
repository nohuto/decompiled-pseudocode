/*
 * XREFs of RtlpCallSecureMemoryCallbacks @ 0x1800DE9E0
 * Callers:
 *     RtlFlushSecureMemoryCache @ 0x1800DE8C0 (RtlFlushSecureMemoryCache.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18002A460 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x18002AB90 (RtlFreeHeap.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033470 (RtlReleaseSRWLockExclusive.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180075B10 (RtlEndStrongEnumerationHashTable.c)
 */

char __fastcall RtlpCallSecureMemoryCallbacks(__int64 a1, char *a2, __int64 a3, __int64 a4)
{
  char v5; // r15
  _DWORD *v7; // r14
  _DWORD *v8; // rdi
  unsigned __int64 **v9; // rsi
  char *v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  bool v13; // zf
  unsigned __int64 *v14; // rcx
  unsigned __int64 ***v15; // rax
  unsigned __int64 *v16; // rax
  unsigned __int64 v17; // r8
  unsigned __int64 v18; // rax
  unsigned __int64 v20; // [rsp+20h] [rbp-10h] BYREF
  unsigned __int64 *v21; // [rsp+28h] [rbp-8h]

  v21 = &v20;
  v5 = 0;
  v20 = (unsigned __int64)&v20;
  RtlAcquireSRWLockExclusive(&RtlpSecMemLock, a2, a3, a4);
  v7 = RtlpSecMemListHead;
  while ( v7 != (_DWORD *)&RtlpSecMemListHead )
  {
    v8 = v7 + 4;
    ++v7[4];
    v9 = (unsigned __int64 **)v7;
    RtlReleaseSRWLockExclusive(&RtlpSecMemLock);
    if ( (*((unsigned __int8 (__fastcall **)(__int64, char *))v7 + 3))(a1, a2) )
      v5 = 1;
    RtlAcquireSRWLockExclusive(&RtlpSecMemLock, v10, v11, v12);
    v13 = (*v8)-- == 1;
    v7 = *(_DWORD **)v7;
    if ( v13 )
    {
      v14 = *v9;
      v15 = (unsigned __int64 ***)v9[1];
      if ( (unsigned __int64 **)(*v9)[1] != v9 || *v15 != v9 )
        __fastfail(3u);
      *v15 = (unsigned __int64 **)v14;
      v14[1] = (unsigned __int64)v15;
      v16 = v21;
      *v9 = &v20;
      v9[1] = v16;
      if ( (unsigned __int64 *)*v16 != &v20 )
        __fastfail(3u);
      *v16 = (unsigned __int64)v9;
      v21 = (unsigned __int64 *)v9;
    }
  }
  RtlReleaseSRWLockExclusive(&RtlpSecMemLock);
  while ( 1 )
  {
    v17 = v20;
    if ( (unsigned __int64 *)v20 == &v20 )
      break;
    v18 = *(_QWORD *)v20;
    if ( *(unsigned __int64 **)(v20 + 8) != &v20 || *(_QWORD *)(v18 + 8) != v20 )
      __fastfail(3u);
    v20 = *(_QWORD *)v20;
    *(_QWORD *)(v18 + 8) = &v20;
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v17);
  }
  return v5;
}
