/*
 * XREFs of RtlpMuiRegGetLangInfoIndex @ 0x1800F4CBC
 * Callers:
 *     RtlpMuiRegGetOrAddLangInfo @ 0x1800F4DF4 (RtlpMuiRegGetOrAddLangInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpMuiRegGetLangInfoIndex(__int64 a1, char *a2)
{
  __int16 v3; // r11
  char *v4; // r9
  unsigned __int64 v5; // rdx
  __int64 v6; // rdx
  char v8; // al
  unsigned int v9; // r10d

  if ( a1 )
  {
    if ( a2 )
    {
      v3 = *((_WORD *)a2 + 2);
      if ( v3 || *((__int16 *)a2 + 3) >= 0 )
      {
        v4 = *(char **)(a1 + 16);
        v5 = (__int64)((unsigned __int128)((a2 - v4) * (__int128)0x4924924924924925LL) >> 64) >> 3;
        v6 = (v5 >> 63) + v5;
        if ( v6 >= 0 && v6 < *(unsigned __int16 *)(a1 + 6) )
          return (unsigned __int16)v6;
        v6 = 0LL;
        if ( *(_WORD *)(a1 + 6) )
        {
          while ( 1 )
          {
            if ( *(_WORD *)v4 == *(_WORD *)a2
              && *((_WORD *)v4 + 2) == v3
              && *((_WORD *)v4 + 3) == *((_WORD *)a2 + 3)
              && *((_WORD *)v4 + 5) == *((_WORD *)a2 + 5)
              && ((*((_WORD *)a2 + 4) ^ *((_WORD *)v4 + 4)) & 0xC000) == 0 )
            {
              v8 = 1;
              v9 = 0;
              do
              {
                if ( v9 >= 4 )
                  break;
                if ( (((unsigned __int16)(*((_WORD *)a2 + 4) ^ *((_WORD *)v4 + 4)) >> (2 * v9)) & 3) == 0 )
                {
                  v8 = 1;
                  if ( *(_WORD *)&v4[2 * v9 + 12] == *(_WORD *)&a2[2 * v9 + 12] )
                    continue;
                }
                v8 = 0;
                ++v9;
              }
              while ( v8 );
              if ( v8 )
                break;
            }
            ++v6;
            v4 += 28;
            if ( v6 >= *(unsigned __int16 *)(a1 + 6) )
              return 0xFFFFFFFFLL;
          }
          return (unsigned __int16)v6;
        }
      }
    }
  }
  return 0xFFFFFFFFLL;
}
