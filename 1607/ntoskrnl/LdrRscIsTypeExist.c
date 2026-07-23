/*
 * XREFs of LdrRscIsTypeExist @ 0x1400F8714
 * Callers:
 *     LdrIsResItemExist @ 0x1400F869C (LdrIsResItemExist.c)
 * Callees:
 *     _wcsicmp @ 0x14014DD0C (_wcsicmp.c)
 */

__int64 __fastcall LdrRscIsTypeExist(unsigned int *a1, const wchar_t *a2, __int64 a3, _DWORD *a4)
{
  char v7; // r12
  unsigned __int64 v8; // rcx
  _DWORD *v9; // rdx
  unsigned __int64 v11; // rcx
  _DWORD *v12; // rdx
  unsigned __int64 v14; // r15
  const wchar_t *v15; // rdi
  __int64 v16; // rcx
  int v17; // ecx
  char v18; // al
  unsigned __int64 v19; // r15
  const wchar_t *v20; // rdi
  __int64 v21; // rcx
  int v22; // ecx

  if ( !a1 || !a4 )
    return 3221225485LL;
  v7 = 1;
  if ( (unsigned __int64)a2 >= 0x10000 )
  {
    v14 = (unsigned __int64)a1[22] >> 1;
    v15 = (const wchar_t *)((char *)a1 + a1[21]);
    if ( (unsigned int)v15 > 0x10000 )
    {
      while ( (int)v14 > 0 )
      {
        if ( !*v15 )
          goto LABEL_25;
        if ( !wcsicmp(a2, v15) )
          break;
        v16 = -1LL;
        do
          ++v16;
        while ( v15[v16] );
        v17 = v16 + 1;
        v15 += v17;
        LODWORD(v14) = v14 - v17;
      }
    }
    if ( !*v15 || (v18 = 1, (int)v14 <= 0) )
LABEL_25:
      v18 = 0;
    if ( !v18 )
      *a4 |= 0x40000u;
    v19 = (unsigned __int64)a1[26] >> 1;
    v20 = (const wchar_t *)((char *)a1 + a1[25]);
    if ( (unsigned int)v20 > 0x10000 )
    {
      while ( (int)v19 > 0 )
      {
        if ( !*v20 )
          goto LABEL_37;
        if ( !wcsicmp(a2, v20) )
          break;
        v21 = -1LL;
        do
          ++v21;
        while ( v20[v21] );
        v22 = v21 + 1;
        v20 += v22;
        LODWORD(v19) = v19 - v22;
      }
    }
    if ( !*v20 || (int)v19 <= 0 )
LABEL_37:
      v7 = 0;
    if ( !v7 )
      *a4 |= 0x20000u;
  }
  else
  {
    v8 = (unsigned __int64)a1[24] >> 2;
    v9 = (unsigned int *)((char *)a1 + a1[23]);
    do
    {
      LODWORD(v8) = v8 - 1;
      if ( (v8 & 0x80000000) != 0LL )
        break;
    }
    while ( (_DWORD)a2 - *v9++ );
    if ( (v8 & 0x80000000) != 0LL )
      *a4 |= 0x40000u;
    v11 = (unsigned __int64)a1[28] >> 2;
    v12 = (unsigned int *)((char *)a1 + a1[27]);
    do
    {
      LODWORD(v11) = v11 - 1;
      if ( (v11 & 0x80000000) != 0LL )
        break;
    }
    while ( (_DWORD)a2 - *v12++ );
    if ( (v11 & 0x80000000) != 0LL )
      *a4 |= 0x20000u;
  }
  return 0LL;
}
