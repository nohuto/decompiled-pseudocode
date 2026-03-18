/*
 * XREFs of sub_14055D174 @ 0x14055D174
 * Callers:
 *     ExpTimeRefreshWork @ 0x1403F7188 (ExpTimeRefreshWork.c)
 *     ExUpdateLicenseData_0 @ 0x1404D95E0 (ExUpdateLicenseData_0.c)
 *     ExSetLicenseTamperState @ 0x1406EBE90 (ExSetLicenseTamperState.c)
 * Callees:
 *     ExNotifyCallback @ 0x1400EDED0 (ExNotifyCallback.c)
 */

void sub_14055D174()
{
  if ( CallbackObject )
    ExNotifyCallback(CallbackObject, 0LL, 0LL);
}
