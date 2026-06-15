/*
 * XREFs of ?NotifyAudioDGTerminated@CVolumeStrip@@QEAAXXZ @ 0x180002130
 * Callers:
 *     ?NotifyAudioDGTerminated@CVolumeProvider@@QEAAXXZ @ 0x180002088 (-NotifyAudioDGTerminated@CVolumeProvider@@QEAAXXZ.c)
 * Callees:
 *     ?NotifyAudioDGTerminated@CMeterSoftware@@UEAAXXZ @ 0x1800021F0 (-NotifyAudioDGTerminated@CMeterSoftware@@UEAAXXZ.c)
 *     WPP_SF_ @ 0x1800025C0 (WPP_SF_.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

void __fastcall CVolumeStrip::NotifyAudioDGTerminated(CVolumeStrip *this)
{
  __int64 v2; // rsi
  __int64 v3; // rsi
  CMeterSoftware *v4; // rbx
  void (__fastcall *v5)(CMeterSoftware *__hidden); // rdi

  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 12LL, &WPP_209d1f8e26de95f2e61304f36bddda66_Traceguids);
  }
  v2 = *((_QWORD *)this + 30);
  if ( v2 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v2 + 72LL))(*((_QWORD *)this + 30));
  v3 = *((_QWORD *)this + 31);
  if ( v3 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v3 + 104LL))(*((_QWORD *)this + 31));
  v4 = (CMeterSoftware *)*((_QWORD *)this + 32);
  if ( v4 )
  {
    v5 = *(void (__fastcall **)(CMeterSoftware *__hidden))(*(_QWORD *)v4 + 104LL);
    if ( v5 == CMeterSoftware::NotifyAudioDGTerminated )
      CMeterSoftware::NotifyAudioDGTerminated(v4);
    else
      v5(v4);
  }
}
