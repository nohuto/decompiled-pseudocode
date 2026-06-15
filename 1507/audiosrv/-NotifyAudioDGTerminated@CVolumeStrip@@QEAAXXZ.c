/*
 * XREFs of ?NotifyAudioDGTerminated@CVolumeStrip@@QEAAXXZ @ 0x180001938
 * Callers:
 *     ?NotifyAudioDGTerminated@CVolumeProvider@@QEAAXXZ @ 0x180001890 (-NotifyAudioDGTerminated@CVolumeProvider@@QEAAXXZ.c)
 * Callees:
 *     WPP_SF_ @ 0x180001600 (WPP_SF_.c)
 *     ?NotifyAudioDGTerminated@CMeterSoftware@@UEAAXXZ @ 0x180001A00 (-NotifyAudioDGTerminated@CMeterSoftware@@UEAAXXZ.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

void __fastcall CVolumeStrip::NotifyAudioDGTerminated(CVolumeStrip *this)
{
  __int64 v2; // rsi
  __int64 v3; // rsi
  CMeterSoftware *v4; // rbx
  void (__fastcall *v5)(CMeterSoftware *__hidden); // rdi

  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x10000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0xCu,
      (__int64)&WPP_209d1f8e26de95f2e61304f36bddda66_Traceguids);
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
