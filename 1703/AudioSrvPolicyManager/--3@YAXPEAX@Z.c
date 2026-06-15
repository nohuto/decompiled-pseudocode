/*
 * XREFs of ??3@YAXPEAX@Z @ 0x1800014C8
 * Callers:
 *     ??3@YAXPEAX_K@Z @ 0x1800210D4 (--3@YAXPEAX_K@Z.c)
 *     ??_Gtype_info@@UEAAPEAXI@Z @ 0x1800210E0 (--_Gtype_info@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall operator delete(void *a1)
{
  HANDLE ProcessHeap; // rax

  ProcessHeap = GetProcessHeap();
  HeapFree(ProcessHeap, 0, a1);
}
