/*
 * XREFs of ?ScheduleMonitorRestartTimer@CMonitorManager@@AEAAXXZ @ 0x180095D40
 * Callers:
 *     ?OnCaptureMonitorTerminated@CMonitorManager@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@J@Z @ 0x180093E80 (-OnCaptureMonitorTerminated@CMonitorManager@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@J@Z.c)
 * Callees:
 *     WPP_SF_ @ 0x1800025C0 (WPP_SF_.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001F9E8 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x18001FA0C (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     WPP_SF_qD @ 0x180048AE8 (WPP_SF_qD.c)
 */

void __fastcall CMonitorManager::ScheduleMonitorRestartTimer(CMonitorManager *this)
{
  TraceLoggingHProvider v2; // rcx
  __int64 v3; // r9
  __int64 v4; // r10
  __int64 v5; // rax
  unsigned __int64 v6; // rcx
  int v7; // [rsp+20h] [rbp-28h]
  LPCRITICAL_SECTION v8; // [rsp+30h] [rbp-18h] BYREF
  char v9; // [rsp+38h] [rbp-10h]
  struct _FILETIME pftDueTime; // [rsp+50h] [rbp+8h] BYREF

  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v8, (struct _RTL_CRITICAL_SECTION *)((char *)this + 256));
  v2 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x2Eu, (__int64)&WPP_ddb6baaf2876bc9badd045ab2d226c42_Traceguids);
    v2 = WPP_GLOBAL_Control;
  }
  if ( *((_QWORD *)this + 39) && *((_DWORD *)this + 14) == 1 )
  {
    if ( v2 != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_DWORD *)v2 + 7) & 0x800000) != 0
      && *((_BYTE *)v2 + 25) >= 4u )
    {
      WPP_SF_(*((_QWORD *)v2 + 2), 0x2Fu, (__int64)&WPP_ddb6baaf2876bc9badd045ab2d226c42_Traceguids);
      v2 = WPP_GLOBAL_Control;
    }
    v3 = *((_QWORD *)this + 38);
    v4 = *((_QWORD *)this + 40);
    v5 = -10000LL * *(unsigned int *)(v4 + 4 * v3);
    pftDueTime.dwLowDateTime = -10000 * *(_DWORD *)(v4 + 4 * v3);
    pftDueTime.dwHighDateTime = HIDWORD(v5);
    if ( v2 != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_DWORD *)v2 + 7) & 0x800000) != 0
      && *((_BYTE *)v2 + 25) >= 4u )
    {
      v7 = *(_DWORD *)(v4 + 4 * v3);
      WPP_SF_qD(*((_QWORD *)v2 + 2), 0x30u, (__int64)&WPP_ddb6baaf2876bc9badd045ab2d226c42_Traceguids, this, v7);
    }
    SetThreadpoolTimer(*((PTP_TIMER *)this + 37), &pftDueTime, 0, 0);
    v6 = *((_QWORD *)this + 38);
    if ( v6 < *((_QWORD *)this + 39) - 1LL )
      *((_QWORD *)this + 38) = v6 + 1;
  }
  if ( v9 )
    ATL::CCritSecLock::Unlock(&v8);
}
