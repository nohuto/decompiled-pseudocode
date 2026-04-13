/*
 * XREFs of ?QueryInterface@?$RuntimeClass@U?$InterfaceList@VFtmBase@WRL@Microsoft@@U?$InterfaceList@UITargetedContentCollection@TargetedContent@ContentManagement@@U?$InterfaceList@UITargetedContentInteractionReporter@TargetedContent@ContentManagement@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180042290
 * Callers:
 *     ?QueryInterface@ContentCollectionImpl@TargetedContent@ContentManagement@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18003B6A0 (-QueryInterface@ContentCollectionImpl@TargetedContent@ContentManagement@@UEAAJAEBU_GUID@@PEAPEAX.c)
 *     ??$MakeAndInitialize@VContentCollectionImpl@TargetedContent@ContentManagement@@UITargetedContentCollection@23@PEAUHSTRING__@@PEAU5@PEAUIJsonObject@Json@Data@Windows@@PEAI@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@UITargetedContentCollection@TargetedContent@ContentManagement@@@WRL@Microsoft@@@012@$$QEAPEAUHSTRING__@@1$$QEAPEAUIJsonObject@Json@Data@Windows@@$$QEAPEAI@Z @ 0x180043058 (--$MakeAndInitialize@VContentCollectionImpl@TargetedContent@ContentManagement@@UITargetedContent.c)
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@VFtmBase@WRL@Microsoft@@U?$InterfaceList@UITargetedContentCollection@TargetedContent@ContentManagement@@U?$InterfaceList@UITargetedContentInteractionReporter@TargetedContent@ContentManagement@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180048230 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@VFtmBase@WRL@Microsoft@@U-$Interfac_ea_180048230.c)
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@VFtmBase@WRL@Microsoft@@U?$InterfaceList@UITargetedContentCollection@TargetedContent@ContentManagement@@U?$InterfaceList@UITargetedContentInteractionReporter@TargetedContent@ContentManagement@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180048240 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@VFtmBase@WRL@Microsoft@@U-$Interfac_ea_180048240.c)
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@VFtmBase@WRL@Microsoft@@U?$InterfaceList@UITargetedContentCollection@TargetedContent@ContentManagement@@U?$InterfaceList@UITargetedContentInteractionReporter@TargetedContent@ContentManagement@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800483E0 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@VFtmBase@WRL@Microsoft@@U-$Interfac_ea_1800483E0.c)
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@VFtmBase@WRL@Microsoft@@U?$InterfaceList@UITargetedContentCollection@TargetedContent@ContentManagement@@U?$InterfaceList@UITargetedContentInteractionReporter@TargetedContent@ContentManagement@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180048680 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@VFtmBase@WRL@Microsoft@@U-$Interfac_ea_180048680.c)
 *     ?get_InteractionReporter@ContentCollectionImpl@TargetedContent@ContentManagement@@UEAAJPEAPEAUITargetedContentInteractionReporter@23@@Z @ 0x180049A60 (-get_InteractionReporter@ContentCollectionImpl@TargetedContent@ContentManagement@@UEAAJPEAPEAUIT.c)
 * Callees:
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@U?$InterfaceList@UIInspectable@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@U?$InterfaceList@UIWeakReferenceSource@@U?$InterfaceList@UITargetedContentCollection@TargetedContent@ContentManagement@@U?$InterfaceList@UITargetedContentInteractionReporter@TargetedContent@ContentManagement@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@23@@Details@WRL@Microsoft@@@Details@23@$0A@$0A@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180043F88 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@U-$InterfaceList@UIInspect.c)
 *     _guard_dispatch_icall_nop @ 0x1800597C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<ContentManagement::TargetedContent::ITargetedContentCollection,Microsoft::WRL::Details::InterfaceList<ContentManagement::TargetedContent::ITargetedContentInteractionReporter,Microsoft::WRL::Details::Nil>>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::QueryInterface(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  unsigned int v3; // ebx
  int CanCastTo; // edi
  _QWORD *v5; // r8

  v3 = 0;
  *a3 = 0LL;
  if ( !*a2
    && a2[1] == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2
    && a2[2] == *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
    && a2[3] == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4]
    || *a2 == -1350114592
    && a2[1] == *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data2
    && a2[2] == *(_DWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4
    && a2[3] == *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4[4] )
  {
    *a3 = a1;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
  }
  else
  {
    CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<IInspectable,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<IWeakReferenceSource,Microsoft::WRL::Details::InterfaceList<ContentManagement::TargetedContent::ITargetedContentCollection,Microsoft::WRL::Details::InterfaceList<ContentManagement::TargetedContent::ITargetedContentInteractionReporter,Microsoft::WRL::Details::Nil>>>>>,0,0>::CanCastTo();
    if ( CanCastTo >= 0 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v5 + 8LL))(*v5);
    return (unsigned int)CanCastTo;
  }
  return v3;
}
