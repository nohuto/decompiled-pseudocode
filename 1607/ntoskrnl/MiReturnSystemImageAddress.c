/*
 * XREFs of MiReturnSystemImageAddress @ 0x140544E30
 * Callers:
 *     MiReturnImageBase @ 0x14042DC84 (MiReturnImageBase.c)
 *     MiUnloadSystemImage @ 0x1404821BC (MiUnloadSystemImage.c)
 *     MiGetSystemAddressForImage @ 0x1404B2908 (MiGetSystemAddressForImage.c)
 * Callees:
 *     MiGetPteAddress @ 0x14002B5E4 (MiGetPteAddress.c)
 */

__int64 __fastcall MiReturnSystemImageAddress(unsigned __int64 a1)
{
  __int64 PteAddress; // rax
  unsigned int v2; // r9d
  __int64 v3; // r8

  PteAddress = MiGetPteAddress(a1);
  return MiReleaseDriverPtes(v2, PteAddress, v3);
}
