/*
 * XREFs of ?QueryInterface@?$RuntimeClass@U?$InterfaceList@V?$DeferrableEventArgs@UITargetedContentUpdatedEventArgs@TargetedContent@ContentManagement@@VUpdatedEventArgsImpl@23@@WRL@Microsoft@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$00@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180042530
 * Callers:
 *     ?QueryInterface@UpdatedEventArgsImpl@TargetedContent@ContentManagement@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18003B650 (-QueryInterface@UpdatedEventArgsImpl@TargetedContent@ContentManagement@@UEAAJAEBU_GUID@@PEAPEAX@.c)
 *     ?NotifySubscribersIfNecessary@SubscriptionImpl@TargetedContent@ContentManagement@@AEAAJXZ @ 0x180040A90 (-NotifySubscribersIfNecessary@SubscriptionImpl@TargetedContent@ContentManagement@@AEAAJXZ.c)
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@V?$DeferrableEventArgs@UITargetedContentUpdatedEventArgs@TargetedContent@ContentManagement@@VUpdatedEventArgsImpl@23@@WRL@Microsoft@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$00@34@$00$00$0A@@Details@WRL@Microsoft@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800481C0 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@V-$DeferrableEventArgs@UITargetedCo_ea_1800481C0.c)
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@V?$DeferrableEventArgs@UITargetedContentUpdatedEventArgs@TargetedContent@ContentManagement@@VUpdatedEventArgsImpl@23@@WRL@Microsoft@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$00@34@$00$00$0A@@Details@WRL@Microsoft@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800485D0 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@V-$DeferrableEventArgs@UITargetedCo_ea_1800485D0.c)
 * Callees:
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$00@WRL@Microsoft@@U?$InterfaceList@UIWeakReferenceSource@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@23@$00$0A@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180013794 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$00@WRL@Microsoft@@U-$InterfaceL_ea_180013794.c)
 *     _guard_dispatch_icall_nop @ 0x1800597C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::DeferrableEventArgs<ContentManagement::TargetedContent::ITargetedContentUpdatedEventArgs,ContentManagement::TargetedContent::UpdatedEventArgsImpl>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<1>,1,1,0>::QueryInterface(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  unsigned int v3; // ebx
  int CanCastTo; // edi

  v3 = 0;
  *a3 = 0LL;
  if ( (*a2
     || a2[1] != *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2
     || a2[2] != *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
     || a2[3] != *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4])
    && (*a2 != -1350114592
     || a2[1] != *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data2
     || a2[2] != *(_DWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4
     || a2[3] != *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4[4]) )
  {
    if ( *a2 == -2002839812
      && a2[1] == *(_DWORD *)&GUID_889f16fc_66ce_4e67_8288_5d301a8bbb3c.Data2
      && a2[2] == *(_DWORD *)GUID_889f16fc_66ce_4e67_8288_5d301a8bbb3c.Data4
      && a2[3] == *(_DWORD *)&GUID_889f16fc_66ce_4e67_8288_5d301a8bbb3c.Data4[4] )
    {
      *a3 = a1;
      CanCastTo = 0;
    }
    else
    {
      CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,Microsoft::WRL::Details::InterfaceList<IWeakReferenceSource,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,1,0>::CanCastTo(
                    a1 + 24,
                    a2,
                    a3);
      if ( CanCastTo < 0 )
        return (unsigned int)CanCastTo;
    }
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 8LL))(*a3);
    return (unsigned int)CanCastTo;
  }
  *a3 = a1;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
  return v3;
}
