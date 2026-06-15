/*
 * XREFs of ?AddClientReference@CAudioSession@@UEAAJ_N@Z @ 0x180026400
 * Callers:
 *     ?FinishConstruction@CServerAudioSessionControl@@UEAAJK_NPEAVCAudioSession@@@Z @ 0x180016160 (-FinishConstruction@CServerAudioSessionControl@@UEAAJK_NPEAVCAudioSession@@@Z.c)
 * Callees:
 *     WPP_SF_qdd @ 0x1800779F8 (WPP_SF_qdd.c)
 */

__int64 __fastcall CAudioSession::AddClientReference(CAudioSession *this, char a2)
{
  _InterlockedIncrement((volatile signed __int32 *)this + 116);
  if ( a2 )
    _InterlockedIncrement((volatile signed __int32 *)this + 117);
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qdd(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      132LL,
      &WPP_c7c899a03615192e0a524739b215c826_Traceguids,
      this,
      *((_DWORD *)this + 116),
      *((_DWORD *)this + 117));
  }
  return 0LL;
}
