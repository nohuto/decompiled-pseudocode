/*
 * XREFs of MiOutlawInswaps @ 0x1400756CC
 * Callers:
 *     MiBeginProcessClean @ 0x1400755E8 (MiBeginProcessClean.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14002E9A0 (ExReleaseSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x14002EA30 (MiGetSharedVm.c)
 *     ExAcquireSpinLockExclusive @ 0x14002EB90 (ExAcquireSpinLockExclusive.c)
 *     MiPartitionIdToPointer @ 0x1400680A0 (MiPartitionIdToPointer.c)
 *     MiGetWorkingSetSwapSupport @ 0x140075E5C (MiGetWorkingSetSwapSupport.c)
 */

__int64 __fastcall MiOutlawInswaps(__int64 a1)
{
  __int64 v1; // rdi
  volatile LONG *v2; // rsi
  __int64 v3; // rdx
  __int64 WorkingSetSwapSupport; // rbx
  __int64 v5; // rcx
  KIRQL v6; // dl

  v1 = a1 + 1280;
  v2 = MiPartitionIdToPointer(*(_WORD *)(a1 + 1444)) + 262;
  LOBYTE(v3) = ExAcquireSpinLockExclusive(v2);
  WorkingSetSwapSupport = MiGetWorkingSetSwapSupport(v1, v3);
  *((_QWORD *)MiGetSharedVm(v5) + 3) = 2LL;
  ExReleaseSpinLockExclusive(v2, v6);
  return WorkingSetSwapSupport;
}
