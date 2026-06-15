/*
 * XREFs of ?ScheduleMonitorRestartTimer@CMonitorManager@@AEAAXXZ @ 0x18007E9F0
 * Callers:
 *     ?OnCaptureMonitorTerminated@CMonitorManager@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@J@Z @ 0x18007CD60 (-OnCaptureMonitorTerminated@CMonitorManager@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@J@Z.c)
 * Callees:
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x180017B40 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x180017BA0 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     WPP_SF_qD @ 0x180038C8C (WPP_SF_qD.c)
 *     WPP_SF_ @ 0x180054338 (WPP_SF_.c)
 */

void __fastcall CMonitorManager::ScheduleMonitorRestartTimer(CMonitorManager *this)
{
  CAudioSession *v2; // rcx
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
  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x2Eu, (__int64)&WPP_f44a6138b15d3ac2c57129b0cddf5064_Traceguids);
    v2 = WPP_GLOBAL_Control;
  }
  if ( *((_QWORD *)this + 39) && *((_DWORD *)this + 14) == 1 )
  {
    if ( v2 != (CAudioSession *)&WPP_GLOBAL_Control
      && (*((_DWORD *)v2 + 7) & 0x800000) != 0
      && *((_BYTE *)v2 + 25) >= 4u )
    {
      WPP_SF_(*((_QWORD *)v2 + 2), 0x2Fu, (__int64)&WPP_f44a6138b15d3ac2c57129b0cddf5064_Traceguids);
      v2 = WPP_GLOBAL_Control;
    }
    v3 = *((_QWORD *)this + 38);
    v4 = *((_QWORD *)this + 40);
    v5 = -10000LL * *(unsigned int *)(v4 + 4 * v3);
    pftDueTime.dwLowDateTime = -10000 * *(_DWORD *)(v4 + 4 * v3);
    pftDueTime.dwHighDateTime = HIDWORD(v5);
    if ( v2 != (CAudioSession *)&WPP_GLOBAL_Control
      && (*((_DWORD *)v2 + 7) & 0x800000) != 0
      && *((_BYTE *)v2 + 25) >= 4u )
    {
      v7 = *(_DWORD *)(v4 + 4 * v3);
      WPP_SF_qD(*((_QWORD *)v2 + 2), 0x30u, (__int64)&WPP_f44a6138b15d3ac2c57129b0cddf5064_Traceguids, this, v7);
    }
    SetThreadpoolTimer(*((PTP_TIMER *)this + 37), &pftDueTime, 0, 0);
    v6 = *((_QWORD *)this + 38);
    if ( v6 < *((_QWORD *)this + 39) - 1LL )
      *((_QWORD *)this + 38) = v6 + 1;
  }
  if ( v9 )
    ATL::CCritSecLock::Unlock(&v8);
}
