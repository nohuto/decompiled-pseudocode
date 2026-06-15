/*
 * XREFs of ??$for_each@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@@std@@V_lambda_4949fb3b75727052a4e52faab9c7ec1c_@@@std@@YA?AV_lambda_4949fb3b75727052a4e52faab9c7ec1c_@@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@@0@0V1@@Z @ 0x180091780
 * Callers:
 *     ?SwitchStreamGroupsFromNonDefaultToDefaultSaDevice@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUIDeviceGraphObjectsStore@@PEAUtWAVEFORMATEX@@_JAEAV?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@Z @ 0x180092E00 (-SwitchStreamGroupsFromNonDefaultToDefaultSaDevice@CAudioResourceManager@@IEAAJPEAVCEndpointChar.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@IEBAXXZ @ 0x180042510 (-InternalAddRef@-$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x18006714C (-InternalRelease@-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _lambda_4949fb3b75727052a4e52faab9c7ec1c_::operator() @ 0x180091CB0 (_lambda_4949fb3b75727052a4e52faab9c7ec1c_--operator().c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall std::for_each<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>>,_lambda_4949fb3b75727052a4e52faab9c7ec1c_>(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 *a4)
{
  __int64 i; // rbx

  for ( i = a2; i != a3; i += 8LL )
    lambda_4949fb3b75727052a4e52faab9c7ec1c_::operator()(a4, i);
  *a1 = *a4;
  Microsoft::WRL::ComPtr<ISaDeviceProxy>::InternalAddRef(a1);
  Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(a4);
  return a1;
}
