/*
 * XREFs of ?CompleteConstruction@CPerStreamVolumeAudioSession@@EEAAJK@Z @ 0x1800090E0
 * Callers:
 *     ?FinishConstruction@CAudioSession@@UEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKK@Z @ 0x180014D80 (-FinishConstruction@CAudioSession@@UEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKK@Z.c)
 * Callees:
 *     ?GetBuffer@CAudioEndpointId@@QEAAPEBGXZ @ 0x180005E04 (-GetBuffer@CAudioEndpointId@@QEAAPEBGXZ.c)
 *     ?GetAliasedEndpointCharacteristics@CEndpointCharacteristicsCache@@UEAAJPEBGPEAPEAVCEndpointCharacteristics@@@Z @ 0x180008370 (-GetAliasedEndpointCharacteristics@CEndpointCharacteristicsCache@@UEAAJPEBGPEAPEAVCEndpointChara.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIEndpointCharacteristics@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180008900 (-Release@-$RuntimeClass@U-$InterfaceList@UIEndpointCharacteristics@@VNil@Details@WRL@Microsoft@@.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180017B70 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x180017BA0 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?GetMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@P6AJPEAV1@0@ZPEAPEAUtWAVEFORMATEX@@@Z @ 0x18001B720 (-GetMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_D @ 0x18005435C (WPP_SF_D.c)
 *     ?CloseSessionPropertyStore@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x18005A730 (-CloseSessionPropertyStore@CPerStreamVolumeAudioSession@@AEAAJXZ.c)
 *     ?LoadSessionConfiguration@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x18005CECC (-LoadSessionConfiguration@CPerStreamVolumeAudioSession@@AEAAJXZ.c)
 *     ?OpenSessionPropertyStore@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x18005DD8C (-OpenSessionPropertyStore@CPerStreamVolumeAudioSession@@AEAAJXZ.c)
 */

