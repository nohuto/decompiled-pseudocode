/*
 * XREFs of ?EDID_V1_PopulateSupportedMonitorSourceModeFromDetailedTimingBlock@@YAJPEBU_EDID_V1_DETAILED_TIMING@@W4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@PEAU_VideoModeDescriptor@@@Z @ 0x1C000C388
 * Callers:
 *     EDIDV1_ObtainSupportedMonitorSourceModes @ 0x1C000B958 (EDIDV1_ObtainSupportedMonitorSourceModes.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EDID_V1_PopulateSupportedMonitorSourceModeFromDetailedTimingBlock(
        unsigned __int8 *a1,
        char a2,
        __int64 a3)
{
  int v4; // eax
  unsigned __int16 v5; // cx
  unsigned __int16 v6; // cx
  int v7; // ebp
  unsigned int v8; // ecx
  char v9; // al
  unsigned __int16 v10; // dx
  unsigned __int16 v11; // cx
  int v12; // r10d
  int v13; // r11d
  int v14; // ecx
  int v15; // esi
  int v16; // r10d
  unsigned int v17; // edi
  int v18; // eax
  int v19; // ecx
  unsigned int v20; // r11d
  unsigned __int8 v21; // al

  *(_BYTE *)(a3 + 53) = a2;
  *(_BYTE *)(a3 + 52) = 0;
  *(_BYTE *)(a3 + 54) = 4;
  v4 = 10000 * *(unsigned __int16 *)a1;
  *(_DWORD *)a3 = v4;
  if ( v4 )
  {
    v5 = a1[2] | (a1[4] >> 4 << 8);
    *(_WORD *)(a3 + 20) = v5;
    if ( v5 >= 0x64u )
    {
      v6 = a1[5] | (a1[7] >> 4 << 8);
      *(_WORD *)(a3 + 22) = v6;
      if ( v6 >= 0x64u )
      {
        *(_WORD *)(a3 + 24) = a1[3] | ((a1[4] & 0xF) << 8);
        *(_WORD *)(a3 + 26) = a1[6] | ((a1[7] & 0xF) << 8);
        *(_WORD *)(a3 + 28) = a1[8] | (a1[11] >> 6 << 8);
        *(_WORD *)(a3 + 30) = (a1[10] >> 4) | (32 * ((a1[11] >> 2) & 3));
        *(_WORD *)(a3 + 32) = a1[9] | (((a1[11] >> 4) & 3) << 8);
        *(_WORD *)(a3 + 34) = a1[10] & 0xF | (32 * (a1[11] & 3));
        *(_WORD *)(a3 + 36) = a1[12] | (a1[14] >> 4 << 8);
        *(_WORD *)(a3 + 38) = a1[13] | ((a1[14] & 0xF) << 8);
        *(_WORD *)(a3 + 40) = a1[15];
        *(_WORD *)(a3 + 42) = a1[16];
        v7 = a1[17] >> 7;
        *(_BYTE *)(a3 + 44) = a1[17] >> 7;
        v8 = a1[17] & 1 | (4 * ((a1[17] >> 5) & 3));
        v9 = v8 > 1 ? v8 - 1 : 0;
        v10 = *(_WORD *)(a3 + 24) + *(_WORD *)(a3 + 20);
        v11 = *(_WORD *)(a3 + 22) + *(_WORD *)(a3 + 26);
        *(_BYTE *)(a3 + 45) = v9;
        *(_BYTE *)(a3 + 46) = (a1[17] >> 3) & 3;
        if ( v10 )
        {
          if ( v11 )
          {
            v12 = *(_DWORD *)a3;
            v13 = v10 * v11;
            v14 = v13;
            if ( *(int *)a3 < 0 )
              v12 = -v12;
            if ( v13 < 0 )
              v14 = -v13;
            if ( v14 )
            {
              while ( 1 )
              {
                v12 %= v14;
                if ( !v12 )
                  break;
                v14 %= v12;
                if ( !v14 )
                  goto LABEL_15;
              }
            }
            else
            {
LABEL_15:
              v14 = v12;
            }
            v15 = *(_DWORD *)a3;
            v16 = v15;
            v17 = *(_DWORD *)a3 / v14;
            *(_DWORD *)(a3 + 4) = v17;
            v18 = v13 / v14;
            v19 = v10;
            *(_DWORD *)(a3 + 8) = v18;
            v20 = v18;
            if ( v15 < 0 )
              v16 = -v15;
            while ( 1 )
            {
              v16 %= v19;
              if ( !v16 )
                break;
              v19 %= v16;
              if ( !v19 )
              {
                v19 = v16;
                break;
              }
            }
            *(_DWORD *)(a3 + 47) = 33686018;
            *(_BYTE *)(a3 + 51) = 2;
            *(_DWORD *)(a3 + 12) = v15 / v19;
            *(_DWORD *)(a3 + 16) = v10 / v19;
            v21 = *(_BYTE *)(a3 + 46);
            if ( v21 <= 1u )
            {
              *(_BYTE *)(a3 + 48) = (~a1[17] & 2) != 0;
              *(_BYTE *)(a3 + 47) = (~a1[17] & 4) != 0;
            }
            else if ( v21 == 2 )
            {
              *(_BYTE *)(a3 + 48) = (~a1[17] & 2) != 0;
              *(_BYTE *)(a3 + 49) = (~a1[17] & 4) != 0;
            }
            else if ( v21 == 3 )
            {
              *(_BYTE *)(a3 + 51) = (~a1[17] & 2) != 0;
              *(_BYTE *)(a3 + 50) = (~a1[17] & 4) != 0;
            }
            if ( *(_WORD *)(a3 + 20) != 1920 )
              return 0LL;
            if ( *(_WORD *)(a3 + 22) != 540 )
              return 0LL;
            if ( !(_BYTE)v7 )
              return 0LL;
            *(_WORD *)(a3 + 22) = 1080;
            if ( v17 / v20 != 30 )
              return 0LL;
            if ( v17 <= 0x7FFFFFFF )
            {
              *(_DWORD *)(a3 + 4) = 2 * v17;
              return 0LL;
            }
            if ( v20 >= 2 )
            {
              *(_DWORD *)(a3 + 8) = v20 >> 1;
              return 0LL;
            }
          }
        }
      }
    }
  }
  return 3223126025LL;
}
