/*
 * XREFs of HAUDIOSRVDIAGNOSTICS_rundown @ 0x18006A620
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_ @ 0x1800025C0 (WPP_SF_.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001FA30 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?StartADGTerminationTimer@CAudioDGProcess@@AEAAJXZ @ 0x18003315C (-StartADGTerminationTimer@CAudioDGProcess@@AEAAJXZ.c)
 */

void __fastcall HAUDIOSRVDIAGNOSTICS_rundown(__int64 a1)
{
  LPCRITICAL_SECTION v1; // rbx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v4; // [rsp+28h] [rbp-10h]

  v1 = g_ADGProcess;
  if ( a1 == *(_QWORD *)&g_ADGProcess[2].LockCount )
  {
    lpCriticalSection = g_ADGProcess;
    v4 = 0;
    ATL::CCritSecLock::Lock(&lpCriticalSection);
    if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x35u, (__int64)&WPP_785362db39762c5e6daaa474a87b7ce9_Traceguids);
    }
    if ( LODWORD(v1[1].DebugInfo)-- == 1 )
      CAudioDGProcess::StartADGTerminationTimer((struct _TP_TIMER **)v1);
    if ( v4 )
      LeaveCriticalSection(lpCriticalSection);
  }
}
