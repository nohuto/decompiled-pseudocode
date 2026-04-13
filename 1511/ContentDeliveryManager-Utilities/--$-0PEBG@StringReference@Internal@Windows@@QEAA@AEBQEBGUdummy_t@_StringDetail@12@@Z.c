/*
 * XREFs of ??$?0PEBG@StringReference@Internal@Windows@@QEAA@AEBQEBGUdummy_t@_StringDetail@12@@Z @ 0x180018ABC
 * Callers:
 *     ?OpenAndValidateConnection@ContentManagement@@YAJPEAPEAUIAppServiceConnection@AppService@ApplicationModel@Windows@@@Z @ 0x18000E048 (-OpenAndValidateConnection@ContentManagement@@YAJPEAPEAUIAppServiceConnection@AppService@Applica.c)
 *     ?ProcessCreativeEventUriAsync@ContentManagementService@ContentManagement@@UEAAJW4CreativeEventType@2@PEAUHSTRING__@@PEAU?$ITypedEventHandler@PEAUIInspectable@@PEAUHSTRING__@@@Foundation@Windows@@PEAUICreativeEventReportedCache@2@PEAPEAUIAsyncAction@67@@Z @ 0x18000F150 (-ProcessCreativeEventUriAsync@ContentManagementService@ContentManagement@@UEAAJW4CreativeEventTy.c)
 *     ?GetUint64FromSetting@ContentManagement@@YAJPEAUIPropertySet@Collections@Foundation@Windows@@PEBGPEA_K@Z @ 0x180010654 (-GetUint64FromSetting@ContentManagement@@YAJPEAUIPropertySet@Collections@Foundation@Windows@@PEB.c)
 *     ?GetStringFromSetting@ContentManagement@@YAJPEAUIPropertySet@Collections@Foundation@Windows@@PEBGPEAPEAUHSTRING__@@@Z @ 0x18001082C (-GetStringFromSetting@ContentManagement@@YAJPEAUIPropertySet@Collections@Foundation@Windows@@PEB.c)
 *     ?HasKey@ContentManagement@@YAJPEAUIPropertySet@Collections@Foundation@Windows@@PEBGPEAE@Z @ 0x180010A20 (-HasKey@ContentManagement@@YAJPEAUIPropertySet@Collections@Foundation@Windows@@PEBGPEAE@Z.c)
 *     ?SetUInt64@ContentManagement@@YAJPEAUIPropertySet@Collections@Foundation@Windows@@PEBG_K@Z @ 0x180010B30 (-SetUInt64@ContentManagement@@YAJPEAUIPropertySet@Collections@Foundation@Windows@@PEBG_K@Z.c)
 *     ?SetString@ContentManagement@@YAJPEAUIPropertySet@Collections@Foundation@Windows@@PEBGPEAUHSTRING__@@@Z @ 0x180010D60 (-SetString@ContentManagement@@YAJPEAUIPropertySet@Collections@Foundation@Windows@@PEBGPEAUHSTRIN.c)
 *     ?GetSettingsContainer@ContentManagement@@YAJPEAPEAUIApplicationDataContainer@Storage@Windows@@@Z @ 0x180010FAC (-GetSettingsContainer@ContentManagement@@YAJPEAPEAUIApplicationDataContainer@Storage@Windows@@@Z.c)
 *     ?IsEventReported@AppContainerCreativeEventReportedCache@ContentManagement@@UEAAJPEAUHSTRING__@@W4CreativeEventType@2@PEAE@Z @ 0x180011410 (-IsEventReported@AppContainerCreativeEventReportedCache@ContentManagement@@UEAAJPEAUHSTRING__@@W.c)
 *     ?SetEventReported@AppContainerCreativeEventReportedCache@ContentManagement@@UEAAJPEAUHSTRING__@@W4CreativeEventType@2@@Z @ 0x180011740 (-SetEventReported@AppContainerCreativeEventReportedCache@ContentManagement@@UEAAJPEAUHSTRING__@@.c)
 *     ?IsReportedEventExpired@AppContainerCreativeEventReportedCache@ContentManagement@@UEAAJPEAUHSTRING__@@W4CreativeEventType@2@PEAE@Z @ 0x180011B40 (-IsReportedEventExpired@AppContainerCreativeEventReportedCache@ContentManagement@@UEAAJPEAUHSTRI.c)
 *     ?Parse@CreativeEventUriParser@LaunchCreativeHelpers@CreativeFramework@@QEAAJPEBG@Z @ 0x1800221D4 (-Parse@CreativeEventUriParser@LaunchCreativeHelpers@CreativeFramework@@QEAAJPEBG@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Internal::StringReference::StringReference(__int64 a1, const WCHAR **a2)
{
  const WCHAR *v2; // rsi
  unsigned __int64 v4; // rbx

  v2 = *a2;
  v4 = -1LL;
  do
    ++v4;
  while ( v2[v4] );
  if ( v4 > 0xFFFFFFFF )
  {
    LODWORD(v4) = -1;
    RaiseException(0xC000000D, 1u, 0, 0LL);
  }
  WindowsCreateStringReference(v2, v4, (HSTRING_HEADER *)(a1 + 8), (HSTRING *)a1);
  return a1;
}
