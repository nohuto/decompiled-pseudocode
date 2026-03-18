/*
 * XREFs of ?IsHostOrComponentThreadOf@CoreWindowProp@@SAHPEAUtagTHREADINFO@@PEAUtagWND@@@Z @ 0x1C0009730
 * Callers:
 *     xxxSetFocus @ 0x1C0046624 (xxxSetFocus.c)
 *     NtUserNavigateFocus @ 0x1C021E6F0 (NtUserNavigateFocus.c)
 * Callees:
 *     ?IsHostThreadOf@CoreWindowProp@@SAHPEAUtagTHREADINFO@@PEAUtagWND@@@Z @ 0x1C0009784 (-IsHostThreadOf@CoreWindowProp@@SAHPEAUtagTHREADINFO@@PEAUtagWND@@@Z.c)
 *     _GetProp @ 0x1C006524C (_GetProp.c)
 *     ?IsComponent@CoreWindowProp@@SAHPEAUtagWND@@@Z @ 0x1C0080E4C (-IsComponent@CoreWindowProp@@SAHPEAUtagWND@@@Z.c)
 */

__int64 __fastcall CoreWindowProp::IsHostOrComponentThreadOf(struct tagTHREADINFO *a1, struct tagWND *a2)
{
  __int64 Prop; // rax
  unsigned int v5; // r11d
  _QWORD *i; // rbx
  struct tagWND *v8; // rcx
  __int64 v9; // rcx

  if ( CoreWindowProp::IsHostThreadOf(a1, a2) )
  {
    return 1;
  }
  else
  {
    Prop = GetProp(a2, CoreWindowProp::s_atom, 1LL);
    if ( Prop )
    {
      for ( i = *(_QWORD **)(Prop + 32); i; i = (_QWORD *)*i )
      {
        v8 = (struct tagWND *)i[1];
        if ( v8 && (unsigned int)CoreWindowProp::IsComponent(v8) && a1 == *(struct tagTHREADINFO **)(v9 + 16) )
          return 1;
      }
    }
  }
  return v5;
}
