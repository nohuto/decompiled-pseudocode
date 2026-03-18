/*
 * XREFs of MmSetSessionObjectIoEvent @ 0x140546E44
 * Callers:
 *     IopSessionChangeWorker @ 0x1401314A4 (IopSessionChangeWorker.c)
 * Callees:
 *     <none>
 */

LONG __fastcall MmSetSessionObjectIoEvent(__int64 a1)
{
  return KeSetEvent((PRKEVENT)(*(_QWORD *)(a1 + 24) + 8096LL), 0, 0);
}
