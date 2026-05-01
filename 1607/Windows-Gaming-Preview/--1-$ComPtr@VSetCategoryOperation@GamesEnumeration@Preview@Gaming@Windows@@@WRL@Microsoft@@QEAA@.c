/*
 * XREFs of ??1?$ComPtr@VSetCategoryOperation@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18000C304
 * Callers:
 *     __lambda_e7d66ec3c204a83377ccb333ff70ed66_::operator()_::_1_::dtor$0 @ 0x180027FAA (__lambda_e7d66ec3c204a83377ccb333ff70ed66_--operator()_--_1_--dtor$0.c)
 *     __lambda_e7d66ec3c204a83377ccb333ff70ed66_::operator()_::_1_::dtor$2 @ 0x180027FB6 (__lambda_e7d66ec3c204a83377ccb333ff70ed66_--operator()_--_1_--dtor$2.c)
 *     __lambda_cdca003ac9496c425fbc452970c01125_::operator()_::_1_::dtor$0 @ 0x1800283D8 (__lambda_cdca003ac9496c425fbc452970c01125_--operator()_--_1_--dtor$0.c)
 *     __lambda_cdca003ac9496c425fbc452970c01125_::operator()_::_1_::dtor$1 @ 0x1800283E4 (__lambda_cdca003ac9496c425fbc452970c01125_--operator()_--_1_--dtor$1.c)
 *     __lambda_61beeb39da0ffab562e69952bf082708_::operator()_::_1_::dtor$0 @ 0x1800284EC (__lambda_61beeb39da0ffab562e69952bf082708_--operator()_--_1_--dtor$0.c)
 *     __lambda_61beeb39da0ffab562e69952bf082708_::operator()_::_1_::dtor$1 @ 0x1800284F8 (__lambda_61beeb39da0ffab562e69952bf082708_--operator()_--_1_--dtor$1.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIInspectable@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$00@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180013540 (-Release@-$RuntimeClass@U-$InterfaceList@UIInspectable@@U-$InterfaceList@VFtmBase@W_ea_180013540.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::SetCategoryOperation>::~ComPtr<Windows::Gaming::Preview::GamesEnumeration::SetCategoryOperation>(
        __int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IInspectable,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<1>,1,1,0>::Release(result);
  }
  return result;
}
