/*
 * XREFs of ??_GCRenderDataDrawFrame@@AEAAPEAXI@Z @ 0x180137B08
 * Callers:
 *     ?Release@CRenderDataDrawFrame@@QEAAKXZ @ 0x180137C90 (-Release@CRenderDataDrawFrame@@QEAAKXZ.c)
 * Callees:
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x18002D1DC (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?Release@CRenderDataDrawFrame@@QEAAKXZ @ 0x180137C90 (-Release@CRenderDataDrawFrame@@QEAAKXZ.c)
 */

CRenderDataDrawFrame *__fastcall CRenderDataDrawFrame::`scalar deleting destructor'(CMILCOMBase **this)
{
  CMILCOMBase *v2; // rcx
  CMILCOMBase *v3; // rcx
  CRenderDataDrawFrame *v4; // rcx

  v2 = *this;
  if ( v2 )
    CMILCOMBase::InternalRelease(v2);
  v3 = this[1];
  if ( v3 )
    CMILCOMBase::InternalRelease((CMILCOMBase *)((char *)v3 + 8));
  v4 = this[4];
  if ( v4 )
    CRenderDataDrawFrame::Release(v4);
  (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CMILCOMBase **))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    this);
  return (CRenderDataDrawFrame *)this;
}
