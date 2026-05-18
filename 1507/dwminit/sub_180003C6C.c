/*
 * XREFs of sub_180003C6C @ 0x180003C6C
 * Callers:
 *     DllEntryPoint @ 0x1800042A0 (DllEntryPoint.c)
 * Callees:
 *     <none>
 */

__int64 sub_180003C6C()
{
  void *v0; // r8
  HANDLE v1; // rcx

  v0 = lpMem;
  if ( lpMem )
  {
    v1 = hHeap;
    *(_QWORD *)lpMem = &off_180008E58;
    HeapFree(v1, 0, v0);
    lpMem = 0LL;
    hHeap = 0LL;
  }
  return 0LL;
}
