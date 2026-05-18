/*
 * XREFs of AvCreateProcessHeap @ 0x180003EA8
 * Callers:
 *     _DllMainStartup @ 0x180004560 (_DllMainStartup.c)
 * Callees:
 *     <none>
 */

__int64 AvCreateProcessHeap()
{
  _QWORD *v0; // rax

  g_hProcessHeap = GetProcessHeap();
  v0 = HeapAlloc(g_hProcessHeap, 0, 8uLL);
  WPF::g_pProcessHeap = v0;
  if ( !v0 )
    return 2147942414LL;
  *v0 = &WPF::ProcessHeapImpl::`vftable';
  return 0LL;
}
