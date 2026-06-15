/*
 * XREFs of ATL::_dynamic_initializer_for__g_strheap__ @ 0x180001130
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int ATL::_dynamic_initializer_for__g_strheap__()
{
  HANDLE ProcessHeap; // rax

  ProcessHeap = GetProcessHeap();
  byte_1800CB5B8 = 0;
  ATL::g_strheap = &ATL::CWin32Heap::`vftable';
  qword_1800CB5B0 = (__int64)ProcessHeap;
  return atexit((void (__cdecl *)())ATL::_dynamic_atexit_destructor_for__g_strheap__);
}
