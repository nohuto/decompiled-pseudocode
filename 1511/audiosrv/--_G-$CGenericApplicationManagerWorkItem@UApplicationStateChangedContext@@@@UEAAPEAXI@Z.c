/*
 * XREFs of ??_G?$CGenericApplicationManagerWorkItem@UApplicationStateChangedContext@@@@UEAAPEAXI@Z @ 0x180005090
 * Callers:
 *     ?EventWorkerThread@@YAKPEAX@Z @ 0x18003B460 (-EventWorkerThread@@YAKPEAX@Z.c)
 * Callees:
 *     ?Release@CRefCountedObject@@QEAAJXZ @ 0x1800399C4 (-Release@CRefCountedObject@@QEAAJXZ.c)
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
