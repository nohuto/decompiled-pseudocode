/*
 * XREFs of ?Allocate@CWin32Heap@ATL@@UEAAPEAX_K@Z @ 0x180039870
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

LPVOID __fastcall ATL::CWin32Heap::Allocate(HANDLE *this, SIZE_T a2)
{
  return HeapAlloc(this[1], 0, a2);
}
