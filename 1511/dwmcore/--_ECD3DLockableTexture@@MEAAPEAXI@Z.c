/*
 * XREFs of ??_ECD3DLockableTexture@@MEAAPEAXI@Z @ 0x18014CF10
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ??1CD3DTexture@@MEAA@XZ @ 0x18002DCD8 (--1CD3DTexture@@MEAA@XZ.c)
 */

CD3DLockableTexture *__fastcall CD3DLockableTexture::`vector deleting destructor'(CD3DLockableTexture *this, char a2)
{
  *(_QWORD *)this = &CD3DLockableTexture::`vftable'{for `CMILPoolResource'};
  *((_QWORD *)this + 3) = &CStandardSwapChain::`vftable'{for `IDeviceResource'};
  CD3DTexture::~CD3DTexture(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CD3DLockableTexture *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
