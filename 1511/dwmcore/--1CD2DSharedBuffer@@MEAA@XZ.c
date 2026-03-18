/*
 * XREFs of ??1CD2DSharedBuffer@@MEAA@XZ @ 0x1800AA8CC
 * Callers:
 *     ??_ECD2DSharedBuffer@@MEAAPEAXI@Z @ 0x1800AA7E0 (--_ECD2DSharedBuffer@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x180051F80 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180085DFC (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 */

void __fastcall CD2DSharedBuffer::~CD2DSharedBuffer(CD2DSharedBuffer *this)
{
  CMILCOMBase *v2; // rcx
  void (__fastcall *v3)(WPF::ProcessHeapImpl *, void *); // rsi

  *(_QWORD *)this = &CD2DSharedBuffer::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CD2DSharedBuffer::`vftable'{for `ID2D1PrivateCompositorBuffer'};
  v2 = (CMILCOMBase *)*((_QWORD *)this + 5);
  if ( v2 )
  {
    CMILCOMBase::InternalRelease(v2);
    *((_QWORD *)this + 5) = 0LL;
  }
  else
  {
    v3 = *(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
    if ( v3 == WPF::ProcessHeapImpl::Free )
      WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, *((void **)this + 3));
    else
      v3(WPF::g_pProcessHeap, *((void **)this + 3));
  }
  *(_QWORD *)this = &CMILCOMBase::`vftable';
}
