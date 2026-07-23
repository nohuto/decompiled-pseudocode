/*
 * XREFs of CmpDelayCloseWorker @ 0x1404245C0
 * Callers:
 *     NtUnloadKeyEx @ 0x1403E3100 (NtUnloadKeyEx.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x14000C5C0 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14002CC20 (ExAcquireFastMutex.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     CmpUnlockRegistry @ 0x14040362C (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x140403660 (CmpLockRegistry.c)
 *     CmpLockKcbExclusive @ 0x140420F10 (CmpLockKcbExclusive.c)
 *     CmpCleanUpKcbCacheWithLock @ 0x140435C00 (CmpCleanUpKcbCacheWithLock.c)
 *     CmpLockHashEntryExclusive @ 0x140436960 (CmpLockHashEntryExclusive.c)
 *     CmpUnlockHashEntry @ 0x140436D90 (CmpUnlockHashEntry.c)
 *     CmpUnlockKcb @ 0x1404374E0 (CmpUnlockKcb.c)
 */

__int64 __fastcall CmpDelayCloseWorker(__int64 a1)
{
  bool v1; // r13
  unsigned int v2; // esi
  unsigned int v3; // r8d
  _BYTE *v4; // r10
  __int64 v5; // r9
  _QWORD *v6; // rcx
  __int64 v7; // rax
  unsigned int v8; // ebp
  ULONG_PTR *v9; // r14
  char *v10; // r15
  unsigned int v11; // edi
  unsigned int *v12; // rbx
  void *v13; // r12
  __int64 v14; // rax
  __int64 v16; // rdx
  bool v17; // [rsp+20h] [rbp-A8h]
  char v18; // [rsp+30h] [rbp-98h] BYREF
  _BYTE v19[12]; // [rsp+38h] [rbp-90h] BYREF
  char v20; // [rsp+44h] [rbp-84h] BYREF

  v1 = a1 != 0;
  v17 = a1 != 0;
  CmpLockRegistry();
  do
  {
    if ( !v1 )
      _InterlockedExchange(&CmpDelayCloseWorkItemActive, 2);
    do
    {
      v2 = 0;
      ExAcquireFastMutex((PFAST_MUTEX)&CmpDelayedCloseTableLock);
      v3 = CmpDelayedCloseElements;
      v4 = v19;
      do
      {
        if ( v3 <= CmpDelayedCloseSize && (!v1 || !v3) )
          break;
        v5 = qword_140322B48 - 216;
        v6 = *(_QWORD **)(qword_140322B48 + 8);
        if ( *(__int64 **)qword_140322B48 != &CmpDelayedLRUListHead || *v6 != qword_140322B48 )
          __fastfail(3u);
        qword_140322B48 = *(_QWORD *)(qword_140322B48 + 8);
        *v6 = &CmpDelayedLRUListHead;
        --v3;
        --qword_1407481D8;
        *((_QWORD *)v4 - 1) = *(_QWORD *)(v5 + 24);
        *(_QWORD *)v4 = v5;
        v7 = v2++;
        CmpDelayedCloseElements = v3;
        v19[24 * v7 + 8] = 0;
        *((_DWORD *)v4 + 3) = *(_DWORD *)(v5 + 8);
        v4 += 24;
        *(_BYTE *)(v5 + 56) |= 4u;
        *(_QWORD *)(v5 + 216) = &v19[24 * v7 + 8];
      }
      while ( v2 < 4 );
      KeReleaseGuardedMutex((PKGUARDED_MUTEX)&CmpDelayedCloseTableLock);
      v8 = 0;
      if ( v2 )
      {
        v9 = (ULONG_PTR *)&v18;
        v10 = &v20;
        do
        {
          CmpLockHashEntryExclusive(*v9);
          v11 = v8;
          if ( v8 < v2 )
          {
            v12 = (unsigned int *)(v10 - 12);
            do
            {
              if ( v12[3] == *((_DWORD *)v9 + 5) && *((_QWORD *)v12 - 1) == *v9 && !*((_BYTE *)v12 + 8) )
              {
                CmpLockKcbExclusive(*(_QWORD *)v12);
                v13 = 0LL;
                v14 = *(_QWORD *)(*(_QWORD *)v12 + 184LL);
                if ( v14 )
                {
                  v16 = *(_QWORD *)(v14 + 24);
                  if ( v16 )
                  {
                    v13 = *(void **)(v16 + 16);
                    CmpUnlockKcb(*(PVOID *)v12);
                    CmpLockKcbExclusive((__int64)v13);
                    CmpLockKcbExclusive(*(_QWORD *)v12);
                  }
                }
                CmpCleanUpKcbCacheWithLock(*(_QWORD *)v12);
                CmpUnlockKcb(*(PVOID *)v12);
                if ( v13 )
                  CmpUnlockKcb(v13);
                v19[24 * v11 + 8] = 1;
              }
              ++v11;
              v12 += 6;
            }
            while ( v11 < v2 );
          }
          CmpUnlockHashEntry(*v9, *(unsigned int *)v10);
          ++v8;
          v10 += 24;
          v9 += 3;
        }
        while ( v8 < v2 );
        v1 = v17;
      }
    }
    while ( v2 == 4 );
  }
  while ( !v1 && _InterlockedCompareExchange(&CmpDelayCloseWorkItemActive, 0, 2) != 2 );
  return CmpUnlockRegistry();
}
