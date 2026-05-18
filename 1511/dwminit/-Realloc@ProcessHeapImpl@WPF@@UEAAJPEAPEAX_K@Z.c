/*
 * XREFs of ?Realloc@ProcessHeapImpl@WPF@@UEAAJPEAPEAX_K@Z @ 0x180004010
 * Callers:
 *     <none>
 * Callees:
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x180003F80 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 */

__int64 __fastcall WPF::ProcessHeapImpl::Realloc(WPF::ProcessHeapImpl *this, void **a2, SIZE_T a3)
{
  void *v4; // rax
  void *v6; // rax

  if ( *a2 )
  {
    v6 = HeapReAlloc(g_hProcessHeap, 0, *a2, a3);
    if ( !v6 )
      return 2147942414LL;
    *a2 = v6;
  }
  else
  {
    v4 = WPF::ProcessHeapImpl::Alloc(this, a3);
    *a2 = v4;
    if ( !v4 )
      return 2147942414LL;
  }
  return 0LL;
}
