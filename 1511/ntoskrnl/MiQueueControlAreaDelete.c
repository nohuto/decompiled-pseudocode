/*
 * XREFs of MiQueueControlAreaDelete @ 0x1401D1810
 * Callers:
 *     MiDereferenceControlAreaProbe @ 0x14000BADC (MiDereferenceControlAreaProbe.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusive @ 0x14004CC00 (ExReleaseSpinLockExclusive.c)
 *     MiPartitionIdToPointer @ 0x1400AA2C0 (MiPartitionIdToPointer.c)
 */

LONG __fastcall MiQueueControlAreaDelete(__int64 a1)
{
  int *v2; // rax
  int *v3; // rdi
  volatile LONG *v4; // rbx
  KIRQL v5; // al

  v2 = MiPartitionIdToPointer(*(_WORD *)(a1 + 60) & 0x3FF);
  *(_QWORD *)a1 = 0LL;
  v3 = v2;
  v4 = v2 + 384;
  v5 = ExAcquireSpinLockExclusive(v2 + 384);
  *(_QWORD *)a1 = *((_QWORD *)v3 + 185);
  *((_QWORD *)v3 + 185) = a1;
  ExReleaseSpinLockExclusive(v4, v5);
  return KeSetEvent((PRKEVENT)(v3 + 364), 0, 0);
}
