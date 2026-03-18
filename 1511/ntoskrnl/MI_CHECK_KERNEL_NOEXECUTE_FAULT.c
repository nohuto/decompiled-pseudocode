/*
 * XREFs of MI_CHECK_KERNEL_NOEXECUTE_FAULT @ 0x140008168
 * Callers:
 *     MiSystemFault @ 0x1400097D0 (MiSystemFault.c)
 *     MiValidFault @ 0x140070910 (MiValidFault.c)
 *     MiRaisedIrqlFault @ 0x140116C70 (MiRaisedIrqlFault.c)
 *     MiLargePageFault @ 0x1401DED84 (MiLargePageFault.c)
 * Callees:
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 */

signed __int64 __fastcall MI_CHECK_KERNEL_NOEXECUTE_FAULT(
        char a1,
        ULONG_PTR a2,
        ULONG_PTR a3,
        signed __int64 a4,
        unsigned int a5)
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
