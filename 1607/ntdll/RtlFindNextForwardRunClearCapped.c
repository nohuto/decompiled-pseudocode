/*
 * XREFs of RtlFindNextForwardRunClearCapped @ 0x1800E41E0
 * Callers:
 *     RtlFindNextForwardRunClear @ 0x1800E41D0 (RtlFindNextForwardRunClear.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlFindNextForwardRunClearCapped(__int64 a1, unsigned int a2, __int64 a3, _DWORD *a4)
{
  unsigned __int64 v4; // r10
  unsigned int v6; // edx
  const signed __int64 *v9; // r8
  _DWORD *v10; // r11
  _DWORD *v11; // r9
  unsigned int v12; // r8d
  _DWORD *v13; // r9
  unsigned int i; // ecx

  v4 = a2;
  v6 = *(_DWORD *)a1;
  if ( *(_DWORD *)a1 <= (unsigned int)v4 )
  {
    *a4 = v4;
    return 0LL;
  }
  v9 = *(const signed __int64 **)(a1 + 8);
  v10 = (_DWORD *)v9 + ((unsigned __int64)(v6 - 1) >> 5);
  v11 = (_DWORD *)v9 + (v4 >> 5);
  if ( v11 != v10 && (*v11 | dword_180112890[v4 & 0x1F]) == -1 )
  {
    LODWORD(v4) = v4 - (v4 & 0x1F) + 32;
    for ( ++v11; v11 < v10 && *v11 == -1; ++v11 )
      LODWORD(v4) = v4 + 32;
  }
  while ( (unsigned int)v4 < v6 && _bittest64(v9, (unsigned int)v4) == 1 )
    LODWORD(v4) = v4 + 1;
  v12 = 0;
  if ( v11 == v10 || (~dword_180112890[v4 & 0x1F] & *v11) != 0 )
    goto LABEL_20;
  v12 = 32 - (v4 & 0x1F);
  if ( v12 != -1 )
  {
    v13 = v11 + 1;
    while ( v13 < v10 && !*v13 )
    {
      ++v13;
      v12 += 32;
      if ( v12 == -1 )
        goto LABEL_24;
    }
LABEL_20:
    for ( i = v12 + v4; i < *(_DWORD *)a1; ++v12 )
    {
      if ( _bittest64(*(const signed __int64 **)(a1 + 8), i) )
        break;
      if ( v12 == -1 )
        break;
      ++i;
    }
  }
LABEL_24:
  *a4 = v4;
  return v12;
}
