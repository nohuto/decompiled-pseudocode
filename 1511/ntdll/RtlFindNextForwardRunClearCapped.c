/*
 * XREFs of RtlFindNextForwardRunClearCapped @ 0x18004E760
 * Callers:
 *     RtlFindNextForwardRunClear @ 0x18004E750 (RtlFindNextForwardRunClear.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlFindNextForwardRunClearCapped(__int64 a1, unsigned int a2, __int64 a3, unsigned int *a4)
{
  unsigned int v4; // r8d
  unsigned int i; // r11d
  const signed __int64 *v8; // rdx
  _DWORD *v9; // rax
  _DWORD *v10; // r10
  unsigned int v11; // r9d
  unsigned int j; // ecx
  _DWORD *v14; // rax

  v4 = *(_DWORD *)a1;
  i = a2;
  if ( *(_DWORD *)a1 > a2 )
  {
    v8 = *(const signed __int64 **)(a1 + 8);
    v9 = (_DWORD *)v8 + ((unsigned __int64)i >> 5);
    v10 = (_DWORD *)v8 + ((unsigned __int64)(v4 - 1) >> 5);
    if ( v9 != v10 && (*v9 | dword_180106F00[i & 0x1F]) == -1 )
    {
      ++v9;
      for ( i = i - (i & 0x1F) + 32; v9 < v10; i += 32 )
      {
        if ( *v9 != -1 )
          break;
        ++v9;
      }
    }
    for ( ; i < v4; ++i )
    {
      if ( _bittest64(v8, i) != 1 )
        break;
    }
    v11 = 0;
    if ( v9 != v10 && (~dword_180106F00[i & 0x1F] & *v9) == 0 )
    {
      v11 = 32 - (i & 0x1F);
      if ( v11 == -1 )
      {
LABEL_16:
        *a4 = i;
        return v11;
      }
      v14 = v9 + 1;
      while ( v14 < v10 )
      {
        if ( *v14 )
          break;
        ++v14;
        v11 += 32;
        if ( v11 == -1 )
          goto LABEL_16;
      }
    }
    for ( j = v11 + i; j < *(_DWORD *)a1; ++v11 )
    {
      if ( _bittest64(*(const signed __int64 **)(a1 + 8), j) )
        break;
      if ( v11 == -1 )
        break;
      ++j;
    }
    goto LABEL_16;
  }
  *a4 = a2;
  return 0LL;
}
