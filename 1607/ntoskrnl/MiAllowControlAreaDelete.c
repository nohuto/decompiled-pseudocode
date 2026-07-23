/*
 * XREFs of MiAllowControlAreaDelete @ 0x1401DE25C
 * Callers:
 *     MiDeleteCachedSubsection @ 0x1401DE3FC (MiDeleteCachedSubsection.c)
 *     MiFlushControlArea @ 0x1401DE8C4 (MiFlushControlArea.c)
 * Callees:
 *     MiPartitionIdToPointer @ 0x140067C20 (MiPartitionIdToPointer.c)
 */

__int64 __fastcall MiAllowControlAreaDelete(__int64 a1)
{
  __int64 v1; // r8

  _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 112), 0xFFFFFFFFFFFFFFFFuLL);
  *((_QWORD *)MiPartitionIdToPointer(*(_WORD *)(a1 + 60) & 0x3FF) + 191) = 0LL;
  return v1 - 1;
}
