/*
 * XREFs of ??1CEvent@ATL@@QEAA@XZ @ 0x180094650
 * Callers:
 *     _CMonitor::CMonitor_::_1_::dtor$7 @ 0x18009434F (_CMonitor--CMonitor_--_1_--dtor$7.c)
 *     _CMonitor::CMonitor_::_1_::dtor$17 @ 0x18009440A (_CMonitor--CMonitor_--_1_--dtor$17.c)
 *     _CMonitor::CMonitor_::_1_::dtor$18 @ 0x18009441D (_CMonitor--CMonitor_--_1_--dtor$18.c)
 *     _CMonitor::CMonitor_::_1_::dtor$19 @ 0x180094430 (_CMonitor--CMonitor_--_1_--dtor$19.c)
 *     _CMonitorManager::CaptureMonitor::CaptureMonitor_::_1_::dtor$0 @ 0x1800944ED (_CMonitorManager--CaptureMonitor--CaptureMonitor_--_1_--dtor$0.c)
 * Callees:
 *     ?Close@CHandle@ATL@@QEAAXXZ @ 0x180094AB4 (-Close@CHandle@ATL@@QEAAXXZ.c)
 */

void __fastcall ATL::CEvent::~CEvent(ATL::CEvent *this)
{
  if ( *(_QWORD *)this )
    ATL::CHandle::Close(this);
}
