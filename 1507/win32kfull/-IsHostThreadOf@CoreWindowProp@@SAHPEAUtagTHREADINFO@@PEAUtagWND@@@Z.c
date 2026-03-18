/*
 * XREFs of ?IsHostThreadOf@CoreWindowProp@@SAHPEAUtagTHREADINFO@@PEAUtagWND@@@Z @ 0x1C0009784
 * Callers:
 *     ?IsHostOrComponentThreadOf@CoreWindowProp@@SAHPEAUtagTHREADINFO@@PEAUtagWND@@@Z @ 0x1C0009730 (-IsHostOrComponentThreadOf@CoreWindowProp@@SAHPEAUtagTHREADINFO@@PEAUtagWND@@@Z.c)
 *     xxxSetForegroundWindow2 @ 0x1C0045D90 (xxxSetForegroundWindow2.c)
 * Callees:
 *     ?IsComponent@CoreWindowProp@@SAHPEAUtagWND@@@Z @ 0x1C0080E4C (-IsComponent@CoreWindowProp@@SAHPEAUtagWND@@@Z.c)
 *     ?GetHost@CoreWindowProp@@SAPEAUtagWND@@PEAU2@@Z @ 0x1C022615C (-GetHost@CoreWindowProp@@SAPEAUtagWND@@PEAU2@@Z.c)
 */

__int64 __fastcall CoreWindowProp::IsHostThreadOf(struct tagTHREADINFO *a1, struct tagWND *a2)
{
  __int64 result; // rax
  struct tagWND *v4; // rcx
  struct tagWND *Host; // rax
  unsigned int v6; // r10d

  result = CoreWindowProp::IsComponent(a2);
  if ( (_DWORD)result )
  {
    Host = CoreWindowProp::GetHost(v4);
    if ( Host )
    {
      if ( a1 == *((struct tagTHREADINFO **)Host + 2) )
        return 1;
    }
    return v6;
  }
  return result;
}
