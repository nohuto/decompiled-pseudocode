/*
 * XREFs of LdrpArmProcessRelocation @ 0x140215604
 * Callers:
 *     LdrpThumbProcessRelocation @ 0x1402156D4 (LdrpThumbProcessRelocation.c)
 *     LdrProcessRelocationBlockLongLong @ 0x1405546A8 (LdrProcessRelocationBlockLongLong.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall LdrpArmProcessRelocation(_WORD *a1, __int64 a2, int a3)
{
  __int64 v3; // r9
  unsigned int v4; // r10d
  unsigned int v5; // edx

  v3 = a2 + (*a1 & 0xFFC);
  v4 = 1;
  if ( (*a1 & 0xF000) == 0x5000 )
  {
    v5 = (a3
        + (((*(_WORD *)(v3 + 4) & 0xFFF) << 16) | ((unsigned __int16)(*(_DWORD *)(v3 + 4) >> 4) << 16) & 0xF0000000 | (unsigned __int16)(*(_DWORD *)v3 >> 4) ^ ((unsigned __int16)*(_DWORD *)v3 ^ (*(_DWORD *)v3 >> 4)) & 0xFFF)) >> 16;
    *(_DWORD *)v3 = *(_DWORD *)v3 & 0xFFF0F000 | ((_WORD)a3
                                                + ((unsigned __int16)(*(_DWORD *)v3 >> 4) ^ ((unsigned __int16)*(_DWORD *)v3 ^ (unsigned __int16)(*(_DWORD *)v3 >> 4)) & 0xFFF)) & 0xFFF | (16 * (((_WORD)a3 + ((unsigned __int16)(*(_DWORD *)v3 >> 4) ^ ((unsigned __int16)*(_DWORD *)v3 ^ (unsigned __int16)(*(_DWORD *)v3 >> 4)) & 0xFFF)) & 0xF000));
    *(_DWORD *)(v3 + 4) = v5 & 0xFFF | *(_DWORD *)(v3 + 4) & 0xFFF0F000 | (16 * (v5 & 0xF000));
  }
  else
  {
    return 0;
  }
  return v4;
}
