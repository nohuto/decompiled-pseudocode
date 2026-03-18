/*
 * XREFs of KiSwInterruptPresent @ 0x14074F4AC
 * Callers:
 *     KeFreeInitializationCode @ 0x14072DA18 (KeFreeInitializationCode.c)
 *     KiFilterFiberContext @ 0x14072DA40 (KiFilterFiberContext.c)
 *     sub_14072EAFC @ 0x14072EAFC (sub_14072EAFC.c)
 * Callees:
 *     HvlQueryVsmConnection @ 0x1401339B8 (HvlQueryVsmConnection.c)
 */

__int64 KiSwInterruptPresent()
{
  __int64 v1; // [rsp+30h] [rbp+8h] BYREF

  return HvlQueryVsmConnection(&v1);
}
