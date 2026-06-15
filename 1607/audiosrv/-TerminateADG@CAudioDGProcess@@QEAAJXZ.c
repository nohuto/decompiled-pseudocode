/*
 * XREFs of ?TerminateADG@CAudioDGProcess@@QEAAJXZ @ 0x180084E1C
 * Callers:
 *     ?Terminate@CAudioSrv@@UEAAXXZ @ 0x180053EC0 (-Terminate@CAudioSrv@@UEAAXXZ.c)
 * Callees:
 *     ?DoTerminateADG@CAudioDGProcess@@AEAAJXZ @ 0x1800014A8 (-DoTerminateADG@CAudioDGProcess@@AEAAJXZ.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x180017B40 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x180017BA0 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?CancelADGTerminationTimer@CAudioDGProcess@@QEAAXXZ @ 0x180050610 (-CancelADGTerminationTimer@CAudioDGProcess@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioDGProcess::TerminateADG(CAudioDGProcess *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // rbx
  __int64 v2; // rdx
  bool v3; // r8
  unsigned int v4; // ebx
  LPCRITICAL_SECTION v6; // [rsp+28h] [rbp-20h] BYREF
  char v7; // [rsp+30h] [rbp-18h]

  v1 = g_ADGProcess;
  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v6, g_ADGProcess);
  CAudioDGProcess::CancelADGTerminationTimer(v1);
  v4 = CAudioDGProcess::DoTerminateADG((CAudioDGProcess *)v1, v2, v3);
  if ( v7 )
    ATL::CCritSecLock::Unlock(&v6);
  return v4;
}
