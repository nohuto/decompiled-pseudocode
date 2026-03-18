/*
 * XREFs of MiOutlawInswaps @ 0x14001BF20
 * Callers:
 *     MiBeginProcessClean @ 0x14001BE64 (MiBeginProcessClean.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusive @ 0x14004CC00 (ExReleaseSpinLockExclusive.c)
 *     MiPartitionIdToPointer @ 0x1400AA2C0 (MiPartitionIdToPointer.c)
 */

__int64 __fastcall MiOutlawInswaps(__int64 a1)
{
  volatile LONG *v2; // rdi
  KIRQL v3; // al
  __int64 v4; // rbx

  v2 = (volatile LONG *)(MiPartitionIdToPointer(*(unsigned __int16 *)(a1 + 1460)) + 1056);
  v3 = ExAcquireSpinLockExclusive(v2);
  v4 = *(_QWORD *)(a1 + 1512);
  *(_QWORD *)(a1 + 1512) = 2LL;
  ExReleaseSpinLockExclusive(v2, v3);
  return v4;
}
