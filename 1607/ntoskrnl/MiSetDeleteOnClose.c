/*
 * XREFs of MiSetDeleteOnClose @ 0x1401DF1A8
 * Callers:
 *     MiWriteComplete @ 0x14008E140 (MiWriteComplete.c)
 *     MiRelocateImage @ 0x140507390 (MiRelocateImage.c)
 * Callees:
 *     MiRemoveUnusedSegment @ 0x140026894 (MiRemoveUnusedSegment.c)
 *     MiInsertUnusedSegment @ 0x140026B6C (MiInsertUnusedSegment.c)
 *     ExReleaseSpinLockExclusive @ 0x14002E520 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 *     MiReturnSubsectionCharges @ 0x1401F513C (MiReturnSubsectionCharges.c)
 */

void __fastcall MiSetDeleteOnClose(__int64 a1, int a2)
{
  __int64 inserted; // rdi
  KIRQL v5; // r14
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9

  inserted = 0LL;
  v5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
  v6 = *(_DWORD *)(a1 + 56);
  if ( (v6 & 0x40000) == 0 )
  {
    if ( (v6 & 0x8000000) != 0 )
    {
      MiRemoveUnusedSegment(a1);
      *(_DWORD *)(a1 + 56) |= 0x40000u;
      inserted = MiInsertUnusedSegment(a1, v7, v8, v9);
    }
    else
    {
      *(_DWORD *)(a1 + 56) = v6 | 0x40000;
    }
  }
  if ( a2 == 1 )
    *(_DWORD *)(a1 + 56) |= 0x10u;
  ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72), v5);
  if ( inserted )
    MiReturnSubsectionCharges(inserted);
}
