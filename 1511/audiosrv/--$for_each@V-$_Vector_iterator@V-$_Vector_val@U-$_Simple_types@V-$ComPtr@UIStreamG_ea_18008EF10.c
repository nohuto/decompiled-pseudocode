/*
 * XREFs of ??$for_each@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@@std@@V_lambda_2bcc51b66ca93e18e4fdf62693613b22_@@@std@@YA?AV_lambda_2bcc51b66ca93e18e4fdf62693613b22_@@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@@0@0V1@@Z @ 0x18008EF10
 * Callers:
 *     ?GetSaDeviceForSharedStream@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@_KK_NPEAUIAudioProcess@@PEAVCAudioSessionManager@@44PEAPEAUISaDeviceProxy@@@Z @ 0x1800080BC (-GetSaDeviceForSharedStream@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDevi.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@IEBAXXZ @ 0x18003F6EC (-InternalAddRef@-$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180065958 (-InternalRelease@-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _lambda_2bcc51b66ca93e18e4fdf62693613b22_::operator() @ 0x18008F2D8 (_lambda_2bcc51b66ca93e18e4fdf62693613b22_--operator().c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall std::for_each<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>>,_lambda_2bcc51b66ca93e18e4fdf62693613b22_>(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 *a4)
{
  __int64 i; // rbx

  for ( i = a2; i != a3; i += 8LL )
    lambda_2bcc51b66ca93e18e4fdf62693613b22_::operator()(a4, i);
  *a1 = *a4;
  Microsoft::WRL::ComPtr<ISaDeviceProxy>::InternalAddRef(a1);
  Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(a4);
  return a1;
}
