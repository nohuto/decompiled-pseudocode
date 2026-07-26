/*
 * XREFs of ?reset@?$KPtr@UKString@Rtl@@U?$KDeletePtr@UKString@Rtl@@@@@@QEAAXPEAUKString@Rtl@@@Z @ 0x1C00A0598
 * Callers:
 *     ?ndisBindReadFilterDriverSettingsFromV2Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@AEAVKRegKey@@@Z @ 0x1C009CDC8 (-ndisBindReadFilterDriverSettingsFromV2Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@AEAVKRegKey@@@.c)
 *     ?GetSubkeyName@KRegKey@@QEAAJKAEAV?$KPtr@UKString@Rtl@@U?$KDeletePtr@UKString@Rtl@@@@@@@Z @ 0x1C009D4F8 (-GetSubkeyName@KRegKey@@QEAAJKAEAV-$KPtr@UKString@Rtl@@U-$KDeletePtr@UKString@Rtl@@@@@@@Z.c)
 *     ndisIfReadInterfaceAddDeviceParameters @ 0x1C00AF218 (ndisIfReadInterfaceAddDeviceParameters.c)
 *     ??$QueryValueMultisz@V_lambda_96cc44e42cdf8d0bb97f810167971fd3_@@V_lambda_5efab4a145f888ea93e43ede63b27154_@@@KRegKey@@QEAAJPEBU_UNICODE_STRING@@V_lambda_96cc44e42cdf8d0bb97f810167971fd3_@@V_lambda_5efab4a145f888ea93e43ede63b27154_@@@Z @ 0x1C00B271C (--$QueryValueMultisz@V_lambda_96cc44e42cdf8d0bb97f810167971fd3_@@V_lambda_5efab4a145f888ea93e43e.c)
 *     ?ndisBindReadFilterDriverSettingsFromV1Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@AEAVKRegKey@@@Z @ 0x1C00B3114 (-ndisBindReadFilterDriverSettingsFromV1Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@AEAVKRegKey@@@.c)
 * Callees:
 *     <none>
 */

void __fastcall KPtr<Rtl::KString,KDeletePtr<Rtl::KString>>::reset(void **a1, void *a2)
{
  void *v4; // rcx

  v4 = *a1;
  if ( a2 != v4 )
  {
    if ( v4 )
      ExFreePoolWithTag(v4, 0x7274534Bu);
    *a1 = a2;
  }
}
