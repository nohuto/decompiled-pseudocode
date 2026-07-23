/*
 * XREFs of KeQueryKvaShadowInformation @ 0x140650010
 * Callers:
 *     ExpQuerySystemInformation @ 0x1404144E0 (ExpQuerySystemInformation.c)
 *     VslpIumPhase0Initialize @ 0x1407CE270 (VslpIumPhase0Initialize.c)
 * Callees:
 *     KeQueryImplementedPhysicalBits @ 0x140171D0C (KeQueryImplementedPhysicalBits.c)
 *     KeKvaShadowingActive @ 0x1401D8BE0 (KeKvaShadowingActive.c)
 */

__int64 __fastcall KeQueryKvaShadowInformation(int *a1, unsigned int a2, _DWORD *a3)
{
  int ImplementedPhysicalBits; // edi
  __int16 v6; // di
  int v7; // r8d
  bool v8; // al
  int v9; // edx
  int v10; // eax
  int v11; // esi
  int v12; // edi
  int v13; // eax

  *a3 = 4;
  if ( a2 < 4 )
    return 3221225476LL;
  ImplementedPhysicalBits = KeQueryImplementedPhysicalBits();
  if ( ImplementedPhysicalBits > 0 )
    v6 = ImplementedPhysicalBits - 1;
  else
    v6 = 0;
  *a1 ^= ((KiKvaShadow != 0) ^ (unsigned __int8)*a1) & 1;
  v7 = *a1 ^ (*a1 ^ (2 * ((unsigned int)KeKvaShadowingActive() == 2))) & 2;
  *a1 = v7;
  v8 = KiFlushPcid != 0;
  v9 = v7 ^ ((unsigned __int8)v7 ^ (unsigned __int8)(4 * (KiFlushPcid != 0))) & 4;
  *a1 = v9;
  v10 = v9 ^ ((unsigned __int8)v9 ^ (unsigned __int8)(8 * v8)) & 8;
  *a1 = v10;
  v11 = v10 ^ ((unsigned __int8)v10 ^ (unsigned __int8)(16 * (KiKvaLeakage != 0))) & 0x10;
  *a1 = v11;
  v11 |= 0x20u;
  *a1 = v11;
  v11 |= 0x2000u;
  *a1 = v11;
  v12 = v11 ^ ((unsigned __int16)v11 ^ (unsigned __int16)(v6 << 6)) & 0xFC0;
  *a1 = v12;
  v13 = v12 ^ ((unsigned __int16)v12 ^ ((KeFeatureBits2 & 1) << 12)) & 0x1000;
  *a1 = v13;
  *a1 = v13 & 0x3FFF;
  return 0LL;
}
