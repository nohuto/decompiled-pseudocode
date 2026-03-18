/*
 * XREFs of ?CalculatePreferredModeFromEdid2@@YAHPEAU_EDID2@@PEAU_DEVICE_OBJECT@@PEAUtagModeCap@@E@Z @ 0x1C00B7D7C
 * Callers:
 *     ?GetPreferredModeFromEdid@@YAHPEAU_DEVICE_OBJECT@@PEAUtagModeCap@@E@Z @ 0x1C0066B08 (-GetPreferredModeFromEdid@@YAHPEAU_DEVICE_OBJECT@@PEAUtagModeCap@@E@Z.c)
 * Callees:
 *     ?CalculateDefaultPreferredModeFromEdid@@YAHPEAU_DEVICE_OBJECT@@PEAUtagModeCap@@E@Z @ 0x1C00B7C44 (-CalculateDefaultPreferredModeFromEdid@@YAHPEAU_DEVICE_OBJECT@@PEAUtagModeCap@@E@Z.c)
 */

struct tagModeCap *__fastcall CalculatePreferredModeFromEdid2(
        struct _EDID2 *a1,
        struct _DEVICE_OBJECT *a2,
        struct tagModeCap *a3,
        unsigned __int8 a4)
{
  unsigned __int8 v4; // al
  __int64 v10; // rcx
  __int64 v11; // r9
  int v12; // r8d
  int v13; // edx
  int v14; // ebx
  int v15; // ecx
  int v16; // ebx
  unsigned int v17; // edx

  v4 = *((_BYTE *)a1 + 127);
  if ( (v4 & 7) == 0 )
    return 0LL;
  v10 = 27 * (*((_BYTE *)a1 + 126) & 3)
      + 129
      + ((*((unsigned __int8 *)a1 + 128) | 0x40u) >> 6) * (*((_BYTE *)a1 + 128) & 0x1F)
      + 4 * ((v4 >> 3) + 2 * ((*((unsigned __int8 *)a1 + 126) >> 2) & 7));
  v11 = (unsigned int)v10;
  if ( (unsigned __int64)(v10 + 18) >= 0x100 )
    return 0LL;
  v12 = *((unsigned __int8 *)a1 + v10 + 2) + 16 * (*((_BYTE *)a1 + v10 + 4) & 0xF0);
  *(_DWORD *)a3 = v12;
  v13 = *((unsigned __int8 *)a1 + (unsigned int)v10 + 5) + 16 * (*((_BYTE *)a1 + v10 + 7) & 0xF0);
  *((_DWORD *)a3 + 1) = v13;
  v14 = *((unsigned __int8 *)a1 + (unsigned int)v10 + 3) + ((*((_BYTE *)a1 + (unsigned int)v10 + 4) & 0xF) << 8);
  v15 = v13 + ((*((_BYTE *)a1 + (unsigned int)v10 + 7) & 0xF) << 8) + *((unsigned __int8 *)a1 + (unsigned int)v10 + 6);
  v16 = v12 + v14;
  if ( !v16 || !v15 )
    return 0LL;
  v17 = (100000 * (unsigned int)*(unsigned __int16 *)((char *)a1 + v11) / (v16 * v15) + 5) / 0xA;
  *((_DWORD *)a3 + 2) = v17;
  if ( *((char *)a1 + v11 + 17) < 0 )
    *((_DWORD *)a3 + 2) = v17 >> 1;
  if ( (*((_BYTE *)a1 + 126) & 0x40) != 0 )
    return (struct tagModeCap *)1;
  else
    return CalculateDefaultPreferredModeFromEdid(a2, a3, a4);
}
