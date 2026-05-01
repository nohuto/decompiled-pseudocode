/*
 * XREFs of ?Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800531B0
 * Callers:
 *     ?StartEnergyTracking@AppEnergyInformation@@QEAAJKPEAU_SID@@@Z @ 0x1800206BC (-StartEnergyTracking@AppEnergyInformation@@QEAAJKPEAU_SID@@@Z.c)
 *     ?CreateAppEnergyManager@@YAJPEAUIRMExecServicesProvider@ExecutionModel@@PEAPEAUIAppEnergyUsageManager@@@Z @ 0x180024288 (-CreateAppEnergyManager@@YAJPEAUIRMExecServicesProvider@ExecutionModel@@PEAPEAUIAppEnergyUsageMa.c)
 *     ?RegisterForPackageEnergyStateChangeNotifications@AppEnergyUsageManager@@UEAAJPEAT_LARGE_INTEGER@@@Z @ 0x180024400 (-RegisterForPackageEnergyStateChangeNotifications@AppEnergyUsageManager@@UEAAJPEAT_LARGE_INTEGER.c)
 *     ?RuntimeClassInitialize@AppEnergyUsageManager@@QEAAJPEAUIRMExecServicesProvider@ExecutionModel@@@Z @ 0x18002450C (-RuntimeClassInitialize@AppEnergyUsageManager@@QEAAJPEAUIRMExecServicesProvider@ExecutionModel@@.c)
 *     ?OnEnergyConsumed@AppEnergyInformation@@UEAAJKHK@Z @ 0x18002A950 (-OnEnergyConsumed@AppEnergyInformation@@UEAAJKHK@Z.c)
 *     ?GetOrCreateEnergyInformationForUser@AppEnergyInformation@@IEAAJKPEAU_SID@@PEAPEAVAppEnergyInformationForUser@@@Z @ 0x1800361E4 (-GetOrCreateEnergyInformationForUser@AppEnergyInformation@@IEAAJKPEAU_SID@@PEAPEAVAppEnergyInfor.c)
 *     ?CreateEnergyNotificationServer@AppEnergyUsageManager@@IEAAJPEAPEAUIEnergyNotificationServer@@@Z @ 0x18004FF0C (-CreateEnergyNotificationServer@AppEnergyUsageManager@@IEAAJPEAPEAUIEnergyNotificationServer@@@Z.c)
 *     ?GetCurrentEnergyUsage@AppEnergyInformation@@IEAAJW4AppEnergyManagerUsageFlags@@PEAK@Z @ 0x18005049C (-GetCurrentEnergyUsage@AppEnergyInformation@@IEAAJW4AppEnergyManagerUsageFlags@@PEAK@Z.c)
 *     ?GetDeviceSpecificConversionFactor@AppEnergyUsageManager@@UEAAJPEAN@Z @ 0x180050600 (-GetDeviceSpecificConversionFactor@AppEnergyUsageManager@@UEAAJPEAN@Z.c)
 *     ?GetEnergyUsage@AppEnergyInformation@@QEAAJW4AppEnergyManagerUsageFlags@@PEAK@Z @ 0x180050694 (-GetEnergyUsage@AppEnergyInformation@@QEAAJW4AppEnergyManagerUsageFlags@@PEAK@Z.c)
 *     ?GetOrCreateEnergyInformation@AppEnergyUsageManager@@IEAAJPEBGPEAV?$ComPtr@VAppEnergyInformation@@@WRL@Microsoft@@@Z @ 0x180050AA0 (-GetOrCreateEnergyInformation@AppEnergyUsageManager@@IEAAJPEBGPEAV-$ComPtr@VAppEnergyInformation.c)
 *     ?GetTargetAppDisplayName@EnergyToastMessage@@QEBAJAEAV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@@Z @ 0x180050C18 (-GetTargetAppDisplayName@EnergyToastMessage@@QEBAJAEAV-$basic_string@GU-$char_traits@G@utl@@V-$a.c)
 *     ?GetToastXml@EnergyToastMessage@@QEBAJAEAV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@@Z @ 0x180050F88 (-GetToastXml@EnergyToastMessage@@QEBAJAEAV-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2.c)
 *     ?Init@AppEnergyInformationForUser@@QEAAJKPEAX@Z @ 0x1800519BC (-Init@AppEnergyInformationForUser@@QEAAJKPEAX@Z.c)
 *     ?Init@EnergyToastMessage@@QEAAJPEBG0@Z @ 0x180051A74 (-Init@EnergyToastMessage@@QEAAJPEBG0@Z.c)
 *     ?OnEnergyConsumedInternal@AppEnergyInformation@@IEAAJKH@Z @ 0x180051F8C (-OnEnergyConsumedInternal@AppEnergyInformation@@IEAAJKH@Z.c)
 *     ?PostToast@AppEnergyInformation@@IEAAJKAEBVEnergyToastMessage@@@Z @ 0x180052060 (-PostToast@AppEnergyInformation@@IEAAJKAEBVEnergyToastMessage@@@Z.c)
 *     ?QueryApplicationEnergyUsage@AppEnergyUsageManager@@UEAAJPEBGW4AppEnergyManagerUsageFlags@@PEAK@Z @ 0x180052380 (-QueryApplicationEnergyUsage@AppEnergyUsageManager@@UEAAJPEBGW4AppEnergyManagerUsageFlags@@PEAK@.c)
 *     ?QueryEnergyUsageLevels@AppEnergyUsageManager@@UEAAJPEAU_AppEnergyUsageLevels@@@Z @ 0x180052450 (-QueryEnergyUsageLevels@AppEnergyUsageManager@@UEAAJPEAU_AppEnergyUsageLevels@@@Z.c)
 *     ?RaiseToastNotification@AppEnergyInformation@@IEAAJH@Z @ 0x1800524CC (-RaiseToastNotification@AppEnergyInformation@@IEAAJH@Z.c)
 *     ?RegisterForEnergyChangeNotifications@AppEnergyUsageManager@@UEAAJPEBGW4AppEnergyManagerUsageFlags@@PEAT_LARGE_INTEGER@@2@Z @ 0x180052920 (-RegisterForEnergyChangeNotifications@AppEnergyUsageManager@@UEAAJPEBGW4AppEnergyManagerUsageFla.c)
 *     ?RegisterForNotifications@AppEnergyInformation@@QEAAJW4AppEnergyManagerUsageFlags@@PEAT_LARGE_INTEGER@@1@Z @ 0x1800529E0 (-RegisterForNotifications@AppEnergyInformation@@QEAAJW4AppEnergyManagerUsageFlags@@PEAT_LARGE_IN.c)
 *     ?ReportNewEnergyUsage@HistoricalEnergyTracker@@QEAAJK@Z @ 0x180052EAC (-ReportNewEnergyUsage@HistoricalEnergyTracker@@QEAAJK@Z.c)
 *     ?ResetTotalEnergyUsage@AppEnergyUsageManager@@UEAAJPEBGW4AppEnergyManagerUsageFlags@@@Z @ 0x180053060 (-ResetTotalEnergyUsage@AppEnergyUsageManager@@UEAAJPEBGW4AppEnergyManagerUsageFlags@@@Z.c)
 *     ?RuntimeClassInitialize@AppEnergyInformation@@QEAAJPEAUIEnergyNotificationServer@@PEAUIRMExecServicesProvider@ExecutionModel@@PEBGU_WNF_STATE_NAME@@@Z @ 0x18005322C (-RuntimeClassInitialize@AppEnergyInformation@@QEAAJPEAUIEnergyNotificationServer@@PEAUIRMExecSer.c)
 *     ?SendPackageEnergyStateChangeNotification@AppEnergyInformation@@IEAAJW4PackageBackgroundEnergyUsageLevel@@@Z @ 0x1800532F8 (-SendPackageEnergyStateChangeNotification@AppEnergyInformation@@IEAAJW4PackageBackgroundEnergyUs.c)
 *     ?StartTrackingEnergyUsage@AppEnergyUsageManager@@IEAAJPEAGKPEAU_SID@@@Z @ 0x180053604 (-StartTrackingEnergyUsage@AppEnergyUsageManager@@IEAAJPEAGKPEAU_SID@@@Z.c)
 *     ?StopEnergyTracking@AppEnergyInformation@@QEAAJKPEAU_SID@@@Z @ 0x1800536A4 (-StopEnergyTracking@AppEnergyInformation@@QEAAJKPEAU_SID@@@Z.c)
 *     ?StopTrackingEnergyUsage@AppEnergyUsageManager@@IEAAJPEAGKPEAU_SID@@@Z @ 0x180053790 (-StopTrackingEnergyUsage@AppEnergyUsageManager@@IEAAJPEAGKPEAU_SID@@@Z.c)
 *     ?UnRegisterForEnergyChangeNotifications@AppEnergyUsageManager@@UEAAJPEBGW4AppEnergyManagerUsageFlags@@@Z @ 0x180053840 (-UnRegisterForEnergyChangeNotifications@AppEnergyUsageManager@@UEAAJPEBGW4AppEnergyManagerUsageF.c)
 *     ?GetRPCClientProcessId@Shared@DevPlat@@YAJPEAK@Z @ 0x180053F5C (-GetRPCClientProcessId@Shared@DevPlat@@YAJPEAK@Z.c)
 * Callees:
 *     ?ReportFailure_Hr@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J@Z @ 0x180052D8C (-ReportFailure_Hr@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J@Z.c)
 */

void __fastcall wil::details::in1diag3::Return_HrPreRelease(
        wil::details::in1diag3 *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  wil::details::ReportFailure_Hr((__int64)this, a2, a3, 0LL, 0LL, retaddr, 2, (unsigned int)a4);
}
