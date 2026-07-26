/*
 * XREFs of ndisCompareWoLPatterns @ 0x1C00B1320
 * Callers:
 *     ndisSourcePreAddWoLPattern @ 0x1C00B0B60 (ndisSourcePreAddWoLPattern.c)
 *     ndisMiniportPreAddWoLPattern @ 0x1C00B0E54 (ndisMiniportPreAddWoLPattern.c)
 * Callees:
 *     memcmp @ 0x1C00270A0 (memcmp.c)
 */

bool __fastcall ndisCompareWoLPatterns(_DWORD *a1, _DWORD *a2)
{
  int v2; // r8d
  char v3; // bl
  int v7; // r8d
  int v8; // r8d
  int v9; // r8d
  int v10; // r8d
  bool v11; // zf
  __int64 v12; // rcx
  unsigned int v13; // eax
  unsigned int v14; // ebp

  v2 = a1[3];
  v3 = 0;
  if ( v2 != a2[3] )
    return 0;
  v7 = v2 - 1;
  if ( !v7 )
  {
    v13 = a1[41];
    if ( v13 == a2[41] )
    {
      v14 = a1[43];
      if ( v14 == a2[43] && !memcmp((char *)a1 + (unsigned int)a1[40], (char *)a2 + (unsigned int)a2[40], v13) )
        return memcmp((char *)a1 + (unsigned int)a1[42], (char *)a2 + (unsigned int)a2[42], v14) == 0;
    }
    return v3;
  }
  v8 = v7 - 1;
  if ( !v8 )
    return 1;
  v9 = v8 - 1;
  if ( v9 )
  {
    v10 = v9 - 1;
    if ( v10 )
    {
      if ( v10 != 1 )
        return v3;
      v11 = a1[39] == a2[39];
    }
    else
    {
      v11 = memcmp(a1 + 39, a2 + 39, 0x28uLL) == 0;
    }
  }
  else
  {
    v12 = *(_QWORD *)(a1 + 39) - *(_QWORD *)(a2 + 39);
    if ( !v12 )
      v12 = *(_QWORD *)(a1 + 41) - *(_QWORD *)(a2 + 41);
    v11 = v12 == 0;
  }
  if ( v11 )
    return 1;
  return v3;
}
