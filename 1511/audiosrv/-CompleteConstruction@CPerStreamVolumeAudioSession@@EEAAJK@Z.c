/*
 * XREFs of ?CompleteConstruction@CPerStreamVolumeAudioSession@@EEAAJK@Z @ 0x1800361A0
 * Callers:
 *     ?FinishConstruction@CAudioSession@@UEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKK@Z @ 0x1800279F0 (-FinishConstruction@CAudioSession@@UEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKK@Z.c)
 * Callees:
 *     ?GetBuffer@CAudioEndpointId@@QEAAPEBGXZ @ 0x1800117C0 (-GetBuffer@CAudioEndpointId@@QEAAPEBGXZ.c)
 *     ?GetMixFormatInternal@CPolicyConfig@@QEAAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x18001A800 (-GetMixFormatInternal@CPolicyConfig@@QEAAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audi.c)
 *     ?GetAliasedEndpointCharacteristics@CEndpointCharacteristicsCache@@QEAAJPEBGPEAPEAVCEndpointCharacteristics@@@Z @ 0x18001BA20 (-GetAliasedEndpointCharacteristics@CEndpointCharacteristicsCache@@QEAAJPEBGPEAPEAVCEndpointChara.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18001BEC0 (-Release@-$RuntimeClass@U-$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Mic.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001F9E8 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001FA30 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?LoadSessionConfiguration@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x180035388 (-LoadSessionConfiguration@CPerStreamVolumeAudioSession@@AEAAJXZ.c)
 *     ?CloseSessionPropertyStore@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x180035594 (-CloseSessionPropertyStore@CPerStreamVolumeAudioSession@@AEAAJXZ.c)
 *     ?OpenSessionPropertyStore@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x18003567C (-OpenSessionPropertyStore@CPerStreamVolumeAudioSession@@AEAAJXZ.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall CPerStreamVolumeAudioSession::CompleteConstruction(CPerStreamVolumeAudioSession *this, char a2)
{
  const unsigned __int16 *Buffer; // rax
  int AliasedEndpointCharacteristics; // eax
  struct CEndpointCharacteristics *v6; // rbx
  unsigned int SessionConfiguration; // esi
  unsigned int MixFormatInternal; // eax
  unsigned __int16 *v9; // r15
  unsigned int v10; // eax
  SIZE_T v11; // rdi
  HANDLE ProcessHeap; // rax
  LPVOID v13; // rax
  __int64 i; // rdx
  TraceLoggingHProvider v15; // rcx
  __int64 (__fastcall *v16)(volatile signed __int32 *); // rdi
  int v18; // eax
  LPCRITICAL_SECTION lpCriticalSection[2]; // [rsp+30h] [rbp-10h] BYREF
  struct CEndpointCharacteristics *v20; // [rsp+70h] [rbp+30h] BYREF
  LPVOID pv; // [rsp+80h] [rbp+40h] BYREF

  pv = 0LL;
  v20 = 0LL;
  Buffer = CAudioEndpointId::GetBuffer((CPerStreamVolumeAudioSession *)((char *)this + 784));
  AliasedEndpointCharacteristics = CEndpointCharacteristicsCache::GetAliasedEndpointCharacteristics(
                                     (RTL_SRWLOCK *)g_pEndpointCharacteristicsCache,
                                     Buffer,
                                     &v20);
  v6 = v20;
  SessionConfiguration = AliasedEndpointCharacteristics;
  if ( AliasedEndpointCharacteristics < 0 )
  {
    v15 = WPP_GLOBAL_Control;
LABEL_36:
    if ( v15 != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_BYTE *)v15 + 28) & 0x40) != 0
      && *((_BYTE *)v15 + 25) >= 2u )
    {
      WPP_SF_D(*((_QWORD *)v15 + 2), 71LL, &WPP_c7c899a03615192e0a524739b215c826_Traceguids, SessionConfiguration);
    }
    goto LABEL_15;
  }
  *(GUID *)lpCriticalSection = GUID_00000000_0000_0000_0000_000000000000;
  MixFormatInternal = CPolicyConfig::GetMixFormatInternal(
                        g_PolicyConfig,
                        v20,
                        eHostProcessConnector,
                        (struct _GUID *)lpCriticalSection,
                        (struct tWAVEFORMATEX **)&pv);
  v9 = (unsigned __int16 *)pv;
  SessionConfiguration = MixFormatInternal;
  if ( MixFormatInternal )
    goto LABEL_11;
  LOBYTE(lpCriticalSection[1]) = 0;
  lpCriticalSection[0] = (LPCRITICAL_SECTION)((char *)this + 872);
  ATL::CCritSecLock::Lock(lpCriticalSection);
  v10 = v9[1];
  *((_DWORD *)this + 231) = v10;
  v11 = 4LL * v10;
  if ( !is_mul_ok(v10, 4uLL) )
    v11 = -1LL;
  ProcessHeap = GetProcessHeap();
  v13 = HeapAlloc(ProcessHeap, 0, v11);
  *((_QWORD *)this + 116) = v13;
  if ( !v13 )
  {
    SessionConfiguration = -2147024882;
    if ( LOBYTE(lpCriticalSection[1]) )
      ATL::CCritSecLock::Unlock(lpCriticalSection);
    goto LABEL_11;
  }
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 231); i = (unsigned int)(i + 1) )
    *(_DWORD *)(*((_QWORD *)this + 116) + 4 * i) = 1065353216;
  if ( LOBYTE(lpCriticalSection[1]) )
    LeaveCriticalSection(lpCriticalSection[0]);
  *((_BYTE *)this + 936) = (a2 & 2) != 0;
  if ( (a2 & 2) == 0 )
  {
LABEL_11:
    v15 = WPP_GLOBAL_Control;
    goto LABEL_12;
  }
  v18 = CPerStreamVolumeAudioSession::OpenSessionPropertyStore(this);
  if ( v18 < 0 )
  {
    v15 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        69LL,
        &WPP_c7c899a03615192e0a524739b215c826_Traceguids,
        (unsigned int)v18);
      v15 = WPP_GLOBAL_Control;
    }
    SessionConfiguration = 0;
  }
  else
  {
    SessionConfiguration = CPerStreamVolumeAudioSession::LoadSessionConfiguration(this);
    CPerStreamVolumeAudioSession::CloseSessionPropertyStore(this);
    v15 = WPP_GLOBAL_Control;
  }
  if ( SessionConfiguration
    && v15 != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)v15 + 28) & 0x40) != 0
    && *((_BYTE *)v15 + 25) >= 4u )
  {
    WPP_SF_D(*((_QWORD *)v15 + 2), 70LL, &WPP_c7c899a03615192e0a524739b215c826_Traceguids, SessionConfiguration);
    goto LABEL_11;
  }
LABEL_12:
  if ( v9 )
  {
    CoTaskMemFree(v9);
    v15 = WPP_GLOBAL_Control;
  }
  if ( (SessionConfiguration & 0x80000000) != 0 )
    goto LABEL_36;
LABEL_15:
  if ( v6 )
  {
    v16 = *(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 16LL);
    if ( v16 == Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release )
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release((volatile signed __int32 *)v6);
    else
      v16((volatile signed __int32 *)v6);
  }
  return SessionConfiguration;
}
