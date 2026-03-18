/*
 * XREFs of ??_GCD3DResourceSourceReference@@QEAAPEAXI@Z @ 0x18013AD74
 * Callers:
 *     ?AdvanceFrame@CHwDisplayRenderTarget@@UEAAXI_N@Z @ 0x180044DD0 (-AdvanceFrame@CHwDisplayRenderTarget@@UEAAXI_N@Z.c)
 *     ?DestroyAllResources@CD3DResourceManager@@QEAAXXZ @ 0x18008AC0C (-DestroyAllResources@CD3DResourceManager@@QEAAXXZ.c)
 *     ?EndFrame@CD3DResourceManager@@QEAAXXZ @ 0x1800E0A64 (-EndFrame@CD3DResourceManager@@QEAAXXZ.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

CD3DResourceSourceReference *__fastcall CD3DResourceSourceReference::`scalar deleting destructor'(
        CD3DResourceSourceReference *this)
{
  if ( *(_QWORD *)this )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)this + 16LL))(*(_QWORD *)this);
  (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CD3DResourceSourceReference *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    this);
  return this;
}
