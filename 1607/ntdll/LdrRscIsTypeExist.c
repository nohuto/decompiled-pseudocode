/*
 * XREFs of LdrRscIsTypeExist @ 0x18003E3E0
 * Callers:
 *     LdrIsResItemExist @ 0x18003F138 (LdrIsResItemExist.c)
 * Callees:
 *     _wcsicmp @ 0x180098350 (_wcsicmp.c)
 */

__int64 __fastcall LdrRscIsTypeExist(unsigned int *a1, const wchar_t *a2, __int64 a3, _DWORD *a4)
{
  char v7; // r12
  unsigned __int64 v8; // rcx
  _DWORD *v9; // rdx
  unsigned __int64 v11; // rcx
  _DWORD *v12; // rdx
  __int64 v14; // rcx
  int v15; // ecx
  const wchar_t *v16; // rdi
  unsigned __int64 v17; // r15
  unsigned __int64 v18; // r15
  const wchar_t *v19; // rdi
  char v20; // al
  __int64 v21; // rcx
  int v22; // ecx

  if ( !a1 || !a4 )
    return 3221225485LL;
  v7 = 1;
  if ( (unsigned __int64)a2 >= 0x10000 )
  {
    v18 = (unsigned __int64)a1[22] >> 1;
    v19 = (const wchar_t *)((char *)a1 + a1[21]);
    if ( (unsigned int)v19 > 0x10000 )
    {
      while ( (int)v18 > 0 )
      {
        if ( !*v19 )
          goto LABEL_37;
        if ( !wcsicmp(a2, v19) )
          break;
        v21 = -1LL;
        do
          ++v21;
        while ( v19[v21] );
        v22 = v21 + 1;
        v19 += v22;
        LODWORD(v18) = v18 - v22;
      }
    }
    if ( !*v19 || (v20 = 1, (int)v18 <= 0) )
LABEL_37:
      v20 = 0;
    if ( !v20 )
      *a4 |= 0x40000u;
    v17 = (unsigned __int64)a1[26] >> 1;
    v16 = (const wchar_t *)((char *)a1 + a1[25]);
    if ( (unsigned int)v16 > 0x10000 )
    {
      while ( (int)v17 > 0 )
      {
        if ( !*v16 )
          goto LABEL_31;
        if ( !wcsicmp(a2, v16) )
          break;
        v14 = -1LL;
        do
          ++v14;
        while ( v16[v14] );
        v15 = v14 + 1;
        v16 += v15;
        LODWORD(v17) = v17 - v15;
      }
    }
    if ( !*v16 || (int)v17 <= 0 )
LABEL_31:
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
