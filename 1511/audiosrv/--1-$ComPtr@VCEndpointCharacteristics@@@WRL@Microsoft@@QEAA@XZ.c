/*
 * XREFs of ??1?$ComPtr@VCEndpointCharacteristics@@@WRL@Microsoft@@QEAA@XZ @ 0x1800670A0
 * Callers:
 *     _CEndpointCharacteristicsCache::GetAliasedEndpointCharacteristics_::_1_::dtor$0 @ 0x18004AC60 (_CEndpointCharacteristicsCache--GetAliasedEndpointCharacteristics_--_1_--dtor$0.c)
 *     _CEndpointCharacteristicsCache::GetAliasedEndpointCharacteristics_::_1_::dtor$2 @ 0x18004AC9C (_CEndpointCharacteristicsCache--GetAliasedEndpointCharacteristics_--_1_--dtor$2.c)
 *     _CEndpointCharacteristicsCache::GetAliasedEndpointCharacteristics_::_1_::dtor$3 @ 0x18004ACA8 (_CEndpointCharacteristicsCache--GetAliasedEndpointCharacteristics_--_1_--dtor$3.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_CEndpointCharacteristics_CEndpointCharacteristics_unsigned_short_const_____ptr64_&___ptr64_int_&___ptr64__::_1_::dtor$0 @ 0x18004C54E (_Microsoft--WRL--Details--MakeAndInitialize_CEndpointCharacteristics_CEndpointCharacteristics_un.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18001BEC0 (-Release@-$RuntimeClass@U-$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Mic.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<CEndpointCharacteristics>::~ComPtr<CEndpointCharacteristics>(
        volatile signed __int32 **a1)
{
  volatile signed __int32 *v1; // rbx
  __int64 (__fastcall *v2)(volatile signed __int32 *); // rdi
  __int64 result; // rax

  v1 = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    v2 = *(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v1 + 16LL);
    if ( v2 == Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release )
      return Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v1);
    else
      return v2(v1);
  }
  return result;
}
