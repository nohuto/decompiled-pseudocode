/*
 * XREFs of ?RemoveAudioPlaybackRestriction@CApplication@@QEAAJXZ @ 0x180002CA8
 * Callers:
 *     ?CleanupBCMStartupLatencyGracePeriod@CApplication@@QEAAXXZ @ 0x180003228 (-CleanupBCMStartupLatencyGracePeriod@CApplication@@QEAAXXZ.c)
 *     ?Invoke@CStreamStartedWorkItem@@UEAAXXZ @ 0x18001A680 (-Invoke@CStreamStartedWorkItem@@UEAAXXZ.c)
 *     ?Invoke@CProcessCategoryDowngradedWorkItem@@UEAAXXZ @ 0x1800A6EF0 (-Invoke@CProcessCategoryDowngradedWorkItem@@UEAAXXZ.c)
 * Callees:
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001B220 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x18001B244 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 */

__int64 __fastcall CApplication::RemoveAudioPlaybackRestriction(CApplication *this, __int64 a2, bool a3)
{
  _BYTE v5[24]; // [rsp+20h] [rbp-18h] BYREF

  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)v5, (struct _RTL_CRITICAL_SECTION *)((char *)this + 24), a3);
  if ( *((_DWORD *)this + 117) == 5 )
  {
    *(_QWORD *)((char *)this + 468) = 0LL;
    *(_QWORD *)((char *)this + 476) = 0LL;
    *(_QWORD *)((char *)this + 484) = 0LL;
    *((_DWORD *)this + 123) = 1;
  }
  if ( v5[8] )
    ATL::CCritSecLock::Unlock((ATL::CCritSecLock *)v5);
  return 0LL;
}
