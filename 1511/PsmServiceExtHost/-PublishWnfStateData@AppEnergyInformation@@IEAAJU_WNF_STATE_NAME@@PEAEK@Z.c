/*
 * XREFs of ?PublishWnfStateData@AppEnergyInformation@@IEAAJU_WNF_STATE_NAME@@PEAEK@Z @ 0x18005233C
 * Callers:
 *     ?FireAppEnergyChangeNotificationsIfRequired@AppEnergyInformation@@IEAAXHKK@Z @ 0x180050254 (-FireAppEnergyChangeNotificationsIfRequired@AppEnergyInformation@@IEAAXHKK@Z.c)
 *     ?SendPackageEnergyStateChangeNotification@AppEnergyInformation@@IEAAJW4PackageBackgroundEnergyUsageLevel@@@Z @ 0x1800532F8 (-SendPackageEnergyStateChangeNotification@AppEnergyInformation@@IEAAJW4PackageBackgroundEnergyUs.c)
 * Callees:
 *     ?Return_NtStatusPreRelease@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1800531E4 (-Return_NtStatusPreRelease@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall AppEnergyInformation::PublishWnfStateData(
        AppEnergyInformation *this,
        struct _WNF_STATE_NAME a2,
        unsigned __int8 *a3,
        __int64 a4)
{
  int v4; // eax
  int v6; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))RtlPublishWnfStateData)(a2, 0LL, a3, a4, 0LL);
  if ( v4 >= 0 )
    return 0LL;
  else
    return wil::details::in1diag3::Return_NtStatusPreRelease(
             retaddr,
             (void *)0x54B,
             (unsigned int)"base\\appmodel\\resourcepolicy\\appenergymanager\\lib\\appenergymanager.cpp",
             (const char *)(unsigned int)v4,
             v6);
}
