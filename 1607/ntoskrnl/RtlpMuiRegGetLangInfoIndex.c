/*
 * XREFs of RtlpMuiRegGetLangInfoIndex @ 0x14057CEC0
 * Callers:
 *     RtlpMuiRegGetOrAddLangInfo @ 0x14057CDFC (RtlpMuiRegGetOrAddLangInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpMuiRegGetLangInfoIndex(__int64 a1, char *a2)
{
  __int16 v3; // r11
  char *v4; // r9
  unsigned __int64 v5; // rdx
  __int64 v6; // rdx
  unsigned __int16 v8; // di
  unsigned __int16 v9; // si
  char v10; // al
  unsigned int v11; // r10d

  if ( !a1 )
    return 0xFFFFFFFFLL;
  if ( !a2 )
    return 0xFFFFFFFFLL;
  v3 = *((_WORD *)a2 + 2);
  if ( !v3 && *((__int16 *)a2 + 3) < 0 )
    return 0xFFFFFFFFLL;
  v4 = *(char **)(a1 + 16);
  v5 = (__int64)((unsigned __int128)((a2 - v4) * (__int128)0x4924924924924925LL) >> 64) >> 3;
  v6 = (v5 >> 63) + v5;
  if ( v6 < 0 || v6 >= *(unsigned __int16 *)(a1 + 6) )
  {
    v6 = 0LL;
    if ( !*(_WORD *)(a1 + 6) )
      return 0xFFFFFFFFLL;
    while ( 1 )
    {
      if ( *(_WORD *)v4 == *(_WORD *)a2
        && *((_WORD *)v4 + 2) == v3
        && *((_WORD *)v4 + 3) == *((_WORD *)a2 + 3)
        && *((_WORD *)v4 + 5) == *((_WORD *)a2 + 5) )
      {
        v8 = *((_WORD *)v4 + 4);
        v9 = *((_WORD *)a2 + 4);
        if ( ((v9 ^ v8) & 0xC000) == 0 )
        {
          v10 = 1;
          v11 = 0;
          do
          {
            if ( v11 >= 4 )
              break;
            if ( (((unsigned __int16)(v9 ^ v8) >> (2 * v11)) & 3) == 0 )
            {
              v10 = 1;
              if ( *(_WORD *)&v4[2 * v11 + 12] == *(_WORD *)&a2[2 * v11 + 12] )
                continue;
            }
            v10 = 0;
            ++v11;
          }
          while ( v10 );
          if ( v10 )
            break;
        }
      }
      ++v6;
      v4 += 28;
      if ( v6 >= *(unsigned __int16 *)(a1 + 6) )
        return 0xFFFFFFFFLL;
    }
  }
  return (unsigned __int16)v6;
}
