/*
 * XREFs of MiCheckPhysicalAddressRange @ 0x140147790
 * Callers:
 *     MiDbgTranslatePhysicalAddress @ 0x140147634 (MiDbgTranslatePhysicalAddress.c)
 *     MmCopyMemory @ 0x1401E5000 (MmCopyMemory.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiCheckPhysicalAddressRange(unsigned __int64 a1, __int64 a2)
{
  __int64 v2; // r8

  v2 = a1 + a2;
  return a1 + a2 > a1
      && (!KiMtrrMaskBase || ((v2 - 1) & 0xFFFFFFFFFFFFF000uLL) <= KiMtrrMaskBase)
      && (KeGetCurrentPrcb()->CpuVendor != 1 || (unsigned __int64)(v2 - 1) < 0xFD00000000LL || a1 > 0xFFFFFFFFFFLL);
}
