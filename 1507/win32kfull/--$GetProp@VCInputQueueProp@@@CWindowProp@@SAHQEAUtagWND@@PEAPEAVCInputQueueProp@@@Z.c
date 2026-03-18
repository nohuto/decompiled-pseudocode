/*
 * XREFs of ??$GetProp@VCInputQueueProp@@@CWindowProp@@SAHQEAUtagWND@@PEAPEAVCInputQueueProp@@@Z @ 0x1C0064FD8
 * Callers:
 *     ?GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C0004758 (-GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     ResolveDCompInputHandleToPwnd @ 0x1C000776C (ResolveDCompInputHandleToPwnd.c)
 *     ?IsCompositionInputWindow@@YAHPEAUtagWND@@@Z @ 0x1C0064FB4 (-IsCompositionInputWindow@@YAHPEAUtagWND@@@Z.c)
 *     ?AttachInputQueueToWindow@@YAJPEAUtagWND@@PEAVIInputQueue@@@Z @ 0x1C00E9C58 (-AttachInputQueueToWindow@@YAJPEAUtagWND@@PEAVIInputQueue@@@Z.c)
 *     UserDetachQueueFromInputWindowApiExt @ 0x1C01F6B40 (UserDetachQueueFromInputWindowApiExt.c)
 * Callees:
 *     _FindProp @ 0x1C0065DC0 (_FindProp.c)
 */

__int64 __fastcall CWindowProp::GetProp<CInputQueueProp>(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r10
  _QWORD *v3; // r11
  __int64 *Prop; // rax
  __int64 v5; // rax

  v2 = 0LL;
  v3 = a2;
  if ( *(_QWORD *)(a1 + 168) && (Prop = (__int64 *)FindProp(a1, CInputQueueProp::s_atom, 1LL)) != 0LL )
    v5 = *Prop;
  else
    v5 = v2;
  *v3 = v5;
  LOBYTE(v2) = v5 != 0;
  return (unsigned int)v2;
}
