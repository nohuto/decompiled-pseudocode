/*
 * XREFs of ?GetTrustLevel@?$ActivationFactory@UIMemoryManagerStatics@System@Windows@@UIMemoryManagerStatics2@23@UIMemoryManagerStatics3@23@$0A@@WRL@Microsoft@@UEAAJPEAW4TrustLevel@@@Z @ 0x1800082B0
 * Callers:
 *     ?GetTrustLevel@?$ActivationFactory@UIMemoryManagerStatics@System@Windows@@UIMemoryManagerStatics2@23@UIMemoryManagerStatics3@23@$0A@@WRL@Microsoft@@W7EAAJPEAW4TrustLevel@@@Z @ 0x180006820 (-GetTrustLevel@-$ActivationFactory@UIMemoryManagerStatics@System@Windows@@UIMemoryManagerStatics.c)
 *     ?GetTrustLevel@?$ActivationFactory@UIMemoryManagerStatics@System@Windows@@UIMemoryManagerStatics2@23@UIMemoryManagerStatics3@23@$0A@@WRL@Microsoft@@WBA@EAAJPEAW4TrustLevel@@@Z @ 0x180006830 (-GetTrustLevel@-$ActivationFactory@UIMemoryManagerStatics@System@Windows@@UIMemoryM_ea_180006830.c)
 *     ?GetTrustLevel@?$ActivationFactory@UIMemoryManagerStatics@System@Windows@@UIMemoryManagerStatics2@23@UIMemoryManagerStatics3@23@$0A@@WRL@Microsoft@@WBI@EAAJPEAW4TrustLevel@@@Z @ 0x180006840 (-GetTrustLevel@-$ActivationFactory@UIMemoryManagerStatics@System@Windows@@UIMemoryM_ea_180006840.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180006710 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::ActivationFactory<Windows::System::IMemoryManagerStatics,Windows::System::IMemoryManagerStatics2,Windows::System::IMemoryManagerStatics3,0>::GetTrustLevel(
        __int64 a1,
        _DWORD *a2)
{
  __int64 v2; // rax

  v2 = *(_QWORD *)(a1 + 48);
  if ( v2 )
    *a2 = (*(__int64 (**)(void))(v2 + 16))();
  else
    *a2 = 2;
  return 0LL;
}
