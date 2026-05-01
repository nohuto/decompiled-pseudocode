/*
 * XREFs of ?Return_GetLastErrorPreRelease@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18004C400
 * Callers:
 *     ?CreatePackageEnergyStateChangeWnfState@AppEnergyUsageManager@@IEAAJXZ @ 0x180021720 (-CreatePackageEnergyStateChangeWnfState@AppEnergyUsageManager@@IEAAJXZ.c)
 *     ?GetWorkaroundRpcInterfaceSecurityDescriptor@Shared@DevPlat@@YAJAEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAXP6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x180022D3C (-GetWorkaroundRpcInterfaceSecurityDescriptor@Shared@DevPlat@@YAJAEAV-$unique_any_t@V-$unique_sto.c)
 *     ?CreateEnergyNotificationServer@AppEnergyUsageManager@@IEAAJPEAPEAUIEnergyNotificationServer@@@Z @ 0x180048F60 (-CreateEnergyNotificationServer@AppEnergyUsageManager@@IEAAJPEAPEAUIEnergyNotificationServer@@@Z.c)
 *     ?CreateEnergyUsageWnfStates@AppEnergyInformation@@IEAAJPEAUEnergyNotificationStates@@@Z @ 0x1800490A8 (-CreateEnergyUsageWnfStates@AppEnergyInformation@@IEAAJPEAUEnergyNotificationStates@@@Z.c)
 *     ?GetWorkaroundAlpcSecurityDescriptor@Shared@DevPlat@@YAJAEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAXP6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x18004D194 (-GetWorkaroundAlpcSecurityDescriptor@Shared@DevPlat@@YAJAEAV-$unique_any_t@V-$unique_storage@U-$.c)
 *     ?GetPackageFullNameFromProcessId@Shared@DevPlat@@YAJKPEAIPEAG@Z @ 0x18004D434 (-GetPackageFullNameFromProcessId@Shared@DevPlat@@YAJKPEAIPEAG@Z.c)
 * Callees:
 *     ?ReportFailure_GetLastErrorHr@details@wil@@YAJPEAXIPEBD110W4FailureType@2@@Z @ 0x18004BF70 (-ReportFailure_GetLastErrorHr@details@wil@@YAJPEAXIPEBD110W4FailureType@2@@Z.c)
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
