/*
 * XREFs of sub_1404D3608 @ 0x1404D3608
 * Callers:
 *     ExpTimeRefreshWork @ 0x1403C9110 (ExpTimeRefreshWork.c)
 *     ExUpdateLicenseDataInternal @ 0x140496F04 (ExUpdateLicenseDataInternal.c)
 *     ExSetLicenseTamperState @ 0x1406AE358 (ExSetLicenseTamperState.c)
 * Callees:
 *     ExNotifyCallback @ 0x1400098D8 (ExNotifyCallback.c)
 */

void sub_1404D3608()
{
  if ( CallbackObject )
    ExNotifyCallback(CallbackObject, 0LL, 0LL);
}
