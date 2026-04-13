/*
 * XREFs of ??1?$com_ptr_t@V?$AgileHashMap@W4WindowPosition@ContentManagement@@IU?$DefaultHash@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@W4WindowPosition@ContentManagement@@@4567@U?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@4567@U?$DefaultLifetimeTraits@I@4567@$0A@@Internal@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18005BD8C
 * Callers:
 *     _CreativeFramework::Actions::GetPositionParameters_::_1_::dtor$0 @ 0x1800741D0 (_CreativeFramework--Actions--GetPositionParameters_--_1_--dtor$0.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@U?$IMap@W4WindowPosition@ContentManagement@@I@Collections@Foundation@Windows@@U?$InterfaceList@U?$IIterable@PEAU?$IKeyValuePair@W4WindowPosition@ContentManagement@@I@Collections@Foundation@Windows@@@Collections@Foundation@Windows@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$00@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18005BB70 (-Release@-$RuntimeClass@U-$InterfaceList@U-$IMap@W4WindowPosition@ContentManagement@@I@Collectio.c)
 */

__int64 __fastcall wil::com_ptr_t<Windows::Foundation::Collections::Internal::AgileHashMap<enum ContentManagement::WindowPosition,unsigned int,Windows::Foundation::Collections::Internal::DefaultHash<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned int>,0>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::Internal::AgileHashMap<enum ContentManagement::WindowPosition,unsigned int,Windows::Foundation::Collections::Internal::DefaultHash<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned int>,0>,wil::err_exception_policy>(
        volatile signed __int64 **a1)
{
  volatile signed __int64 *v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Foundation::Collections::IMap<enum ContentManagement::WindowPosition,unsigned int>,Microsoft::WRL::Details::InterfaceList<Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<enum ContentManagement::WindowPosition,unsigned int> *>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>>,Microsoft::WRL::RuntimeClassFlags<1>,1,1,0>::Release(v1);
  return result;
}
