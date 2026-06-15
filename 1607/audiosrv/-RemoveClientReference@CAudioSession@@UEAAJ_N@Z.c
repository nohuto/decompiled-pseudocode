/*
 * XREFs of ?RemoveClientReference@CAudioSession@@UEAAJ_N@Z @ 0x180013940
 * Callers:
 *     ?Dispose@CServerAudioSessionControl@@EEAAJXZ @ 0x18000EFD0 (-Dispose@CServerAudioSessionControl@@EEAAJXZ.c)
 * Callees:
 *     ?LastClientReferenceRemoved@CPerStreamVolumeAudioSession@@EEAAJXZ @ 0x180008B10 (-LastClientReferenceRemoved@CPerStreamVolumeAudioSession@@EEAAJXZ.c)
 *     ?StateCheckExpired@CAudioSession@@AEAAXXZ @ 0x180013BCC (-StateCheckExpired@CAudioSession@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x180054338 (WPP_SF_.c)
 *     WPP_SF_qdd @ 0x18005FFFC (WPP_SF_qdd.c)
 */

__int64 __fastcall CAudioSession::RemoveClientReference(CAudioSession *this, char a2)
{
  char v3; // di
  __int64 (__fastcall *v5)(CPerStreamVolumeAudioSession *); // rax

  v3 = 0;
  if ( a2 )
    v3 = _InterlockedExchangeAdd((volatile signed __int32 *)this + 117, 0xFFFFFFFF) == 1;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)this + 116, 0xFFFFFFFF) == 1 )
  {
    v5 = *(__int64 (__fastcall **)(CPerStreamVolumeAudioSession *))(*(_QWORD *)this + 288LL);
    if ( v5 == CPerStreamVolumeAudioSession::LastClientReferenceRemoved )
      CPerStreamVolumeAudioSession::LastClientReferenceRemoved(this);
    else
      v5(this);
    if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 97LL, &WPP_3a746c8541623b49d47b96eacc8d2afc_Traceguids);
    }
    v3 |= 1u;
  }
  else if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
         && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qdd(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      98LL,
      &WPP_3a746c8541623b49d47b96eacc8d2afc_Traceguids,
      this,
      *((_DWORD *)this + 116),
      *((_DWORD *)this + 117));
  }
  if ( v3 )
    CAudioSession::StateCheckExpired(this);
  return 0LL;
}
