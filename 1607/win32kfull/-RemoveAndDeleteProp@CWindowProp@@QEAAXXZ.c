/*
 * XREFs of ?RemoveAndDeleteProp@CWindowProp@@QEAAXXZ @ 0x1C009991C
 * Callers:
 *     ?_AttachWindowCompositionTarget@@YAJPEAUtagWND@@HPEAUCompositionObject@@@Z @ 0x1C0098600 (-_AttachWindowCompositionTarget@@YAJPEAUtagWND@@HPEAUCompositionObject@@@Z.c)
 *     UserDetachQueueFromInputWindowApiExt @ 0x1C0099CB0 (UserDetachQueueFromInputWindowApiExt.c)
 *     ?AttachInputQueueToWindow@@YAJPEAUtagWND@@PEAVIInputQueue@@@Z @ 0x1C0099E24 (-AttachInputQueueToWindow@@YAJPEAUtagWND@@PEAVIInputQueue@@@Z.c)
 *     ?_DetachWindowCompositionTarget@@YAHPEAUtagWND@@H@Z @ 0x1C0129270 (-_DetachWindowCompositionTarget@@YAHPEAUtagWND@@H@Z.c)
 * Callees:
 *     InternalRemoveProp @ 0x1C0054080 (InternalRemoveProp.c)
 *     _guard_dispatch_icall_nop @ 0x1C015A020 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CWindowProp::RemoveAndDeleteProp(void (__fastcall ***this)(CWindowProp *))
{
  void (__fastcall **v2)(CWindowProp *); // rax

  (*this)[1]((CWindowProp *)this);
  InternalRemoveProp();
  v2 = *this;
  this[1] = 0LL;
  (*v2)((CWindowProp *)this);
}
