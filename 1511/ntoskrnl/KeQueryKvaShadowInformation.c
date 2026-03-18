/*
 * XREFs of KeQueryKvaShadowInformation @ 0x14061AF44
 * Callers:
 *     ExpQuerySystemInformation @ 0x140472CC0 (ExpQuerySystemInformation.c)
 * Callees:
 *     KeKvaShadowingActive @ 0x1401CA5E0 (KeKvaShadowingActive.c)
 */

__int64 __fastcall KeQueryKvaShadowInformation(int *a1, unsigned int a2, _DWORD *a3)
{
  int v5; // r8d
  bool v6; // al
  int v7; // edx
  int v8; // eax
  int v9; // edi

  *a3 = 4;
  if ( a2 < 4 )
    return 3221225476LL;
  *a1 ^= ((KiKvaShadow != 0) ^ (unsigned __int8)*a1) & 1;
  v5 = *a1 ^ (*a1 ^ (2 * ((unsigned int)KeKvaShadowingActive() == 2))) & 2;
  *a1 = v5;
  v6 = KiFlushPcid != 0;
  v7 = v5 ^ ((unsigned __int8)v5 ^ (unsigned __int8)(4 * (KiFlushPcid != 0))) & 4;
  *a1 = v7;
  v8 = v7 ^ ((unsigned __int8)v7 ^ (unsigned __int8)(8 * v6)) & 8;
  *a1 = v8;
  v9 = v8 ^ ((unsigned __int8)v8 ^ (unsigned __int8)(16 * (KiKvaLeakage != 0))) & 0x10;
  *a1 = v9;
  v9 |= 0x20u;
  *a1 = v9;
  *a1 = v9 & 0x3F;
  return 0LL;
}
