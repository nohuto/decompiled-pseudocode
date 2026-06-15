/*
 * XREFs of ?OnInactiveTimerElapsed@CAudioSession@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180029520
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CPerEndpointVolumeAudioSession@@EEAAKXZ @ 0x180002690 (-Release@CPerEndpointVolumeAudioSession@@EEAAKXZ.c)
 *     ?Release@CAudioSession@@UEAAKXZ @ 0x180012D70 (-Release@CAudioSession@@UEAAKXZ.c)
 *     ?DeleteInactiveTimer@CAudioSession@@AEAAJXZ @ 0x180013660 (-DeleteInactiveTimer@CAudioSession@@AEAAJXZ.c)
 *     ?StateCheckExpired@CAudioSession@@AEAAXXZ @ 0x180013BCC (-StateCheckExpired@CAudioSession@@AEAAXXZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180017B70 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x180017BA0 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     WPP_SF_q @ 0x180038C50 (WPP_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CAudioSession::OnInactiveTimerElapsed(struct _TP_CALLBACK_INSTANCE *a1, char *a2, struct _TP_WORK *a3)
{
  char v4; // di
  __int64 (__fastcall *v5)(CPerEndpointVolumeAudioSession *); // rax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v7; // [rsp+28h] [rbp-10h]

  v7 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)(a2 + 728);
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  if ( *((_QWORD *)a2 + 96) )
  {
    CAudioSession::DeleteInactiveTimer((CAudioSession *)a2);
    LeaveCriticalSection(lpCriticalSection);
    v4 = 0;
    v7 = 0;
    if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 99LL, &WPP_3a746c8541623b49d47b96eacc8d2afc_Traceguids, a2);
    }
    CAudioSession::StateCheckExpired((CAudioSession *)a2);
  }
  else
  {
    v4 = v7;
  }
  if ( v4 )
    ATL::CCritSecLock::Unlock(&lpCriticalSection);
  v5 = *(__int64 (__fastcall **)(CPerEndpointVolumeAudioSession *))(*(_QWORD *)a2 + 16LL);
  if ( v5 == CAudioSession::Release )
  {
    CAudioSession::Release((CAudioSession *)a2);
  }
  else if ( v5 == CPerEndpointVolumeAudioSession::Release )
  {
    CPerEndpointVolumeAudioSession::Release((CPerEndpointVolumeAudioSession *)a2);
  }
  else
  {
    v5((CPerEndpointVolumeAudioSession *)a2);
  }
}
