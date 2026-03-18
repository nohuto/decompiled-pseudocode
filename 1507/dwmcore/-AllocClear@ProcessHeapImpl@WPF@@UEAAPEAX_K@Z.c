/*
 * XREFs of ?AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x180031330
 * Callers:
 *     ?Create@CCommandBatch@@SAJIPEAPEAV1@@Z @ 0x180050650 (-Create@CCommandBatch@@SAJIPEAPEAV1@@Z.c)
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCResourceTable@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18006D070 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCResourceTable@@W4MIL_RESOURCE_TYPE@@PEAPEAVC.c)
 *     ?CreateFromSharedSection@CD2DSharedBuffer@@SAJPEAXIPEAVCSharedSection@@PEAPEAUID2D1PrivateCompositorBuffer@@@Z @ 0x180070F28 (-CreateFromSharedSection@CD2DSharedBuffer@@SAJPEAXIPEAVCSharedSection@@PEAPEAUID2D1PrivateCompos.c)
 * Callees:
 *     memset_0 @ 0x180099BC6 (memset_0.c)
 */

void *__fastcall WPF::ProcessHeapImpl::AllocClear(WPF::ProcessHeapImpl *this, size_t a2)
{
  SIZE_T v2; // r8
  void *v4; // rax
  void *v5; // rbx

  v2 = a2;
  if ( !a2 )
    v2 = 1LL;
  v4 = HeapAlloc(g_hProcessHeap, 0, v2);
  v5 = v4;
  if ( v4 )
    memset_0(v4, 0, a2);
  return v5;
}
