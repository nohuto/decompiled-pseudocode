/*
 * XREFs of MiReserveEnclavePages @ 0x1401F0464
 * Callers:
 *     MiAddPagesToEnclave @ 0x14065E2D0 (MiAddPagesToEnclave.c)
 *     MiCreateEnclave @ 0x14065F014 (MiCreateEnclave.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x1400122D0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001B8C0 (KeAcquireInStackQueuedSpinLock.c)
 *     MiGetEnclavePage @ 0x1401F0238 (MiGetEnclavePage.c)
 */

__int64 __fastcall MiReserveEnclavePages(__int64 a1, _QWORD *a2, unsigned __int64 a3)
{
  unsigned __int64 v6; // rax
  int v7; // edi
  _QWORD *v9; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock(a2 + 468, &LockHandle);
  v6 = a2[464];
  if ( v6 < a3 )
  {
    v7 = -1073741801;
  }
  else
  {
    a2[464] = v6 - a3;
    v7 = 0;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v7 < 0 )
    return (unsigned int)v7;
  for ( *(_QWORD *)(a1 + 80) += a3; a3; --a3 )
  {
    v9 = (_QWORD *)(48 * MiGetEnclavePage(a2, 1) - 0x58000000000LL);
    *v9 = *(_QWORD *)(a1 + 72);
    *(_QWORD *)(a1 + 72) = v9;
  }
  return 0LL;
}
