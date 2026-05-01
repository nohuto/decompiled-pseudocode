/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$0N@@WRL@Microsoft@@U?$InterfaceList@UIActivationFactory@@U?$InterfaceList@UIMemoryManagerStatics@System@Windows@@U?$InterfaceList@UIMemoryManagerStatics2@System@Windows@@U?$InterfaceList@UIMemoryManagerStatics3@System@Windows@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@23@$0A@$0A@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180007C0C
 * Callers:
 *     ?QueryInterface@?$ActivationFactory@UIMemoryManagerStatics@System@Windows@@UIMemoryManagerStatics2@23@UIMemoryManagerStatics3@23@$0A@@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180007B90 (-QueryInterface@-$ActivationFactory@UIMemoryManagerStatics@System@Windows@@UIMemory_ea_180007B90.c)
 * Callees:
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x180003F00 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<13>,Microsoft::WRL::Details::InterfaceList<IActivationFactory,Microsoft::WRL::Details::InterfaceList<Windows::System::IMemoryManagerStatics,Microsoft::WRL::Details::InterfaceList<Windows::System::IMemoryManagerStatics2,Microsoft::WRL::Details::InterfaceList<Windows::System::IMemoryManagerStatics3,Microsoft::WRL::Details::Nil>>>>,0,0>::CanCastTo(
        __int64 a1,
        const struct _GUID *a2)
{
  _QWORD *v2; // r8
  __int64 v3; // r9
  __int64 v4; // r10

  if ( !InlineIsEqualGUID(a2, &GUID_00000035_0000_0000_c000_000000000046) )
    return Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<13>,Microsoft::WRL::Details::InterfaceList<Windows::System::IMemoryManagerStatics,Microsoft::WRL::Details::InterfaceList<Windows::System::IMemoryManagerStatics2,Microsoft::WRL::Details::InterfaceList<Windows::System::IMemoryManagerStatics3,Microsoft::WRL::Details::Nil>>>,1,0>::CanCastTo(
             v3 + 8,
             v4,
             v2);
  *v2 = v3;
  return 0LL;
}
