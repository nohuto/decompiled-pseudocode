/*
 * XREFs of ?Release@CaptureMonitor@CMonitorManager@@UEAAKXZ @ 0x180095790
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800301D0 (--3@YAXPEAX@Z.c)
 *     ??1CaptureMonitor@CMonitorManager@@IEAA@XZ @ 0x180091F38 (--1CaptureMonitor@CMonitorManager@@IEAA@XZ.c)
 */

__int64 __fastcall CMonitorManager::CaptureMonitor::Release(CMonitorManager::CaptureMonitor *this)
{
  unsigned __int32 v2; // edi

  v2 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( !v2 && this )
  {
    CMonitorManager::CaptureMonitor::~CaptureMonitor(this);
    operator delete(this);
  }
  return v2;
}
