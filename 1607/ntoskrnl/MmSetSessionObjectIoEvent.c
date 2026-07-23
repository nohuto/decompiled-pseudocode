/*
 * XREFs of MmSetSessionObjectIoEvent @ 0x140547384
 * Callers:
 *     IopSessionChangeWorker @ 0x140131A14 (IopSessionChangeWorker.c)
 * Callees:
 *     <none>
 */

LONG __fastcall MmSetSessionObjectIoEvent(__int64 a1)
{
  return KeSetEvent((PRKEVENT)(*(_QWORD *)(a1 + 24) + 8096LL), 0, 0);
}
