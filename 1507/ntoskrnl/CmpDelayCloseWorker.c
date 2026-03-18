/*
 * XREFs of CmpDelayCloseWorker @ 0x1404CA510
 * Callers:
 *     NtUnloadKeyEx @ 0x1404ED38C (NtUnloadKeyEx.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     CmpUnlockKcb @ 0x1404C53F0 (CmpUnlockKcb.c)
 *     CmpUnlockRegistry @ 0x1404C6A10 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1404C7410 (CmpLockRegistry.c)
 *     CmpUnlockHashEntry @ 0x1404C8730 (CmpUnlockHashEntry.c)
 *     CmpCleanUpKcbCacheWithLock @ 0x1404CB304 (CmpCleanUpKcbCacheWithLock.c)
 *     CmpLockKcbExclusive @ 0x1404CCB10 (CmpLockKcbExclusive.c)
 *     CmpLockHashEntryExclusive @ 0x1404CCB90 (CmpLockHashEntryExclusive.c)
 */

void __fastcall CmpDelayCloseWorker(__int64 a1)
{
  bool v1; // r15
  __int64 v2; // r9
  unsigned int v3; // ebp
  __int64 v4; // rax
  __int64 v5; // rbx
  unsigned __int8 CurrentIrql; // di
  _BYTE *v7; // r10
  unsigned int v8; // r9d
  __int64 v9; // r8
  _QWORD *v10; // rcx
  __int64 v11; // rax
  unsigned __int8 v12; // bl
  signed __int32 v13; // eax
  unsigned int v14; // r14d
  char *v15; // rsi
  unsigned int v16; // edi
  ULONG_PTR *v17; // rbx
  char v18; // [rsp+20h] [rbp-98h] BYREF
  _BYTE v19[88]; // [rsp+28h] [rbp-90h] BYREF

  v1 = a1 != 0;
  CmpLockRegistry();
  do
  {
    if ( !v1 )
      _InterlockedExchange(&CmpDelayCloseWorkItemActive, 2);
    do
    {
      v3 = 0;
      v4 = KeAbPreAcquire((ULONG_PTR)&CmpDelayedCloseTableLock, 0LL, 0LL, v2);
      v5 = v4;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(1uLL);
      if ( !_interlockedbittestandreset((volatile signed __int32 *)&CmpDelayedCloseTableLock, 0) )
        ExpAcquireFastMutexContended((ULONG_PTR)&CmpDelayedCloseTableLock, v4);
      if ( v5 )
        *(_BYTE *)(v5 + 26) |= 1u;
      v7 = v19;
      v8 = CmpDelayedCloseElements;
      *(&CmpDelayedCloseTableLock + 1) = (ULONG_PTR)KeGetCurrentThread();
      *((_DWORD *)&CmpDelayedCloseTableLock + 12) = CurrentIrql;
      do
      {
        if ( v8 <= CmpDelayedCloseSize && (!v1 || !v8) )
          break;
        v9 = qword_14034D9A8 - 216;
        v10 = *(_QWORD **)(qword_14034D9A8 + 8);
        if ( *(__int64 **)qword_14034D9A8 != &CmpDelayedLRUListHead || *v10 != qword_14034D9A8 )
          __fastfail(3u);
        qword_14034D9A8 = *(_QWORD *)(qword_14034D9A8 + 8);
        *v10 = &CmpDelayedLRUListHead;
        --v8;
        --qword_14077F048;
        *((_QWORD *)v7 - 1) = *(_QWORD *)(v9 + 32);
        *(_QWORD *)v7 = v9;
        v11 = v3++;
        CmpDelayedCloseElements = v8;
        v19[24 * v11 + 8] = 0;
        *((_DWORD *)v7 + 3) = *(_DWORD *)(v9 + 16);
        v7 += 24;
        *(_DWORD *)(v9 + 8) |= 4u;
        *(_QWORD *)(v9 + 216) = &v19[24 * v11 + 8];
      }
      while ( v3 < 4 );
      v12 = *((_BYTE *)&CmpDelayedCloseTableLock + 48);
      *(&CmpDelayedCloseTableLock + 1) = 0LL;
      v13 = _InterlockedCompareExchange((volatile signed __int32 *)&CmpDelayedCloseTableLock, 1, 0);
      if ( v13 )
        ExpReleaseFastMutexContended((volatile signed __int32 *)&CmpDelayedCloseTableLock, v13);
      __writecr8(v12);
      KeAbPostRelease((ULONG_PTR)&CmpDelayedCloseTableLock);
      v14 = 0;
      if ( v3 )
      {
        v15 = &v18;
        do
        {
          CmpLockHashEntryExclusive(*(_QWORD *)v15, *((unsigned int *)v15 + 5));
          v16 = v14;
          if ( v14 < v3 )
          {
            v17 = (ULONG_PTR *)&v19[24 * v14];
            do
            {
              if ( *((_DWORD *)v17 + 3) == *((_DWORD *)v15 + 5) && *(v17 - 1) == *(_QWORD *)v15 && !*((_BYTE *)v17 + 8) )
              {
                CmpLockKcbExclusive(*v17);
                CmpCleanUpKcbCacheWithLock(*v17);
                CmpUnlockKcb((char *)*v17);
                v19[24 * v16 + 8] = 1;
              }
              ++v16;
              v17 += 3;
            }
            while ( v16 < v3 );
          }
          CmpUnlockHashEntry(*(_QWORD *)v15, *((_DWORD *)v15 + 5));
          ++v14;
          v15 += 24;
        }
        while ( v14 < v3 );
      }
    }
    while ( v3 == 4 );
  }
  while ( !v1 && _InterlockedCompareExchange(&CmpDelayCloseWorkItemActive, 0, 2) != 2 );
  CmpUnlockRegistry();
}
