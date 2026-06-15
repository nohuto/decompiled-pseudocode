/*
 * XREFs of HAUDIOSRVDIAGNOSTICS_rundown @ 0x18006B890
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_ @ 0x180001600 (WPP_SF_.c)
 *     ?StartADGTerminationTimer@CAudioDGProcess@@AEAAJXZ @ 0x180006374 (-StartADGTerminationTimer@CAudioDGProcess@@AEAAJXZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001B270 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
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
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 4) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
    {
      WPP_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        0x35u,
        (__int64)&WPP_790b6676494959b41396352d3c3efd49_Traceguids);
    }
    if ( LODWORD(v1[1].DebugInfo)-- == 1 )
      CAudioDGProcess::StartADGTerminationTimer((struct _TP_TIMER **)v1);
    if ( v4 )
      LeaveCriticalSection(lpCriticalSection);
  }
}
