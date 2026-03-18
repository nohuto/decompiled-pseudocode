/*
 * XREFs of ?Alloc@WPF@@YAPEAXPEAVHeapBase@1@_J_K@Z @ 0x1800AE310
 * Callers:
 *     ?Create@CRenderTargetBitmap@@SAJPEAVIRenderTargetBitmap@@PEAPEAV1@@Z @ 0x180132090 (-Create@CRenderTargetBitmap@@SAJPEAVIRenderTargetBitmap@@PEAPEAV1@@Z.c)
 * Callees:
 *     <none>
 */

LPVOID __fastcall WPF::Alloc(WPF *this, struct WPF::HeapBase *a2, SIZE_T a3)
{
  LPVOID (__fastcall *v3)(WPF::ProcessHeapImpl *, SIZE_T); // rax

  v3 = *(LPVOID (__fastcall **)(WPF::ProcessHeapImpl *, SIZE_T))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
  if ( v3 == WPF::ProcessHeapImpl::Alloc )
    return WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, a3);
  else
    return v3(WPF::g_pProcessHeap, a3);
}
