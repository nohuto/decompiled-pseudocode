/*
 * XREFs of ?UnlockADGProcess@CAudioDGProcess@@QEAAJXZ @ 0x180017180
 * Callers:
 *     AUDIOSERVER_rundown @ 0x180004710 (AUDIOSERVER_rundown.c)
 *     AudioServerDisconnect @ 0x1800060D0 (AudioServerDisconnect.c)
 *     AudioServerInitialize @ 0x18000CF80 (AudioServerInitialize.c)
 *     ??_GCAPOWrapperClient@@UEAAPEAXI@Z @ 0x180016830 (--_GCAPOWrapperClient@@UEAAPEAXI@Z.c)
 *     ?GetInitializedSystemEffectInterface@CEndpointCharacteristics@@QEAAJU_tagpropertykey@@U_GUID@@HHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU3@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x18001CA10 (-GetInitializedSystemEffectInterface@CEndpointCharacteristics@@QEAAJU_tagpropertykey@@U_GUID@@HH.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIAPOWrapperClient@@U?$InterfaceList@UIAudioProcessingObject@@U?$InterfaceList@UIAudioSystemEffects2@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800207C0 (-Release@-$RuntimeClass@U-$InterfaceList@UIAPOWrapperClient@@U-$InterfaceList@UIAudioProcessingO.c)
 *     HAUDIOSRVDIAGNOSTICS_rundown @ 0x180084E80 (HAUDIOSRVDIAGNOSTICS_rundown.c)
 *     s_adGetDeviceGraphWnfStateName @ 0x180084F40 (s_adGetDeviceGraphWnfStateName.c)
 * Callees:
 *     ?CreateTimer@CAudioThreadPool@@UEAAPEAU_TP_TIMER@@P6AXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU2@@Z1@Z @ 0x180016170 (-CreateTimer@CAudioThreadPool@@UEAAPEAU_TP_TIMER@@P6AXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU2@@Z1@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180017B70 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x180054338 (WPP_SF_.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioDGProcess::UnlockADGProcess(CAudioDGProcess *this)
{
  LPCRITICAL_SECTION v1; // rbx
  CAudioThreadPool *v3; // rdi
  __int64 v4; // rax
  struct _TP_TIMER *DebugInfo; // rcx
  void (__fastcall *v6)(CAudioThreadPool *, struct _TP_TIMER *, struct _FILETIME *, DWORD, DWORD); // rax
  unsigned int v7; // ebx
  PTP_TIMER (__fastcall *v9)(CAudioThreadPool *, void (*)(struct _TP_CALLBACK_INSTANCE *, void *, struct _TP_TIMER *), void *); // rax
  PTP_TIMER Timer; // rax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+48h] [rbp-30h] BYREF
  char v12; // [rsp+50h] [rbp-28h]
  CAudioDGProcess *pvData; // [rsp+80h] [rbp+8h] BYREF
  DWORD pcbData; // [rsp+88h] [rbp+10h] BYREF
  _FILETIME pftDueTime; // [rsp+90h] [rbp+18h] BYREF

  pvData = this;
  v1 = g_ADGProcess;
  lpCriticalSection = g_ADGProcess;
  v12 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 53LL, &WPP_1980ef3193d738ecffc607926aa7df6d_Traceguids);
  }
  if ( LODWORD(v1[1].DebugInfo)-- == 1 )
  {
    v3 = ThreadPool;
    if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 50LL, &WPP_1980ef3193d738ecffc607926aa7df6d_Traceguids);
    }
    if ( !v1[3].DebugInfo )
    {
      v9 = *(PTP_TIMER (__fastcall **)(CAudioThreadPool *, void (*)(struct _TP_CALLBACK_INSTANCE *, void *, struct _TP_TIMER *), void *))(*(_QWORD *)v3 + 8LL);
      if ( v9 == CAudioThreadPool::CreateTimer )
        Timer = CAudioThreadPool::CreateTimer(
                  v3,
                  (void (*)(struct _TP_CALLBACK_INSTANCE *, void *, struct _TP_TIMER *))CAudioDGProcess::OnADGInactivityTimerFiredHandler,
                  v1);
      else
        Timer = v9(
                  v3,
                  (void (*)(struct _TP_CALLBACK_INSTANCE *, void *, struct _TP_TIMER *))CAudioDGProcess::OnADGInactivityTimerFiredHandler,
                  v1);
      v1[3].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)Timer;
    }
    pcbData = 4;
    if ( RegGetValueW(
           HKEY_LOCAL_MACHINE,
           L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
           L"AudioDGInactiveTimeout",
           0x18u,
           0LL,
           &pvData,
           &pcbData) )
    {
      v4 = 300LL;
      LODWORD(pvData) = 300;
    }
    else
    {
      v4 = (unsigned int)pvData;
    }
    DebugInfo = (struct _TP_TIMER *)v1[3].DebugInfo;
    if ( DebugInfo )
    {
      pftDueTime = (_FILETIME)(-10000000 * v4);
      v6 = *(void (__fastcall **)(CAudioThreadPool *, struct _TP_TIMER *, struct _FILETIME *, DWORD, DWORD))(*(_QWORD *)v3 + 24LL);
      if ( v6 == CAudioThreadPool::SetTimer )
        SetThreadpoolTimer(DebugInfo, &pftDueTime, 0, 0);
      else
        v6(v3, DebugInfo, &pftDueTime, 0LL, 0);
    }
  }
  v7 = (unsigned int)v1[1].DebugInfo;
  if ( v12 )
  {
    LeaveCriticalSection(lpCriticalSection);
    v12 = 0;
  }
  return v7;
}
