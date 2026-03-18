/*
 * XREFs of ?IsHostOrComponentThreadOf@CoreWindowProp@@SAHPEAUtagTHREADINFO@@PEAUtagWND@@@Z @ 0x1C01CA93C
 * Callers:
 *     xxxSetFocus @ 0x1C00A8300 (xxxSetFocus.c)
 *     NtUserNavigateFocus @ 0x1C0218120 (NtUserNavigateFocus.c)
 * Callees:
 *     ?IsComponentThreadOf@CoreWindowProp@@SAHPEAUtagTHREADINFO@@PEAUtagWND@@@Z @ 0x1C02262F0 (-IsComponentThreadOf@CoreWindowProp@@SAHPEAUtagTHREADINFO@@PEAUtagWND@@@Z.c)
 *     ?IsHostThreadOf@CoreWindowProp@@SAHPEAUtagTHREADINFO@@PEAUtagWND@@@Z @ 0x1C0226358 (-IsHostThreadOf@CoreWindowProp@@SAHPEAUtagTHREADINFO@@PEAUtagWND@@@Z.c)
 */

__int64 __fastcall CoreWindowProp::IsHostOrComponentThreadOf(struct tagTHREADINFO *a1, struct tagWND *a2)
{
  unsigned int v4; // ebx

  v4 = 0;
  if ( CoreWindowProp::IsHostThreadOf(a1, a2) || (unsigned int)CoreWindowProp::IsComponentThreadOf(a1, a2) )
    return 1;
  return v4;
}
