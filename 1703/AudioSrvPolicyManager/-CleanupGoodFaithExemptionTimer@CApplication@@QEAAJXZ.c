/*
 * XREFs of ?CleanupGoodFaithExemptionTimer@CApplication@@QEAAJXZ @ 0x18000BE68
 * Callers:
 *     ?Invoke@CStreamStartedWorkItem@@UEAAXXZ @ 0x18001D2F0 (-Invoke@CStreamStartedWorkItem@@UEAAXXZ.c)
 *     ?Invoke@CGoodFaithPLMExemptionExpiredWorkItem@@UEAAXXZ @ 0x18001E1E0 (-Invoke@CGoodFaithPLMExemptionExpiredWorkItem@@UEAAXXZ.c)
 * Callees:
 *     WPP_SF_S @ 0x180005B6C (WPP_SF_S.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18000A394 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180021B70 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplication::CleanupGoodFaithExemptionTimer(const wchar_t **this)
{
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+38h] [rbp-20h] BYREF
  char v4; // [rsp+40h] [rbp-18h]

  lpCriticalSection = (LPCRITICAL_SECTION)(this + 43);
  v4 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  if ( this[48] )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x18u, &WPP_17d50ef9044b326f9caf58457a9d5dd6_Traceguids, this[3]);
    }
    (*(void (__fastcall **)(struct CAudioThreadPool *, const wchar_t *, _QWORD, _QWORD, _DWORD))(*(_QWORD *)ThreadPool
                                                                                               + 24LL))(
      ThreadPool,
      this[48],
      0LL,
      0LL,
      0);
    (*(void (__fastcall **)(struct CAudioThreadPool *, const wchar_t *, __int64))(*(_QWORD *)ThreadPool + 32LL))(
      ThreadPool,
      this[48],
      1LL);
    (*(void (__fastcall **)(struct CAudioThreadPool *, const wchar_t *))(*(_QWORD *)ThreadPool + 16LL))(
      ThreadPool,
      this[48]);
    *((_DWORD *)this + 99) = 1;
    this[48] = 0LL;
  }
  if ( v4 )
  {
    LeaveCriticalSection(lpCriticalSection);
    v4 = 0;
  }
  return 0LL;
}
