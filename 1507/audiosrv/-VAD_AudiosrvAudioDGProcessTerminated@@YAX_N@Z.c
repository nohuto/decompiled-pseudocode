/*
 * XREFs of ?VAD_AudiosrvAudioDGProcessTerminated@@YAX_N@Z @ 0x180001AB0
 * Callers:
 *     ?OnADGInactivityTimerFired@CAudioDGProcess@@AEAAXXZ @ 0x180001D28 (-OnADGInactivityTimerFired@CAudioDGProcess@@AEAAXXZ.c)
 *     ?OnADGProcessTerminated@CAudioDGProcess@@AEAAXXZ @ 0x18006B3A0 (-OnADGProcessTerminated@CAudioDGProcess@@AEAAXXZ.c)
 * Callees:
 *     WPP_SF_ @ 0x180001600 (WPP_SF_.c)
 *     ?NotifyAudioDGTerminated@CAudioSessionManagerProvider@@QEAAX_N@Z @ 0x180001624 (-NotifyAudioDGTerminated@CAudioSessionManagerProvider@@QEAAX_N@Z.c)
 *     ?NotifyAudioDGTerminated@CVolumeProvider@@QEAAXXZ @ 0x180001890 (-NotifyAudioDGTerminated@CVolumeProvider@@QEAAXXZ.c)
 *     ?GetAudioSessionManagerProvider@@YAJPEAPEAVCAudioSessionManagerProvider@@@Z @ 0x18002CA54 (-GetAudioSessionManagerProvider@@YAJPEAPEAVCAudioSessionManagerProvider@@@Z.c)
 *     ?Release@?$CComObject@VCAudioSessionManagerProvider@@@ATL@@UEAAKXZ @ 0x18002CAF0 (-Release@-$CComObject@VCAudioSessionManagerProvider@@@ATL@@UEAAKXZ.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall VAD_AudiosrvAudioDGProcessTerminated(char a1)
{
  int AudioSessionManagerProvider; // eax
  struct CAudioSessionManagerProvider *v3; // rbx
  void (__fastcall *v4)(struct CAudioSessionManagerProvider *); // rdi
  struct CAudioSessionManagerProvider *v5; // [rsp+48h] [rbp+10h] BYREF

  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 4) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
  {
    WPP_SF_(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x39u,
      (__int64)&WPP_38e46fdef237f327665e84f6b2229e5b_Traceguids);
  }
  v5 = 0LL;
  AudioSessionManagerProvider = GetAudioSessionManagerProvider(&v5);
  v3 = v5;
  if ( AudioSessionManagerProvider >= 0 )
    CAudioSessionManagerProvider::NotifyAudioDGTerminated(v5, a1);
  if ( g_pVolumeProvider )
    CVolumeProvider::NotifyAudioDGTerminated(g_pVolumeProvider);
  if ( v3 )
  {
    v4 = *(void (__fastcall **)(struct CAudioSessionManagerProvider *))(*(_QWORD *)v3 + 16LL);
    if ( (char *)v4 == (char *)ATL::CComObject<CAudioSessionManagerProvider>::Release )
      ATL::CComObject<CAudioSessionManagerProvider>::Release(v3);
    else
      v4(v3);
  }
}
