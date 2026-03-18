/*
 * XREFs of ?IsHostThreadOf@CoreWindowProp@@SAHPEAUtagTHREADINFO@@PEAUtagWND@@@Z @ 0x1C0226358
 * Callers:
 *     xxxSetForegroundWindow2 @ 0x1C009D654 (xxxSetForegroundWindow2.c)
 *     ?IsHostOrComponentThreadOf@CoreWindowProp@@SAHPEAUtagTHREADINFO@@PEAUtagWND@@@Z @ 0x1C01CA93C (-IsHostOrComponentThreadOf@CoreWindowProp@@SAHPEAUtagTHREADINFO@@PEAUtagWND@@@Z.c)
 * Callees:
 *     ?IsComponent@CoreWindowProp@@SAHPEAUtagWND@@@Z @ 0x1C0099824 (-IsComponent@CoreWindowProp@@SAHPEAUtagWND@@@Z.c)
 *     ?GetHost@CoreWindowProp@@SAPEAUtagWND@@PEAU2@@Z @ 0x1C02262CC (-GetHost@CoreWindowProp@@SAPEAUtagWND@@PEAU2@@Z.c)
 */

__int64 __fastcall CoreWindowProp::IsHostThreadOf(struct tagTHREADINFO *a1, struct tagWND *a2)
{
  struct tagWND *v3; // r11
  struct tagWND *Host; // rax
  unsigned int v5; // r10d

  if ( !(unsigned int)CoreWindowProp::IsComponent(a2) )
    return 0LL;
  Host = CoreWindowProp::GetHost(v3);
  if ( Host )
  {
    if ( a1 == *((struct tagTHREADINFO **)Host + 2) )
      return 1;
  }
  return v5;
}
