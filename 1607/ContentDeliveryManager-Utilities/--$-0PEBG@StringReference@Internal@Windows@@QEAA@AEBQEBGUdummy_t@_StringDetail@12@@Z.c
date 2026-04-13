/*
 * XREFs of ??$?0PEBG@StringReference@Internal@Windows@@QEAA@AEBQEBGUdummy_t@_StringDetail@12@@Z @ 0x1800298AC
 * Callers:
 *     ?OpenAndValidateConnection@ContentManagement@@YAJPEAPEAUIAppServiceConnection@AppService@ApplicationModel@Windows@@@Z @ 0x18001F0E0 (-OpenAndValidateConnection@ContentManagement@@YAJPEAPEAUIAppServiceConnection@AppService@Applica.c)
 *     ?ProcessCreativeEventUriAsync@ContentManagementService@ContentManagement@@UEAAJW4CreativeEventType@2@PEAUHSTRING__@@PEAU?$ITypedEventHandler@PEAUIInspectable@@PEAUHSTRING__@@@Foundation@Windows@@PEAUICreativeEventReportedCache@2@PEAPEAUIAsyncAction@67@@Z @ 0x18001FF60 (-ProcessCreativeEventUriAsync@ContentManagementService@ContentManagement@@UEAAJW4CreativeEventTy.c)
 *     ?GetUint64FromSetting@ContentManagement@@YAJPEAUIPropertySet@Collections@Foundation@Windows@@PEBGPEA_K@Z @ 0x1800214B8 (-GetUint64FromSetting@ContentManagement@@YAJPEAUIPropertySet@Collections@Foundation@Windows@@PEB.c)
 *     ?GetStringFromSetting@ContentManagement@@YAJPEAUIPropertySet@Collections@Foundation@Windows@@PEBGPEAPEAUHSTRING__@@@Z @ 0x180021660 (-GetStringFromSetting@ContentManagement@@YAJPEAUIPropertySet@Collections@Foundation@Windows@@PEB.c)
 *     ?HasKey@ContentManagement@@YAJPEAUIPropertySet@Collections@Foundation@Windows@@PEBGPEAE@Z @ 0x180021814 (-HasKey@ContentManagement@@YAJPEAUIPropertySet@Collections@Foundation@Windows@@PEBGPEAE@Z.c)
 *     ?SetUInt64@ContentManagement@@YAJPEAUIPropertySet@Collections@Foundation@Windows@@PEBG_K@Z @ 0x180021900 (-SetUInt64@ContentManagement@@YAJPEAUIPropertySet@Collections@Foundation@Windows@@PEBG_K@Z.c)
 *     ?SetString@ContentManagement@@YAJPEAUIPropertySet@Collections@Foundation@Windows@@PEBGPEAUHSTRING__@@@Z @ 0x180021B04 (-SetString@ContentManagement@@YAJPEAUIPropertySet@Collections@Foundation@Windows@@PEBGPEAUHSTRIN.c)
 *     ?GetSettingsContainer@ContentManagement@@YAJPEAPEAUIApplicationDataContainer@Storage@Windows@@@Z @ 0x180021D10 (-GetSettingsContainer@ContentManagement@@YAJPEAPEAUIApplicationDataContainer@Storage@Windows@@@Z.c)
 *     ?IsEventReported@AppContainerCreativeEventReportedCache@ContentManagement@@UEAAJPEAUHSTRING__@@W4CreativeEventType@2@0PEAE@Z @ 0x1800220F0 (-IsEventReported@AppContainerCreativeEventReportedCache@ContentManagement@@UEAAJPEAUHSTRING__@@W.c)
 *     ?SetEventReported@AppContainerCreativeEventReportedCache@ContentManagement@@UEAAJPEAUHSTRING__@@W4CreativeEventType@2@0@Z @ 0x1800223F0 (-SetEventReported@AppContainerCreativeEventReportedCache@ContentManagement@@UEAAJPEAUHSTRING__@@.c)
 *     ?IsReportedEventExpired@AppContainerCreativeEventReportedCache@ContentManagement@@UEAAJPEAUHSTRING__@@W4CreativeEventType@2@0PEAE@Z @ 0x1800227B0 (-IsReportedEventExpired@AppContainerCreativeEventReportedCache@ContentManagement@@UEAAJPEAUHSTRI.c)
 *     ?GetSubscriptionContext@SubscribedContentStore@CreativeFramework@@YA?AV?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@2@@std@@PEBG@Z @ 0x180032E4C (-GetSubscriptionContext@SubscribedContentStore@CreativeFramework@@YA-AV-$map@V-$basic_string@GU-.c)
 *     ?ActivateSubscriptionIfInactive@SubscribedContentStore@CreativeFramework@@YAXPEBGAEBV?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@2@@std@@PEAW4SubscriptionActivationFlags@12@@Z @ 0x180033668 (-ActivateSubscriptionIfInactive@SubscribedContentStore@CreativeFramework@@YAXPEBGAEBV-$map@V-$ba.c)
 *     ?Parse@CreativeEventUriParser@LaunchCreativeHelpers@CreativeFramework@@QEAAJPEBG@Z @ 0x18003A1D4 (-Parse@CreativeEventUriParser@LaunchCreativeHelpers@CreativeFramework@@QEAAJPEBG@Z.c)
 *     ?AttemptCreateAppServiceConnection@TargetedContent@ContentManagement@@YAJPEBG0IAEAVOpenSubscribedContentFromAppServiceActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@PEAPEAUIAppServiceConnection@AppService@ApplicationModel@Windows@@PEAW4AppServiceConnectionStatus@89Windows@@@Z @ 0x18003EB78 (-AttemptCreateAppServiceConnection@TargetedContent@ContentManagement@@YAJPEBG0IAEAVOpenSubscribe.c)
 *     ?AttemptSendAppServiceAndWaitForResponse@TargetedContent@ContentManagement@@YAJW4SubscribedContentRequestType@12@PEAUHSTRING__@@1PEAUIAppServiceConnection@AppService@ApplicationModel@Windows@@IAEAVRequestSubscribedContentFromAppServiceActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@PEAPEAUIAppServiceResponse@678@PEAW4AppServiceResponseStatus@678@@Z @ 0x18003EF0C (-AttemptSendAppServiceAndWaitForResponse@TargetedContent@ContentManagement@@YAJW4SubscribedConte.c)
 *     ?CollectionFromAppServiceResponse@TargetedContent@ContentManagement@@YA?AV?$ComPtr@UITargetedContentCollection@TargetedContent@ContentManagement@@@WRL@Microsoft@@PEAUIAppServiceResponse@AppService@ApplicationModel@Windows@@@Z @ 0x18003F438 (-CollectionFromAppServiceResponse@TargetedContent@ContentManagement@@YA-AV-$ComPtr@UITargetedCon.c)
 *     ?TryGetMatchingEventTokenForInteractionName@TargetedContent@ContentManagement@@YA_NPEBGPEAUIJsonObject@Json@Data@Windows@@PEAPEAUHSTRING__@@@Z @ 0x180048F14 (-TryGetMatchingEventTokenForInteractionName@TargetedContent@ContentManagement@@YA_NPEBGPEAUIJson.c)
 *     ?TryReportInteraction@TargetedContent@ContentManagement@@YAXW4TargetedContentInteraction@12@_NPEAUHSTRING__@@22PEAUIJsonObject@Json@Data@Windows@@@Z @ 0x180049274 (-TryReportInteraction@TargetedContent@ContentManagement@@YAXW4TargetedContentInteraction@12@_NPE.c)
 *     ?RuntimeClassInitialize@ContentCollectionImpl@TargetedContent@ContentManagement@@QEAAJPEAUHSTRING__@@0PEAUIJsonObject@Json@Data@Windows@@PEAI@Z @ 0x180049634 (-RuntimeClassInitialize@ContentCollectionImpl@TargetedContent@ContentManagement@@QEAAJPEAUHSTRIN.c)
 *     ?RuntimeClassInitialize@ContentItemImpl@TargetedContent@ContentManagement@@QEAAJPEAUHSTRING__@@0PEAUIJsonObject@Json@Data@Windows@@PEAI@Z @ 0x180049B54 (-RuntimeClassInitialize@ContentItemImpl@TargetedContent@ContentManagement@@QEAAJPEAUHSTRING__@@0.c)
 *     ?StringContentValueFromJson@TargetedContent@ContentManagement@@YA?AV?$ComPtr@VContentValueImpl@TargetedContent@ContentManagement@@@WRL@Microsoft@@PEAUIJsonObject@Json@Data@Windows@@@Z @ 0x18004A834 (-StringContentValueFromJson@TargetedContent@ContentManagement@@YA-AV-$ComPtr@VContentValueImpl@T.c)
 *     ?BooleanContentValueFromJson@TargetedContent@ContentManagement@@YA?AV?$ComPtr@VContentValueImpl@TargetedContent@ContentManagement@@@WRL@Microsoft@@PEAUIJsonObject@Json@Data@Windows@@@Z @ 0x18004A978 (-BooleanContentValueFromJson@TargetedContent@ContentManagement@@YA-AV-$ComPtr@VContentValueImpl@.c)
 *     ?UriContentValueFromJson@TargetedContent@ContentManagement@@YA?AV?$ComPtr@VContentValueImpl@TargetedContent@ContentManagement@@@WRL@Microsoft@@PEAUIJsonObject@Json@Data@Windows@@@Z @ 0x18004AA84 (-UriContentValueFromJson@TargetedContent@ContentManagement@@YA-AV-$ComPtr@VContentValueImpl@Targ.c)
 *     ?NumericContentValueFromJson@TargetedContent@ContentManagement@@YA?AV?$ComPtr@VContentValueImpl@TargetedContent@ContentManagement@@@WRL@Microsoft@@PEAUIJsonObject@Json@Data@Windows@@@Z @ 0x18004AD0C (-NumericContentValueFromJson@TargetedContent@ContentManagement@@YA-AV-$ComPtr@VContentValueImpl@.c)
 *     ?FileContentValueFromJson@TargetedContent@ContentManagement@@YA?AV?$ComPtr@VContentValueImpl@TargetedContent@ContentManagement@@@WRL@Microsoft@@PEAUIJsonObject@Json@Data@Windows@@PEAI@Z @ 0x18004B100 (-FileContentValueFromJson@TargetedContent@ContentManagement@@YA-AV-$ComPtr@VContentValueImpl@Tar.c)
 *     ?ImageContentValueFromJson@TargetedContent@ContentManagement@@YA?AV?$ComPtr@VContentValueImpl@TargetedContent@ContentManagement@@@WRL@Microsoft@@PEAUIJsonObject@Json@Data@Windows@@PEAI@Z @ 0x18004B248 (-ImageContentValueFromJson@TargetedContent@ContentManagement@@YA-AV-$ComPtr@VContentValueImpl@Ta.c)
 *     ?MakeContentValueForJsonObject@TargetedContent@ContentManagement@@YA?AV?$ComPtr@VContentValueImpl@TargetedContent@ContentManagement@@@WRL@Microsoft@@PEAUIJsonObject@Json@Data@Windows@@PEAI@Z @ 0x18004B588 (-MakeContentValueForJsonObject@TargetedContent@ContentManagement@@YA-AV-$ComPtr@VContentValueImp.c)
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
