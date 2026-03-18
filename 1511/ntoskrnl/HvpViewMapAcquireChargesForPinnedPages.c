/*
 * XREFs of HvpViewMapAcquireChargesForPinnedPages @ 0x1405EB41C
 * Callers:
 *     HvpViewMapPinForFileOffset @ 0x1401AADDC (HvpViewMapPinForFileOffset.c)
 * Callees:
 *     MmChargeResources @ 0x1400F8F18 (MmChargeResources.c)
 */

char __fastcall HvpViewMapAcquireChargesForPinnedPages(__int64 a1, unsigned int a2)
{
  char v4; // bl

  v4 = 1;
  if ( !(unsigned int)MmChargeResources(a2, 3, 1u, 0) )
    return 0;
  *(_DWORD *)(a1 + 32) += a2;
  return v4;
}
