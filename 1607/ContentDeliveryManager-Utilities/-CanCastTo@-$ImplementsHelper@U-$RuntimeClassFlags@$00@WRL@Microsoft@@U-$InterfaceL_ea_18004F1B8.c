/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$00@WRL@Microsoft@@U?$InterfaceList@UIWeakReferenceSource@@U?$InterfaceList@U?$IIterable@PEAVTargetedContentItem@TargetedContent@ContentManagement@@@Collections@Foundation@Windows@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@23@$00$0A@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18004F1B8
 * Callers:
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@U?$IVector@PEAVTargetedContentItem@TargetedContent@ContentManagement@@@Collections@Foundation@Windows@@U?$InterfaceList@U?$IIterable@PEAVTargetedContentItem@TargetedContent@ContentManagement@@@Collections@Foundation@Windows@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$00@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18004BCC0 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@U-$IVector@PEAVTargetedContentItem@TargetedConte.c)
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@U?$IVectorView@PEAVTargetedContentItem@TargetedContent@ContentManagement@@@Collections@Foundation@Windows@@U?$InterfaceList@U?$IIterable@PEAVTargetedContentItem@TargetedContent@ContentManagement@@@Collections@Foundation@Windows@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$00@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18004E080 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@U-$IVectorView@PEAVTargetedContentItem@TargetedC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,Microsoft::WRL::Details::InterfaceList<IWeakReferenceSource,Microsoft::WRL::Details::InterfaceList<Windows::Foundation::Collections::IIterable<ContentManagement::TargetedContent::TargetedContentItem *>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>>,1,0>::CanCastTo(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  if ( *a2 != 56
    || a2[1] != *(_DWORD *)&GUID_00000038_0000_0000_c000_000000000046.Data2
    || a2[2] != *(_DWORD *)GUID_00000038_0000_0000_c000_000000000046.Data4
    || a2[3] != *(_DWORD *)&GUID_00000038_0000_0000_c000_000000000046.Data4[4] )
  {
    a1 += 8LL;
    if ( *a2 != 1336763288
      || a2[1] != *(_DWORD *)&GUID_4fad6398_e6e3_52f5_b643_d638f95bd248.Data2
      || a2[2] != *(_DWORD *)GUID_4fad6398_e6e3_52f5_b643_d638f95bd248.Data4
      || a2[3] != *(_DWORD *)&GUID_4fad6398_e6e3_52f5_b643_d638f95bd248.Data4[4] )
    {
      a1 += 8LL;
      if ( (*a2 != -1796592748
         || a2[1] != *(_DWORD *)&GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data2
         || a2[2] != *(_DWORD *)GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data4
         || a2[3] != *(_DWORD *)&GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data4[4])
        && (*a2 != 3
         || a2[1] != *(_DWORD *)&GUID_00000003_0000_0000_c000_000000000046.Data2
         || a2[2] != *(_DWORD *)GUID_00000003_0000_0000_c000_000000000046.Data4
         || a2[3] != *(_DWORD *)&GUID_00000003_0000_0000_c000_000000000046.Data4[4]) )
      {
        return 2147500034LL;
      }
    }
  }
  *a3 = a1;
  return 0LL;
}
