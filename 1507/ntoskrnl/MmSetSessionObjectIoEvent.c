/*
 * XREFs of MmSetSessionObjectIoEvent @ 0x1405836FC
 * Callers:
 *     IopSessionChangeWorker @ 0x14015A178 (IopSessionChangeWorker.c)
 * Callees:
 *     <none>
 */

LONG __fastcall MmSetSessionObjectIoEvent(__int64 a1)
{
  return KeSetEvent((PRKEVENT)(*(_QWORD *)(a1 + 24) + 7960LL), 0, 0);
}
