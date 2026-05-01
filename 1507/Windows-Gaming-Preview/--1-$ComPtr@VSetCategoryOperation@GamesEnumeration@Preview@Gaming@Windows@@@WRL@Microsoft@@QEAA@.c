/*
 * XREFs of ??1?$ComPtr@VSetCategoryOperation@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18000A650
 * Callers:
 *     __lambda_a644c9ca355a20c9ec9333f2681dd115_::operator()_::_1_::dtor$0 @ 0x18002779C (__lambda_a644c9ca355a20c9ec9333f2681dd115_--operator()_--_1_--dtor$0.c)
 *     __lambda_a644c9ca355a20c9ec9333f2681dd115_::operator()_::_1_::dtor$2 @ 0x1800277A8 (__lambda_a644c9ca355a20c9ec9333f2681dd115_--operator()_--_1_--dtor$2.c)
 *     __lambda_71dc2f7d55954a1851a2fc52826e08b0_::operator()_::_1_::dtor$0 @ 0x180027C27 (__lambda_71dc2f7d55954a1851a2fc52826e08b0_--operator()_--_1_--dtor$0.c)
 *     __lambda_71dc2f7d55954a1851a2fc52826e08b0_::operator()_::_1_::dtor$1 @ 0x180027C33 (__lambda_71dc2f7d55954a1851a2fc52826e08b0_--operator()_--_1_--dtor$1.c)
 *     __lambda_d60b533812f1df97d2100303db5f1b12_::operator()_::_1_::dtor$0 @ 0x180027D47 (__lambda_d60b533812f1df97d2100303db5f1b12_--operator()_--_1_--dtor$0.c)
 *     __lambda_d60b533812f1df97d2100303db5f1b12_::operator()_::_1_::dtor$1 @ 0x180027D53 (__lambda_d60b533812f1df97d2100303db5f1b12_--operator()_--_1_--dtor$1.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIInspectable@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$00@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180011390 (-Release@-$RuntimeClass@U-$InterfaceList@UIInspectable@@U-$InterfaceList@VFtmBase@W_ea_180011390.c)
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
