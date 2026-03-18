/*
 * XREFs of ?UnRegisterNotifiers@CAtlasedRectsMesh@@UEAAXXZ @ 0x180026BF0
 * Callers:
 *     ?ProcessUpdate@CAtlasedRectsMesh@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ATLASEDRECTSMESH@@PEBXI@Z @ 0x180026A60 (-ProcessUpdate@CAtlasedRectsMesh@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ATLASEDRECTSMESH@@PEBXI@Z.c)
 *     ??1CAtlasedRectsMesh@@MEAA@XZ @ 0x180026FA4 (--1CAtlasedRectsMesh@@MEAA@XZ.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x180051F80 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 */

void __fastcall CAtlasedRectsMesh::UnRegisterNotifiers(void **this)
{
  void (*v2)(WPF::ProcessHeapImpl *__hidden, void *); // rbp
  void (*v3)(WPF::ProcessHeapImpl *__hidden, void *); // rbp
  void (*v4)(WPF::ProcessHeapImpl *__hidden, void *); // rbp

  if ( this[19] )
  {
    v2 = *(void (**)(WPF::ProcessHeapImpl *__hidden, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
    if ( v2 == WPF::ProcessHeapImpl::Free )
      WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, this[19]);
    else
      ((void (__fastcall *)(WPF::ProcessHeapImpl *, void *))v2)(WPF::g_pProcessHeap, this[19]);
    this[19] = 0LL;
  }
  *((_DWORD *)this + 37) = 0;
  if ( this[21] )
  {
    v3 = *(void (**)(WPF::ProcessHeapImpl *__hidden, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
    if ( v3 == WPF::ProcessHeapImpl::Free )
      WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, this[21]);
    else
      ((void (__fastcall *)(WPF::ProcessHeapImpl *, void *))v3)(WPF::g_pProcessHeap, this[21]);
    this[21] = 0LL;
  }
  *((_DWORD *)this + 40) = 0;
  if ( this[23] )
  {
    v4 = *(void (**)(WPF::ProcessHeapImpl *__hidden, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
    if ( v4 == WPF::ProcessHeapImpl::Free )
      WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, this[23]);
    else
      ((void (__fastcall *)(WPF::ProcessHeapImpl *, void *))v4)(WPF::g_pProcessHeap, this[23]);
    this[23] = 0LL;
  }
  *((_DWORD *)this + 44) = 0;
}
