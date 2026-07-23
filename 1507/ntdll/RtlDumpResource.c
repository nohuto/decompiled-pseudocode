/*
 * XREFs of RtlDumpResource @ 0x1800C1E80
 * Callers:
 *     <none>
 * Callees:
 *     DbgPrint @ 0x180010000 (DbgPrint.c)
 */

ULONG __fastcall RtlDumpResource(_DWORD *a1)
{
  DbgPrint("Resource @ %p\n", a1);
  DbgPrint(" NumberOfWaitingShared = %lx\n", a1[12]);
  DbgPrint(" NumberOfWaitingExclusive = %lx\n", a1[16]);
  return DbgPrint(" NumberOfActive = %lx\n", a1[17]);
}
