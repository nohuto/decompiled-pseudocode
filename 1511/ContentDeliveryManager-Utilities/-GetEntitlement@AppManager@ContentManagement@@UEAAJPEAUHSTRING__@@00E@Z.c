/*
 * XREFs of ?GetEntitlement@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@00E@Z @ 0x1800034D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800025D4 (-Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetEntitlementInternal@AppManager@ContentManagement@@AEAAJPEAUHSTRING__@@00EPEAPEAUIAppData@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@Z @ 0x1800037B8 (-GetEntitlementInternal@AppManager@ContentManagement@@AEAAJPEAUHSTRING__@@00EPEAPEAUIAppData@Int.c)
 *     ?_Add_vtordisp2@?$basic_ios@GU?$char_traits@G@std@@@std@@UEAAXXZ @ 0x18000B1C0 (-_Add_vtordisp2@-$basic_ios@GU-$char_traits@G@std@@@std@@UEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ContentManagement::AppManager::GetEntitlement(
        ContentManagement::AppManager *this,
        HSTRING a2,
        HSTRING a3,
        HSTRING a4,
        unsigned __int8 a5)
{
  int EntitlementInternal; // eax
  unsigned int v6; // esi
  struct Windows::ApplicationModel::Store::Preview::InstallControl::Internal::IAppData *v8[3]; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v8[1] = (struct Windows::ApplicationModel::Store::Preview::InstallControl::Internal::IAppData *)-2LL;
  v8[0] = 0LL;
  EntitlementInternal = ContentManagement::AppManager::GetEntitlementInternal(this, a2, a3, a4, a5, v8);
  v6 = EntitlementInternal;
  if ( EntitlementInternal >= 0 )
    v6 = 0;
  else
    wil::details::in1diag3::Return_HrPreRelease(
      retaddr,
      59LL,
      (__int64)"shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)EntitlementInternal);
  if ( v8[0] )
    (*(void (__fastcall **)(struct Windows::ApplicationModel::Store::Preview::InstallControl::Internal::IAppData *))(*(_QWORD *)v8[0] + 16LL))(v8[0]);
  return v6;
}
