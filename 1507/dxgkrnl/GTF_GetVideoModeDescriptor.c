/*
 * XREFs of GTF_GetVideoModeDescriptor @ 0x1C000BDF4
 * Callers:
 *     ?EDID_V1_PopulateSupportedMonitorSourceModeFromStandardTimingBlock@@YAJPEBT_EDID_V1_STANDARD_TIMING@@EW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@EPEAU_VideoModeDescriptor@@@Z @ 0x1C000BCFC (-EDID_V1_PopulateSupportedMonitorSourceModeFromStandardTimingBlock@@YAJPEBT_EDID_V1_STANDARD_TIM.c)
 *     ?_CreateDefaultMonitorProfileForWDDMv1_0@DXGMONITOR@@AEAAJXZ @ 0x1C0185E2C (-_CreateDefaultMonitorProfileForWDDMv1_0@DXGMONITOR@@AEAAJXZ.c)
 * Callees:
 *     GTF_UsingVerticalRefreshFrequency_Stage1 @ 0x1C000BEFC (GTF_UsingVerticalRefreshFrequency_Stage1.c)
 */

__int64 __fastcall GTF_GetVideoModeDescriptor(
        unsigned __int16 a1,
        unsigned __int16 a2,
        int a3,
        __int64 a4,
        unsigned __int8 a5,
        __int64 a6)
{
  __int64 v6; // r11
  int v7; // r8d
  int v8; // r9d
  int v9; // ecx
  double v11; // [rsp+50h] [rbp-D8h]
  double v12; // [rsp+58h] [rbp-D0h]
  double v13; // [rsp+98h] [rbp-90h]
  double v14; // [rsp+C8h] [rbp-60h]

  if ( !a6 || !a1 || !a2 || !a3 )
    return 3221225485LL;
  *(_WORD *)(a6 + 22) = a2;
  *(_WORD *)(a6 + 20) = a1;
  *(_BYTE *)(a6 + 44) = a5;
  *(_DWORD *)(a6 + 4) = a3;
  *(_BYTE *)(a6 + 52) = 2;
  *(_DWORD *)(a6 + 8) = 1;
  GTF_UsingVerticalRefreshFrequency_Stage1(a5, a1, a2, a3);
  v7 = 10000;
  v8 = (int)(v12 * 10000.0);
  v9 = v8;
  if ( v8 < 0 )
    v9 = -v8;
  while ( 1 )
  {
    v9 %= v7;
    if ( !v9 )
      break;
    v7 %= v9;
    if ( !v7 )
      goto LABEL_11;
  }
  v9 = v7;
LABEL_11:
  *(_DWORD *)(v6 + 12) = v8 / v9;
  *(_DWORD *)(v6 + 16) = (unsigned __int16)(10000 / v9);
  *(_DWORD *)v6 = (int)v13;
  *(_WORD *)(v6 + 24) = (int)v11;
  *(_WORD *)(v6 + 26) = (int)v14;
  return 0LL;
}
