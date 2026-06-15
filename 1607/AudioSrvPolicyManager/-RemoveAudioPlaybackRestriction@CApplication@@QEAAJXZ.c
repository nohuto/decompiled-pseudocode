/*
 * XREFs of ?RemoveAudioPlaybackRestriction@CApplication@@QEAAJXZ @ 0x18000CB5C
 * Callers:
 *     ?CleanupBCMStartupLatencyGracePeriod@CApplication@@QEAAXXZ @ 0x18000D444 (-CleanupBCMStartupLatencyGracePeriod@CApplication@@QEAAXXZ.c)
 *     ?Invoke@CStreamStartedWorkItem@@UEAAXXZ @ 0x18001FB30 (-Invoke@CStreamStartedWorkItem@@UEAAXXZ.c)
 *     ?Invoke@CProcessCategoryDowngradedWorkItem@@UEAAXXZ @ 0x180020EF0 (-Invoke@CProcessCategoryDowngradedWorkItem@@UEAAXXZ.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18000A618 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 */

__int64 __fastcall CApplication::RemoveAudioPlaybackRestriction(CApplication *this)
{
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v4; // [rsp+28h] [rbp-10h]

  v4 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 24);
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  if ( *((_DWORD *)this + 117) == 5 )
  {
    *((_DWORD *)this + 117) = 0;
    *((_DWORD *)this + 118) = 0;
    *((_DWORD *)this + 119) = 0;
    *((_DWORD *)this + 120) = 0;
    *((_DWORD *)this + 121) = 0;
    *((_DWORD *)this + 122) = 0;
    *((_DWORD *)this + 123) = 1;
  }
  if ( v4 )
    LeaveCriticalSection(lpCriticalSection);
  return 0LL;
}
