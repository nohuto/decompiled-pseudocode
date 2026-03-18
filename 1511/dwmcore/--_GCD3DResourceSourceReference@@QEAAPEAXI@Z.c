/*
 * XREFs of ??_GCD3DResourceSourceReference@@QEAAPEAXI@Z @ 0x1800B4EA0
 * Callers:
 *     ?DestroyAllResources@CD3DResourceManager@@QEAAXXZ @ 0x180028198 (-DestroyAllResources@CD3DResourceManager@@QEAAXXZ.c)
 *     ?HandleAdvanceFrame@CD3DDeviceManager@@AEAAJ_K_N@Z @ 0x180071ED0 (-HandleAdvanceFrame@CD3DDeviceManager@@AEAAJ_K_N@Z.c)
 *     ?AdvanceFrame@CHwDisplayRenderTarget@@UEAAX_K_N@Z @ 0x180080F10 (-AdvanceFrame@CHwDisplayRenderTarget@@UEAAX_K_N@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
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
