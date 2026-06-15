/*
 * XREFs of ??_GCTransportControlRouterWorkItem@@UEAAPEAXI@Z @ 0x180005340
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

CTransportControlRouterWorkItem *__fastcall CTransportControlRouterWorkItem::`scalar deleting destructor'(
        CTransportControlRouterWorkItem *this,
        char a2)
{
  HANDLE ProcessHeap; // rax

  *(_QWORD *)this = &WORKER_THREAD_EVENT::`vftable';
  if ( (a2 & 1) != 0 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, this);
  }
  return this;
}
