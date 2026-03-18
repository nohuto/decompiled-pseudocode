/*
 * XREFs of AlpcpViewSearchCallbackFunction @ 0x1404773F8
 * Callers:
 *     AlpcpEnumerateResourcesPort @ 0x140477330 (AlpcpEnumerateResourcesPort.c)
 * Callees:
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 */

__int64 __fastcall AlpcpViewSearchCallbackFunction(ULONG_PTR BugCheckParameter2, _QWORD *a2)
{
  __int64 BugCheckParameter4; // rax
  __int64 v5; // rdx

  if ( *(_QWORD *)(BugCheckParameter2 + 40) != *a2 )
    return 0LL;
  _m_prefetchw((const void *)(BugCheckParameter2 - 24));
  BugCheckParameter4 = *(_QWORD *)(BugCheckParameter2 - 24);
  do
  {
    if ( BugCheckParameter4 <= 0 )
    {
      if ( BugCheckParameter4 )
        KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 0x20uLL, BugCheckParameter4);
      return 3221226029LL;
    }
    v5 = BugCheckParameter4;
    BugCheckParameter4 = _InterlockedCompareExchange64(
                           (volatile signed __int64 *)(BugCheckParameter2 - 24),
                           BugCheckParameter4 + 1,
                           BugCheckParameter4);
  }
  while ( BugCheckParameter4 != v5 );
  if ( BugCheckParameter4 != -1 )
  {
    a2[1] = BugCheckParameter2;
    return 3221225473LL;
  }
  return 3221226029LL;
}
