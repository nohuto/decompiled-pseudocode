/*
 * XREFs of ndisTraceRundownSafeInterlockedIncrement @ 0x1C00B390C
 * Callers:
 *     ndisTraceRundownReference @ 0x1C00AD344 (ndisTraceRundownReference.c)
 * Callees:
 *     <none>
 */

__int64 ndisTraceRundownSafeInterlockedIncrement()
{
  int v0; // eax

  while ( 1 )
  {
    v0 = dword_1C0100004;
    if ( dword_1C0100004 == 0x7FFFFFFF )
      break;
    if ( v0 == _InterlockedCompareExchange(&dword_1C0100004, dword_1C0100004 + 1, dword_1C0100004) )
      return 0LL;
  }
  return 3221225621LL;
}
