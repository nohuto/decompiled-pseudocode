/*
 * XREFs of ??$CreateActivationFactory@VCMemoryManager@System@Windows@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x180001F20
 * Callers:
 *     ??$GetActivationFactory@$00@Details@WRL@Microsoft@@YAJPEAVModuleBase@012@PEBGPEAUHSTRING__@@PEAPEAUIActivationFactory@@@Z @ 0x1800031D0 (--$GetActivationFactory@$00@Details@WRL@Microsoft@@YAJPEAVModuleBase@012@PEBGPEAUHSTRING__@@PEAP.c)
 * Callees:
 *     ??$MakeAndInitialize@VCMemoryManager@System@Windows@@V123@@Details@WRL@Microsoft@@YAJPEAPEAVCMemoryManager@System@Windows@@@Z @ 0x180001FE0 (--$MakeAndInitialize@VCMemoryManager@System@Windows@@V123@@Details@WRL@Microsoft@@YAJPEAPEAVCMem.c)
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x180003F00 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180006710 (_guard_dispatch_icall_nop.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$0N@@WRL@Microsoft@@U?$InterfaceList@UIMemoryManagerStatics@System@Windows@@U?$InterfaceList@UIMemoryManagerStatics2@System@Windows@@U?$InterfaceList@UIMemoryManagerStatics3@System@Windows@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@23@$00$0A@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180007C4C (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$0N@@WRL@Microsoft@@U-$InterfaceList@UIMemory.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18000830C (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::CreateActivationFactory<Windows::System::CMemoryManager>(
        _BYTE *a1,
        __int64 a2,
        const struct _GUID *a3,
        _QWORD *a4)
{
  int v8; // eax
  __int64 v9; // rbx
  int CanCastTo; // edi
  volatile int *v11; // rdx
  __int64 result; // rax
  _QWORD v13[5]; // [rsp+20h] [rbp-28h] BYREF

  v13[0] = 0LL;
  v8 = Microsoft::WRL::Details::MakeAndInitialize<Windows::System::CMemoryManager,Windows::System::CMemoryManager>(v13);
  v9 = v13[0];
  CanCastTo = v8;
  if ( v8 >= 0 )
  {
    if ( (unsigned int)InlineIsEqualGUID(a3, &GUID_00000035_0000_0000_c000_000000000046) )
    {
      *a4 = v9;
LABEL_5:
      if ( (*a1 & 4) == 0 )
        Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(v9 + 36), v11);
      result = 0LL;
      *(_DWORD *)(v9 + 56) = *(_DWORD *)a1;
      *(_QWORD *)(v9 + 48) = a2;
      return result;
    }
    CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<13>,Microsoft::WRL::Details::InterfaceList<Windows::System::IMemoryManagerStatics,Microsoft::WRL::Details::InterfaceList<Windows::System::IMemoryManagerStatics2,Microsoft::WRL::Details::InterfaceList<Windows::System::IMemoryManagerStatics3,Microsoft::WRL::Details::Nil>>>,1,0>::CanCastTo(
                  v9 + 8,
                  a3,
                  a4);
    if ( CanCastTo >= 0 )
      goto LABEL_5;
  }
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  return (unsigned int)CanCastTo;
}
