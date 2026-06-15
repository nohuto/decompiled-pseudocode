/*
 * XREFs of ?CleanupDelayedInteractivityNotification@CApplication@@IEAAJXZ @ 0x18000C0F8
 * Callers:
 *     ??_ECApplication@@MEAAPEAXI@Z @ 0x18000A950 (--_ECApplication@@MEAAPEAXI@Z.c)
 *     ?PostDelayedInteractivityNotification@CApplication@@IEAAJPEAVIPBMWorkItem@@@Z @ 0x18000BF74 (-PostDelayedInteractivityNotification@CApplication@@IEAAJPEAVIPBMWorkItem@@@Z.c)
 *     ?ProcessInteractivityNotification@CApplicationManager@@QEAAJPEBGW4__MIDL___MIDL_itf_playbackmanagerrpc_0000_0000_0001@@K@Z @ 0x180014738 (-ProcessInteractivityNotification@CApplicationManager@@QEAAJPEBGW4__MIDL___MIDL_itf_playbackmana.c)
 * Callees:
 *     WPP_SF_S @ 0x180005B6C (WPP_SF_S.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18000A394 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180021B70 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplication::CleanupDelayedInteractivityNotification(const wchar_t **this)
{
  const wchar_t *v2; // rcx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+38h] [rbp-20h] BYREF
  char v5; // [rsp+40h] [rbp-18h]

  lpCriticalSection = (LPCRITICAL_SECTION)(this + 57);
  v5 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  if ( this[62] )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x1Bu, &WPP_17d50ef9044b326f9caf58457a9d5dd6_Traceguids, this[3]);
    }
    (*(void (__fastcall **)(struct CAudioThreadPool *, const wchar_t *, _QWORD, _QWORD, _DWORD))(*(_QWORD *)ThreadPool
                                                                                               + 24LL))(
      ThreadPool,
      this[62],
      0LL,
      0LL,
      0);
    (*(void (__fastcall **)(struct CAudioThreadPool *, const wchar_t *, __int64))(*(_QWORD *)ThreadPool + 32LL))(
      ThreadPool,
      this[62],
      1LL);
    v2 = this[63];
    if ( v2 )
      (*(void (__fastcall **)(const wchar_t *, __int64))(*(_QWORD *)v2 + 8LL))(v2, 1LL);
    this[63] = 0LL;
  }
  if ( v5 )
  {
    LeaveCriticalSection(lpCriticalSection);
    v5 = 0;
  }
  return 0LL;
}
