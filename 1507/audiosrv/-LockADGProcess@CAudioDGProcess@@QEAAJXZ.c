/*
 * XREFs of ?LockADGProcess@CAudioDGProcess@@QEAAJXZ @ 0x180006BEC
 * Callers:
 *     AudioServerInitialize @ 0x18000A980 (AudioServerInitialize.c)
 *     s_adGetDeviceGraphWnfStateName @ 0x18006BAC0 (s_adGetDeviceGraphWnfStateName.c)
 * Callees:
 *     WPP_SF_ @ 0x180001600 (WPP_SF_.c)
 *     ?InstantiateADG@CAudioDGProcess@@QEAAJXZ @ 0x180006498 (-InstantiateADG@CAudioDGProcess@@QEAAJXZ.c)
 *     ?CancelADGTerminationTimer@CAudioDGProcess@@QEAAXXZ @ 0x180006880 (-CancelADGTerminationTimer@CAudioDGProcess@@QEAAXXZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001B270 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
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
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 4) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x34u,
      (__int64)&WPP_790b6676494959b41396352d3c3efd49_Traceguids);
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
