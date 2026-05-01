/*
 * XREFs of ?OnPackageStateChanged@AppEnergyUsageManager@@UEAAXPEAGKPEAU_SID@@W4RPPackageState@@@Z @ 0x1800192C0
 * Callers:
 *     ?RecvCallback@HostResources@ExecutionModel@@UEAAXW4RMExecServiceProviderCallbackType@32@PEAXJ@Z @ 0x180018250 (-RecvCallback@HostResources@ExecutionModel@@UEAAXW4RMExecServiceProviderCallbackType@32@PEAXJ@Z.c)
 * Callees:
 *     ?IsEnergyNotificationServerAvailable@AppEnergyUsageManager@@IEAAHXZ @ 0x180019270 (-IsEnergyNotificationServerAvailable@AppEnergyUsageManager@@IEAAHXZ.c)
 *     ?CreateEnergyNotificationServer@AppEnergyUsageManager@@IEAAJPEAPEAUIEnergyNotificationServer@@@Z @ 0x180048F60 (-CreateEnergyNotificationServer@AppEnergyUsageManager@@IEAAJPEAPEAUIEnergyNotificationServer@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIXmlDocument@Dom@Xml@Data@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18004ACE0 (-InternalRelease@-$ComPtr@UIXmlDocument@Dom@Xml@Data@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?StartTrackingEnergyUsage@AppEnergyUsageManager@@IEAAJPEAGKPEAU_SID@@@Z @ 0x18004CA2C (-StartTrackingEnergyUsage@AppEnergyUsageManager@@IEAAJPEAGKPEAU_SID@@@Z.c)
 *     ?StopTrackingEnergyUsage@AppEnergyUsageManager@@IEAAJPEAGKPEAU_SID@@@Z @ 0x18004CBB8 (-StopTrackingEnergyUsage@AppEnergyUsageManager@@IEAAJPEAGKPEAU_SID@@@Z.c)
 */

void __fastcall AppEnergyUsageManager::OnPackageStateChanged(
        __int64 a1,
        unsigned __int16 *a2,
        unsigned int a3,
        struct _SID *a4,
        int a5)
{
  AppEnergyUsageManager *v9; // rcx
  AppEnergyUsageManager *v10; // rcx

  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 80));
  if ( *(_QWORD *)(a1 + 120)
    || (!(unsigned int)AppEnergyUsageManager::IsEnergyNotificationServerAvailable(v9)
     || !*(_DWORD *)(a1 + 152)
     || (Microsoft::WRL::ComPtr<Windows::Data::Xml::Dom::IXmlDocument>::InternalRelease(a1 + 120),
         (int)AppEnergyUsageManager::CreateEnergyNotificationServer(
                v10,
                (struct IEnergyNotificationServer **)(a1 + 120)) >= 0))
    && *(_QWORD *)(a1 + 120) )
  {
    if ( a5 )
    {
      if ( a5 == 1 )
        AppEnergyUsageManager::StopTrackingEnergyUsage((AppEnergyUsageManager *)a1, a2, a3, a4);
    }
    else
    {
      AppEnergyUsageManager::StartTrackingEnergyUsage((AppEnergyUsageManager *)a1, a2, a3, a4);
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 80));
}
