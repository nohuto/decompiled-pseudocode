/*
 * XREFs of ??$for_each@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@@std@@V_lambda_5e8dce2c070e4f08923b16093ddb4e17_@@@std@@YA?AV_lambda_5e8dce2c070e4f08923b16093ddb4e17_@@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@@0@0V1@@Z @ 0x18008EF9C
 * Callers:
 *     ?SwitchStreamGroupsFromNonDefaultToDefaultSaDevice@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUIDeviceGraphObjectsStore@@PEAUtWAVEFORMATEX@@_JAEAV?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@Z @ 0x1800906D0 (-SwitchStreamGroupsFromNonDefaultToDefaultSaDevice@CAudioResourceManager@@IEAAJPEAVCEndpointChar.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@IEBAXXZ @ 0x18003F6EC (-InternalAddRef@-$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180065958 (-InternalRelease@-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _lambda_5e8dce2c070e4f08923b16093ddb4e17_::operator() @ 0x18008F440 (_lambda_5e8dce2c070e4f08923b16093ddb4e17_--operator().c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall std::for_each<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>>,_lambda_5e8dce2c070e4f08923b16093ddb4e17_>(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 *a4)
{
  __int64 i; // rbx

  for ( i = a2; i != a3; i += 8LL )
    lambda_5e8dce2c070e4f08923b16093ddb4e17_::operator()(a4, i);
  *a1 = *a4;
  Microsoft::WRL::ComPtr<ISaDeviceProxy>::InternalAddRef(a1);
  Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(a4);
  return a1;
}
