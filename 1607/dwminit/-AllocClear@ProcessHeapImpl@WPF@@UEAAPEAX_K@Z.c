/*
 * XREFs of ?AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x180004130
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x18000818E (memset_0.c)
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
