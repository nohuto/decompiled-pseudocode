/*
 * XREFs of AMLIGetNSObjectContext @ 0x1C0004354
 * Callers:
 *     IsNsobjPciBus @ 0x1C0067064 (IsNsobjPciBus.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AMLIGetNSObjectContext(__int64 a1)
{
  return *(_QWORD *)(*(_QWORD *)a1 + 96LL);
}
