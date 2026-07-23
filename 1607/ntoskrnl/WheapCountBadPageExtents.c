/*
 * XREFs of WheapCountBadPageExtents @ 0x1406BAB98
 * Callers:
 *     WheaPersistOfflinedPage @ 0x1402307D0 (WheaPersistOfflinedPage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WheapCountBadPageExtents(__int64 *a1, unsigned int a2)
{
  unsigned int v2; // r8d
  __int64 v3; // r10
  __int64 *v4; // r9
  __int64 v5; // rdx
  __int64 v6; // rax

  v2 = 0;
  if ( a2 )
  {
    v3 = *a1;
    v2 = 1;
    if ( a2 > 1 )
    {
      v4 = a1 + 1;
      v5 = a2 - 1;
      do
      {
        v6 = *v4;
        if ( *v4 > (unsigned __int64)(v3 + 1) )
          ++v2;
        ++v4;
        v3 = v6;
        --v5;
      }
      while ( v5 );
    }
  }
  return v2;
}
