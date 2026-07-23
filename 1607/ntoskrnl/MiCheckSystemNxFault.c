/*
 * XREFs of MiCheckSystemNxFault @ 0x1400AEE78
 * Callers:
 *     MiSystemFault @ 0x14001BB70 (MiSystemFault.c)
 *     MiValidFault @ 0x1400E40F0 (MiValidFault.c)
 *     MiLargePageFault @ 0x1401EF658 (MiLargePageFault.c)
 *     MiRaisedIrqlFault @ 0x1401EF8EC (MiRaisedIrqlFault.c)
 * Callees:
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 */

signed __int64 __fastcall MiCheckSystemNxFault(char a1, ULONG_PTR a2, ULONG_PTR a3, signed __int64 a4, unsigned int a5)
{
  signed __int64 result; // rax

  result = a4;
  if ( (a1 & 0x10) != 0 )
  {
    if ( (KeFeatureBits & 1) != 0 && (a4 & 4) != 0 )
      KeBugCheckEx(0xFCu, a2, a4, a3, a5 | 0x80000000LL);
    if ( a4 < 0 )
      KeBugCheckEx(0xFCu, a2, a4, a3, a5);
  }
  return result;
}
