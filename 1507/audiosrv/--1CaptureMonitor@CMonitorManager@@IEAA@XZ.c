/*
 * XREFs of ??1CaptureMonitor@CMonitorManager@@IEAA@XZ @ 0x180094708
 * Callers:
 *     ?Release@CaptureMonitor@CMonitorManager@@UEAAKXZ @ 0x180097CD0 (-Release@CaptureMonitor@CMonitorManager@@UEAAKXZ.c)
 * Callees:
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x18000AFD0 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?Close@CHandle@ATL@@QEAAXXZ @ 0x180094AB4 (-Close@CHandle@ATL@@QEAAXXZ.c)
 */

void __fastcall CMonitorManager::CaptureMonitor::~CaptureMonitor(CMonitorManager::CaptureMonitor *this)
{
  bool v1; // zf
  __int64 v3; // rax
  __int64 v4; // rsi
  __int64 v5; // rsi

  v1 = *((_QWORD *)this + 2) == 0LL;
  *(_QWORD *)this = &CMonitorManager::CaptureMonitor::`vftable';
  if ( !v1 )
  {
    v3 = *((_QWORD *)this + 8);
    if ( v3 )
      *(_QWORD *)(v3 + 264) = 0LL;
    CloseThreadpoolWait(*((PTP_WAIT *)this + 2));
  }
  ATL::CStringData::Release((ATL::CStringData *)(*((_QWORD *)this + 10) - 24LL));
  ATL::CStringData::Release((ATL::CStringData *)(*((_QWORD *)this + 9) - 24LL));
  v4 = *((_QWORD *)this + 8);
  if ( v4 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v4 + 16LL))(*((_QWORD *)this + 8));
  v5 = *((_QWORD *)this + 5);
  if ( v5 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v5 + 16LL))(*((_QWORD *)this + 5));
  if ( *((_QWORD *)this + 4) )
    ATL::CHandle::Close((CMonitorManager::CaptureMonitor *)((char *)this + 32));
}
