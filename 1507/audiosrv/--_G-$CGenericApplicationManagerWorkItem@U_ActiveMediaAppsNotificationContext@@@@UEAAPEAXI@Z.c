/*
 * XREFs of ??_G?$CGenericApplicationManagerWorkItem@U_ActiveMediaAppsNotificationContext@@@@UEAAPEAXI@Z @ 0x1800050F0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180006F70 (--3@YAXPEAX@Z.c)
 *     ?Release@CRefCountedObject@@QEAAJXZ @ 0x18002D17C (-Release@CRefCountedObject@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall CGenericApplicationManagerWorkItem<_ActiveMediaAppsNotificationContext>::`scalar deleting destructor'(
        _QWORD *a1,
        char a2)
{
  *a1 = &CGenericApplicationManagerWorkItem<_ActiveMediaAppsNotificationContext>::`vftable';
  CRefCountedObject::Release(g_ApplicationManager);
  *a1 = &WORKER_THREAD_EVENT::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
