/*
 * XREFs of MiReturnSystemImageAddress @ 0x1404A6B98
 * Callers:
 *     MiGetSystemAddressForImage @ 0x1403CC454 (MiGetSystemAddressForImage.c)
 *     MiUnloadSystemImage @ 0x1403CF92C (MiUnloadSystemImage.c)
 *     MiReturnImageBase @ 0x14041B3BC (MiReturnImageBase.c)
 * Callees:
 *     MiGetPteAddress @ 0x14004EAF0 (MiGetPteAddress.c)
 */

__int64 __fastcall MiReturnSystemImageAddress(unsigned __int64 a1, unsigned __int64 a2)
{
  BOOL v2; // ebx
  unsigned __int64 v3; // rdi
  __int64 PteAddress; // rax

  v2 = a1 + 0x70000000000LL <= 0x7FFFFFFFFFLL;
  v3 = a2 >> 12;
  PteAddress = MiGetPteAddress(a1);
  return MiReleaseDriverPtes(v2, PteAddress, (unsigned int)v3);
}
