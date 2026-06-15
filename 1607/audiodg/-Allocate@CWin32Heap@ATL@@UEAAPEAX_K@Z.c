/*
 * XREFs of ?Allocate@CWin32Heap@ATL@@UEAAPEAX_K@Z @ 0x140016850
 * Callers:
 *     ?Allocate@CAtlStringMgr@ATL@@UEAAPEAUCStringData@2@HH@Z @ 0x140016770 (-Allocate@CAtlStringMgr@ATL@@UEAAPEAUCStringData@2@HH@Z.c)
 * Callees:
 *     <none>
 */

LPVOID __fastcall ATL::CWin32Heap::Allocate(HANDLE *this, SIZE_T a2)
{
  return HeapAlloc(this[1], 0, a2);
}
