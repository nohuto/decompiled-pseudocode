/*
 * XREFs of ?GetMixFormat@CPolicyConfig@@UEAAJPEBGPEAPEAUtWAVEFORMATEX@@@Z @ 0x180087370
 * Callers:
 *     <none>
 * Callees:
 *     ?GetMixFormatInternal@CPolicyConfig@@QEAAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x18001F934 (-GetMixFormatInternal@CPolicyConfig@@QEAAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audi.c)
 *     ?GetAliasedEndpointCharacteristics@CEndpointCharacteristicsCache@@QEAAJPEBGPEAPEAVCEndpointCharacteristics@@@Z @ 0x180023D70 (-GetAliasedEndpointCharacteristics@CEndpointCharacteristicsCache@@QEAAJPEBGPEAPEAVCEndpointChara.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180024370 (-Release@-$RuntimeClass@U-$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Mic.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall CPolicyConfig::GetMixFormat(
        CPolicyConfig *this,
        const unsigned __int16 *a2,
        struct tWAVEFORMATEX **a3)
{
  int AliasedEndpointCharacteristics; // eax
  volatile int *v6; // rdx
  struct CEndpointCharacteristics *v7; // rbx
  unsigned int MixFormatInternal; // esi
  unsigned int (__fastcall *v9)(__int64, volatile int *); // rdi
  struct _GUID v11; // [rsp+30h] [rbp-18h] BYREF
  struct CEndpointCharacteristics *v12; // [rsp+68h] [rbp+20h] BYREF

  v12 = 0LL;
  AliasedEndpointCharacteristics = CEndpointCharacteristicsCache::GetAliasedEndpointCharacteristics(this, a2, &v12);
  v7 = v12;
  MixFormatInternal = AliasedEndpointCharacteristics;
  if ( AliasedEndpointCharacteristics >= 0 )
  {
    v11 = GUID_00000000_0000_0000_0000_000000000000;
    MixFormatInternal = CPolicyConfig::GetMixFormatInternal(this, v12, eHostProcessConnector, &v11, a3);
  }
  if ( v7 )
  {
    v9 = *(unsigned int (__fastcall **)(__int64, volatile int *))(*(_QWORD *)v7 + 16LL);
    if ( v9 == Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release )
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(
        (__int64)v7,
        v6);
    else
      ((void (__fastcall *)(struct CEndpointCharacteristics *))v9)(v7);
  }
  return MixFormatInternal;
}
