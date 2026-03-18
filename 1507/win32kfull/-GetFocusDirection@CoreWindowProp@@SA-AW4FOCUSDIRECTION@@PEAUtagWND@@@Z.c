/*
 * XREFs of ?GetFocusDirection@CoreWindowProp@@SA?AW4FOCUSDIRECTION@@PEAUtagWND@@@Z @ 0x1C007E934
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C0063E28 (xxxRealDefWindowProc.c)
 * Callees:
 *     _GetProp @ 0x1C006524C (_GetProp.c)
 */

__int64 __fastcall CoreWindowProp::GetFocusDirection(__int64 a1)
{
  __int64 Prop; // rax
  unsigned int v2; // r10d

  Prop = GetProp(a1, CoreWindowProp::s_atom, 1LL);
  if ( Prop )
    return *(unsigned int *)(Prop + 44);
  return v2;
}