__int64 __fastcall CPerStreamVolumeAudioSession::CompleteConstruction(CPerStreamVolumeAudioSession *this, char a2)
{
  const unsigned __int16 *Buffer; // rax
  int AliasedEndpointCharacteristics; // eax
  int (*v6)(struct CEndpointCharacteristics *, enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001); // r9
  int SessionConfiguration; // edi
  int MixFormat; // eax
  unsigned __int16 *v9; // r14
  unsigned int v10; // eax
  SIZE_T v11; // rbx
  HANDLE ProcessHeap; // rax
  LPVOID v13; // rax
  __int64 i; // rdx
  void (*v15)(void); // rax
  int v17; // eax
  CAudioSession *v18; // rcx
  LPCRITICAL_SECTION lpCriticalSection[2]; // [rsp+30h] [rbp-10h] BYREF
  struct CEndpointCharacteristics *v20; // [rsp+70h] [rbp+30h] BYREF
  LPVOID pv; // [rsp+80h] [rbp+40h] BYREF

  pv = 0LL;
  v20 = 0LL;
  Buffer = CAudioEndpointId::GetBuffer((CPerStreamVolumeAudioSession *)((char *)this + 784));
  if ( *(__int64 (__fastcall **)(RTL_SRWLOCK *, const unsigned __int16 *, struct CEndpointCharacteristics **))(*(_QWORD *)g_pEndpointCharacteristicsCache + 24LL) == CEndpointCharacteristicsCache::GetAliasedEndpointCharacteristics )
    AliasedEndpointCharacteristics = CEndpointCharacteristicsCache::GetAliasedEndpointCharacteristics(
                                       (RTL_SRWLOCK *)g_pEndpointCharacteristicsCache,
                                       Buffer,
                                       &v20);
  else
    AliasedEndpointCharacteristics = (*(__int64 (__fastcall **)(CEndpointCharacteristicsCache *, const unsigned __int16 *, struct CEndpointCharacteristics **))(*(_QWORD *)g_pEndpointCharacteristicsCache + 24LL))(
                                       g_pEndpointCharacteristicsCache,
                                       Buffer,
                                       &v20);
  SessionConfiguration = AliasedEndpointCharacteristics;
  if ( AliasedEndpointCharacteristics < 0 )
    goto LABEL_36;
  *(GUID *)lpCriticalSection = GUID_00000000_0000_0000_0000_000000000000;
  MixFormat = CEndpointCharacteristics::GetMixFormat(
                v20,
                eHostProcessConnector,
                (struct _GUID *)lpCriticalSection,
                v6,
                (struct tWAVEFORMATEX **)&pv);
  v9 = (unsigned __int16 *)pv;
  SessionConfiguration = MixFormat;
  if ( !MixFormat )
  {
    LOBYTE(lpCriticalSection[1]) = 0;
    lpCriticalSection[0] = (LPCRITICAL_SECTION)((char *)this + 872);
    ATL::CCritSecLock::Lock((ATL::CCritSecLock *)lpCriticalSection);
    v10 = v9[1];
    *((_DWORD *)this + 246) = v10;
    v11 = 4LL * v10;
    if ( !is_mul_ok(v10, 4uLL) )
      v11 = -1LL;
    ProcessHeap = GetProcessHeap();
    v13 = HeapAlloc(ProcessHeap, 0, v11);
    *((_QWORD *)this + 124) = v13;
    if ( v13 )
    {
      for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 246); i = (unsigned int)(i + 1) )
        *(_DWORD *)(*((_QWORD *)this + 124) + 4 * i) = 1065353216;
      if ( LOBYTE(lpCriticalSection[1]) )
        LeaveCriticalSection(lpCriticalSection[0]);
      *((_BYTE *)this + 1008) = (a2 & 2) != 0;
      if ( (a2 & 2) != 0 )
      {
        v17 = CPerStreamVolumeAudioSession::OpenSessionPropertyStore(this);
        if ( v17 < 0 )
        {
          v18 = WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
            && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          {
            WPP_SF_D(
              *((_QWORD *)WPP_GLOBAL_Control + 2),
              44LL,
              &WPP_3a746c8541623b49d47b96eacc8d2afc_Traceguids,
              (unsigned int)v17);
            v18 = WPP_GLOBAL_Control;
          }
          SessionConfiguration = 0;
        }
        else
        {
          SessionConfiguration = CPerStreamVolumeAudioSession::LoadSessionConfiguration(this);
          CPerStreamVolumeAudioSession::CloseSessionPropertyStore(this);
          v18 = WPP_GLOBAL_Control;
        }
        if ( SessionConfiguration
          && v18 != (CAudioSession *)&WPP_GLOBAL_Control
          && (*((_BYTE *)v18 + 28) & 0x40) != 0
          && *((_BYTE *)v18 + 25) >= 4u )
        {
          WPP_SF_D(
            *((_QWORD *)v18 + 2),
            45LL,
            &WPP_3a746c8541623b49d47b96eacc8d2afc_Traceguids,
            (unsigned int)SessionConfiguration);
        }
      }
    }
    else
    {
      SessionConfiguration = -2147024882;
      if ( LOBYTE(lpCriticalSection[1]) )
        ATL::CCritSecLock::Unlock((ATL::CCritSecLock *)lpCriticalSection);
    }
  }
  if ( v9 )
    CoTaskMemFree(v9);
  if ( SessionConfiguration < 0 )
LABEL_36:
    AudSrvTraceLoggingErrorHelper("CPerStreamVolumeAudioSession::CompleteConstruction", 0x7F4u, SessionConfiguration);
  if ( v20 )
  {
    v15 = *(void (**)(void))(*(_QWORD *)v20 + 16LL);
    if ( (char *)v15 == (char *)Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IEndpointCharacteristics,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release )
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IEndpointCharacteristics,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release((__int64)v20);
    else
      v15();
  }
  return (unsigned int)SessionConfiguration;
}
