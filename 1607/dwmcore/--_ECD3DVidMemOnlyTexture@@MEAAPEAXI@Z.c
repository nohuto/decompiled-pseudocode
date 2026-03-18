/*
 * XREFs of ??_ECD3DVidMemOnlyTexture@@MEAAPEAXI@Z @ 0x1800A67D0
 * Callers:
 *     ?AdvanceFrame@CHwDisplayRenderTarget@@UEAAX_K_N@Z @ 0x18008F2C0 (-AdvanceFrame@CHwDisplayRenderTarget@@UEAAX_K_N@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x180061620 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     ??1CD3DTexture@@MEAA@XZ @ 0x180081578 (--1CD3DTexture@@MEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

CD3DVidMemOnlyTexture *__fastcall CD3DVidMemOnlyTexture::`vector deleting destructor'(
        CD3DVidMemOnlyTexture *this,
        char a2)
{
  void (__fastcall *v4)(WPF::ProcessHeapImpl *, void *); // rax

  *(_QWORD *)this = &CD3DVidMemOnlyTexture::`vftable'{for `CMILPoolResource'};
  *((_QWORD *)this + 3) = &CD3DVidMemOnlyTexture::`vftable'{for `IDeviceResource'};
  CD3DTexture::~CD3DTexture(this);
  if ( (a2 & 1) != 0 )
  {
    v4 = *(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
    if ( v4 == WPF::ProcessHeapImpl::Free )
      WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, this);
    else
      v4(WPF::g_pProcessHeap, this);
  }
  return this;
}
