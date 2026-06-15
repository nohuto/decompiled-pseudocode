/*
 * XREFs of ?StateCheckExpired@CAudioSession@@AEAAXXZ @ 0x180013BCC
 * Callers:
 *     ?RemoveClientReference@CAudioSession@@UEAAJ_N@Z @ 0x180013940 (-RemoveClientReference@CAudioSession@@UEAAJ_N@Z.c)
 *     ?OnInactiveTimerElapsed@CAudioSession@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180029520 (-OnInactiveTimerElapsed@CAudioSession@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     ?NewState@CPerEndpointVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z @ 0x180002700 (-NewState@CPerEndpointVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z.c)
 *     ?NewState@CPerStreamVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z @ 0x180008C20 (-NewState@CPerStreamVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180017B70 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     WPP_SF_S @ 0x180038BEC (WPP_SF_S.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x180054338 (WPP_SF_.c)
 *     WPP_SF_D @ 0x18005435C (WPP_SF_D.c)
 *     WPP_SF_SD @ 0x180059B60 (WPP_SF_SD.c)
 */

void __fastcall CAudioSession::StateCheckExpired(CAudioSession *this)
{
  int TickCount64; // eax
  unsigned int v3; // esi
  CAudioSession *v4; // rcx
  void (__fastcall *v5)(CPerEndpointVolumeAudioSession *, enum _AudioSessionState); // rax
  __int64 v6; // rdx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-18h] BYREF
  char v8; // [rsp+38h] [rbp-10h]

  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 416);
  v8 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  if ( *((_DWORD *)this + 22) )
  {
    v4 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (CAudioSession *)&WPP_GLOBAL_Control
      || (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 25) < 4u )
    {
      goto LABEL_14;
    }
    v6 = 83LL;
LABEL_37:
    WPP_SF_(*((_QWORD *)v4 + 2), v6, &WPP_3a746c8541623b49d47b96eacc8d2afc_Traceguids);
    goto LABEL_14;
  }
  if ( *((int *)this + 117) > 0 )
  {
    v4 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (CAudioSession *)&WPP_GLOBAL_Control
      || (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 25) < 4u )
    {
      goto LABEL_14;
    }
    v6 = 84LL;
    goto LABEL_37;
  }
  if ( *((_BYTE *)this + 370) )
  {
    v4 = WPP_GLOBAL_Control;
    goto LABEL_17;
  }
  TickCount64 = GetTickCount64();
  v3 = TickCount64 - *((_DWORD *)this + 114);
  v4 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_SD(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      85,
      (unsigned int)&WPP_3a746c8541623b49d47b96eacc8d2afc_Traceguids,
      *((_QWORD *)this + 107),
      TickCount64 - *((_BYTE *)this + 456));
    v4 = WPP_GLOBAL_Control;
  }
  if ( *((int *)this + 116) > 0 )
  {
    if ( v4 == (CAudioSession *)&WPP_GLOBAL_Control || (*((_BYTE *)v4 + 28) & 0x40) == 0 || *((_BYTE *)v4 + 25) < 4u )
      goto LABEL_14;
    v6 = 86LL;
    goto LABEL_37;
  }
  if ( v3 < *((_DWORD *)this + 95) - 16 )
  {
    if ( v4 != (CAudioSession *)&WPP_GLOBAL_Control && (*((_BYTE *)v4 + 28) & 0x40) != 0 && *((_BYTE *)v4 + 25) >= 4u )
      WPP_SF_D(*((_QWORD *)v4 + 2), 87LL, &WPP_3a746c8541623b49d47b96eacc8d2afc_Traceguids, v3);
    goto LABEL_14;
  }
LABEL_17:
  if ( v4 != (CAudioSession *)&WPP_GLOBAL_Control && (*((_BYTE *)v4 + 28) & 0x40) != 0 && *((_BYTE *)v4 + 25) >= 4u )
    WPP_SF_S(*((_QWORD *)v4 + 2), 88LL, &WPP_3a746c8541623b49d47b96eacc8d2afc_Traceguids, *((_QWORD *)this + 107));
  v5 = *(void (__fastcall **)(CPerEndpointVolumeAudioSession *, enum _AudioSessionState))(*(_QWORD *)this + 88LL);
  if ( v5 == CPerStreamVolumeAudioSession::NewState )
  {
    CPerStreamVolumeAudioSession::NewState(this, AudioSessionStateExpired);
  }
  else if ( v5 == CPerEndpointVolumeAudioSession::NewState )
  {
    CPerEndpointVolumeAudioSession::NewState(this, AudioSessionStateExpired);
  }
  else
  {
    v5(this, AudioSessionStateExpired);
  }
LABEL_14:
  if ( v8 )
    LeaveCriticalSection(lpCriticalSection);
}
