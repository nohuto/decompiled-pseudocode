/*
 * XREFs of ?CleanupMonitorRestartTimer@CMonitorManager@@AEAAXXZ @ 0x18007B22C
 * Callers:
 *     ?Initialize@CMonitorManager@@QEAAJK_KPEBK@Z @ 0x18003314C (-Initialize@CMonitorManager@@QEAAJK_KPEBK@Z.c)
 *     ?Shutdown@CMonitorManager@@QEAAXXZ @ 0x18007EB48 (-Shutdown@CMonitorManager@@QEAAXXZ.c)
 * Callees:
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x180017B40 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x180017BA0 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     WPP_SF_q @ 0x180038C50 (WPP_SF_q.c)
 */

void __fastcall CMonitorManager::CleanupMonitorRestartTimer(CMonitorManager *this)
{
  struct _TP_TIMER *v2; // rbx
  LPCRITICAL_SECTION v3; // [rsp+20h] [rbp-18h] BYREF
  char v4; // [rsp+28h] [rbp-10h]

  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x35u,
      (__int64)&WPP_f44a6138b15d3ac2c57129b0cddf5064_Traceguids,
      (__int64)this);
  }
  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v3, (struct _RTL_CRITICAL_SECTION *)((char *)this + 256));
  v2 = (struct _TP_TIMER *)*((_QWORD *)this + 37);
  *((_QWORD *)this + 37) = 0LL;
  if ( v4 )
    ATL::CCritSecLock::Unlock(&v3);
  if ( v2 )
  {
    if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x36u,
        (__int64)&WPP_f44a6138b15d3ac2c57129b0cddf5064_Traceguids,
        (__int64)this);
    }
    SetThreadpoolTimer(v2, 0LL, 0, 0);
    WaitForThreadpoolTimerCallbacks(v2, 1);
    CloseThreadpoolTimer(v2);
  }
}
