/*
 * XREFs of ??$MakeAndInitialize@VCEndpointCharacteristics@@V1@AEAPEBGAEAH@Details@WRL@Microsoft@@YAJPEAPEAVCEndpointCharacteristics@@AEAPEBGAEAH@Z @ 0x1800423E8
 * Callers:
 *     ?GetAliasedEndpointCharacteristics@CEndpointCharacteristicsCache@@QEAAJPEBGPEAPEAVCEndpointCharacteristics@@@Z @ 0x180023D70 (-GetAliasedEndpointCharacteristics@CEndpointCharacteristicsCache@@QEAAJPEBGPEAPEAVCEndpointChara.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180024370 (-Release@-$RuntimeClass@U-$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Mic.c)
 *     ??0CEndpointCharacteristics@@QEAA@XZ @ 0x18003B3C4 (--0CEndpointCharacteristics@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CEndpointCharacteristics@@QEAAJPEBGH@Z @ 0x18003C238 (-RuntimeClassInitialize@CEndpointCharacteristics@@QEAAJPEBGH@Z.c)
 *     ?InternalAddRef@?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@IEBAXXZ @ 0x180042510 (-InternalAddRef@-$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800439F4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CEndpointCharacteristics,CEndpointCharacteristics,unsigned short const * &,int &>(
        CEndpointCharacteristics **a1,
        const unsigned __int16 **a2,
        int *a3)
{
  CEndpointCharacteristics *v6; // rbx
  CEndpointCharacteristics *v7; // rax
  volatile int *v8; // rdx
  int v9; // edi
  unsigned int (__fastcall *v10)(__int64, volatile int *); // rsi
  CEndpointCharacteristics *v12; // [rsp+60h] [rbp+8h] BYREF
  CEndpointCharacteristics *v13; // [rsp+78h] [rbp+20h]

  *a1 = 0LL;
  v6 = 0LL;
  v12 = 0LL;
  v7 = (CEndpointCharacteristics *)operator new(0x1B0uLL, (const struct std::nothrow_t *)&std::nothrow);
  v13 = v7;
  if ( v7 )
  {
    v6 = CEndpointCharacteristics::CEndpointCharacteristics(v7);
    v12 = v6;
    v13 = 0LL;
    v9 = CEndpointCharacteristics::RuntimeClassInitialize(v6, *a2, *a3);
    if ( v9 >= 0 )
    {
      Microsoft::WRL::ComPtr<ISaDeviceProxy>::InternalAddRef(&v12);
      *a1 = v6;
      v9 = 0;
    }
  }
  else
  {
    v9 = -2147024882;
  }
  if ( v6 )
  {
    v10 = *(unsigned int (__fastcall **)(__int64, volatile int *))(*(_QWORD *)v6 + 16LL);
    if ( v10 == Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release )
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(
        (__int64)v6,
        v8);
    else
      ((void (__fastcall *)(CEndpointCharacteristics *))v10)(v6);
  }
  return (unsigned int)v9;
}
