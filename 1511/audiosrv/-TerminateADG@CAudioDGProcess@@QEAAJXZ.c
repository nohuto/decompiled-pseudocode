/*
 * XREFs of ?TerminateADG@CAudioDGProcess@@QEAAJXZ @ 0x18006A5B8
 * Callers:
 *     ?Terminate@CAudioSrv@@UEAAXXZ @ 0x180069810 (-Terminate@CAudioSrv@@UEAAXXZ.c)
 * Callees:
 *     ?DoTerminateADG@CAudioDGProcess@@AEAAJXZ @ 0x180001E10 (-DoTerminateADG@CAudioDGProcess@@AEAAJXZ.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001F9E8 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x18001FA0C (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ?CancelADGTerminationTimer@CAudioDGProcess@@QEAAXXZ @ 0x180033668 (-CancelADGTerminationTimer@CAudioDGProcess@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioDGProcess::TerminateADG(CAudioDGProcess *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // rbx
  unsigned int v2; // ebx
  LPCRITICAL_SECTION v4; // [rsp+28h] [rbp-20h] BYREF
  char v5; // [rsp+30h] [rbp-18h]

  v1 = g_ADGProcess;
  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v4, g_ADGProcess);
  CAudioDGProcess::CancelADGTerminationTimer(v1);
  v2 = CAudioDGProcess::DoTerminateADG((CAudioDGProcess *)v1);
  if ( v5 )
    ATL::CCritSecLock::Unlock(&v4);
  return v2;
}
