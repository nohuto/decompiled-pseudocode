/*
 * XREFs of ?InitializeMonitorRestartTimer@CMonitorManager@@AEAAJK_KPEBK@Z @ 0x180033324
 * Callers:
 *     ?Initialize@CMonitorManager@@QEAAJK_KPEBK@Z @ 0x18003314C (-Initialize@CMonitorManager@@QEAAJK_KPEBK@Z.c)
 * Callees:
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x180017B40 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x180017BA0 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     WPP_SF_q @ 0x180038C50 (WPP_SF_q.c)
 *     WPP_SF_D @ 0x18005435C (WPP_SF_D.c)
 */

__int64 __fastcall CMonitorManager::InitializeMonitorRestartTimer(
        char *pv,
        __int64 a2,
        __int64 a3,
        const unsigned int *a4)
{
  unsigned int v5; // ebx
  PTP_TIMER ThreadpoolTimer; // rax
  signed int LastError; // eax
  LPCRITICAL_SECTION v9; // [rsp+20h] [rbp-18h] BYREF
  char v10; // [rsp+28h] [rbp-10h]

  v5 = 0;
  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 51LL, &WPP_f44a6138b15d3ac2c57129b0cddf5064_Traceguids, pv);
  }
  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v9, (struct _RTL_CRITICAL_SECTION *)(pv + 256));
  ThreadpoolTimer = CreateThreadpoolTimer(CMonitorManager::OnCheckForMonitorRestartWorker, pv, 0LL);
  *((_QWORD *)pv + 37) = ThreadpoolTimer;
  if ( ThreadpoolTimer )
  {
    *((_QWORD *)pv + 38) = 0LL;
    *((_QWORD *)pv + 40) = &unk_18009EA10;
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
  if ( (v5 & 0x80000000) != 0
    && WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 52LL, &WPP_f44a6138b15d3ac2c57129b0cddf5064_Traceguids, v5);
  }
  if ( v10 )
    ATL::CCritSecLock::Unlock(&v9);
  return v5;
}
