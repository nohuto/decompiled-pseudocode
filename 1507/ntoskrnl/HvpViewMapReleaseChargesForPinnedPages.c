/*
 * XREFs of HvpViewMapReleaseChargesForPinnedPages @ 0x14066362C
 * Callers:
 *     HvpViewMapUnpinForFileOffset @ 0x1401E0D0C (HvpViewMapUnpinForFileOffset.c)
 * Callees:
 *     MmReleaseResourceCharge @ 0x1400D9688 (MmReleaseResourceCharge.c)
 */

__int64 __fastcall HvpViewMapReleaseChargesForPinnedPages(__int64 a1, unsigned int a2)
{
  __int64 result; // rax

  result = MmReleaseResourceCharge(a2, 3, 1);
  *(_DWORD *)(a1 + 32) -= a2;
  return result;
}
