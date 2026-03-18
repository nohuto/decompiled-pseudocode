/*
 * XREFs of CmpDoSystemCacheRead @ 0x14065B988
 * Callers:
 *     CmpFileRead @ 0x1404AFBDC (CmpFileRead.c)
 * Callees:
 *     memmove @ 0x140195740 (memmove.c)
 *     HvViewMapAddressForFileOffset @ 0x1406629CC (HvViewMapAddressForFileOffset.c)
 *     HvViewMapContiguousBytesAfterFileOffset @ 0x140662BE8 (HvViewMapContiguousBytesAfterFileOffset.c)
 */

__int64 __fastcall CmpDoSystemCacheRead(__int64 a1, unsigned int *a2, char *a3, unsigned int a4)
{
  unsigned int v4; // r14d
  unsigned int v5; // ebp
  __int64 v8; // r12
  const void *v9; // rdi
  unsigned int v10; // esi

  v4 = *a2;
  v5 = a4;
  if ( a4 )
  {
    v8 = a1 + 200;
    do
    {
      v9 = (const void *)HvViewMapAddressForFileOffset(v8, v4);
      v10 = HvViewMapContiguousBytesAfterFileOffset(v8, v4);
      if ( v10 > v5 )
        v10 = v5;
      memmove(a3, v9, v10);
      v4 += v10;
      a3 += v10;
      *a2 = v4;
      v5 -= v10;
    }
    while ( v5 );
  }
  return 0LL;
}
