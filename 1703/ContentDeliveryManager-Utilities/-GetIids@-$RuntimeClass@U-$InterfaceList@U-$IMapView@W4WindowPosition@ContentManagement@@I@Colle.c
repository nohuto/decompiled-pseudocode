/*
 * XREFs of ?GetIids@?$RuntimeClass@U?$InterfaceList@U?$IMapView@W4WindowPosition@ContentManagement@@I@Collections@Foundation@Windows@@U?$InterfaceList@U?$IIterable@PEAU?$IKeyValuePair@W4WindowPosition@ContentManagement@@I@Collections@Foundation@Windows@@@Collections@Foundation@Windows@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$00@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x18005C8E0
 * Callers:
 *     ?GetIids@ChunkView@?$NaiveSplitView@W4WindowPosition@ContentManagement@@IU?$DefaultEqualityPredicate@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@4567@U?$DefaultLifetimeTraits@I@4567@U?$HashMapOptions@W4WindowPosition@ContentManagement@@IU?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x18005D140 (-GetIids@ChunkView@-$NaiveSplitView@W4WindowPosition@ContentManagement@@IU-$DefaultEqualityPredi.c)
 *     ?GetIids@?$RuntimeClass@U?$InterfaceList@U?$IMapView@W4WindowPosition@ContentManagement@@I@Collections@Foundation@Windows@@U?$InterfaceList@U?$IIterable@PEAU?$IKeyValuePair@W4WindowPosition@ContentManagement@@I@Collections@Foundation@Windows@@@Collections@Foundation@Windows@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$00@34@$00$00$0A@@Details@WRL@Microsoft@@WBA@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x180060270 (-GetIids@-$RuntimeClass@U-$InterfaceList@U-$IMapView@W4WindowPosition@ContentManage_ea_180060270.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Foundation::Collections::IMapView<enum ContentManagement::WindowPosition,unsigned int>,Microsoft::WRL::Details::InterfaceList<Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<enum ContentManagement::WindowPosition,unsigned int> *>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>>,Microsoft::WRL::RuntimeClassFlags<1>,1,1,0>::GetIids(
        __int64 a1,
        _DWORD *a2,
        GUID **a3)
{
  unsigned int v3; // ebx
  GUID *v6; // rax

  v3 = 0;
  *a3 = 0LL;
  *a2 = 0;
  v6 = (GUID *)CoTaskMemAlloc(0x30uLL);
  if ( v6 )
  {
    *v6 = GUID_0c15010e_8e08_5108_8dd7_0aa21700862a;
    v6[1] = GUID_00000038_0000_0000_c000_000000000046;
    v6[2] = GUID_1454d187_b3b9_5845_b51e_2e1140cc31b1;
    *a2 = 3;
    *a3 = v6;
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v3;
}
