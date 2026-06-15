/*
 * XREFs of ??$for_each@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@@std@@V_lambda_f2963b5c83cb5d3ebda59818f6b56d22_@@@std@@YA?AV_lambda_f2963b5c83cb5d3ebda59818f6b56d22_@@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@@0@0V1@@Z @ 0x1800778FC
 * Callers:
 *     ?SwitchStreamGroupsToNewSaDevice@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUIDeviceGraphObjectsStore@@PEAUtWAVEFORMATEX@@_JAEAV?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@Z @ 0x180078E68 (-SwitchStreamGroupsToNewSaDevice@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUI.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180025004 (-InternalRelease@-$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _lambda_f2963b5c83cb5d3ebda59818f6b56d22_::operator() @ 0x180077A98 (_lambda_f2963b5c83cb5d3ebda59818f6b56d22_--operator().c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall std::for_each<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>>,_lambda_f2963b5c83cb5d3ebda59818f6b56d22_>(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 *a4)
{
  __int64 i; // rsi

  for ( i = a2; i != a3; i += 8LL )
    lambda_f2963b5c83cb5d3ebda59818f6b56d22_::operator()(a4, i);
  *a1 = 0LL;
  if ( a1 != a4 )
  {
    *a1 = *a4;
    *a4 = 0LL;
  }
  Microsoft::WRL::ComPtr<ISaDeviceProxy>::InternalRelease(a4);
  return a1;
}
