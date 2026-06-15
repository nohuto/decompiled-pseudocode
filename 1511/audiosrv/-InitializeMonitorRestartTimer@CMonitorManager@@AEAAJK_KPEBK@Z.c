/*
 * XREFs of ?InitializeMonitorRestartTimer@CMonitorManager@@AEAAJK_KPEBK@Z @ 0x18003C8DC
 * Callers:
 *     ?Initialize@CMonitorManager@@QEAAJK_KPEBK@Z @ 0x18003C9A8 (-Initialize@CMonitorManager@@QEAAJK_KPEBK@Z.c)
 * Callees:
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001F9E8 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x18001FA0C (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     WPP_SF_q @ 0x180048AAC (WPP_SF_q.c)
 */

__int64 __fastcall CMonitorManager::InitializeMonitorRestartTimer(
        char *pv,
        __int64 a2,
        __int64 a3,
        const unsigned int *a4)
{
  signed int v5; // ebx
  PTP_TIMER ThreadpoolTimer; // rax
  signed int LastError; // eax
  LPCRITICAL_SECTION v9; // [rsp+20h] [rbp-18h] BYREF
  char v10; // [rsp+28h] [rbp-10h]

  v5 = 0;
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 51LL, &WPP_ddb6baaf2876bc9badd045ab2d226c42_Traceguids, pv);
  }
  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v9, (struct _RTL_CRITICAL_SECTION *)(pv + 256));
  ThreadpoolTimer = CreateThreadpoolTimer(CMonitorManager::OnCheckForMonitorRestartWorker, pv, 0LL);
  *((_QWORD *)pv + 37) = ThreadpoolTimer;
  if ( ThreadpoolTimer )
  {
    *((_QWORD *)pv + 38) = 0LL;
    *((_QWORD *)pv + 40) = &unk_1800B0040;
    *((_QWORD *)pv + 39) = 9LL;
    *((_DWORD *)pv + 82) = 18;
  }
  else
  {
    LastError = GetLastError();
    v5 = LastError;
    if ( LastError > 0 )
      v5 = (unsigned __int16)LastError | 0x80070000;
  }
  if ( v5 < 0
    && WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x34u, (__int64)&WPP_ddb6baaf2876bc9badd045ab2d226c42_Traceguids, v5);
  }
  if ( v10 )
    ATL::CCritSecLock::Unlock(&v9);
  return (unsigned int)v5;
}
