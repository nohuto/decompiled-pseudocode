/*
 * XREFs of CmpDelayCloseWorker @ 0x1403F9EB0
 * Callers:
 *     NtUnloadKeyEx @ 0x1404986A4 (NtUnloadKeyEx.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140020FB0 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14003D1D0 (ExAcquireFastMutex.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     CmpLockKcbExclusive @ 0x1403F9950 (CmpLockKcbExclusive.c)
 *     CmpCleanUpKcbCacheWithLock @ 0x1403F99D0 (CmpCleanUpKcbCacheWithLock.c)
 *     CmpLockHashEntryExclusive @ 0x1403F9DF0 (CmpLockHashEntryExclusive.c)
 *     CmpUnlockHashEntry @ 0x1403FB980 (CmpUnlockHashEntry.c)
 *     CmpUnlockKcb @ 0x1403FE4F0 (CmpUnlockKcb.c)
 *     CmpUnlockRegistry @ 0x140423B00 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x140423C10 (CmpLockRegistry.c)
 */

__int64 __fastcall CmpDelayCloseWorker(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  bool v4; // r15
  unsigned int v5; // ebp
  unsigned int v6; // r8d
  _BYTE *v7; // r10
  __int64 v8; // r9
  _QWORD *v9; // rcx
  __int64 v10; // rax
  unsigned int v11; // r14d
  ULONG_PTR *v12; // rsi
  unsigned int v13; // edi
  _BYTE *v14; // rbx
  char v16; // [rsp+20h] [rbp-98h] BYREF
  _BYTE v17[88]; // [rsp+28h] [rbp-90h] BYREF

  v4 = a1 != 0;
  CmpLockRegistry(a1, a2, a3, a4);
  do
  {
    if ( !v4 )
      _InterlockedExchange(&CmpDelayCloseWorkItemActive, 2);
    do
    {
      v5 = 0;
      ExAcquireFastMutex((PFAST_MUTEX)&CmpDelayedCloseTableLock);
      v6 = CmpDelayedCloseElements;
      v7 = v17;
      do
      {
        if ( v6 <= CmpDelayedCloseSize && (!v4 || !v6) )
          break;
        v8 = qword_1402FD548 - 216;
        v9 = *(_QWORD **)(qword_1402FD548 + 8);
        if ( *(__int64 **)qword_1402FD548 != &CmpDelayedLRUListHead || *v9 != qword_1402FD548 )
          __fastfail(3u);
        qword_1402FD548 = *(_QWORD *)(qword_1402FD548 + 8);
        *v9 = &CmpDelayedLRUListHead;
        --v6;
        --qword_1406FC028;
        *((_QWORD *)v7 - 1) = *(_QWORD *)(v8 + 32);
        *(_QWORD *)v7 = v8;
        v10 = v5++;
        CmpDelayedCloseElements = v6;
        v17[24 * v10 + 8] = 0;
        *((_DWORD *)v7 + 3) = *(_DWORD *)(v8 + 16);
        v7 += 24;
        *(_DWORD *)(v8 + 8) |= 4u;
        *(_QWORD *)(v8 + 216) = &v17[24 * v10 + 8];
      }
      while ( v5 < 4 );
      KeReleaseGuardedMutex((PKGUARDED_MUTEX)&CmpDelayedCloseTableLock);
      v11 = 0;
      if ( v5 )
      {
        v12 = (ULONG_PTR *)&v16;
        do
        {
          CmpLockHashEntryExclusive(*v12, *((unsigned int *)v12 + 5));
          v13 = v11;
          if ( v11 < v5 )
          {
            v14 = &v17[24 * v11];
            do
            {
              if ( *((_DWORD *)v14 + 3) == *((_DWORD *)v12 + 5) && *((_QWORD *)v14 - 1) == *v12 && !v14[8] )
              {
                CmpLockKcbExclusive(*(_QWORD *)v14);
                CmpCleanUpKcbCacheWithLock(*(_QWORD *)v14, 0LL);
                CmpUnlockKcb(*(PVOID *)v14);
                v17[24 * v13 + 8] = 1;
              }
              ++v13;
              v14 += 24;
            }
            while ( v13 < v5 );
          }
          CmpUnlockHashEntry(*v12, *((unsigned int *)v12 + 5));
          ++v11;
          v12 += 3;
        }
        while ( v11 < v5 );
      }
    }
    while ( v5 == 4 );
  }
  while ( !v4 && _InterlockedCompareExchange(&CmpDelayCloseWorkItemActive, 0, 2) != 2 );
  return CmpUnlockRegistry();
}
