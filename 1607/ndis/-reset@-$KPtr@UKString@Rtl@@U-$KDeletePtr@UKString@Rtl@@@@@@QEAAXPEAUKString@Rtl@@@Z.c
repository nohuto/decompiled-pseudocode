/*
 * XREFs of ?reset@?$KPtr@UKString@Rtl@@U?$KDeletePtr@UKString@Rtl@@@@@@QEAAXPEAUKString@Rtl@@@Z @ 0x1C00A80D4
 * Callers:
 *     ?ndisBindGetProtocolDriver@@YA?AV?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@PEAU_UNICODE_STRING@@_N@Z @ 0x1C00A3EB4 (-ndisBindGetProtocolDriver@@YA-AV-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@PEAU_UNICODE_STRING@@_N@Z.c)
 *     ?ndisBindReadFilterDriverSettingsFromV2Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@AEAVKRegKey@@@Z @ 0x1C00A744C (-ndisBindReadFilterDriverSettingsFromV2Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@AEAVKRegKey@@@.c)
 *     ?QueryValueString@KRegKey@@QEAAJPEBU_UNICODE_STRING@@AEAV?$KPtr@UKString@Rtl@@U?$KDeletePtr@UKString@Rtl@@@@@@@Z @ 0x1C00A7BEC (-QueryValueString@KRegKey@@QEAAJPEBU_UNICODE_STRING@@AEAV-$KPtr@UKString@Rtl@@U-$KDeletePtr@UKSt.c)
 *     ?GetSubkeyName@KRegKey@@QEAAJKAEAV?$KPtr@UKString@Rtl@@U?$KDeletePtr@UKString@Rtl@@@@@@@Z @ 0x1C00A7F90 (-GetSubkeyName@KRegKey@@QEAAJKAEAV-$KPtr@UKString@Rtl@@U-$KDeletePtr@UKString@Rtl@@@@@@@Z.c)
 *     ??4?$KPtr@UKString@Rtl@@U?$KDeletePtr@UKString@Rtl@@@@@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C00A810C (--4-$KPtr@UKString@Rtl@@U-$KDeletePtr@UKString@Rtl@@@@@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ndisIfReadInterfaceAddDeviceParameters @ 0x1C00AAE98 (ndisIfReadInterfaceAddDeviceParameters.c)
 *     ??$QueryValueMultisz@V_lambda_ab37ff936e37ec89cf58545827f832d7_@@V_lambda_b9d9cb4442cf1f3c11bfda5894fd36a4_@@@KRegKey@@QEAAJPEBU_UNICODE_STRING@@V_lambda_ab37ff936e37ec89cf58545827f832d7_@@V_lambda_b9d9cb4442cf1f3c11bfda5894fd36a4_@@@Z @ 0x1C00D1D44 (--$QueryValueMultisz@V_lambda_ab37ff936e37ec89cf58545827f832d7_@@V_lambda_b9d9cb444_ea_1C00D1D44.c)
 *     ?ndisBindReadFilterDriverSettingsFromV1Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@AEAVKRegKey@@@Z @ 0x1C00E2D30 (-ndisBindReadFilterDriverSettingsFromV1Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@AEAVKRegKey@@@.c)
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C00E93B4 (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
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
