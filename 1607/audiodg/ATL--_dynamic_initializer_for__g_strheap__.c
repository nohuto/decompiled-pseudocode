/*
 * XREFs of ATL::_dynamic_initializer_for__g_strheap__ @ 0x1400010C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int ATL::_dynamic_initializer_for__g_strheap__()
{
  HANDLE ProcessHeap; // rax

  ProcessHeap = GetProcessHeap();
  byte_140054D88 = 0;
  ATL::g_strheap = &ATL::CWin32Heap::`vftable';
  qword_140054D80 = (__int64)ProcessHeap;
  return atexit((void (__cdecl *)())ATL::_dynamic_atexit_destructor_for__g_strheap__);
}
