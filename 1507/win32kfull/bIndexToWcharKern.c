/*
 * XREFs of bIndexToWcharKern @ 0x1C0246C00
 * Callers:
 *     cQueryKerningPairs @ 0x1C0246C68 (cQueryKerningPairs.c)
 * Callees:
 *     bIndexToWchar @ 0x1C02469B8 (bIndexToWchar.c)
 */

__int64 __fastcall bIndexToWcharKern(__int64 a1, unsigned __int16 *a2, unsigned __int16 a3, int a4)
{
  unsigned int v6; // ecx
  int v7; // edx

  v6 = bIndexToWchar(a1, a2, a3, a4);
  if ( v6 )
  {
    v7 = *(_DWORD *)(a1 + 300);
    if ( (v7 & 0x30) != 0 )
    {
      if ( *a2 == 160 && (v7 & 0x10) != 0 )
        *a2 = 32;
      if ( *a2 == 173 && (*(_DWORD *)(a1 + 300) & 0x20) != 0 )
        *a2 = 45;
    }
  }
  return v6;
}
