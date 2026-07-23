/*
 * XREFs of MiSelectSystemImageAddress @ 0x1404B2AC8
 * Callers:
 *     MiSelectImageBase @ 0x14046D450 (MiSelectImageBase.c)
 *     MiGetSystemAddressForImage @ 0x1404B2908 (MiGetSystemAddressForImage.c)
 * Callees:
 *     MiReserveDriverPtes @ 0x1404B2B08 (MiReserveDriverPtes.c)
 */

__int64 __fastcall MiSelectSystemImageAddress(int a1)
{
  __int64 result; // rax

  result = MiReserveDriverPtes(a1 == 2);
  if ( result )
    return result << 25 >> 16;
  return result;
}
