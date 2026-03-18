/*
 * XREFs of ?SetFocusDirection@CoreWindowProp@@SAHPEAUtagWND@@W4FOCUSDIRECTION@@@Z @ 0x1C0226214
 * Callers:
 *     xxxActivateThisWindow @ 0x1C007F264 (xxxActivateThisWindow.c)
 * Callees:
 *     _GetProp @ 0x1C006524C (_GetProp.c)
 */

__int64 __fastcall CoreWindowProp::SetFocusDirection(__int64 a1)
{
  __int64 result; // rax
  unsigned int v2; // r8d
  int v3; // r10d

  result = GetProp(a1, CoreWindowProp::s_atom, 1LL);
  if ( result )
  {
    *(_DWORD *)(result + 44) = v3;
    return v2;
  }
  return result;
}
