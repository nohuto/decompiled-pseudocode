/*
 * XREFs of PolicyConfigGetMixFormat @ 0x1800895A0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetMixFormatInternal@CPolicyConfig@@QEAAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x18001F934 (-GetMixFormatInternal@CPolicyConfig@@QEAAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audi.c)
 *     ?GetAliasedEndpointCharacteristics@CEndpointCharacteristicsCache@@QEAAJPEBGPEAPEAVCEndpointCharacteristics@@@Z @ 0x180023D70 (-GetAliasedEndpointCharacteristics@CEndpointCharacteristicsCache@@QEAAJPEBGPEAPEAVCEndpointChara.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180024370 (-Release@-$RuntimeClass@U-$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Mic.c)
 *     MIDL_user_allocate @ 0x180030500 (MIDL_user_allocate.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     memcpy_0 @ 0x180043A58 (memcpy_0.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall PolicyConfigGetMixFormat(CEndpointCharacteristicsCache *a1, const unsigned __int16 *a2, _QWORD *a3)
{
  int AliasedEndpointCharacteristics; // eax
  volatile int *v5; // rdx
  struct CEndpointCharacteristics *v6; // rbx
  int v7; // edi
  int MixFormatInternal; // eax
  unsigned __int16 *v9; // rsi
  void *v10; // rax
  unsigned int (__fastcall *v11)(__int64, volatile int *); // rsi
  struct _GUID v13; // [rsp+30h] [rbp-28h] BYREF
  struct CEndpointCharacteristics *v14; // [rsp+70h] [rbp+18h] BYREF
  void *Src; // [rsp+78h] [rbp+20h] BYREF

  *a3 = 0LL;
  Src = 0LL;
  v14 = 0LL;
  AliasedEndpointCharacteristics = CEndpointCharacteristicsCache::GetAliasedEndpointCharacteristics(a1, a2, &v14);
  v6 = v14;
  v7 = AliasedEndpointCharacteristics;
  if ( AliasedEndpointCharacteristics < 0 )
    goto LABEL_11;
  v13 = GUID_00000000_0000_0000_0000_000000000000;
  MixFormatInternal = CPolicyConfig::GetMixFormatInternal(
                        g_PolicyConfig,
                        v14,
                        eHostProcessConnector,
                        &v13,
                        (struct tWAVEFORMATEX **)&Src);
  v9 = (unsigned __int16 *)Src;
  v7 = MixFormatInternal;
  if ( MixFormatInternal >= 0 )
  {
    v10 = MIDL_user_allocate(*((unsigned __int16 *)Src + 8) + 18LL);
    *a3 = v10;
    if ( v10 )
      memcpy_0(v10, v9, v9[8] + 18LL);
    else
      v7 = -2147024882;
  }
  if ( v9 )
    CoTaskMemFree(v9);
  if ( v7 < 0 )
  {
LABEL_11:
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
    {
      WPP_SF_D(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        0x77u,
        (__int64)&WPP_6e00fd835f7d6636badfe8f1a08ae6f4_Traceguids,
        v7);
    }
  }
  if ( v6 )
  {
    v11 = *(unsigned int (__fastcall **)(__int64, volatile int *))(*(_QWORD *)v6 + 16LL);
    if ( v11 == Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release )
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(
        (__int64)v6,
        v5);
    else
      ((void (__fastcall *)(struct CEndpointCharacteristics *))v11)(v6);
  }
  return (unsigned int)v7;
}
