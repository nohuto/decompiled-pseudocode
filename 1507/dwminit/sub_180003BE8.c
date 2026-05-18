/*
 * XREFs of sub_180003BE8 @ 0x180003BE8
 * Callers:
 *     DllEntryPoint @ 0x1800042A0 (DllEntryPoint.c)
 * Callees:
 *     <none>
 */

__int64 sub_180003BE8()
{
  _QWORD *v0; // rax

  hHeap = GetProcessHeap();
  v0 = HeapAlloc(hHeap, 0, 8uLL);
  lpMem = v0;
  if ( !v0 )
    return 2147942414LL;
  *v0 = off_180008E30;
  return 0LL;
}
