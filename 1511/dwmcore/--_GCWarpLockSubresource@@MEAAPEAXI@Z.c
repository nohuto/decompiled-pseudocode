/*
 * XREFs of ??_GCWarpLockSubresource@@MEAAPEAXI@Z @ 0x18001AFA0
 * Callers:
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180085DFC (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 * Callees:
 *     ??1CWarpLockSubresource@@MEAA@XZ @ 0x18001B144 (--1CWarpLockSubresource@@MEAA@XZ.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x180051F80 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 */

CWarpLockSubresource *__fastcall CWarpLockSubresource::`scalar deleting destructor'(
        CWarpLockSubresource *this,
        char a2)
{
  void (*v4)(WPF::ProcessHeapImpl *__hidden, void *); // rsi

  CWarpLockSubresource::~CWarpLockSubresource(this);
  if ( (a2 & 1) != 0 )
  {
    v4 = *(void (**)(WPF::ProcessHeapImpl *__hidden, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
    if ( v4 == WPF::ProcessHeapImpl::Free )
      WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, this);
    else
      ((void (__fastcall *)(WPF::ProcessHeapImpl *, CWarpLockSubresource *))v4)(WPF::g_pProcessHeap, this);
  }
  return this;
}
