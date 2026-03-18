/*
 * XREFs of ?SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z @ 0x1C00E9EA0
 * Callers:
 *     ?_AttachWindowCompositionTarget@@YAJPEAUtagWND@@HPEAUCompositionObject@@@Z @ 0x1C00E9930 (-_AttachWindowCompositionTarget@@YAJPEAUtagWND@@HPEAUCompositionObject@@@Z.c)
 *     ?AttachInputQueueToWindow@@YAJPEAUtagWND@@PEAVIInputQueue@@@Z @ 0x1C00E9C58 (-AttachInputQueueToWindow@@YAJPEAUtagWND@@PEAVIInputQueue@@@Z.c)
 *     UserSetWindowedSwapChain @ 0x1C011AAE8 (UserSetWindowedSwapChain.c)
 *     ?GetOrCreate@CoreWindowProp@@KAJPEAUtagWND@@PEAPEAV1@@Z @ 0x1C0226180 (-GetOrCreate@CoreWindowProp@@KAJPEAUtagWND@@PEAPEAV1@@Z.c)
 * Callees:
 *     InternalSetProp @ 0x1C0081908 (InternalSetProp.c)
 *     InternalRemoveProp @ 0x1C008748C (InternalRemoveProp.c)
 *     _guard_dispatch_icall_nop @ 0x1C015D150 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowProp::SetProp(CWindowProp *this, __int64 a2)
{
  __int16 v4; // ax
  CWindowProp *v5; // rax
  unsigned __int16 v6; // ax
  __int64 result; // rax

  v4 = (*(__int64 (__fastcall **)(CWindowProp *))(*(_QWORD *)this + 8LL))(this);
  v5 = (CWindowProp *)InternalRemoveProp(a2, v4, 1);
  if ( v5 && v5 != this )
    (**(void (__fastcall ***)(CWindowProp *))v5)(v5);
  v6 = (*(__int64 (__fastcall **)(CWindowProp *))(*(_QWORD *)this + 8LL))(this);
  result = InternalSetProp(a2, v6, (__int64)this, 32769);
  *((_QWORD *)this + 1) = a2 & -(__int64)((_DWORD)result != 0);
  return result;
}
