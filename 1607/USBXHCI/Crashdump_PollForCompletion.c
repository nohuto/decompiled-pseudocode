/*
 * XREFs of Crashdump_PollForCompletion @ 0x1C00359C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Crashdump_PollForCompletion(__int64 a1)
{
  if ( !*(_DWORD *)(a1 + 584) || *(_BYTE *)(a1 + 624) )
    return Crashdump_EventRing_AsyncPoll(a1 + 72);
  else
    return Crashdump_EventRing_AsyncPoll(a1 + 200);
}
