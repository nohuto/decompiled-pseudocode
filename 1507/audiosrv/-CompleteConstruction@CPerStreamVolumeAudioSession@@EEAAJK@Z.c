/*
 * XREFs of ?CompleteConstruction@CPerStreamVolumeAudioSession@@EEAAJK@Z @ 0x180013FE0
 * Callers:
 *     ?FinishConstruction@CAudioSession@@UEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKK@Z @ 0x18000FE10 (-FinishConstruction@CAudioSession@@UEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKK@Z.c)
 * Callees:
 *     ?GetBuffer@CAudioEndpointId@@QEAAPEBGXZ @ 0x18000D284 (-GetBuffer@CAudioEndpointId@@QEAAPEBGXZ.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001B220 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001B270 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?GetMixFormatInternal@CPolicyConfig@@QEAAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x18001F934 (-GetMixFormatInternal@CPolicyConfig@@QEAAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audi.c)
 *     ?GetAliasedEndpointCharacteristics@CEndpointCharacteristicsCache@@QEAAJPEBGPEAPEAVCEndpointCharacteristics@@@Z @ 0x180023D70 (-GetAliasedEndpointCharacteristics@CEndpointCharacteristicsCache@@QEAAJPEBGPEAPEAVCEndpointChara.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180024370 (-Release@-$RuntimeClass@U-$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Mic.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?LoadSessionConfiguration@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x180035148 (-LoadSessionConfiguration@CPerStreamVolumeAudioSession@@AEAAJXZ.c)
 *     ?CloseSessionPropertyStore@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x180035354 (-CloseSessionPropertyStore@CPerStreamVolumeAudioSession@@AEAAJXZ.c)
 *     ?OpenSessionPropertyStore@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x18003543C (-OpenSessionPropertyStore@CPerStreamVolumeAudioSession@@AEAAJXZ.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall CPerStreamVolumeAudioSession::CompleteConstruction(CPerStreamVolumeAudioSession *this, char a2)
{
  const unsigned __int16 *Buffer; // rax
  CEndpointCharacteristicsCache *v5; // rcx
  int AliasedEndpointCharacteristics; // eax
  struct CEndpointCharacteristics *v7; // rbx
  unsigned int SessionConfiguration; // esi
  unsigned int MixFormatInternal; // eax
  unsigned __int16 *v10; // r15
  unsigned int v11; // eax
  SIZE_T v12; // rdi
  HANDLE ProcessHeap; // rax
  LPVOID v14; // rax
  __int64 i; // rdx
  __int64 v16; // rcx
  void (__fastcall *v17)(struct CEndpointCharacteristics *); // rdi
  int v19; // eax
  LPCRITICAL_SECTION lpCriticalSection[2]; // [rsp+30h] [rbp-10h] BYREF
  struct CEndpointCharacteristics *v21; // [rsp+70h] [rbp+30h] BYREF
  LPVOID pv; // [rsp+80h] [rbp+40h] BYREF

  pv = 0LL;
  v21 = 0LL;
  Buffer = CAudioEndpointId::GetBuffer((CPerStreamVolumeAudioSession *)((char *)this + 632));
  AliasedEndpointCharacteristics = CEndpointCharacteristicsCache::GetAliasedEndpointCharacteristics(v5, Buffer, &v21);
  v7 = v21;
  SessionConfiguration = AliasedEndpointCharacteristics;
  if ( AliasedEndpointCharacteristics < 0 )
  {
    v16 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
LABEL_36:
    if ( (struct _GUID *)v16 != &WPP_GLOBAL_Control && (*(_BYTE *)(v16 + 28) & 0x40) != 0 && *(_BYTE *)(v16 + 25) >= 2u )
      WPP_SF_D(*(_QWORD *)(v16 + 16), 71LL, &WPP_4588ba28106fc91c9afa31139958994b_Traceguids, SessionConfiguration);
    goto LABEL_15;
  }
  *(GUID *)lpCriticalSection = GUID_00000000_0000_0000_0000_000000000000;
  MixFormatInternal = CPolicyConfig::GetMixFormatInternal(
                        g_PolicyConfig,
                        v21,
                        eHostProcessConnector,
                        (struct _GUID *)lpCriticalSection,
                        (struct tWAVEFORMATEX **)&pv);
  v10 = (unsigned __int16 *)pv;
  SessionConfiguration = MixFormatInternal;
  if ( MixFormatInternal )
    goto LABEL_11;
  LOBYTE(lpCriticalSection[1]) = 0;
  lpCriticalSection[0] = (LPCRITICAL_SECTION)((char *)this + 720);
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)lpCriticalSection);
  v11 = v10[1];
  *((_DWORD *)this + 193) = v11;
  v12 = 4LL * v11;
  if ( !is_mul_ok(v11, 4uLL) )
    v12 = -1LL;
  ProcessHeap = GetProcessHeap();
  v14 = HeapAlloc(ProcessHeap, 0, v12);
  *((_QWORD *)this + 97) = v14;
  if ( !v14 )
  {
    SessionConfiguration = -2147024882;
    if ( LOBYTE(lpCriticalSection[1]) )
      ATL::CCritSecLock::Unlock((ATL::CCritSecLock *)lpCriticalSection);
    goto LABEL_11;
  }
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 193); i = (unsigned int)(i + 1) )
    *(_DWORD *)(*((_QWORD *)this + 97) + 4 * i) = 1065353216;
  if ( LOBYTE(lpCriticalSection[1]) )
    LeaveCriticalSection(lpCriticalSection[0]);
  *((_BYTE *)this + 784) = (a2 & 2) != 0;
  if ( (a2 & 2) == 0 )
  {
LABEL_11:
    v16 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
    goto LABEL_12;
  }
  v19 = CPerStreamVolumeAudioSession::OpenSessionPropertyStore(this);
  if ( v19 < 0 )
  {
    v16 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
    {
      WPP_SF_D(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        69LL,
        &WPP_4588ba28106fc91c9afa31139958994b_Traceguids,
        (unsigned int)v19);
      v16 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
    }
    SessionConfiguration = 0;
  }
  else
  {
    SessionConfiguration = CPerStreamVolumeAudioSession::LoadSessionConfiguration(this);
    CPerStreamVolumeAudioSession::CloseSessionPropertyStore(this);
    v16 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
  }
  if ( SessionConfiguration
    && (struct _GUID *)v16 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(v16 + 28) & 0x40) != 0
    && *(_BYTE *)(v16 + 25) >= 4u )
  {
    WPP_SF_D(*(_QWORD *)(v16 + 16), 70LL, &WPP_4588ba28106fc91c9afa31139958994b_Traceguids, SessionConfiguration);
    goto LABEL_11;
  }
LABEL_12:
  if ( v10 )
  {
    CoTaskMemFree(v10);
    v16 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
  }
  if ( (SessionConfiguration & 0x80000000) != 0 )
    goto LABEL_36;
LABEL_15:
  if ( v7 )
  {
    v17 = *(void (__fastcall **)(struct CEndpointCharacteristics *))(*(_QWORD *)v7 + 16LL);
    if ( (char *)v17 == (char *)Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release )
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v7);
    else
      v17(v7);
  }
  return SessionConfiguration;
}
