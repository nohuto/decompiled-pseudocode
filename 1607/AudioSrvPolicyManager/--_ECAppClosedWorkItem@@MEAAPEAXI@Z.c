/*
 * XREFs of ??_ECAppClosedWorkItem@@MEAAPEAXI@Z @ 0x180021E90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

CAppClosedWorkItem *__fastcall CAppClosedWorkItem::`vector deleting destructor'(CAppClosedWorkItem *this, char a2)
{
  void *v4; // rcx
  HANDLE ProcessHeap; // rax

  *(_QWORD *)this = &CAppClosedWorkItem::`vftable';
  v4 = (void *)*((_QWORD *)this + 1);
  if ( v4 )
  {
    CoTaskMemFree(v4);
    *((_QWORD *)this + 1) = 0LL;
  }
  *(_QWORD *)this = &WORKER_THREAD_EVENT::`vftable';
  if ( (a2 & 1) != 0 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, this);
  }
  return this;
}
