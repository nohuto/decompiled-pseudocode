/*
 * XREFs of ?EDID_V1_PopulateSupportedMonitorSourceModeFromStandardTimingBlock@@YAJPEBT_EDID_V1_STANDARD_TIMING@@EW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@EPEAU_VideoModeDescriptor@@@Z @ 0x1C000BCFC
 * Callers:
 *     EDIDV1_ObtainSupportedMonitorSourceModes @ 0x1C000B958 (EDIDV1_ObtainSupportedMonitorSourceModes.c)
 * Callees:
 *     GTF_GetVideoModeDescriptor @ 0x1C000BDF4 (GTF_GetVideoModeDescriptor.c)
 *     ?CalculateVerticalActivePixelsFrom@@YAJGGGPEAG@Z @ 0x1C000C228 (-CalculateVerticalActivePixelsFrom@@YAJGGGPEAG@Z.c)
 */

__int64 __fastcall EDID_V1_PopulateSupportedMonitorSourceModeFromStandardTimingBlock(
        __int16 *a1,
        char a2,
        char a3,
        char a4,
        _BYTE *a5)
{
  __int16 v5; // ax
  char v8; // r11
  int v9; // esi
  int v10; // r10d
  int v11; // esi
  unsigned __int16 v12; // di
  int v13; // r10d
  unsigned __int16 v14; // dx
  unsigned __int16 v15; // r8
  __int64 result; // rax
  int v17; // edx
  _BYTE *v18; // rbx
  int v19; // r10d
  unsigned __int16 v20; // [rsp+50h] [rbp+8h] BYREF

  v5 = *a1;
  if ( *a1 == 257 )
    return 3223126020LL;
  v8 = 0;
  if ( !v5 )
    return 3223126020LL;
  v9 = *((_BYTE *)a1 + 1) & 0x3F;
  v10 = *((unsigned __int8 *)a1 + 1) >> 6;
  v20 = 0;
  v11 = v9 + 60;
  v12 = 8 * ((unsigned __int8)v5 + 31);
  if ( v10 )
  {
    v13 = v10 - 1;
    if ( !v13 )
    {
      v14 = 4;
      v15 = 3;
LABEL_6:
      result = CalculateVerticalActivePixelsFrom(v12, v14, v15, &v20);
      v17 = v20;
      goto LABEL_7;
    }
    v19 = v13 - 1;
    if ( !v19 )
    {
      v14 = 5;
      v15 = 4;
      goto LABEL_6;
    }
    if ( v19 != 1 )
      return 3223126020LL;
    v15 = 9;
LABEL_19:
    v14 = 16;
    goto LABEL_6;
  }
  if ( a2 )
  {
    v15 = 10;
    goto LABEL_19;
  }
  v17 = v12;
  result = 0LL;
LABEL_7:
  if ( (int)result < 0 )
    return result;
  if ( (unsigned __int16)v17 < 0x64u )
    return 3223126020LL;
  if ( v12 == 1024 && (_WORD)v17 == 768 && v11 == 43 )
    v8 = 1;
  v18 = a5;
  result = GTF_GetVideoModeDescriptor(v12, v17, v11, a4, v8, (__int64)a5);
  v18[52] = 2;
  v18[53] = a3;
  v18[54] = (a4 != 0) + 2;
  return result;
}
