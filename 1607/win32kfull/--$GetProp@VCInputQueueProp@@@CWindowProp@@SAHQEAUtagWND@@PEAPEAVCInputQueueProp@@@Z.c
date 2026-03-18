/*
 * XREFs of ??$GetProp@VCInputQueueProp@@@CWindowProp@@SAHQEAUtagWND@@PEAPEAVCInputQueueProp@@@Z @ 0x1C007CE28
 * Callers:
 *     ?GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C0008F08 (-GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     ?SetCompositionInputWindowUIOwner@@YAHPEAUtagWND@@0@Z @ 0x1C000C814 (-SetCompositionInputWindowUIOwner@@YAHPEAUtagWND@@0@Z.c)
 *     StoreQMessage @ 0x1C0080C10 (StoreQMessage.c)
 *     UserDetachQueueFromInputWindowApiExt @ 0x1C0099CB0 (UserDetachQueueFromInputWindowApiExt.c)
 *     ?AttachInputQueueToWindow@@YAJPEAUtagWND@@PEAVIInputQueue@@@Z @ 0x1C0099E24 (-AttachInputQueueToWindow@@YAJPEAUtagWND@@PEAVIInputQueue@@@Z.c)
 * Callees:
 *     _FindProp @ 0x1C007B010 (_FindProp.c)
 */

__int64 __fastcall CWindowProp::GetProp<CInputQueueProp>(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r10
  _QWORD *v3; // r11
  __int64 v4; // rax
  __int64 *Prop; // rax

  v2 = 0LL;
  v3 = a2;
  if ( *(_QWORD *)(a1 + 168) && (Prop = (__int64 *)FindProp(a1, CInputQueueProp::s_atom, 1)) != 0LL )
    v4 = *Prop;
  else
    v4 = v2;
  *v3 = v4;
  LOBYTE(v2) = v4 != 0;
  return (unsigned int)v2;
}
