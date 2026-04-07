/*
 * XREFs of ?MemoryFree@@YAXPEAX@Z @ 0x180049798
 * Callers:
 *     ?SLGetHelper@@YA_NPEBG@Z @ 0x180042DC0 (-SLGetHelper@@YA_NPEBG@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall MemoryFree(void *a1)
{
  HANDLE ProcessHeap; // rax

  ProcessHeap = GetProcessHeap();
  HeapFree(ProcessHeap, 0, a1);
}
