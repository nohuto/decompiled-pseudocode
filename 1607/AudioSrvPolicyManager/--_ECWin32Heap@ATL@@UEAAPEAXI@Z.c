/*
 * XREFs of ??_ECWin32Heap@ATL@@UEAAPEAXI@Z @ 0x1800223C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

ATL::CWin32Heap *__fastcall ATL::CWin32Heap::`vector deleting destructor'(ATL::CWin32Heap *this, char a2)
{
  bool v2; // zf
  void *v5; // rcx
  HANDLE ProcessHeap; // rax

  v2 = *((_BYTE *)this + 16) == 0;
  *(_QWORD *)this = &ATL::CWin32Heap::`vftable';
  if ( !v2 )
  {
    v5 = (void *)*((_QWORD *)this + 1);
    if ( v5 )
      HeapDestroy(v5);
  }
  if ( (a2 & 1) != 0 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, this);
  }
  return this;
}
