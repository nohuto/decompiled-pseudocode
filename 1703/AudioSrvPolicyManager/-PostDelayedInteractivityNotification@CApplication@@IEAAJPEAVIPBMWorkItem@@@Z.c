/*
 * XREFs of ?PostDelayedInteractivityNotification@CApplication@@IEAAJPEAVIPBMWorkItem@@@Z @ 0x18000BF74
 * Callers:
 *     ?ProcessInteractivityNotification@CApplicationManager@@QEAAJPEBGW4__MIDL___MIDL_itf_playbackmanagerrpc_0000_0000_0001@@K@Z @ 0x180014738 (-ProcessInteractivityNotification@CApplicationManager@@QEAAJPEBGW4__MIDL___MIDL_itf_playbackmana.c)
 * Callees:
 *     WPP_SF_D @ 0x180003BD8 (WPP_SF_D.c)
 *     WPP_SF_S @ 0x180005B6C (WPP_SF_S.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18000A394 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?CleanupDelayedInteractivityNotification@CApplication@@IEAAJXZ @ 0x18000C0F8 (-CleanupDelayedInteractivityNotification@CApplication@@IEAAJXZ.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x1800182A4 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180021B70 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplication::PostDelayedInteractivityNotification(const wchar_t **this, const wchar_t *a2)
{
  signed int v4; // ebx
  __int64 v5; // rax
  signed int LastError; // eax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+38h] [rbp-20h] BYREF
  char v9; // [rsp+40h] [rbp-18h]
  int v10; // [rsp+60h] [rbp+8h] BYREF
  int v11; // [rsp+64h] [rbp+Ch]

  v4 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)(this + 57);
  v9 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  CApplication::CleanupDelayedInteractivityNotification((CApplication *)this);
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x19u, &WPP_17d50ef9044b326f9caf58457a9d5dd6_Traceguids, this[3]);
  }
  if ( this[62]
    || (v5 = (*(__int64 (__fastcall **)(struct CAudioThreadPool *, _QWORD, const wchar_t **))(*(_QWORD *)ThreadPool + 8LL))(
               ThreadPool,
               CApplication::DelayedInteractivityNotificationTimerExpiredCallback,
               this),
        (this[62] = (const wchar_t *)v5) != 0LL) )
  {
    this[63] = a2;
    v10 = -300000000;
    v11 = -1;
    (*(void (__fastcall **)(struct CAudioThreadPool *, const wchar_t *, int *, _QWORD, int))(*(_QWORD *)ThreadPool + 24LL))(
      ThreadPool,
      this[62],
      &v10,
      0LL,
      100);
  }
  else
  {
    LastError = GetLastError();
    v4 = (unsigned __int16)LastError | 0x80070000;
    if ( LastError <= 0 )
      v4 = LastError;
  }
  if ( v4 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x1Au, &WPP_17d50ef9044b326f9caf58457a9d5dd6_Traceguids, v4);
    }
    AudPolicyLogError("CApplication::PostDelayedInteractivityNotification", 1520, v4);
  }
  if ( v9 )
  {
    LeaveCriticalSection(lpCriticalSection);
    v9 = 0;
  }
  return (unsigned int)v4;
}
