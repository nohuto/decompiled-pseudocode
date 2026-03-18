/*
 * XREFs of MiReturnSystemImageAddress @ 0x1405448F0
 * Callers:
 *     MiReturnImageBase @ 0x14042EDB4 (MiReturnImageBase.c)
 *     MiUnloadSystemImage @ 0x140483468 (MiUnloadSystemImage.c)
 *     MiGetSystemAddressForImage @ 0x1404CCEDC (MiGetSystemAddressForImage.c)
 * Callees:
 *     MiGetPteAddress @ 0x14002BA64 (MiGetPteAddress.c)
 */

__int64 __fastcall MiReturnSystemImageAddress(unsigned __int64 a1)
{
  __int64 PteAddress; // rax
  unsigned int v2; // r9d
  __int64 v3; // r8

  PteAddress = MiGetPteAddress(a1);
  return MiReleaseDriverPtes(v2, PteAddress, v3);
}
