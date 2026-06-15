/*
 * XREFs of ??_E?$CGenericApplicationManagerWorkItem@U_SESSIONMUTECHANGES@@@@UEAAPEAXI@Z @ 0x18003F840
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180006F70 (--3@YAXPEAX@Z.c)
 *     ?Release@CRefCountedObject@@QEAAJXZ @ 0x18002D17C (-Release@CRefCountedObject@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall CGenericApplicationManagerWorkItem<_SESSIONMUTECHANGES>::`vector deleting destructor'(
        _QWORD *a1,
        char a2)
{
  *a1 = &CGenericApplicationManagerWorkItem<_SESSIONMUTECHANGES>::`vftable';
  CRefCountedObject::Release(g_ApplicationManager);
  *a1 = &WORKER_THREAD_EVENT::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
