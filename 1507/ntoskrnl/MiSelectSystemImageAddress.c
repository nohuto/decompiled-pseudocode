/*
 * XREFs of MiSelectSystemImageAddress @ 0x140579030
 * Callers:
 *     MiSelectImageBase @ 0x14046B754 (MiSelectImageBase.c)
 *     MiGetSystemAddressForImage @ 0x140576AF0 (MiGetSystemAddressForImage.c)
 * Callees:
 *     MiReserveDriverPtes @ 0x140579058 (MiReserveDriverPtes.c)
 */

__int64 __fastcall MiSelectSystemImageAddress(int a1)
{
  __int64 result; // rax

  result = MiReserveDriverPtes(a1 == 2);
  if ( result )
    return result << 25 >> 16;
  return result;
}
