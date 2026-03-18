/*
 * XREFs of ?RemoveAndDeleteProp@CWindowProp@@QEAAXXZ @ 0x1C00803A8
 * Callers:
 *     UserDetachQueueFromInputWindowApiExt @ 0x1C00CF020 (UserDetachQueueFromInputWindowApiExt.c)
 *     ?AttachInputQueueToWindow@@YAJPEAUtagWND@@PEAVIInputQueue@@@Z @ 0x1C00CF1A4 (-AttachInputQueueToWindow@@YAJPEAUtagWND@@PEAVIInputQueue@@@Z.c)
 *     ?_DetachWindowCompositionTarget@@YAHPEAUtagWND@@H@Z @ 0x1C00D1AA0 (-_DetachWindowCompositionTarget@@YAHPEAUtagWND@@H@Z.c)
 *     ?_AttachWindowCompositionTarget@@YAJPEAUtagWND@@HPEAUCompositionObject@@@Z @ 0x1C00D1FE0 (-_AttachWindowCompositionTarget@@YAJPEAUtagWND@@HPEAUCompositionObject@@@Z.c)
 * Callees:
 *     InternalRemoveProp @ 0x1C007FC50 (InternalRemoveProp.c)
 *     _guard_dispatch_icall_nop @ 0x1C0152950 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CWindowProp::RemoveAndDeleteProp(CWindowProp *this)
{
  __int16 v2; // ax
  void (__fastcall **v3)(CWindowProp *); // rax

  v2 = (*(__int64 (__fastcall **)(CWindowProp *))(*(_QWORD *)this + 8LL))(this);
  InternalRemoveProp(*((_QWORD *)this + 1), v2, 1);
  v3 = *(void (__fastcall ***)(CWindowProp *))this;
  *((_QWORD *)this + 1) = 0LL;
  (*v3)(this);
}
