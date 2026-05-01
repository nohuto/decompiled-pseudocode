/*
 * XREFs of ?StartTrackingEnergyUsage@AppEnergyUsageManager@@IEAAJPEAGKPEAU_SID@@@Z @ 0x18004CA2C
 * Callers:
 *     ?OnPackageStateChanged@AppEnergyUsageManager@@UEAAXPEAGKPEAU_SID@@W4RPPackageState@@@Z @ 0x1800192C0 (-OnPackageStateChanged@AppEnergyUsageManager@@UEAAXPEAGKPEAU_SID@@W4RPPackageState@@@Z.c)
 * Callees:
 *     ?GetOrCreateEnergyInformation@AppEnergyUsageManager@@IEAAJPEBGPEAV?$ComPtr@VAppEnergyInformation@@@WRL@Microsoft@@@Z @ 0x180049AC8 (-GetOrCreateEnergyInformation@AppEnergyUsageManager@@IEAAJPEBGPEAV-$ComPtr@VAppEnergyInformation.c)
 *     ?InternalRelease@?$ComPtr@UIXmlDocument@Dom@Xml@Data@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18004ACE0 (-InternalRelease@-$ComPtr@UIXmlDocument@Dom@Xml@Data@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C420 (-Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StartEnergyTracking@AppEnergyInformation@@QEAAJKPEAU_SID@@@Z @ 0x18004C8D4 (-StartEnergyTracking@AppEnergyInformation@@QEAAJKPEAU_SID@@@Z.c)
 */

__int64 __fastcall AppEnergyUsageManager::StartTrackingEnergyUsage(
        AppEnergyUsageManager *this,
        unsigned __int16 *a2,
        unsigned int a3,
        struct _SID *a4)
{
  int EnergyInformation; // eax
  unsigned int v9; // ebx
  __int64 v10; // rdx
  AppEnergyInformation *v12[3]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v12[0] = 0LL;
  Microsoft::WRL::ComPtr<Windows::Data::Xml::Dom::IXmlDocument>::InternalRelease((__int64 *)v12);
  EnergyInformation = AppEnergyUsageManager::GetOrCreateEnergyInformation((__int64)this, (__int64 *)a2, (__int64 **)v12);
  v9 = EnergyInformation;
  if ( EnergyInformation < 0 )
  {
    v10 = 318LL;
LABEL_5:
    wil::details::in1diag3::Return_HrPreRelease(
      retaddr,
      v10,
      (__int64)"base\\appmodel\\resourcepolicy\\appenergymanager\\lib\\appenergymanager.cpp",
      (const char *)(unsigned int)EnergyInformation);
    goto LABEL_6;
  }
  EnergyInformation = AppEnergyInformation::StartEnergyTracking(v12[0], a3, a4);
  v9 = EnergyInformation;
  if ( EnergyInformation < 0 )
  {
    v10 = 321LL;
    goto LABEL_5;
  }
LABEL_6:
  Microsoft::WRL::ComPtr<Windows::Data::Xml::Dom::IXmlDocument>::InternalRelease((__int64 *)v12);
  return v9;
}
