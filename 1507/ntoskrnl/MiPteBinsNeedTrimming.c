/*
 * XREFs of MiPteBinsNeedTrimming @ 0x140013548
 * Callers:
 *     MiAdjustPteBins @ 0x140012C04 (MiAdjustPteBins.c)
 *     MiReservePtes @ 0x1400AAD50 (MiReservePtes.c)
 * Callees:
 *     MiGetNumberOfCachedPtes @ 0x1400140EC (MiGetNumberOfCachedPtes.c)
 */

_BOOL8 __fastcall MiPteBinsNeedTrimming(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int NumberOfCachedPtes; // eax
  __int64 v4; // r9

  NumberOfCachedPtes = MiGetNumberOfCachedPtes(a1, a2, a3, a1);
  return NumberOfCachedPtes >= 0x400uLL
      && (unsigned __int64)NumberOfCachedPtes + *(_QWORD *)(v4 + 88) > *(_QWORD *)(v4 + 64) / 0xAuLL;
}
