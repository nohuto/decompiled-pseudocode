/*
 * XREFs of IopCancelIrpsInCurrentThreadListApcRoutine @ 0x14048D678
 * Callers:
 *     <none>
 * Callees:
 *     IopCancelIrpsInCurrentThreadList @ 0x1400C91F4 (IopCancelIrpsInCurrentThreadList.c)
 */

LONG __fastcall IopCancelIrpsInCurrentThreadListApcRoutine(__int64 a1)
{
  *(_DWORD *)(a1 + 132) |= IopCancelIrpsInCurrentThreadList(
                             *(_QWORD *)(a1 + 88),
                             (__int64)KeGetCurrentThread(),
                             *(_QWORD *)(a1 + 96),
                             *(_BYTE *)(a1 + 128));
  return KeSetEvent((PRKEVENT)(a1 + 104), 0, 0);
}
