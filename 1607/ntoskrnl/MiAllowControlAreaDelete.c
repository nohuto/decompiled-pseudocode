/*
 * XREFs of MiAllowControlAreaDelete @ 0x1401DE430
 * Callers:
 *     MiDeleteCachedSubsection @ 0x1401DE5D0 (MiDeleteCachedSubsection.c)
 *     MiFlushControlArea @ 0x1401DEA98 (MiFlushControlArea.c)
 * Callees:
 *     MiPartitionIdToPointer @ 0x1400680A0 (MiPartitionIdToPointer.c)
 */

__int64 __fastcall MiAllowControlAreaDelete(__int64 a1)
{
  __int64 v1; // r8

  _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 112), 0xFFFFFFFFFFFFFFFFuLL);
  *((_QWORD *)MiPartitionIdToPointer(*(_WORD *)(a1 + 60) & 0x3FF) + 191) = 0LL;
  return v1 - 1;
}
