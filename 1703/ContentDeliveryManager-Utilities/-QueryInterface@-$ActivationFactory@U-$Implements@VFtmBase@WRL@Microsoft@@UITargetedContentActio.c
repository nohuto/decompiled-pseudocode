/*
 * XREFs of ?QueryInterface@?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@UITargetedContentActionStaticsInternal@Internal@TargetedContent@Services@Windows@@VNil@Details@23@V9Details@23@V9Details@23@V9Details@23@V9Details@23@V9Details@23@V9Details@23@V9Details@23@@WRL@Microsoft@@VNil@Details@23@V4523@$0A@@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180042C90
 * Callers:
 *     ?QueryInterface@TargetedContentActionStatics@Internal@TargetedContent@Services@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180040B60 (-QueryInterface@TargetedContentActionStatics@Internal@TargetedContent@Services@Windows@@UEAAJAEB.c)
 *     ?QueryInterface@?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@UITargetedContentActionStaticsInternal@Internal@TargetedContent@Services@Windows@@VNil@Details@23@V9Details@23@V9Details@23@V9Details@23@V9Details@23@V9Details@23@V9Details@23@V9Details@23@@WRL@Microsoft@@VNil@Details@23@V4523@$0A@@WRL@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180044670 (-QueryInterface@-$ActivationFactory@U-$Implements@VFtmBase@WRL@Microsoft@@UITargete_ea_180044670.c)
 *     ?QueryInterface@?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@UITargetedContentActionStaticsInternal@Internal@TargetedContent@Services@Windows@@VNil@Details@23@V9Details@23@V9Details@23@V9Details@23@V9Details@23@V9Details@23@V9Details@23@V9Details@23@@WRL@Microsoft@@VNil@Details@23@V4523@$0A@@WRL@Microsoft@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180044750 (-QueryInterface@-$ActivationFactory@U-$Implements@VFtmBase@WRL@Microsoft@@UITargete_ea_180044750.c)
 * Callees:
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180003CA4 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180070170 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Windows::Services::TargetedContent::Internal::ITargetedContentActionStaticsInternal,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::QueryInterface(
        __int64 a1,
        __int64 a2,
        void **a3)
{
  unsigned int v3; // ebx
  int CanCastTo; // edi
  _DWORD *v5; // rdx
  __int64 v6; // rcx

  v3 = 0;
  *a3 = 0LL;
  if ( (*(_DWORD *)a2
     || *(_DWORD *)(a2 + 4) != *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2
     || *(_DWORD *)(a2 + 8) != *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
     || *(_DWORD *)(a2 + 12) != *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4])
    && (*(_DWORD *)a2 != -1350114592
     || *(_DWORD *)(a2 + 4) != *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data2
     || *(_DWORD *)(a2 + 8) != *(_DWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4
     || *(_DWORD *)(a2 + 12) != *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4[4]) )
  {
    if ( *(_DWORD *)a2 == 53
      && *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_00000035_0000_0000_c000_000000000046.Data2
      && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_00000035_0000_0000_c000_000000000046.Data4
      && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_00000035_0000_0000_c000_000000000046.Data4[4] )
    {
      *a3 = (void *)a1;
LABEL_15:
      CanCastTo = 0;
      goto LABEL_24;
    }
    CanCastTo = Microsoft::WRL::FtmBase::CanCastTo((Microsoft::WRL::FtmBase *)(a1 + 8), (const struct _GUID *)a2, a3);
    if ( CanCastTo < 0 )
    {
      if ( *v5 == 1352000614
        && v5[1] == *(_DWORD *)&GUID_5095e466_bb07_4fb0_a18b_88f3bf86b2bd.Data2
        && v5[2] == *(_DWORD *)GUID_5095e466_bb07_4fb0_a18b_88f3bf86b2bd.Data4
        && v5[3] == *(_DWORD *)&GUID_5095e466_bb07_4fb0_a18b_88f3bf86b2bd.Data4[4] )
      {
        *a3 = (void *)(v6 + 24);
        goto LABEL_15;
      }
      CanCastTo = -2147467262;
    }
    if ( CanCastTo < 0 )
      return (unsigned int)CanCastTo;
LABEL_24:
    (*(void (__fastcall **)(void *))(*(_QWORD *)*a3 + 8LL))(*a3);
    return (unsigned int)CanCastTo;
  }
  *a3 = (void *)a1;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
  return v3;
}
