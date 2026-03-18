/*
 * XREFs of RIMGetPointerInputType @ 0x1C00D4A84
 * Callers:
 *     rimAbIsPointerSuppressedByOtherDeviceContacts @ 0x1C00D0C3C (rimAbIsPointerSuppressedByOtherDeviceContacts.c)
 *     rimAbShouldButtonContactBeSuppressed @ 0x1C00D0F30 (rimAbShouldButtonContactBeSuppressed.c)
 *     rimAbSuppressLowerRankActivityForFrame @ 0x1C00D1040 (rimAbSuppressLowerRankActivityForFrame.c)
 *     RIMUpdatePrimaryDevice @ 0x1C00D4B8C (RIMUpdatePrimaryDevice.c)
 *     RIMUpdatePrimaryAndFinalizePointerFlags @ 0x1C00DBA60 (RIMUpdatePrimaryAndFinalizePointerFlags.c)
 *     rimDoProcessAnyPointerDeviceInput @ 0x1C00DC28C (rimDoProcessAnyPointerDeviceInput.c)
 *     rimProcessPointerDeviceButtonContact @ 0x1C00DDFEC (rimProcessPointerDeviceButtonContact.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0010310 (WPP_RECORDER_SF_q.c)
 */

__int64 __fastcall RIMGetPointerInputType(__int64 a1)
{
  int v1; // edx

  v1 = *(_DWORD *)(a1 + 24);
  if ( (unsigned int)(v1 - 1) <= 3 )
    return 2LL;
  if ( (unsigned int)(v1 - 5) <= 1 )
    return 3LL;
  if ( v1 == 7 )
    return 5LL;
  WPP_RECORDER_SF_q(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    3u,
    0xAu,
    (__int64)&WPP_5b4e58945ecf306c06c1bbe0f8341904_Traceguids,
    a1);
  return 1LL;
}
