/*
 * XREFs of MmSetSessionObjectIoEvent @ 0x14050C320
 * Callers:
 *     IopSessionChangeWorker @ 0x140126818 (IopSessionChangeWorker.c)
 * Callees:
 *     <none>
 */

LONG __fastcall MmSetSessionObjectIoEvent(__int64 a1)
{
  return KeSetEvent((PRKEVENT)(*(_QWORD *)(a1 + 24) + 7960LL), 0, 0);
}
