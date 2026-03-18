/*
 * XREFs of MiSelectSystemImageAddress @ 0x1404CD09C
 * Callers:
 *     MiSelectImageBase @ 0x14046E580 (MiSelectImageBase.c)
 *     MiGetSystemAddressForImage @ 0x1404CCEDC (MiGetSystemAddressForImage.c)
 * Callees:
 *     MiReserveDriverPtes @ 0x1404CD0DC (MiReserveDriverPtes.c)
 */

__int64 __fastcall MiSelectSystemImageAddress(int a1)
{
  __int64 result; // rax

  result = MiReserveDriverPtes(a1 == 2);
  if ( result )
    return result << 25 >> 16;
  return result;
}
