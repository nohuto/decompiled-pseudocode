/*
 * XREFs of WheapSortBadPages @ 0x1406BABF4
 * Callers:
 *     WheaPersistOfflinedPage @ 0x1402307D0 (WheaPersistOfflinedPage.c)
 * Callees:
 *     <none>
 */

void __fastcall WheapSortBadPages(__int64 a1, unsigned int a2)
{
  unsigned int v2; // r8d
  unsigned int v4; // edx
  char v5; // r11
  __int64 v6; // rcx
  unsigned __int64 *v7; // r9
  unsigned __int64 v8; // rbx

  if ( a2 >= 2 )
  {
    v2 = 0;
    v4 = a2 - 1;
    if ( v4 )
    {
      do
      {
        v5 = 0;
        LODWORD(v6) = v4;
        if ( v4 <= v2 )
          break;
        v7 = (unsigned __int64 *)(a1 + 8LL * v4);
        do
        {
          v6 = (unsigned int)(v6 - 1);
          v8 = *(_QWORD *)(a1 + 8 * v6);
          if ( v8 > *v7 )
          {
            *(_QWORD *)(a1 + 8 * v6) = *v7;
            v5 = 1;
            *v7 = v8;
          }
          --v7;
        }
        while ( (unsigned int)v6 > v2 );
        if ( !v5 )
          break;
        ++v2;
      }
      while ( v2 < v4 );
    }
  }
}
