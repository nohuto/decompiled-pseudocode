/*
 * XREFs of _lambda_32632dfdfd926559a6510a11dedcbccd_::__lambda_32632dfdfd926559a6510a11dedcbccd_ @ 0x18004D434
 * Callers:
 *     __lambda_a20a6b3776b39db881c9be8aadce65fd_::operator()_::_1_::dtor$6 @ 0x180072B68 (__lambda_a20a6b3776b39db881c9be8aadce65fd_--operator()_--_1_--dtor$6.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@U?$IVector@PEAVAppInstallInfoRecord@ContentManagement@@@Collections@Foundation@Windows@@U?$InterfaceList@U?$IIterable@PEAVAppInstallInfoRecord@ContentManagement@@@Collections@Foundation@Windows@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$00@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180010F70 (-Release@-$RuntimeClass@U-$InterfaceList@U-$IVector@PEAVAppInstallInfoRecord@ContentManagement@@.c)
 */

volatile signed __int64 *__fastcall lambda_32632dfdfd926559a6510a11dedcbccd_::__lambda_32632dfdfd926559a6510a11dedcbccd_(
        volatile signed __int64 **a1)
{
  volatile signed __int64 *result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (volatile signed __int64 *)Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Foundation::Collections::IVector<ContentManagement::AppInstallInfoRecord *>,Microsoft::WRL::Details::InterfaceList<Windows::Foundation::Collections::IIterable<ContentManagement::AppInstallInfoRecord *>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>>,Microsoft::WRL::RuntimeClassFlags<1>,1,1,0>::Release(result);
  }
  return result;
}
