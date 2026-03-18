/*
 * XREFs of sub_1404886E8 @ 0x1404886E8
 * Callers:
 *     ExpTimeRefreshWork @ 0x1403A6F68 (ExpTimeRefreshWork.c)
 *     ExUpdateLicenseData_0 @ 0x140488840 (ExUpdateLicenseData_0.c)
 *     ExSetLicenseTamperState @ 0x140668914 (ExSetLicenseTamperState.c)
 * Callees:
 *     ExNotifyCallback @ 0x140092004 (ExNotifyCallback.c)
 */

void sub_1404886E8()
{
  if ( CallbackObject )
    ExNotifyCallback(CallbackObject, 0LL, 0LL);
}
