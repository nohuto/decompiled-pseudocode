/*
 * XREFs of ??_GCContentBounder@@QEAAPEAXI@Z @ 0x18005050C
 * Callers:
 *     ??1COcclusionContext@@QEAA@XZ @ 0x18001F17C (--1COcclusionContext@@QEAA@XZ.c)
 *     ?Uninitialize@CDrawingContext@@IEAAXXZ @ 0x18002E1F4 (-Uninitialize@CDrawingContext@@IEAAXXZ.c)
 *     ?Initialize@CDrawingContext@@MEAAJXZ @ 0x18002E2E0 (-Initialize@CDrawingContext@@MEAAJXZ.c)
 *     ??1CPreComputeContext@@QEAA@XZ @ 0x18003BFA0 (--1CPreComputeContext@@QEAA@XZ.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x180031300 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180070B90 (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
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
