/*
 * XREFs of ProcessSleep @ 0x1C0045AB0
 * Callers:
 *     <none>
 * Callees:
 *     HeapFree @ 0x1C00144F8 (HeapFree.c)
 */

__int64 __fastcall ProcessSleep(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v5; // rcx

  v5 = *(_QWORD *)(a1 + 416);
  *(_QWORD *)(a1 + 416) = *(_QWORD *)(v5 + 8);
  HeapFree(v5);
  return a3;
}
