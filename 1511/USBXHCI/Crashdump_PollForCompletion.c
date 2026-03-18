/*
 * XREFs of Crashdump_PollForCompletion @ 0x1C0035410
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Crashdump_PollForCompletion(__int64 a1)
{
  if ( !*(_DWORD *)(a1 + 576) || *(_BYTE *)(a1 + 616) )
    return Crashdump_EventRing_AsyncPoll(a1 + 64);
  else
    return Crashdump_EventRing_AsyncPoll(a1 + 192);
}
