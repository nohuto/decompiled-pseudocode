/*
 * XREFs of ??_G?$CGenericApplicationManagerWorkItem@UApplicationStateChangedContext@@@@UEAAPEAXI@Z @ 0x180001FF0
 * Callers:
 *     ?EventWorkerThread@@YAKPEAX@Z @ 0x18003FA70 (-EventWorkerThread@@YAKPEAX@Z.c)
 * Callees:
 *     ?Release@CRefCountedObject@@QEAAJXZ @ 0x18002D17C (-Release@CRefCountedObject@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall CGenericApplicationManagerWorkItem<ApplicationStateChangedContext>::`scalar deleting destructor'(
        _QWORD *lpMem,
        char a2)
{
  HANDLE ProcessHeap; // rax

  *lpMem = &CGenericApplicationManagerWorkItem<ApplicationStateChangedContext>::`vftable';
  CRefCountedObject::Release(g_ApplicationManager);
  *lpMem = &WORKER_THREAD_EVENT::`vftable';
  if ( (a2 & 1) != 0 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, lpMem);
  }
  return lpMem;
}
