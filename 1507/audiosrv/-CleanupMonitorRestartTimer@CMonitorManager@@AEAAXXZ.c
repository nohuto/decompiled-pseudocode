/*
 * XREFs of ?CleanupMonitorRestartTimer@CMonitorManager@@AEAAXXZ @ 0x1800949C0
 * Callers:
 *     ?Initialize@CMonitorManager@@QEAAJK_KPEBK@Z @ 0x180040374 (-Initialize@CMonitorManager@@QEAAJK_KPEBK@Z.c)
 *     ?Shutdown@CMonitorManager@@QEAAXXZ @ 0x1800983D8 (-Shutdown@CMonitorManager@@QEAAXXZ.c)
 * Callees:
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001B220 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x18001B244 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     WPP_SF_q @ 0x1800448AC (WPP_SF_q.c)
 */

void __fastcall CMonitorManager::CleanupMonitorRestartTimer(CMonitorManager *this)
{
  struct _TP_TIMER *v2; // rbx
  LPCRITICAL_SECTION v3; // [rsp+20h] [rbp-18h] BYREF
  char v4; // [rsp+28h] [rbp-10h]

  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x800000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_q(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x35u,
      (__int64)&WPP_ddb6baaf2876bc9badd045ab2d226c42_Traceguids,
      this);
  }
  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v3, (struct _RTL_CRITICAL_SECTION *)((char *)this + 256));
  v2 = (struct _TP_TIMER *)*((_QWORD *)this + 37);
  *((_QWORD *)this + 37) = 0LL;
  if ( v4 )
    ATL::CCritSecLock::Unlock(&v3);
  if ( v2 )
  {
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x800000) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
    {
      WPP_SF_q(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        0x36u,
        (__int64)&WPP_ddb6baaf2876bc9badd045ab2d226c42_Traceguids,
        this);
    }
    SetThreadpoolTimer(v2, 0LL, 0, 0);
    WaitForThreadpoolTimerCallbacks(v2, 1);
    CloseThreadpoolTimer(v2);
  }
}
