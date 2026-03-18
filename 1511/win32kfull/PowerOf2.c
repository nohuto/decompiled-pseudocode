/*
 * XREFs of PowerOf2 @ 0x1C00A91A0
 * Callers:
 *     fsc_CalcSpline @ 0x1C00A8948 (fsc_CalcSpline.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PowerOf2(int a1)
{
  if ( a1 < 0 )
    a1 = -a1;
  if ( a1 >= 0x10000 )
  {
    if ( a1 >= 0x1000000 )
    {
      if ( a1 >= 0x10000000 )
        return dword_1C02E1C60[(__int64)a1 >> 28] + 28;
      else
        return dword_1C02E1C60[(__int64)a1 >> 24] + 24;
    }
    else if ( a1 >= 0x100000 )
    {
      return dword_1C02E1C60[(__int64)a1 >> 20] + 20;
    }
    else
    {
      return dword_1C02E1C60[(__int64)a1 >> 16] + 16;
    }
  }
  else if ( a1 < 256 )
  {
    if ( a1 < 16 )
      return dword_1C02E1C60[a1];
    else
      return dword_1C02E1C60[(__int64)a1 >> 4] + 4;
  }
  else if ( a1 >= 4096 )
  {
    return dword_1C02E1C60[(__int64)a1 >> 12] + 12;
  }
  else
  {
    return dword_1C02E1C60[(__int64)a1 >> 8] + 8;
  }
}
