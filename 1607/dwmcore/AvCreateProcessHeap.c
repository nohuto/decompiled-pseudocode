/*
 * XREFs of AvCreateProcessHeap @ 0x1800B5DA8
 * Callers:
 *     _DllMainStartup @ 0x1800B5D20 (_DllMainStartup.c)
 * Callees:
 *     <none>
 */

__int64 AvCreateProcessHeap()
{
  WPF::ProcessHeapImpl *v0; // rax

  g_hProcessHeap = GetProcessHeap();
  v0 = (WPF::ProcessHeapImpl *)HeapAlloc(g_hProcessHeap, 0, 8uLL);
  WPF::g_pProcessHeap = v0;
  if ( !v0 )
    return 2147942414LL;
  *(_QWORD *)v0 = &WPF::ProcessHeapImpl::`vftable';
  return 0LL;
}
