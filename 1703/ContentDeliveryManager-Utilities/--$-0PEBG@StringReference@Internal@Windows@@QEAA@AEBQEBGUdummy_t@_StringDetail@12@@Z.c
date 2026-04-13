/*
 * XREFs of ??$?0PEBG@StringReference@Internal@Windows@@QEAA@AEBQEBGUdummy_t@_StringDetail@12@@Z @ 0x180015708
 * Callers:
 *     _lambda_5d23f9c1406c8199f9216519884653b5_::operator() @ 0x18000D6B0 (_lambda_5d23f9c1406c8199f9216519884653b5_--operator().c)
 *     ?OpenAndValidateConnection@ContentManagement@@YAJPEAPEAUIAppServiceConnection@AppService@ApplicationModel@Windows@@@Z @ 0x180027B90 (-OpenAndValidateConnection@ContentManagement@@YAJPEAPEAUIAppServiceConnection@AppService@Applica.c)
 *     ?ProcessCreativeEventUriAsync@ContentManagementService@ContentManagement@@UEAAJW4CreativeEventType@2@PEAUHSTRING__@@PEAU?$ITypedEventHandler@PEAUIInspectable@@PEAUHSTRING__@@@Foundation@Windows@@PEAUICreativeEventReportedCache@2@PEAPEAUIAsyncAction@67@@Z @ 0x180028290 (-ProcessCreativeEventUriAsync@ContentManagementService@ContentManagement@@UEAAJW4CreativeEventTy.c)
 *     ?GetSubscriptionContext@SubscribedContentStore@CreativeFramework@@YA?AV?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@2@@std@@PEBG_N@Z @ 0x18003933C (-GetSubscriptionContext@SubscribedContentStore@CreativeFramework@@YA-AV-$map@V-$basic_string@GU-.c)
 *     ?ActivateSubscriptionIfInactive@SubscribedContentStore@CreativeFramework@@YAXPEBGAEBV?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@2@@std@@PEAW4SubscriptionActivationFlags@12@@Z @ 0x180039970 (-ActivateSubscriptionIfInactive@SubscribedContentStore@CreativeFramework@@YAXPEBGAEBV-$map@V-$ba.c)
 *     ?Parse@CreativeEventUriParser@LaunchCreativeHelpers@CreativeFramework@@QEAAJPEBG@Z @ 0x180044790 (-Parse@CreativeEventUriParser@LaunchCreativeHelpers@CreativeFramework@@QEAAJPEBG@Z.c)
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
