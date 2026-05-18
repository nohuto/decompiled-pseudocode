/*
 * XREFs of AvDestroyProcessHeap @ 0x1800040AC
 * Callers:
 *     _DllMainStartup @ 0x180004690 (_DllMainStartup.c)
 * Callees:
 *     <none>
 */

__int64 AvDestroyProcessHeap()
{
  void *v0; // r8
  HANDLE v1; // rcx

  v0 = WPF::g_pProcessHeap;
  if ( WPF::g_pProcessHeap )
  {
    v1 = g_hProcessHeap;
    *(_QWORD *)WPF::g_pProcessHeap = &WPF::HeapBase::`vftable';
    HeapFree(v1, 0, v0);
    WPF::g_pProcessHeap = 0LL;
    g_hProcessHeap = 0LL;
  }
  return 0LL;
}
