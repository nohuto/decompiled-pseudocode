/*
 * XREFs of ?IsComponentThreadOf@CoreWindowProp@@SAHPEAUtagTHREADINFO@@PEAUtagWND@@@Z @ 0x1C02262F0
 * Callers:
 *     ?IsHostOrComponentThreadOf@CoreWindowProp@@SAHPEAUtagTHREADINFO@@PEAUtagWND@@@Z @ 0x1C01CA93C (-IsHostOrComponentThreadOf@CoreWindowProp@@SAHPEAUtagTHREADINFO@@PEAUtagWND@@@Z.c)
 * Callees:
 *     _GetProp @ 0x1C007AFEC (_GetProp.c)
 *     ?IsComponent@CoreWindowProp@@SAHPEAUtagWND@@@Z @ 0x1C0099824 (-IsComponent@CoreWindowProp@@SAHPEAUtagWND@@@Z.c)
 */

__int64 __fastcall CoreWindowProp::IsComponentThreadOf(struct tagTHREADINFO *a1, struct tagWND *a2)
{
  __int64 Prop; // rax
  __int64 **i; // r11
  __int64 *v5; // rbx

  Prop = GetProp((__int64)a2, CoreWindowProp::s_atom, 1LL);
  if ( Prop )
  {
    for ( i = *(__int64 ***)(Prop + 32); i; i = (__int64 **)*i )
    {
      v5 = i[1];
      if ( v5 && (unsigned int)CoreWindowProp::IsComponent((struct tagWND *)i[1]) && a1 == (struct tagTHREADINFO *)v5[2] )
        return 1LL;
    }
  }
  return 0LL;
}
