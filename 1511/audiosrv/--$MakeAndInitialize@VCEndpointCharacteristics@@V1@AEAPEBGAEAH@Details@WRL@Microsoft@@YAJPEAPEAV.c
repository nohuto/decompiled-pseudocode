/*
 * XREFs of ??$MakeAndInitialize@VCEndpointCharacteristics@@V1@AEAPEBGAEAH@Details@WRL@Microsoft@@YAJPEAPEAVCEndpointCharacteristics@@AEAPEBGAEAH@Z @ 0x18003F790
 * Callers:
 *     ?GetAliasedEndpointCharacteristics@CEndpointCharacteristicsCache@@QEAAJPEBGPEAPEAVCEndpointCharacteristics@@@Z @ 0x18001BA20 (-GetAliasedEndpointCharacteristics@CEndpointCharacteristicsCache@@QEAAJPEBGPEAPEAVCEndpointChara.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18001BEC0 (-Release@-$RuntimeClass@U-$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Mic.c)
 *     ?InternalAddRef@?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@IEBAXXZ @ 0x18003F6EC (-InternalAddRef@-$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??0CEndpointCharacteristics@@QEAA@XZ @ 0x18003FD50 (--0CEndpointCharacteristics@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CEndpointCharacteristics@@QEAAJPEBGH@Z @ 0x1800409A8 (-RuntimeClassInitialize@CEndpointCharacteristics@@QEAAJPEBGH@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180047938 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
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
  __int64 (__fastcall *v9)(volatile signed __int32 *); // rsi
  CEndpointCharacteristics *v11; // [rsp+60h] [rbp+8h] BYREF
  CEndpointCharacteristics *v12; // [rsp+78h] [rbp+20h]

  *a1 = 0LL;
  v6 = 0LL;
  v11 = 0LL;
  v7 = (CEndpointCharacteristics *)operator new(0x1B0uLL, (const struct std::nothrow_t *)&std::nothrow);
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
    v9 = *(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 16LL);
    if ( v9 == Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release )
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release((volatile signed __int32 *)v6);
    else
      v9((volatile signed __int32 *)v6);
  }
  return (unsigned int)v8;
}
