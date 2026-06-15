/*
 * XREFs of ??2@YAPEAX_K@Z @ 0x1800014A4
 * Callers:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800219B8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 * Callees:
 *     <none>
 */

LPVOID __fastcall operator new(SIZE_T a1)
{
  HANDLE ProcessHeap; // rax

  ProcessHeap = GetProcessHeap();
  return HeapAlloc(ProcessHeap, 0, a1);
}
