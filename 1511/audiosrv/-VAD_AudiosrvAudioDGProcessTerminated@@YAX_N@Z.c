/*
 * XREFs of ?VAD_AudiosrvAudioDGProcessTerminated@@YAX_N@Z @ 0x180001FD0
 * Callers:
 *     ?OnADGInactivityTimerFiredHandler@CAudioDGProcess@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x180001D70 (-OnADGInactivityTimerFiredHandler@CAudioDGProcess@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIM.c)
 *     ?OnADGProcessTerminated@CAudioDGProcess@@AEAAXXZ @ 0x18006A198 (-OnADGProcessTerminated@CAudioDGProcess@@AEAAXXZ.c)
 * Callees:
 *     ?NotifyAudioDGTerminated@CVolumeProvider@@QEAAXXZ @ 0x180002088 (-NotifyAudioDGTerminated@CVolumeProvider@@QEAAXXZ.c)
 *     ?NotifyAudioDGTerminated@CAudioSessionManagerProvider@@QEAAX_N@Z @ 0x180002290 (-NotifyAudioDGTerminated@CAudioSessionManagerProvider@@QEAAX_N@Z.c)
 *     WPP_SF_ @ 0x1800025C0 (WPP_SF_.c)
 *     ?GetAudioSessionManagerProvider@@YAJPEAPEAVCAudioSessionManagerProvider@@@Z @ 0x180005A64 (-GetAudioSessionManagerProvider@@YAJPEAPEAVCAudioSessionManagerProvider@@@Z.c)
 *     ?Release@?$CComObject@VCAudioSessionManagerProvider@@@ATL@@UEAAKXZ @ 0x180005B00 (-Release@-$CComObject@VCAudioSessionManagerProvider@@@ATL@@UEAAKXZ.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall VAD_AudiosrvAudioDGProcessTerminated(bool a1)
{
  int AudioSessionManagerProvider; // eax
  struct CAudioSessionManagerProvider *v3; // rbx
  void (__fastcall *v4)(struct CAudioSessionManagerProvider *); // rdi
  struct CAudioSessionManagerProvider *v5; // [rsp+48h] [rbp+10h] BYREF

  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 57LL, &WPP_35438112b434e0062086f6d4e2d2e42c_Traceguids);
  }
  v5 = 0LL;
  AudioSessionManagerProvider = GetAudioSessionManagerProvider(&v5);
  v3 = v5;
  if ( AudioSessionManagerProvider >= 0 )
    CAudioSessionManagerProvider::NotifyAudioDGTerminated(v5, a1);
  if ( g_pVolumeProvider )
    CVolumeProvider::NotifyAudioDGTerminated((CVolumeProvider *)g_pVolumeProvider);
  if ( v3 )
  {
    v4 = *(void (__fastcall **)(struct CAudioSessionManagerProvider *))(*(_QWORD *)v3 + 16LL);
    if ( (char *)v4 == (char *)ATL::CComObject<CAudioSessionManagerProvider>::Release )
      ATL::CComObject<CAudioSessionManagerProvider>::Release(v3);
    else
      v4(v3);
  }
}
