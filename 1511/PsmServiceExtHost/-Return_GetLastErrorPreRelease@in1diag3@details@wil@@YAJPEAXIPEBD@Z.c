/*
 * XREFs of ?Return_GetLastErrorPreRelease@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180053190
 * Callers:
 *     ?GetWorkaroundRpcInterfaceSecurityDescriptor@Shared@DevPlat@@YAJAEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAXP6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x18002293C (-GetWorkaroundRpcInterfaceSecurityDescriptor@Shared@DevPlat@@YAJAEAV-$unique_any_t@V-$unique_sto.c)
 *     ?CreatePackageEnergyStateChangeWnfState@AppEnergyUsageManager@@IEAAJXZ @ 0x180024460 (-CreatePackageEnergyStateChangeWnfState@AppEnergyUsageManager@@IEAAJXZ.c)
 *     ?CreateEnergyNotificationServer@AppEnergyUsageManager@@IEAAJPEAPEAUIEnergyNotificationServer@@@Z @ 0x18004FF0C (-CreateEnergyNotificationServer@AppEnergyUsageManager@@IEAAJPEAPEAUIEnergyNotificationServer@@@Z.c)
 *     ?CreateEnergyUsageWnfStates@AppEnergyInformation@@IEAAJPEAUEnergyNotificationStates@@@Z @ 0x180050054 (-CreateEnergyUsageWnfStates@AppEnergyInformation@@IEAAJPEAUEnergyNotificationStates@@@Z.c)
 *     ?GetWorkaroundAlpcSecurityDescriptor@Shared@DevPlat@@YAJAEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAXP6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x180053D90 (-GetWorkaroundAlpcSecurityDescriptor@Shared@DevPlat@@YAJAEAV-$unique_any_t@V-$unique_storage@U-$.c)
 *     ?GetPackageFullNameFromProcessId@Shared@DevPlat@@YAJKPEAIPEAG@Z @ 0x180054030 (-GetPackageFullNameFromProcessId@Shared@DevPlat@@YAJKPEAIPEAG@Z.c)
 * Callees:
 *     ?ReportFailure_GetLastErrorHr@details@wil@@YAJPEAXIPEBD110W4FailureType@2@@Z @ 0x180052D00 (-ReportFailure_GetLastErrorHr@details@wil@@YAJPEAXIPEBD110W4FailureType@2@@Z.c)
 */

__int64 __fastcall wil::details::in1diag3::Return_GetLastErrorPreRelease(
        wil::details::in1diag3 *this,
        void *a2,
        __int64 a3,
        const char *a4)
{
  __int64 v5; // [rsp+20h] [rbp-28h]
  const char *retaddr; // [rsp+48h] [rbp+0h]

  return wil::details::ReportFailure_GetLastErrorHr(this, a2, a3, a4, v5, retaddr);
}
