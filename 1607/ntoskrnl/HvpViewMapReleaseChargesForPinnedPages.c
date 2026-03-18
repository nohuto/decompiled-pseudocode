/*
 * XREFs of HvpViewMapReleaseChargesForPinnedPages @ 0x140610128
 * Callers:
 *     HvpViewMapUnpinForFileOffset @ 0x1401B6B34 (HvpViewMapUnpinForFileOffset.c)
 * Callees:
 *     MmReleaseResourceCharge @ 0x140003CD8 (MmReleaseResourceCharge.c)
 */

__int64 __fastcall HvpViewMapReleaseChargesForPinnedPages(__int64 a1, unsigned int a2)
{
  __int64 result; // rax

  result = MmReleaseResourceCharge(a2, 3, 1u);
  *(_DWORD *)(a1 + 32) -= a2;
  return result;
}
