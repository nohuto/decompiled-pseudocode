/*
 * XREFs of ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIAsyncInfo@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIAsyncInfo@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180005540
 * Callers:
 *     ??$WaitForCompletion@UIAsyncActionCompletedHandler@Foundation@Windows@@UIAsyncAction@23@@@YAJPEAUIAsyncAction@Foundation@Windows@@W4tagCOWAIT_FLAGS@@PEAX@Z @ 0x180004F04 (--$WaitForCompletion@UIAsyncActionCompletedHandler@Foundation@Windows@@UIAsyncAction@23@@@YAJPEA.c)
 *     ??$WaitForCompletion@U?$IAsyncOperationCompletedHandler@PEAVAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@@@Foundation@Windows@@U?$IAsyncOperation@PEAVAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@@@23@@@YAJPEAU?$IAsyncOperation@PEAVAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@PEAX@Z @ 0x1800055E8 (--$WaitForCompletion@U-$IAsyncOperationCompletedHandler@PEAVAppInstallItem@InstallControl@Previe.c)
 *     ??$WaitForCompletion@U?$IAsyncOperationCompletedHandler@PEAVAppData@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@Foundation@Windows@@U?$IAsyncOperation@PEAVAppData@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@23@@@YAJPEAU?$IAsyncOperation@PEAVAppData@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@PEAX@Z @ 0x1800058CC (--$WaitForCompletion@U-$IAsyncOperationCompletedHandler@PEAVAppData@Internal@InstallControl@Prev.c)
 *     ?GetUint64FromSetting@ContentManagement@@YAJPEAUIPropertySet@Collections@Foundation@Windows@@PEBGPEA_K@Z @ 0x180010654 (-GetUint64FromSetting@ContentManagement@@YAJPEAUIPropertySet@Collections@Foundation@Windows@@PEB.c)
 *     ?GetStringFromSetting@ContentManagement@@YAJPEAUIPropertySet@Collections@Foundation@Windows@@PEBGPEAPEAUHSTRING__@@@Z @ 0x18001082C (-GetStringFromSetting@ContentManagement@@YAJPEAUIPropertySet@Collections@Foundation@Windows@@PEB.c)
 *     ?HasKey@ContentManagement@@YAJPEAUIPropertySet@Collections@Foundation@Windows@@PEBGPEAE@Z @ 0x180010A20 (-HasKey@ContentManagement@@YAJPEAUIPropertySet@Collections@Foundation@Windows@@PEBGPEAE@Z.c)
 *     ?SetUInt64@ContentManagement@@YAJPEAUIPropertySet@Collections@Foundation@Windows@@PEBG_K@Z @ 0x180010B30 (-SetUInt64@ContentManagement@@YAJPEAUIPropertySet@Collections@Foundation@Windows@@PEBG_K@Z.c)
 *     ?SetString@ContentManagement@@YAJPEAUIPropertySet@Collections@Foundation@Windows@@PEBGPEAUHSTRING__@@@Z @ 0x180010D60 (-SetString@ContentManagement@@YAJPEAUIPropertySet@Collections@Foundation@Windows@@PEBGPEAUHSTRIN.c)
 *     ??$WaitForCompletion@U?$IAsyncOperationCompletedHandler@PEAVAppServiceResponse@AppService@ApplicationModel@Windows@@@Foundation@Windows@@U?$IAsyncOperation@PEAVAppServiceResponse@AppService@ApplicationModel@Windows@@@23@@@YAJPEAU?$IAsyncOperation@PEAVAppServiceResponse@AppService@ApplicationModel@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@PEAX@Z @ 0x18001AC14 (--$WaitForCompletion@U-$IAsyncOperationCompletedHandler@PEAVAppServiceResponse@AppService@Applic.c)
 *     ??$WaitForCompletion@U?$IAsyncOperationCompletedHandler@W4AppServiceConnectionStatus@AppService@ApplicationModel@Windows@@@Foundation@Windows@@U?$IAsyncOperation@W4AppServiceConnectionStatus@AppService@ApplicationModel@Windows@@@23@@@YAJPEAU?$IAsyncOperation@W4AppServiceConnectionStatus@AppService@ApplicationModel@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@PEAX@Z @ 0x18001AE9C (--$WaitForCompletion@U-$IAsyncOperationCompletedHandler@W4AppServiceConnectionStatus@AppService@.c)
 * Callees:
 *     ?_Add_vtordisp2@?$basic_ios@GU?$char_traits@G@std@@@std@@UEAAXXZ @ 0x18000B1C0 (-_Add_vtordisp2@-$basic_ios@GU-$char_traits@G@std@@@std@@UEAAXXZ.c)
 */

__int64 *__fastcall IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IAsyncInfo>>(__int64 *a1)
{
  __int64 v1; // rsi

  v1 = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  }
  return a1;
}
