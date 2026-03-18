/*
 * XREFs of AMLIGetNSObjectContext @ 0x1C00044FC
 * Callers:
 *     IsNsobjPciBus @ 0x1C0069A1C (IsNsobjPciBus.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AMLIGetNSObjectContext(__int64 a1)
{
  return *(_QWORD *)(*(_QWORD *)a1 + 96LL);
}
