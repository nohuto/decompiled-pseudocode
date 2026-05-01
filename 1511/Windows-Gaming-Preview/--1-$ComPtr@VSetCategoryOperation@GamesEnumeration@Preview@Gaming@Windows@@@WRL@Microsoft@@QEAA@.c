/*
 * XREFs of ??1?$ComPtr@VSetCategoryOperation@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18000A298
 * Callers:
 *     __lambda_a644c9ca355a20c9ec9333f2681dd115_::operator()_::_1_::dtor$0 @ 0x1800275C3 (__lambda_a644c9ca355a20c9ec9333f2681dd115_--operator()_--_1_--dtor$0.c)
 *     __lambda_a644c9ca355a20c9ec9333f2681dd115_::operator()_::_1_::dtor$2 @ 0x1800275CF (__lambda_a644c9ca355a20c9ec9333f2681dd115_--operator()_--_1_--dtor$2.c)
 *     __lambda_c54218cdb3b904062d2ffadd1a7af253_::operator()_::_1_::dtor$0 @ 0x180027A2F (__lambda_c54218cdb3b904062d2ffadd1a7af253_--operator()_--_1_--dtor$0.c)
 *     __lambda_c54218cdb3b904062d2ffadd1a7af253_::operator()_::_1_::dtor$1 @ 0x180027A3B (__lambda_c54218cdb3b904062d2ffadd1a7af253_--operator()_--_1_--dtor$1.c)
 *     __lambda_bbf38d9c7f6d38a94907f74399a6babc_::operator()_::_1_::dtor$0 @ 0x180027B4F (__lambda_bbf38d9c7f6d38a94907f74399a6babc_--operator()_--_1_--dtor$0.c)
 *     __lambda_bbf38d9c7f6d38a94907f74399a6babc_::operator()_::_1_::dtor$1 @ 0x180027B5B (__lambda_bbf38d9c7f6d38a94907f74399a6babc_--operator()_--_1_--dtor$1.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIInspectable@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$00@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180010ED0 (-Release@-$RuntimeClass@U-$InterfaceList@UIInspectable@@U-$InterfaceList@VFtmBase@W_ea_180010ED0.c)
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
