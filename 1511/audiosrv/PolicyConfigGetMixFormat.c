/*
 * XREFs of PolicyConfigGetMixFormat @ 0x180086990
 * Callers:
 *     <none>
 * Callees:
 *     ?GetMixFormatInternal@CPolicyConfig@@QEAAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x18001A800 (-GetMixFormatInternal@CPolicyConfig@@QEAAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audi.c)
 *     ?GetAliasedEndpointCharacteristics@CEndpointCharacteristicsCache@@QEAAJPEBGPEAPEAVCEndpointCharacteristics@@@Z @ 0x18001BA20 (-GetAliasedEndpointCharacteristics@CEndpointCharacteristicsCache@@QEAAJPEBGPEAPEAVCEndpointChara.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18001BEC0 (-Release@-$RuntimeClass@U-$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Mic.c)
 *     MIDL_user_allocate @ 0x180038320 (MIDL_user_allocate.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     memcpy_0 @ 0x18004799C (memcpy_0.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall PolicyConfigGetMixFormat(__int64 a1, const unsigned __int16 *a2, _QWORD *a3)
{
  int AliasedEndpointCharacteristics; // eax
  struct CEndpointCharacteristics *v5; // rbx
  int v6; // edi
  int MixFormatInternal; // eax
  unsigned __int16 *v8; // rsi
  void *v9; // rax
  __int64 (__fastcall *v10)(volatile signed __int32 *); // rsi
  struct _GUID v12; // [rsp+30h] [rbp-28h] BYREF
  struct CEndpointCharacteristics *v13; // [rsp+70h] [rbp+18h] BYREF
  void *Src; // [rsp+78h] [rbp+20h] BYREF

  *a3 = 0LL;
  Src = 0LL;
  v13 = 0LL;
  AliasedEndpointCharacteristics = CEndpointCharacteristicsCache::GetAliasedEndpointCharacteristics(
                                     (RTL_SRWLOCK *)g_pEndpointCharacteristicsCache,
                                     a2,
                                     &v13);
  v5 = v13;
  v6 = AliasedEndpointCharacteristics;
  if ( AliasedEndpointCharacteristics < 0 )
    goto LABEL_11;
  v12 = GUID_00000000_0000_0000_0000_000000000000;
  MixFormatInternal = CPolicyConfig::GetMixFormatInternal(
                        g_PolicyConfig,
                        v13,
                        eHostProcessConnector,
                        &v12,
                        (struct tWAVEFORMATEX **)&Src);
  v8 = (unsigned __int16 *)Src;
  v6 = MixFormatInternal;
  if ( MixFormatInternal >= 0 )
  {
    v9 = MIDL_user_allocate(*((unsigned __int16 *)Src + 8) + 18LL);
    *a3 = v9;
    if ( v9 )
      memcpy_0(v9, v8, v8[8] + 18LL);
    else
      v6 = -2147024882;
  }
  if ( v8 )
    CoTaskMemFree(v8);
  if ( v6 < 0 )
  {
LABEL_11:
    if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x76u,
        (__int64)&WPP_fc485e014cea5a4c1924790da308a5ac_Traceguids,
        v6);
    }
  }
  if ( v5 )
  {
    v10 = *(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 16LL);
    if ( v10 == Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release )
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release((volatile signed __int32 *)v5);
    else
      v10((volatile signed __int32 *)v5);
  }
  return (unsigned int)v6;
}
