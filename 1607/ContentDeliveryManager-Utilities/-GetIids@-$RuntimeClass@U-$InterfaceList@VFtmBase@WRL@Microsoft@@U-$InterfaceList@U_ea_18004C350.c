/*
 * XREFs of ?GetIids@?$RuntimeClass@U?$InterfaceList@VFtmBase@WRL@Microsoft@@U?$InterfaceList@UITargetedContentItem@TargetedContent@ContentManagement@@U?$InterfaceList@UITargetedContentInteractionReporter@TargetedContent@ContentManagement@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x18004C350
 * Callers:
 *     ?GetIids@ContentItemImpl@TargetedContent@ContentManagement@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x180048A80 (-GetIids@ContentItemImpl@TargetedContent@ContentManagement@@UEAAJPEAKPEAPEAU_GUID@@@Z.c)
 *     ?GetIids@?$RuntimeClass@U?$InterfaceList@VFtmBase@WRL@Microsoft@@U?$InterfaceList@UITargetedContentItem@TargetedContent@ContentManagement@@U?$InterfaceList@UITargetedContentInteractionReporter@TargetedContent@ContentManagement@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@WCI@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x180052FC0 (-GetIids@-$RuntimeClass@U-$InterfaceList@VFtmBase@WRL@Microsoft@@U-$InterfaceList@U_ea_180052FC0.c)
 *     ?GetIids@?$RuntimeClass@U?$InterfaceList@VFtmBase@WRL@Microsoft@@U?$InterfaceList@UITargetedContentItem@TargetedContent@ContentManagement@@U?$InterfaceList@UITargetedContentInteractionReporter@TargetedContent@ContentManagement@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@WDA@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x180053170 (-GetIids@-$RuntimeClass@U-$InterfaceList@VFtmBase@WRL@Microsoft@@U-$InterfaceList@U_ea_180053170.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<ContentManagement::TargetedContent::ITargetedContentItem,Microsoft::WRL::Details::InterfaceList<ContentManagement::TargetedContent::ITargetedContentInteractionReporter,Microsoft::WRL::Details::Nil>>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::GetIids(
        __int64 a1,
        _DWORD *a2,
        GUID **a3)
{
  unsigned int v3; // ebx
  GUID *v6; // rax

  v3 = 0;
  *a3 = 0LL;
  *a2 = 0;
  v6 = (GUID *)CoTaskMemAlloc(0x40uLL);
  if ( v6 )
  {
    *v6 = GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90;
    v6[1] = GUID_00000038_0000_0000_c000_000000000046;
    v6[2] = GUID_3a48f6a2_4e17_4a86_aca9_a93a958ecafb;
    v6[3] = GUID_111d9cd1_419d_4ade_a083_68f73750c18e;
    *a2 = 4;
    *a3 = v6;
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v3;
}
