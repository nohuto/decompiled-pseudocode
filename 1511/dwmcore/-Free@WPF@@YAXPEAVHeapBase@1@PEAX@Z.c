/*
 * XREFs of ?Free@WPF@@YAXPEAVHeapBase@1@PEAX@Z @ 0x180070ED0
 * Callers:
 *     _dynamic_atexit_destructor_for__CInteraction::s_InteractionHandleTable__ @ 0x1800BFAA0 (_dynamic_atexit_destructor_for__CInteraction--s_InteractionHandleTable__.c)
 *     ?CopyFrontToBackBufferWorker@CHwFullScreenRenderTarget@@IEAAJW4StereoContext@@_N@Z @ 0x18014F3D8 (-CopyFrontToBackBufferWorker@CHwFullScreenRenderTarget@@IEAAJW4StereoContext@@_N@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x180051F80 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 */

void __fastcall WPF::Free(struct _RTL_GENERIC_TABLE *Table, PVOID Buffer)
{
  void (__fastcall *v2)(WPF::ProcessHeapImpl *, void *); // rdi

  v2 = *(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
  if ( v2 == WPF::ProcessHeapImpl::Free )
    WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, Buffer);
  else
    v2(WPF::g_pProcessHeap, Buffer);
}
