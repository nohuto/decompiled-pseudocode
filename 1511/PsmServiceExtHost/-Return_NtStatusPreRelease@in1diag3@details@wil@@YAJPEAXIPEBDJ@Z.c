/*
 * XREFs of ?Return_NtStatusPreRelease@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1800531E4
 * Callers:
 *     ?CreatePackageEnergyStateChangeWnfState@AppEnergyUsageManager@@IEAAJXZ @ 0x180024460 (-CreatePackageEnergyStateChangeWnfState@AppEnergyUsageManager@@IEAAJXZ.c)
 *     ?CreateEnergyUsageWnfStates@AppEnergyInformation@@IEAAJPEAUEnergyNotificationStates@@@Z @ 0x180050054 (-CreateEnergyUsageWnfStates@AppEnergyInformation@@IEAAJPEAUEnergyNotificationStates@@@Z.c)
 *     ?PublishWnfStateData@AppEnergyInformation@@IEAAJU_WNF_STATE_NAME@@PEAEK@Z @ 0x18005233C (-PublishWnfStateData@AppEnergyInformation@@IEAAJU_WNF_STATE_NAME@@PEAEK@Z.c)
 *     ?GetRPCClientProcessId@Shared@DevPlat@@YAJPEAK@Z @ 0x180053F5C (-GetRPCClientProcessId@Shared@DevPlat@@YAJPEAK@Z.c)
 * Callees:
 *     ?ReportFailure_NtStatus@details@wil@@YAJPEAXIPEBD110W4FailureType@2@J@Z @ 0x180052DDC (-ReportFailure_NtStatus@details@wil@@YAJPEAXIPEBD110W4FailureType@2@J@Z.c)
 */

__int64 __fastcall wil::details::in1diag3::Return_NtStatusPreRelease(
        wil::details::in1diag3 *this,
        void *a2,
        __int64 a3,
        const char *a4)
{
  __int64 v5; // [rsp+20h] [rbp-28h]
  __int64 v6; // [rsp+30h] [rbp-18h]
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  return wil::details::ReportFailure_NtStatus(
           (__int64)this,
           (unsigned int)a2,
           a3,
           (__int64)a4,
           v5,
           retaddr,
           v6,
           (unsigned int)a4);
}
