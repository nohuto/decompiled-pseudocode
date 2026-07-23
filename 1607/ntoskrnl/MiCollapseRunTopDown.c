/*
 * XREFs of MiCollapseRunTopDown @ 0x14010294C
 * Callers:
 *     MiFindContiguousPages @ 0x140102220 (MiFindContiguousPages.c)
 *     MiFindRebuildCandidate @ 0x1401FD040 (MiFindRebuildCandidate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiCollapseRunTopDown(__int64 *a1)
{
  unsigned __int64 v2; // rcx
  unsigned __int64 v3; // rax
  __int64 v4; // rcx
  unsigned __int64 v5; // r8
  unsigned __int64 v6; // r11
  __int64 v7; // r10
  __int64 v9; // r9
  __int64 v10; // rcx

  v2 = a1[3];
  if ( a1[1] - 1 > v2 )
    a1[1] = v2 + 1;
  v3 = a1[2];
  if ( *a1 < v3 )
    *a1 = v3;
  v4 = *a1;
  v5 = a1[1];
  if ( *a1 < v5 )
  {
    v6 = a1[5];
    while ( v6 <= v5 - v4 )
    {
      v7 = a1[4];
      if ( !v7 )
        return 1LL;
      v9 = ~(v7 - 1);
      if ( (((v5 - 1) ^ (v5 - v6)) & v9) == 0 )
        return 1LL;
      if ( (v9 & v5) != v5 )
        a1[1] = v5 & v9;
      v10 = *a1;
      if ( (v9 & *a1) == *a1 || (*a1 = v9 & (v7 + v10 - 1), (v9 & (v7 + v10 - 1)) != 0) )
      {
        v4 = *a1;
        v5 = a1[1];
        if ( *a1 < v5 )
          continue;
      }
      return 0LL;
    }
  }
  return 0LL;
}
