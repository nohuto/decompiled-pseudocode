/*
 * XREFs of ??1CKsNotificationsMonitor@@MEAA@XZ @ 0x18009B344
 * Callers:
 *     ??_GCKsSoftwareNotificationsMonitor@@UEAAPEAXI@Z @ 0x18008A810 (--_GCKsSoftwareNotificationsMonitor@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?Dispose@CKsNotificationsMonitor@@QEAAXXZ @ 0x18009B3B0 (-Dispose@CKsNotificationsMonitor@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CKsNotificationsMonitor::~CKsNotificationsMonitor(CKsNotificationsMonitor *this)
{
  __int64 v2; // rdi

  *(_QWORD *)this = &CKsNotificationsMonitor::`vftable';
  CKsNotificationsMonitor::Dispose(this);
  v2 = *((_QWORD *)this + 4);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
}
