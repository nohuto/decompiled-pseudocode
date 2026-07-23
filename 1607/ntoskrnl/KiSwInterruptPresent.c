/*
 * XREFs of KiSwInterruptPresent @ 0x1407BD344
 * Callers:
 *     KeFreeInitializationCode @ 0x140777A58 (KeFreeInitializationCode.c)
 *     KiFilterFiberContext @ 0x140777A80 (KiFilterFiberContext.c)
 *     sub_140778D9C @ 0x140778D9C (sub_140778D9C.c)
 * Callees:
 *     HvlQueryVsmConnection @ 0x1400A8750 (HvlQueryVsmConnection.c)
 */

__int64 KiSwInterruptPresent()
{
  return HvlQueryVsmConnection(0LL) == 0 ? 0xC0000001 : 0;
}
