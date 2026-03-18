/*
 * XREFs of MiReturnSystemImageAddress @ 0x140521A7C
 * Callers:
 *     MiUnloadSystemImage @ 0x140452B74 (MiUnloadSystemImage.c)
 *     MiReturnImageBase @ 0x1404B7DB8 (MiReturnImageBase.c)
 *     MiGetSystemAddressForImage @ 0x140576AF0 (MiGetSystemAddressForImage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiReturnSystemImageAddress(unsigned __int64 a1, unsigned __int64 a2)
{
  return MiReleaseDriverPtes(
           a1 + 0x70000000000LL <= 0x7FFFFFFFFFLL,
           ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
           (unsigned int)(a2 >> 12));
}
