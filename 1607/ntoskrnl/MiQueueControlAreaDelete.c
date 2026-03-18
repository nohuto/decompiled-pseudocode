/*
 * XREFs of MiQueueControlAreaDelete @ 0x1401DF2E8
 * Callers:
 *     MiDereferenceControlAreaProbe @ 0x140026784 (MiDereferenceControlAreaProbe.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14002E9A0 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14002EB90 (ExAcquireSpinLockExclusive.c)
 *     MiPartitionIdToPointer @ 0x1400680A0 (MiPartitionIdToPointer.c)
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
  v4 = v2 + 416;
  v5 = ExAcquireSpinLockExclusive(v2 + 416);
  *(_QWORD *)a1 = *((_QWORD *)v3 + 202);
  *((_QWORD *)v3 + 202) = a1;
  ExReleaseSpinLockExclusive(v4, v5);
  return KeSetEvent((PRKEVENT)(v3 + 398), 0, 0);
}
