/*
 * XREFs of AvDestroyProcessHeap @ 0x18009CAB0
 * Callers:
 *     _DllMainStartup @ 0x180048040 (_DllMainStartup.c)
 * Callees:
 *     ??_GHeapBase@WPF@@UEAAPEAXI@Z @ 0x18009C9C0 (--_GHeapBase@WPF@@UEAAPEAXI@Z.c)
 */

__int64 AvDestroyProcessHeap()
{
  if ( WPF::g_pProcessHeap )
  {
    WPF::HeapBase::`scalar deleting destructor'(WPF::g_pProcessHeap, 0);
    HeapFree(g_hProcessHeap, 0, WPF::g_pProcessHeap);
    WPF::g_pProcessHeap = 0LL;
    g_hProcessHeap = 0LL;
  }
  return 0LL;
}
