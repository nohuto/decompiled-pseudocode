/*
 * XREFs of ??$MakeAndInitialize@VCEndpointCharacteristics@@V1@AEAPEBGAEAH@Details@WRL@Microsoft@@YAJPEAPEAVCEndpointCharacteristics@@AEAPEBGAEAH@Z @ 0x1800341BC
 * Callers:
 *     ?GetAliasedEndpointCharacteristics@CEndpointCharacteristicsCache@@UEAAJPEBGPEAPEAVCEndpointCharacteristics@@@Z @ 0x180008370 (-GetAliasedEndpointCharacteristics@CEndpointCharacteristicsCache@@UEAAJPEBGPEAPEAVCEndpointChara.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIEndpointCharacteristics@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180008900 (-Release@-$RuntimeClass@U-$InterfaceList@UIEndpointCharacteristics@@VNil@Details@WRL@Microsoft@@.c)
 *     ??0CEndpointCharacteristics@@QEAA@XZ @ 0x18002DDBC (--0CEndpointCharacteristics@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CEndpointCharacteristics@@QEAAJPEBGH@Z @ 0x18002E8FC (-RuntimeClassInitialize@CEndpointCharacteristics@@QEAAJPEBGH@Z.c)
 *     ?InternalAddRef@?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@IEBAXXZ @ 0x1800342A0 (-InternalAddRef@-$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180036700 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CEndpointCharacteristics,CEndpointCharacteristics,unsigned short const * &,int &>(
        CEndpointCharacteristics **a1,
        const unsigned __int16 **a2,
        int *a3)
{
  CEndpointCharacteristics *v6; // rbx
  CEndpointCharacteristics *v7; // rax
  int v8; // edi
  unsigned int (__fastcall *v9)(__int64); // rax
  CEndpointCharacteristics *v11; // [rsp+60h] [rbp+8h] BYREF
  CEndpointCharacteristics *v12; // [rsp+78h] [rbp+20h]

  *a1 = 0LL;
  v6 = 0LL;
  v11 = 0LL;
  v7 = (CEndpointCharacteristics *)operator new(0x1E8uLL, (const struct std::nothrow_t *)&std::nothrow);
  v12 = v7;
  if ( v7 )
  {
    v6 = CEndpointCharacteristics::CEndpointCharacteristics(v7);
    v11 = v6;
    v12 = 0LL;
    v8 = CEndpointCharacteristics::RuntimeClassInitialize(v6, *a2, *a3);
    if ( v8 >= 0 )
    {
      Microsoft::WRL::ComPtr<ISaDeviceProxy>::InternalAddRef(&v11);
      *a1 = v6;
      v8 = 0;
    }
  }
  else
  {
    v8 = -2147024882;
  }
  if ( v6 )
  {
    v9 = *(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL);
    if ( v9 == Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IEndpointCharacteristics,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release )
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IEndpointCharacteristics,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release((__int64)v6);
    else
      v9((__int64)v6);
  }
  return (unsigned int)v8;
}
