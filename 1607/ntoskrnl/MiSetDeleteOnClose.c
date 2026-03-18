/*
 * XREFs of MiSetDeleteOnClose @ 0x1401DF37C
 * Callers:
 *     MiWriteComplete @ 0x14008E9E0 (MiWriteComplete.c)
 *     MiRelocateImage @ 0x140524330 (MiRelocateImage.c)
 * Callees:
 *     MiRemoveUnusedSegment @ 0x140026D14 (MiRemoveUnusedSegment.c)
 *     MiInsertUnusedSegment @ 0x140026FEC (MiInsertUnusedSegment.c)
 *     ExReleaseSpinLockExclusive @ 0x14002E9A0 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14002EB90 (ExAcquireSpinLockExclusive.c)
 *     MiReturnSubsectionCharges @ 0x1401F5310 (MiReturnSubsectionCharges.c)
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
