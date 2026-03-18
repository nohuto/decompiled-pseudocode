/*
 * XREFs of HvlSwitchVirtualAddressSpace @ 0x14022153C
 * Callers:
 *     KiStackAttachProcess @ 0x1400A6700 (KiStackAttachProcess.c)
 *     KiDetachProcess @ 0x1400A6A30 (KiDetachProcess.c)
 *     KiLoadDirectoryTableBase @ 0x1400E2B58 (KiLoadDirectoryTableBase.c)
 *     SwapContext @ 0x14015ABD0 (SwapContext.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HvlSwitchVirtualAddressSpace(__int64 a1)
{
  return HvcallCodeVa(65537LL, a1, 0LL);
}
