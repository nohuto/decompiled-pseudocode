/*
 * XREFs of HvpViewMapAcquireChargesForPinnedPages @ 0x1406633C4
 * Callers:
 *     HvpViewMapPinForFileOffset @ 0x1401E0B18 (HvpViewMapPinForFileOffset.c)
 * Callees:
 *     MmChargeResources @ 0x1400D95D8 (MmChargeResources.c)
 */

char __fastcall HvpViewMapAcquireChargesForPinnedPages(__int64 a1, unsigned int a2)
{
  char v4; // bl

  v4 = 1;
  if ( !(unsigned int)MmChargeResources(a2, 3, 1u, 0LL) )
    return 0;
  *(_DWORD *)(a1 + 32) += a2;
  return v4;
}
