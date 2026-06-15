/*
 * XREFs of ??_ECAppClosedWorkItem@@MEAAPEAXI@Z @ 0x180003C10
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180006F70 (--3@YAXPEAX@Z.c)
 */

CAppClosedWorkItem *__fastcall CAppClosedWorkItem::`vector deleting destructor'(CAppClosedWorkItem *this, char a2)
{
  void *v4; // rcx

  *(_QWORD *)this = &CAppClosedWorkItem::`vftable';
  v4 = (void *)*((_QWORD *)this + 1);
  if ( v4 )
  {
    CoTaskMemFree(v4);
    *((_QWORD *)this + 1) = 0LL;
  }
  *(_QWORD *)this = &WORKER_THREAD_EVENT::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
