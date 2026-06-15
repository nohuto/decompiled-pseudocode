/*
 * XREFs of ?RemoveClientReference@CAudioSession@@UEAAJ_N@Z @ 0x18000F0D0
 * Callers:
 *     ?Dispose@CServerAudioSessionControl@@EEAAJXZ @ 0x180018A00 (-Dispose@CServerAudioSessionControl@@EEAAJXZ.c)
 * Callees:
 *     WPP_SF_ @ 0x180001600 (WPP_SF_.c)
 *     ?StateCheckExpired@CAudioSession@@AEAAXXZ @ 0x18000F1F8 (-StateCheckExpired@CAudioSession@@AEAAXXZ.c)
 *     ?LastClientReferenceRemoved@CPerStreamVolumeAudioSession@@EEAAJXZ @ 0x180013780 (-LastClientReferenceRemoved@CPerStreamVolumeAudioSession@@EEAAJXZ.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_qdd @ 0x18007C708 (WPP_SF_qdd.c)
 */

__int64 __fastcall CAudioSession::RemoveClientReference(CAudioSession *this, char a2)
{
  char v3; // di
  __int64 (__fastcall *v5)(CPerStreamVolumeAudioSession *__hidden); // rsi

  v3 = 0;
  if ( a2 )
    v3 = _InterlockedExchangeAdd((volatile signed __int32 *)this + 80, 0xFFFFFFFF) == 1;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)this + 79, 0xFFFFFFFF) == 1 )
  {
    v5 = *(__int64 (__fastcall **)(CPerStreamVolumeAudioSession *__hidden))(*(_QWORD *)this + 288LL);
    if ( v5 == CPerStreamVolumeAudioSession::LastClientReferenceRemoved )
      CPerStreamVolumeAudioSession::LastClientReferenceRemoved(this);
    else
      v5(this);
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
    {
      WPP_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        0x85u,
        (__int64)&WPP_4588ba28106fc91c9afa31139958994b_Traceguids);
    }
    v3 |= 1u;
  }
  else if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
         && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
         && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_qdd(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      134LL,
      &WPP_4588ba28106fc91c9afa31139958994b_Traceguids,
      this,
      *((_DWORD *)this + 79),
      *((_DWORD *)this + 80));
  }
  if ( v3 )
    CAudioSession::StateCheckExpired(this);
  return 0LL;
}
