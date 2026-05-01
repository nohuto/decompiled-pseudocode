/*
 * XREFs of ?Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C420
 * Callers:
 *     ?RegisterForPackageEnergyStateChangeNotifications@AppEnergyUsageManager@@UEAAJPEAT_LARGE_INTEGER@@@Z @ 0x1800216C0 (-RegisterForPackageEnergyStateChangeNotifications@AppEnergyUsageManager@@UEAAJPEAT_LARGE_INTEGER.c)
 *     ?RuntimeClassInitialize@AppEnergyUsageManager@@QEAAJPEAUIRMExecServicesProvider@ExecutionModel@@@Z @ 0x1800217CC (-RuntimeClassInitialize@AppEnergyUsageManager@@QEAAJPEAUIRMExecServicesProvider@ExecutionModel@@.c)
 *     ?CreateAppEnergyManager@@YAJPEAUIRMExecServicesProvider@ExecutionModel@@PEAPEAUIAppEnergyUsageManager@@@Z @ 0x180021D24 (-CreateAppEnergyManager@@YAJPEAUIRMExecServicesProvider@ExecutionModel@@PEAPEAUIAppEnergyUsageMa.c)
 *     ?CreateEnergyNotificationServer@AppEnergyUsageManager@@IEAAJPEAPEAUIEnergyNotificationServer@@@Z @ 0x180048F60 (-CreateEnergyNotificationServer@AppEnergyUsageManager@@IEAAJPEAPEAUIEnergyNotificationServer@@@Z.c)
 *     ?GetCurrentEnergyUsage@AppEnergyInformation@@IEAAJW4AppEnergyManagerUsageFlags@@PEAK@Z @ 0x18004951C (-GetCurrentEnergyUsage@AppEnergyInformation@@IEAAJW4AppEnergyManagerUsageFlags@@PEAK@Z.c)
 *     ?GetDeviceSpecificConversionFactor@AppEnergyUsageManager@@UEAAJPEAN@Z @ 0x180049680 (-GetDeviceSpecificConversionFactor@AppEnergyUsageManager@@UEAAJPEAN@Z.c)
 *     ?GetEnergyUsage@AppEnergyInformation@@QEAAJW4AppEnergyManagerUsageFlags@@PEAK@Z @ 0x180049714 (-GetEnergyUsage@AppEnergyInformation@@QEAAJW4AppEnergyManagerUsageFlags@@PEAK@Z.c)
 *     ?GetOrCreateEnergyInformation@AppEnergyUsageManager@@IEAAJPEBGPEAV?$ComPtr@VAppEnergyInformation@@@WRL@Microsoft@@@Z @ 0x180049AC8 (-GetOrCreateEnergyInformation@AppEnergyUsageManager@@IEAAJPEBGPEAV-$ComPtr@VAppEnergyInformation.c)
 *     ?GetOrCreateEnergyInformationForUser@AppEnergyInformation@@IEAAJKPEAU_SID@@PEAPEAVAppEnergyInformationForUser@@@Z @ 0x180049C38 (-GetOrCreateEnergyInformationForUser@AppEnergyInformation@@IEAAJKPEAU_SID@@PEAPEAVAppEnergyInfor.c)
 *     ?GetTargetAppDisplayName@EnergyToastMessage@@QEBAJAEAV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@@Z @ 0x180049D80 (-GetTargetAppDisplayName@EnergyToastMessage@@QEBAJAEAV-$basic_string@GU-$char_traits@G@utl@@V-$a.c)
 *     ?GetToastXml@EnergyToastMessage@@QEBAJAEAV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@@Z @ 0x18004A0F0 (-GetToastXml@EnergyToastMessage@@QEBAJAEAV-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2.c)
 *     ?Init@AppEnergyInformationForUser@@QEAAJKPEAX@Z @ 0x18004AB24 (-Init@AppEnergyInformationForUser@@QEAAJKPEAX@Z.c)
 *     ?Init@EnergyToastMessage@@QEAAJPEBG0@Z @ 0x18004ABDC (-Init@EnergyToastMessage@@QEAAJPEBG0@Z.c)
 *     ?OnEnergyConsumed@AppEnergyInformation@@UEAAJKHK@Z @ 0x18004B120 (-OnEnergyConsumed@AppEnergyInformation@@UEAAJKHK@Z.c)
 *     ?OnEnergyConsumedInternal@AppEnergyInformation@@IEAAJKH@Z @ 0x18004B1F8 (-OnEnergyConsumedInternal@AppEnergyInformation@@IEAAJKH@Z.c)
 *     ?PostToast@AppEnergyInformation@@IEAAJKAEBVEnergyToastMessage@@@Z @ 0x18004B2CC (-PostToast@AppEnergyInformation@@IEAAJKAEBVEnergyToastMessage@@@Z.c)
 *     ?QueryApplicationEnergyUsage@AppEnergyUsageManager@@UEAAJPEBGW4AppEnergyManagerUsageFlags@@PEAK@Z @ 0x18004B5F0 (-QueryApplicationEnergyUsage@AppEnergyUsageManager@@UEAAJPEBGW4AppEnergyManagerUsageFlags@@PEAK@.c)
 *     ?QueryEnergyUsageLevels@AppEnergyUsageManager@@UEAAJPEAU_AppEnergyUsageLevels@@@Z @ 0x18004B6C0 (-QueryEnergyUsageLevels@AppEnergyUsageManager@@UEAAJPEAU_AppEnergyUsageLevels@@@Z.c)
 *     ?RaiseToastNotification@AppEnergyInformation@@IEAAJH@Z @ 0x18004B73C (-RaiseToastNotification@AppEnergyInformation@@IEAAJH@Z.c)
 *     ?RegisterForEnergyChangeNotifications@AppEnergyUsageManager@@UEAAJPEBGW4AppEnergyManagerUsageFlags@@PEAT_LARGE_INTEGER@@2@Z @ 0x18004BB90 (-RegisterForEnergyChangeNotifications@AppEnergyUsageManager@@UEAAJPEBGW4AppEnergyManagerUsageFla.c)
 *     ?RegisterForNotifications@AppEnergyInformation@@QEAAJW4AppEnergyManagerUsageFlags@@PEAT_LARGE_INTEGER@@1@Z @ 0x18004BC50 (-RegisterForNotifications@AppEnergyInformation@@QEAAJW4AppEnergyManagerUsageFlags@@PEAT_LARGE_IN.c)
 *     ?ReportNewEnergyUsage@HistoricalEnergyTracker@@QEAAJK@Z @ 0x18004C11C (-ReportNewEnergyUsage@HistoricalEnergyTracker@@QEAAJK@Z.c)
 *     ?ResetTotalEnergyUsage@AppEnergyUsageManager@@UEAAJPEBGW4AppEnergyManagerUsageFlags@@@Z @ 0x18004C2D0 (-ResetTotalEnergyUsage@AppEnergyUsageManager@@UEAAJPEBGW4AppEnergyManagerUsageFlags@@@Z.c)
 *     ?RuntimeClassInitialize@AppEnergyInformation@@QEAAJPEAUIEnergyNotificationServer@@PEAUIRMExecServicesProvider@ExecutionModel@@PEBGU_WNF_STATE_NAME@@@Z @ 0x18004C49C (-RuntimeClassInitialize@AppEnergyInformation@@QEAAJPEAUIEnergyNotificationServer@@PEAUIRMExecSer.c)
 *     ?SendPackageEnergyStateChangeNotification@AppEnergyInformation@@IEAAJW4PackageBackgroundEnergyUsageLevel@@@Z @ 0x18004C5C8 (-SendPackageEnergyStateChangeNotification@AppEnergyInformation@@IEAAJW4PackageBackgroundEnergyUs.c)
 *     ?StartEnergyTracking@AppEnergyInformation@@QEAAJKPEAU_SID@@@Z @ 0x18004C8D4 (-StartEnergyTracking@AppEnergyInformation@@QEAAJKPEAU_SID@@@Z.c)
 *     ?StartTrackingEnergyUsage@AppEnergyUsageManager@@IEAAJPEAGKPEAU_SID@@@Z @ 0x18004CA2C (-StartTrackingEnergyUsage@AppEnergyUsageManager@@IEAAJPEAGKPEAU_SID@@@Z.c)
 *     ?StopEnergyTracking@AppEnergyInformation@@QEAAJKPEAU_SID@@@Z @ 0x18004CACC (-StopEnergyTracking@AppEnergyInformation@@QEAAJKPEAU_SID@@@Z.c)
 *     ?StopTrackingEnergyUsage@AppEnergyUsageManager@@IEAAJPEAGKPEAU_SID@@@Z @ 0x18004CBB8 (-StopTrackingEnergyUsage@AppEnergyUsageManager@@IEAAJPEAGKPEAU_SID@@@Z.c)
 *     ?UnRegisterForEnergyChangeNotifications@AppEnergyUsageManager@@UEAAJPEBGW4AppEnergyManagerUsageFlags@@@Z @ 0x18004CC60 (-UnRegisterForEnergyChangeNotifications@AppEnergyUsageManager@@UEAAJPEBGW4AppEnergyManagerUsageF.c)
 *     ?GetRPCClientProcessId@Shared@DevPlat@@YAJPEAK@Z @ 0x18004D360 (-GetRPCClientProcessId@Shared@DevPlat@@YAJPEAK@Z.c)
 * Callees:
 *     ?ReportFailure_Hr@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J@Z @ 0x18004BFFC (-ReportFailure_Hr@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J@Z.c)
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
