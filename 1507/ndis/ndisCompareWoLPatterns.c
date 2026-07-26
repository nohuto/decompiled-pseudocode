/*
 * XREFs of ndisCompareWoLPatterns @ 0x1C009A334
 * Callers:
 *     ndisSourcePreAddWoLPattern @ 0x1C0099C14 (ndisSourcePreAddWoLPattern.c)
 *     ndisMiniportPreAddWoLPattern @ 0x1C0099CFC (ndisMiniportPreAddWoLPattern.c)
 * Callees:
 *     memcmp @ 0x1C00235F0 (memcmp.c)
 */

bool __fastcall ndisCompareWoLPatterns(_DWORD *a1, _DWORD *a2)
{
  int v2; // r8d
  char v3; // bl
  int v7; // r8d
  unsigned int v8; // ebp
  int v9; // r8d
  int v10; // r8d
  int v11; // r8d
  bool v12; // zf
  __int64 v13; // rcx

  v2 = a1[3];
  v3 = 0;
  if ( v2 != a2[3] )
    return 0;
  v7 = v2 - 1;
  if ( !v7 )
  {
    if ( a1[41] == a2[41] )
    {
      v8 = a1[43];
      if ( v8 == a2[43]
        && !memcmp((char *)a1 + (unsigned int)a1[40], (char *)a2 + (unsigned int)a2[40], (unsigned int)a1[41]) )
      {
        return memcmp((char *)a1 + (unsigned int)a1[42], (char *)a2 + (unsigned int)a2[42], v8) == 0;
      }
    }
    return v3;
  }
  v9 = v7 - 1;
  if ( !v9 )
    return 1;
  v10 = v9 - 1;
  if ( v10 )
  {
    v11 = v10 - 1;
    if ( v11 )
    {
      if ( v11 != 1 )
        return v3;
      v12 = a1[39] == a2[39];
    }
    else
    {
      v12 = memcmp(a1 + 39, a2 + 39, 0x28uLL) == 0;
    }
  }
  else
  {
    v13 = *(_QWORD *)(a1 + 39) - *(_QWORD *)(a2 + 39);
    if ( !v13 )
      v13 = *(_QWORD *)(a1 + 41) - *(_QWORD *)(a2 + 41);
    v12 = v13 == 0;
  }
  if ( v12 )
    return 1;
  return v3;
}
