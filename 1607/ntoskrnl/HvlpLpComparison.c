/*
 * XREFs of HvlpLpComparison @ 0x1401BBA20
 * Callers:
 *     HvlpSelectLpSet @ 0x1401BBCAC (HvlpSelectLpSet.c)
 *     HvlpSelectVpSet @ 0x1401BC100 (HvlpSelectVpSet.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HvlpLpComparison(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  __int64 v5; // rcx
  unsigned int v6; // eax
  unsigned int v7; // r8d
  unsigned int v9; // eax
  unsigned int v10; // r8d
  unsigned int v11; // eax
  unsigned int v12; // r8d
  unsigned int v13; // eax
  unsigned int v14; // r8d
  unsigned int v15; // eax
  unsigned int v16; // ecx

  v5 = 9LL * a3;
  v6 = *(_DWORD *)(a2 + 36LL * a3 + 16);
  v7 = *(_DWORD *)(a2 + 36LL * a4 + 16);
  if ( v6 < v7 )
    return 0xFFFFFFFFLL;
  if ( v6 > v7 )
    return 1LL;
  v9 = *(_DWORD *)(a2 + 4 * v5 + 20);
  v10 = *(_DWORD *)(a2 + 36LL * a4 + 20);
  if ( v9 < v10 )
    return 0xFFFFFFFFLL;
  if ( v9 > v10 )
    return 1LL;
  v11 = *(_DWORD *)(a2 + 4 * v5 + 24);
  v12 = *(_DWORD *)(a2 + 36LL * a4 + 24);
  if ( v11 > v12 )
    return 0xFFFFFFFFLL;
  if ( v11 < v12 )
    return 1LL;
  v13 = *(_DWORD *)(a2 + 4 * v5 + 28);
  v14 = *(_DWORD *)(a2 + 36LL * a4 + 28);
  if ( v13 > v14 )
    return 0xFFFFFFFFLL;
  if ( v13 < v14 )
    return 1LL;
  v15 = *(_DWORD *)(a2 + 4 * v5 + 32);
  v16 = *(_DWORD *)(a2 + 36LL * a4 + 32);
  if ( v15 > v16 )
    return 0xFFFFFFFFLL;
  if ( v15 < v16 )
    return 1LL;
  if ( a3 < a4 )
    return 0xFFFFFFFFLL;
  return a3 > a4;
}
