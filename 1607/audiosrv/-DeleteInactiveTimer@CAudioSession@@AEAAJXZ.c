/*
 * XREFs of ?DeleteInactiveTimer@CAudioSession@@AEAAJXZ @ 0x180013660
 * Callers:
 *     ?NewState@CAudioSession@@MEAAXW4_AudioSessionState@@@Z @ 0x180013A60 (-NewState@CAudioSession@@MEAAXW4_AudioSessionState@@@Z.c)
 *     ?OnInactiveTimerElapsed@CAudioSession@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180029520 (-OnInactiveTimerElapsed@CAudioSession@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     ?Release@CPerEndpointVolumeAudioSession@@EEAAKXZ @ 0x180002690 (-Release@CPerEndpointVolumeAudioSession@@EEAAKXZ.c)
 *     ?Release@CAudioSession@@UEAAKXZ @ 0x180012D70 (-Release@CAudioSession@@UEAAKXZ.c)
 *     ?WaitForTimerCallbacks@CAudioThreadPool@@UEAAXPEAU_TP_TIMER@@H@Z @ 0x180016120 (-WaitForTimerCallbacks@CAudioThreadPool@@UEAAXPEAU_TP_TIMER@@H@Z.c)
 *     ?SetTimer@CAudioThreadPool@@UEAAXPEAU_TP_TIMER@@PEAU_FILETIME@@KK@Z @ 0x180016140 (-SetTimer@CAudioThreadPool@@UEAAXPEAU_TP_TIMER@@PEAU_FILETIME@@KK@Z.c)
 *     ?CloseTimer@CAudioThreadPool@@UEAAXPEAU_TP_TIMER@@@Z @ 0x180016190 (-CloseTimer@CAudioThreadPool@@UEAAXPEAU_TP_TIMER@@@Z.c)
 *     ?CloseWork@CAudioThreadPool@@UEAAXPEAU_TP_WORK@@@Z @ 0x1800161A0 (-CloseWork@CAudioThreadPool@@UEAAXPEAU_TP_WORK@@@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180017B70 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x180017BA0 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     WPP_SF_q @ 0x180038C50 (WPP_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAudioSession::DeleteInactiveTimer(CAudioSession *this)
{
  struct _TP_TIMER *v2; // rdi
  void (__fastcall *v3)(CAudioThreadPool *__hidden, struct _TP_TIMER *, struct _FILETIME *, unsigned int, unsigned int); // rax
  void (__fastcall *v4)(CAudioThreadPool *__hidden, struct _TP_TIMER *, int); // rax
  void (__fastcall *v5)(CAudioThreadPool *__hidden, struct _TP_TIMER *); // rax
  struct _TP_WORK *v6; // rdx
  void (*v7)(void); // rax
  __int64 (__fastcall *v8)(CPerEndpointVolumeAudioSession *); // rax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-18h] BYREF
  char v11; // [rsp+38h] [rbp-10h]

  v11 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 728);
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  if ( *((_QWORD *)this + 96) )
  {
    if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 103LL, &WPP_3a746c8541623b49d47b96eacc8d2afc_Traceguids, this);
    }
    v2 = (struct _TP_TIMER *)_InterlockedExchange64((volatile __int64 *)this + 96, 0LL);
    v3 = *(void (__fastcall **)(CAudioThreadPool *__hidden, struct _TP_TIMER *, struct _FILETIME *, unsigned int, unsigned int))(*(_QWORD *)ThreadPool + 24LL);
    if ( v3 == CAudioThreadPool::SetTimer )
      CAudioThreadPool::SetTimer(ThreadPool, v2, 0LL, 0, 0);
    else
      v3(ThreadPool, v2, 0LL, 0, 0);
    v4 = *(void (__fastcall **)(CAudioThreadPool *__hidden, struct _TP_TIMER *, int))(*(_QWORD *)ThreadPool + 32LL);
    if ( v4 == CAudioThreadPool::WaitForTimerCallbacks )
      CAudioThreadPool::WaitForTimerCallbacks(ThreadPool, v2, 1);
    else
      v4(ThreadPool, v2, 1);
    v5 = *(void (__fastcall **)(CAudioThreadPool *__hidden, struct _TP_TIMER *))(*(_QWORD *)ThreadPool + 16LL);
    if ( v5 == CAudioThreadPool::CloseTimer )
      CAudioThreadPool::CloseTimer(ThreadPool, v2);
    else
      v5(ThreadPool, v2);
    v6 = (struct _TP_WORK *)*((_QWORD *)this + 97);
    if ( v6 )
    {
      v7 = *(void (**)(void))(*(_QWORD *)ThreadPool + 64LL);
      if ( (char *)v7 == (char *)CAudioThreadPool::CloseWork )
        CAudioThreadPool::CloseWork(ThreadPool, v6);
      else
        v7();
      *((_QWORD *)this + 97) = 0LL;
    }
    LeaveCriticalSection(lpCriticalSection);
    v8 = *(__int64 (__fastcall **)(CPerEndpointVolumeAudioSession *))(*(_QWORD *)this + 16LL);
    if ( v8 == CAudioSession::Release )
    {
      CAudioSession::Release(this);
    }
    else if ( v8 == CPerEndpointVolumeAudioSession::Release )
    {
      CPerEndpointVolumeAudioSession::Release(this);
    }
    else
    {
      v8(this);
    }
  }
  else if ( v11 )
  {
    ATL::CCritSecLock::Unlock((ATL::CCritSecLock *)&lpCriticalSection);
  }
  return 0LL;
}
