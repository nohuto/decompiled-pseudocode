/*
 * XREFs of ??1?$ComPtr@VSetCategoryOperation@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18000BC78
 * Callers:
 *     __lambda_008cd9ca32b74012431ac337bbccf2a6_::operator()_::_1_::dtor$0 @ 0x18002A8DD (__lambda_008cd9ca32b74012431ac337bbccf2a6_--operator()_--_1_--dtor$0.c)
 *     __lambda_008cd9ca32b74012431ac337bbccf2a6_::operator()_::_1_::dtor$2 @ 0x18002A8E9 (__lambda_008cd9ca32b74012431ac337bbccf2a6_--operator()_--_1_--dtor$2.c)
 *     __lambda_156a2acd22091851321d998ccb9c82aa_::operator()_::_1_::dtor$0 @ 0x18002AC3F (__lambda_156a2acd22091851321d998ccb9c82aa_--operator()_--_1_--dtor$0.c)
 *     __lambda_156a2acd22091851321d998ccb9c82aa_::operator()_::_1_::dtor$1 @ 0x18002AC4B (__lambda_156a2acd22091851321d998ccb9c82aa_--operator()_--_1_--dtor$1.c)
 *     __lambda_1854fdeaa8c10903b3acdb056db6e24a_::operator()_::_1_::dtor$0 @ 0x18002AD47 (__lambda_1854fdeaa8c10903b3acdb056db6e24a_--operator()_--_1_--dtor$0.c)
 *     __lambda_1854fdeaa8c10903b3acdb056db6e24a_::operator()_::_1_::dtor$1 @ 0x18002AD53 (__lambda_1854fdeaa8c10903b3acdb056db6e24a_--operator()_--_1_--dtor$1.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIInspectable@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$00@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180012870 (-Release@-$RuntimeClass@U-$InterfaceList@UIInspectable@@U-$InterfaceList@VFtmBase@W_ea_180012870.c)
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
