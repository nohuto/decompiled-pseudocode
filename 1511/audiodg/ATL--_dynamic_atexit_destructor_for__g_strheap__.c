/*
 * XREFs of ATL::_dynamic_atexit_destructor_for__g_strheap__ @ 0x14001C090
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void ATL::_dynamic_atexit_destructor_for__g_strheap__()
{
  ATL::CWin32Heap::~CWin32Heap((ATL::CWin32Heap *)&ATL::g_strheap);
}
