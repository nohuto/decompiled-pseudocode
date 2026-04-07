/*
 * XREFs of ?Realloc@ProcessHeapImpl@WPF@@UEAAJPEAPEAX_K@Z @ 0x18002AD80
 * Callers:
 *     ?SetTitle@CWindowData@@QEAAJPEAGH@Z @ 0x18001A6E0 (-SetTitle@CWindowData@@QEAAJPEAGH@Z.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x18002AA90 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WPF::ProcessHeapImpl::Realloc(WPF::ProcessHeapImpl *this, void **a2, SIZE_T a3)
{
  void *v4; // rax
  void *v6; // rax

  if ( *a2 )
  {
    v4 = HeapReAlloc(g_hProcessHeap, 0, *a2, a3);
    if ( v4 )
    {
      *a2 = v4;
      return 0LL;
    }
  }
  else
  {
    if ( !a3 )
      a3 = 1LL;
    v6 = HeapAlloc(g_hProcessHeap, 0, a3);
    *a2 = v6;
    if ( v6 )
      return 0LL;
  }
  return 2147942414LL;
}
