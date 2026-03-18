/*
 * XREFs of ?CalculatePreferredModeFromEdid1@@YAHPEAEPEAU_DEVICE_OBJECT@@PEAUtagModeCap@@E@Z @ 0x1C005E188
 * Callers:
 *     ?GetPreferredModeFromEdid@@YAHPEAU_DEVICE_OBJECT@@PEAUtagModeCap@@E@Z @ 0x1C005E0F0 (-GetPreferredModeFromEdid@@YAHPEAU_DEVICE_OBJECT@@PEAUtagModeCap@@E@Z.c)
 * Callees:
 *     ?CalculateDefaultPreferredModeFromEdid@@YAHPEAU_DEVICE_OBJECT@@PEAUtagModeCap@@E@Z @ 0x1C00C57E4 (-CalculateDefaultPreferredModeFromEdid@@YAHPEAU_DEVICE_OBJECT@@PEAUtagModeCap@@E@Z.c)
 */

__int64 __fastcall CalculatePreferredModeFromEdid1(
        unsigned __int8 *a1,
        struct _DEVICE_OBJECT *a2,
        struct tagModeCap *a3,
        unsigned __int8 a4)
{
  unsigned __int8 *v5; // r10
  unsigned int v8; // r11d
  int v9; // r8d
  int v10; // edx
  unsigned int v11; // r11d
  unsigned int v12; // r9d

  v5 = a1 + 54;
  v8 = 0;
  while ( 1 )
  {
    v5 += v8;
    if ( *v5 || v5[1] )
    {
      if ( v5[4] )
        break;
    }
    v8 += 18;
    if ( v8 >= 0x48 )
      return CalculateDefaultPreferredModeFromEdid(a2, a3, a4);
  }
  v9 = v5[2] + 16 * (v5[4] & 0xF0);
  *(_DWORD *)a3 = v9;
  v10 = v5[5] + 16 * (v5[7] & 0xF0);
  *((_DWORD *)a3 + 1) = v10;
  v11 = 10000 * (*v5 + (v5[1] << 8));
  *((_DWORD *)a3 + 2) = v11;
  v12 = (v9 + v5[3] + ((v5[4] & 0xF) << 8)) * (v10 + v5[6] + ((v5[7] & 0xF) << 8));
  if ( !v12 )
    return 0LL;
  *((_DWORD *)a3 + 2) = v11 / v12;
  if ( (a1[24] & 2) != 0 )
    return 1LL;
  return CalculateDefaultPreferredModeFromEdid(a2, a3, a4);
}
