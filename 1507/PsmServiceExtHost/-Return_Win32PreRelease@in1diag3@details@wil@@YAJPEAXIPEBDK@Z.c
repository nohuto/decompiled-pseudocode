/*
 * XREFs of ?Return_Win32PreRelease@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x18004C478
 * Callers:
 *     ?CreateEnergyNotificationServer@AppEnergyUsageManager@@IEAAJPEAPEAUIEnergyNotificationServer@@@Z @ 0x180048F60 (-CreateEnergyNotificationServer@AppEnergyUsageManager@@IEAAJPEAPEAUIEnergyNotificationServer@@@Z.c)
 *     ?GetPackageFullNameFromProcessId@Shared@DevPlat@@YAJKPEAIPEAG@Z @ 0x18004D434 (-GetPackageFullNameFromProcessId@Shared@DevPlat@@YAJKPEAIPEAG@Z.c)
 * Callees:
 *     ?ReportFailure_Win32@details@wil@@YAJPEAXIPEBD110W4FailureType@2@K@Z @ 0x18004C0C4 (-ReportFailure_Win32@details@wil@@YAJPEAXIPEBD110W4FailureType@2@K@Z.c)
 */

__int64 __fastcall wil::details::in1diag3::Return_Win32PreRelease(
        wil::details::in1diag3 *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  __int64 v5; // [rsp+20h] [rbp-28h]
  __int64 v6; // [rsp+30h] [rbp-18h]
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  return wil::details::ReportFailure_Win32((__int64)this, a2, a3, (__int64)a4, v5, retaddr, v6, (int)a4);
}
