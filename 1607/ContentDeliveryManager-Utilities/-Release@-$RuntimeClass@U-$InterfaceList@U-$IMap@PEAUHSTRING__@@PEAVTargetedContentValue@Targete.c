/*
 * XREFs of ?Release@?$RuntimeClass@U?$InterfaceList@U?$IMap@PEAUHSTRING__@@PEAVTargetedContentValue@TargetedContent@ContentManagement@@@Collections@Foundation@Windows@@U?$InterfaceList@U?$IIterable@PEAU?$IKeyValuePair@PEAUHSTRING__@@PEAVTargetedContentValue@TargetedContent@ContentManagement@@@Collections@Foundation@Windows@@@Collections@Foundation@Windows@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$00@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18004BA40
 * Callers:
 *     ?RuntimeClassInitialize@ContentItemImpl@TargetedContent@ContentManagement@@QEAAJPEAUHSTRING__@@0PEAUIJsonObject@Json@Data@Windows@@PEAI@Z @ 0x180049B54 (-RuntimeClassInitialize@ContentItemImpl@TargetedContent@ContentManagement@@QEAAJPEAUHSTRING__@@0.c)
 *     ?Release@?$HashMap@PEAUHSTRING__@@PEAVTargetedContentValue@TargetedContent@ContentManagement@@U?$DefaultHash@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@6789@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@6789@U?$DefaultLifetimeTraits@PEAVTargetedContentValue@TargetedContent@ContentManagement@@@6789@U?$HashMapOptions@PEAUHSTRING__@@PEAVTargetedContentValue@TargetedContent@ContentManagement@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@6789@@Internal@Collections@Foundation@Windows@@UEAAKXZ @ 0x18004BBC0 (-Release@-$HashMap@PEAUHSTRING__@@PEAVTargetedContentValue@TargetedContent@ContentManagement@@U-.c)
 *     ??1?$ComPtr@V?$AgileHashMap@PEAUHSTRING__@@PEAVTargetedContentValue@TargetedContent@ContentManagement@@U?$DefaultHash@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@6789@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@6789@U?$DefaultLifetimeTraits@PEAVTargetedContentValue@TargetedContent@ContentManagement@@@6789@$0A@@Internal@Collections@Foundation@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18004BC10 (--1-$ComPtr@V-$AgileHashMap@PEAUHSTRING__@@PEAVTargetedContentValue@TargetedContent@ContentManag.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@U?$IMap@PEAUHSTRING__@@PEAVTargetedContentValue@TargetedContent@ContentManagement@@@Collections@Foundation@Windows@@U?$InterfaceList@U?$IIterable@PEAU?$IKeyValuePair@PEAUHSTRING__@@PEAVTargetedContentValue@TargetedContent@ContentManagement@@@Collections@Foundation@Windows@@@Collections@Foundation@Windows@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$00@34@$00$00$0A@@Details@WRL@Microsoft@@WBA@EAAKXZ @ 0x180052D20 (-Release@-$RuntimeClass@U-$InterfaceList@U-$IMap@PEAUHSTRING__@@PEAVTargetedContent_ea_180052D20.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@U?$IMap@PEAUHSTRING__@@PEAVTargetedContentValue@TargetedContent@ContentManagement@@@Collections@Foundation@Windows@@U?$InterfaceList@U?$IIterable@PEAU?$IKeyValuePair@PEAUHSTRING__@@PEAVTargetedContentValue@TargetedContent@ContentManagement@@@Collections@Foundation@Windows@@@Collections@Foundation@Windows@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$00@34@$00$00$0A@@Details@WRL@Microsoft@@WBI@EAAKXZ @ 0x180052F70 (-Release@-$RuntimeClass@U-$InterfaceList@U-$IMap@PEAUHSTRING__@@PEAVTargetedContent_ea_180052F70.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@U?$IMap@PEAUHSTRING__@@PEAVTargetedContentValue@TargetedContent@ContentManagement@@@Collections@Foundation@Windows@@U?$InterfaceList@U?$IIterable@PEAU?$IKeyValuePair@PEAUHSTRING__@@PEAVTargetedContentValue@TargetedContent@ContentManagement@@@Collections@Foundation@Windows@@@Collections@Foundation@Windows@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$00@34@$00$00$0A@@Details@WRL@Microsoft@@W7EAAKXZ @ 0x180053290 (-Release@-$RuntimeClass@U-$InterfaceList@U-$IMap@PEAUHSTRING__@@PEAVTargetedContent_ea_180053290.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800597C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Foundation::Collections::IMap<HSTRING__ *,ContentManagement::TargetedContent::TargetedContentValue *>,Microsoft::WRL::Details::InterfaceList<Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<HSTRING__ *,ContentManagement::TargetedContent::TargetedContentValue *> *>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>>,Microsoft::WRL::RuntimeClassFlags<1>,1,1,0>::Release(
        volatile signed __int64 *a1)
{
  signed __int64 v1; // rdx
  unsigned __int32 v2; // ebx
  bool v3; // zf
  __int64 v4; // rax
  signed __int32 v5; // r8d

  v1 = *((_QWORD *)a1 + 7);
  if ( v1 < 0 )
  {
    do
LABEL_8:
      v5 = *(_DWORD *)(2 * v1 + 0x10);
    while ( v5 != 0x7FFFFFFF && v5 != _InterlockedCompareExchange((volatile signed __int32 *)(2 * v1 + 16), v5 - 1, v5) );
    v2 = v5 - 1;
LABEL_10:
    if ( !v2 )
    {
      if ( a1 )
        (*(void (__fastcall **)(volatile signed __int64 *, __int64))(*a1 + 104))(a1, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        _InterlockedDecrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
    }
  }
  else
  {
    while ( (_DWORD)v1 != 0x7FFFFFFF )
    {
      v2 = v1 - 1;
      v4 = _InterlockedCompareExchange64(a1 + 7, v1 - 1, v1);
      v3 = v1 == v4;
      v1 = v4;
      if ( v3 )
        goto LABEL_10;
      if ( v4 < 0 )
        goto LABEL_8;
    }
    return 2147483646;
  }
  return v2;
}
