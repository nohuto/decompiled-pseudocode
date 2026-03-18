/*
 * XREFs of HUBMISC_GenerateUserNotificationForPersistentOverCurrent @ 0x1C0069398
 * Callers:
 *     HUBPSM20_NotifyingUserAboutPersistentOverCurrent @ 0x1C000D8A0 (HUBPSM20_NotifyingUserAboutPersistentOverCurrent.c)
 * Callees:
 *     WPP_RECORDER_SF_qqd @ 0x1C000B890 (WPP_RECORDER_SF_qqd.c)
 *     WMI_FireNotification @ 0x1C006F90C (WMI_FireNotification.c)
 */

__int64 __fastcall HUBMISC_GenerateUserNotificationForPersistentOverCurrent(__int64 a1)
{
  int v3; // [rsp+38h] [rbp-10h]

  _InterlockedOr((volatile signed __int32 *)(a1 + 1336), 4u);
  v3 = *(unsigned __int16 *)(a1 + 200);
  WPP_RECORDER_SF_qqd(
    *(_QWORD *)(a1 + 1432),
    2u,
    4u,
    0x66u,
    (__int64)&WPP_869fbaf8a3d1cd509c2dba31f5510baf_Traceguids,
    *(_QWORD *)a1,
    a1,
    v3);
  return WMI_FireNotification(*(_QWORD *)a1, *(unsigned __int16 *)(a1 + 200), 3LL);
}
