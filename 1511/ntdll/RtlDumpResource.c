/*
 * XREFs of RtlDumpResource @ 0x1800CBBA0
 * Callers:
 *     <none>
 * Callees:
 *     DbgPrint @ 0x180049950 (DbgPrint.c)
 */

ULONG __fastcall RtlDumpResource(_DWORD *a1)
{
  DbgPrint("Resource @ %p\n", a1);
  DbgPrint(" NumberOfWaitingShared = %lx\n", a1[12]);
  DbgPrint(" NumberOfWaitingExclusive = %lx\n", a1[16]);
  return DbgPrint(" NumberOfActive = %lx\n", a1[17]);
}
