/*
 * XREFs of ?CleanupDelayedInteractivityNotification@CApplication@@IEAAJXZ @ 0x18000C6E4
 * Callers:
 *     ??_ECApplication@@MEAAPEAXI@Z @ 0x18000AC50 (--_ECApplication@@MEAAPEAXI@Z.c)
 *     ?PostDelayedInteractivityNotification@CApplication@@IEAAJPEAVIPBMWorkItem@@@Z @ 0x18000C4DC (-PostDelayedInteractivityNotification@CApplication@@IEAAJPEAVIPBMWorkItem@@@Z.c)
 *     ?ProcessInteractivityNotification@CApplicationManager@@QEAAJPEBGW4__MIDL___MIDL_itf_playbackmanagerrpc_0000_0000_0001@@K@Z @ 0x180016020 (-ProcessInteractivityNotification@CApplicationManager@@QEAAJPEBGW4__MIDL___MIDL_itf_playbackmana.c)
 * Callees:
 *     WPP_SF_S @ 0x1800053A0 (WPP_SF_S.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18000A618 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180024CF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplication::CleanupDelayedInteractivityNotification(const wchar_t **this)
{
  const wchar_t *v2; // rcx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+38h] [rbp-20h] BYREF
  char v5; // [rsp+40h] [rbp-18h]

  lpCriticalSection = (LPCRITICAL_SECTION)(this + 50);
  v5 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  if ( this[55] )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x1Bu, &WPP_5f6cc46befba39241e72a8abc69dfa61_Traceguids, this[2]);
    }
    (*(void (__fastcall **)(struct CAudioThreadPool *, const wchar_t *, _QWORD, _QWORD, _DWORD))(*(_QWORD *)ThreadPool
                                                                                               + 24LL))(
      ThreadPool,
      this[55],
      0LL,
      0LL,
      0);
    (*(void (__fastcall **)(struct CAudioThreadPool *, const wchar_t *, __int64))(*(_QWORD *)ThreadPool + 32LL))(
      ThreadPool,
      this[55],
      1LL);
    v2 = this[56];
    if ( v2 )
      (*(void (__fastcall **)(const wchar_t *, __int64))(*(_QWORD *)v2 + 8LL))(v2, 1LL);
    this[56] = 0LL;
  }
  if ( v5 )
  {
    LeaveCriticalSection(lpCriticalSection);
    v5 = 0;
  }
  return 0LL;
}
