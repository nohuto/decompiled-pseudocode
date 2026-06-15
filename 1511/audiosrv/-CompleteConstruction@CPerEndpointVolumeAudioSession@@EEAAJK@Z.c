/*
 * XREFs of ?CompleteConstruction@CPerEndpointVolumeAudioSession@@EEAAJK@Z @ 0x180071DD0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_ @ 0x1800025C0 (WPP_SF_.c)
 *     ?GetBuffer@CAudioEndpointId@@QEAAPEBGXZ @ 0x1800117C0 (-GetBuffer@CAudioEndpointId@@QEAAPEBGXZ.c)
 *     ?GetMixFormatInternal@CPolicyConfig@@QEAAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x18001A800 (-GetMixFormatInternal@CPolicyConfig@@QEAAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audi.c)
 *     ?GetAliasedEndpointCharacteristics@CEndpointCharacteristicsCache@@QEAAJPEBGPEAPEAVCEndpointCharacteristics@@@Z @ 0x18001BA20 (-GetAliasedEndpointCharacteristics@CEndpointCharacteristicsCache@@QEAAJPEBGPEAPEAVCEndpointChara.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18001BEC0 (-Release@-$RuntimeClass@U-$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Mic.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?GetVolumeStrip@CPerEndpointVolumeAudioSession@@AEAAJPEAPEAVCVolumeStrip@@@Z @ 0x180074560 (-GetVolumeStrip@CPerEndpointVolumeAudioSession@@AEAAJPEAPEAVCVolumeStrip@@@Z.c)
 */

__int64 __fastcall CPerEndpointVolumeAudioSession::CompleteConstruction(CPerEndpointVolumeAudioSession *this)
{
  const unsigned __int16 *Buffer; // rax
  int AliasedEndpointCharacteristics; // eax
  struct CEndpointCharacteristics *v4; // rbx
  int MixFormatInternal; // edi
  __int64 (__fastcall *v6)(volatile signed __int32 *); // rsi
  struct _GUID v8; // [rsp+30h] [rbp-28h] BYREF
  struct CEndpointCharacteristics *v9; // [rsp+60h] [rbp+8h] BYREF
  LPVOID pv; // [rsp+70h] [rbp+18h] BYREF

  pv = 0LL;
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x4Du, (__int64)&WPP_c7c899a03615192e0a524739b215c826_Traceguids);
  }
  v9 = 0LL;
  Buffer = CAudioEndpointId::GetBuffer((CPerEndpointVolumeAudioSession *)((char *)this + 784));
  AliasedEndpointCharacteristics = CEndpointCharacteristicsCache::GetAliasedEndpointCharacteristics(
                                     (RTL_SRWLOCK *)g_pEndpointCharacteristicsCache,
                                     Buffer,
                                     &v9);
  v4 = v9;
  MixFormatInternal = AliasedEndpointCharacteristics;
  if ( AliasedEndpointCharacteristics < 0
    || (v8 = GUID_00000000_0000_0000_0000_000000000000,
        MixFormatInternal = CPolicyConfig::GetMixFormatInternal(
                              g_PolicyConfig,
                              v9,
                              eHostProcessConnector,
                              &v8,
                              (struct tWAVEFORMATEX **)&pv),
        MixFormatInternal < 0)
    || (MixFormatInternal = CPerEndpointVolumeAudioSession::GetVolumeStrip(this, 0LL), MixFormatInternal < 0) )
  {
    if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x4Eu,
        (__int64)&WPP_c7c899a03615192e0a524739b215c826_Traceguids,
        MixFormatInternal);
    }
  }
  if ( v4 )
  {
    v6 = *(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 16LL);
    if ( v6 == Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release )
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release((volatile signed __int32 *)v4);
    else
      v6((volatile signed __int32 *)v4);
  }
  CoTaskMemFree(pv);
  return (unsigned int)MixFormatInternal;
}
