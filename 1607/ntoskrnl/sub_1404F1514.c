/*
 * XREFs of sub_1404F1514 @ 0x1404F1514
 * Callers:
 *     ExpTimeRefreshWork @ 0x1403C9110 (ExpTimeRefreshWork.c)
 *     ExUpdateLicenseDataInternal @ 0x140496474 (ExUpdateLicenseDataInternal.c)
 *     ExSetLicenseTamperState @ 0x1406AE220 (ExSetLicenseTamperState.c)
 * Callees:
 *     ExNotifyCallback @ 0x140009D58 (ExNotifyCallback.c)
 */

void sub_1404F1514()
{
  if ( CallbackObject )
    ExNotifyCallback(CallbackObject, 0LL, 0LL);
}
