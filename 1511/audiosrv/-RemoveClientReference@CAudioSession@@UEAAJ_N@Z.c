/*
 * XREFs of ?RemoveClientReference@CAudioSession@@UEAAJ_N@Z @ 0x180026320
 * Callers:
 *     ?Dispose@CServerAudioSessionControl@@EEAAJXZ @ 0x180016000 (-Dispose@CServerAudioSessionControl@@EEAAJXZ.c)
 * Callees:
 *     WPP_SF_ @ 0x1800025C0 (WPP_SF_.c)
 *     ?StateCheckExpired@CAudioSession@@AEAAXXZ @ 0x180026448 (-StateCheckExpired@CAudioSession@@AEAAXXZ.c)
 *     ?LastClientReferenceRemoved@CPerStreamVolumeAudioSession@@EEAAJXZ @ 0x180035770 (-LastClientReferenceRemoved@CPerStreamVolumeAudioSession@@EEAAJXZ.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_qdd @ 0x1800779F8 (WPP_SF_qdd.c)
 */

__int64 __fastcall CAudioSession::RemoveClientReference(CAudioSession *this, char a2)
{
  char v3; // di
  __int64 (__fastcall *v5)(CPerStreamVolumeAudioSession *__hidden); // rsi

  v3 = 0;
  if ( a2 )
    v3 = _InterlockedExchangeAdd((volatile signed __int32 *)this + 117, 0xFFFFFFFF) == 1;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)this + 116, 0xFFFFFFFF) == 1 )
  {
    v5 = *(__int64 (__fastcall **)(CPerStreamVolumeAudioSession *__hidden))(*(_QWORD *)this + 288LL);
    if ( v5 == CPerStreamVolumeAudioSession::LastClientReferenceRemoved )
      CPerStreamVolumeAudioSession::LastClientReferenceRemoved(this);
    else
      v5(this);
    if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x85u, (__int64)&WPP_c7c899a03615192e0a524739b215c826_Traceguids);
    }
    v3 |= 1u;
  }
  else if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
         && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qdd(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      134LL,
      &WPP_c7c899a03615192e0a524739b215c826_Traceguids,
      this,
      *((_DWORD *)this + 116),
      *((_DWORD *)this + 117));
  }
  if ( v3 )
    CAudioSession::StateCheckExpired(this);
  return 0LL;
}
