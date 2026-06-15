/*
 * XREFs of ?LockADGProcess@CAudioDGProcess@@QEAAJXZ @ 0x1800339E0
 * Callers:
 *     AudioServerInitialize @ 0x18002BC30 (AudioServerInitialize.c)
 *     s_adGetDeviceGraphWnfStateName @ 0x18006A7C0 (s_adGetDeviceGraphWnfStateName.c)
 * Callees:
 *     WPP_SF_ @ 0x1800025C0 (WPP_SF_.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001FA30 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?InstantiateADG@CAudioDGProcess@@QEAAJXZ @ 0x180033280 (-InstantiateADG@CAudioDGProcess@@QEAAJXZ.c)
 *     ?CancelADGTerminationTimer@CAudioDGProcess@@QEAAXXZ @ 0x180033668 (-CancelADGTerminationTimer@CAudioDGProcess@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioDGProcess::LockADGProcess(CAudioDGProcess *this)
{
  LPCRITICAL_SECTION v1; // rbx
  unsigned int DebugInfo; // ebx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-20h] BYREF
  char v5; // [rsp+30h] [rbp-18h]

  v1 = g_ADGProcess;
  lpCriticalSection = g_ADGProcess;
  v5 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x34u, (__int64)&WPP_785362db39762c5e6daaa474a87b7ce9_Traceguids);
  }
  if ( ++LODWORD(v1[1].DebugInfo) == 1 )
  {
    CAudioDGProcess::CancelADGTerminationTimer(v1);
    CAudioDGProcess::InstantiateADG((CAudioDGProcess *)v1);
  }
  DebugInfo = (unsigned int)v1[1].DebugInfo;
  if ( v5 )
    LeaveCriticalSection(lpCriticalSection);
  return DebugInfo;
}
