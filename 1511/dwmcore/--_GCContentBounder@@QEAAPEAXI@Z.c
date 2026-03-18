/*
 * XREFs of ??_GCContentBounder@@QEAAPEAXI@Z @ 0x1800A0BEC
 * Callers:
 *     ?Uninitialize@CDrawingContext@@IEAAXXZ @ 0x1800436C0 (-Uninitialize@CDrawingContext@@IEAAXXZ.c)
 *     ?Initialize@CDrawingContext@@MEAAJXZ @ 0x1800437C0 (-Initialize@CDrawingContext@@MEAAJXZ.c)
 *     ??1CPreComputeContext@@QEAA@XZ @ 0x18004EB84 (--1CPreComputeContext@@QEAA@XZ.c)
 *     ??1COcclusionContext@@QEAA@XZ @ 0x180054ED0 (--1COcclusionContext@@QEAA@XZ.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x180051F80 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180085DFC (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 */

CContentBounder *__fastcall CContentBounder::`scalar deleting destructor'(CContentBounder *this)
{
  __int64 v2; // rcx
  CMILCOMBase *v3; // rcx
  void (__fastcall *v4)(WPF::ProcessHeapImpl *, void *); // rsi

  v2 = *((_QWORD *)this + 1);
  if ( v2 )
    CMILCOMBase::InternalRelease((CMILCOMBase *)(v2 + 8));
  v3 = (CMILCOMBase *)*((_QWORD *)this + 2);
  if ( v3 )
    CMILCOMBase::InternalRelease(v3);
  v4 = *(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
  if ( v4 == WPF::ProcessHeapImpl::Free )
    WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, this);
  else
    v4(WPF::g_pProcessHeap, this);
  return this;
}
