/*
 * XREFs of ?BmlGetTargetModePreferenceOnMonitor@@YA?AW4BML_MONITOR_SOURCE_MODE_PREFERENCE@@PEBVDMMVIDPNTARGETMODE@@EPEAVDMMVIDEOPRESENTTARGET@@@Z @ 0x1C009CC74
 * Callers:
 *     sub_1C00A94AC @ 0x1C00A94AC (sub_1C00A94AC.c)
 * Callees:
 *     ?HaveEquivalentMonitorFrequencyRequirements@DMMVIDEOSIGNALMODE@@SAEAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@0E@Z @ 0x1C0007F5C (-HaveEquivalentMonitorFrequencyRequirements@DMMVIDEOSIGNALMODE@@SAEAEBU_D3DKMDT_VIDEO_SIGNAL_INF.c)
 *     MonitorGetNextMonitorSourceMode @ 0x1C009CDF0 (MonitorGetNextMonitorSourceMode.c)
 *     sub_1C009CF24 @ 0x1C009CF24 (sub_1C009CF24.c)
 *     sub_1C009D020 @ 0x1C009D020 (sub_1C009D020.c)
 *     ?BmlCompareModeExtents@@YA?AW4BML_COMPARISON_RESULT@@AEBU_D3DKMDT_2DREGION@@0@Z @ 0x1C00A0D14 (-BmlCompareModeExtents@@YA-AW4BML_COMPARISON_RESULT@@AEBU_D3DKMDT_2DREGION@@0@Z.c)
 */

__int64 __fastcall BmlGetTargetModePreferenceOnMonitor(__int64 a1, char a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v6; // rdi
  int v7; // ebp
  int v8; // r12d
  char v9; // r13
  __int64 v10; // rcx
  int NextMonitorSourceMode; // eax
  int v12; // edi
  int v13; // r10d
  int v14; // r14d
  _QWORD *v16; // rax
  __int64 v17; // [rsp+20h] [rbp-48h] BYREF
  _QWORD v18[8]; // [rsp+28h] [rbp-40h] BYREF
  char v20; // [rsp+80h] [rbp+18h]
  unsigned int v21; // [rsp+88h] [rbp+20h] BYREF

  v3 = 0LL;
  if ( !*(_QWORD *)(a3 + 96) )
    return 0xFFFFFFFFLL;
  v6 = 0LL;
  v17 = 0LL;
  v21 = 0;
  v7 = -1;
  v8 = 0;
  v18[0] = 0LL;
  v20 = 0;
  v9 = 0;
  while ( 1 )
  {
    v10 = *(_QWORD *)(a3 + 96);
    if ( !v10 )
    {
      v12 = -1071774920;
      goto LABEL_33;
    }
    NextMonitorSourceMode = MonitorGetNextMonitorSourceMode(v10, v6, &v17, &v21);
    v12 = NextMonitorSourceMode;
    if ( NextMonitorSourceMode == 1075708748 )
      break;
    if ( NextMonitorSourceMode < 0 )
    {
      v3 = v17;
LABEL_33:
      v16 = (_QWORD *)WdLogNewEntry5_WdError(v10);
      v16[3] = v3;
      v16[4] = *(_QWORD *)(a3 + 96);
      v16[5] = v12;
      WdLogEvent5_WdError(v16);
      return 0xFFFFFFFFLL;
    }
    v6 = v17;
    if ( *(_DWORD *)(v17 + 88) == 1 && *(_DWORD *)(v17 + 84) == 5 )
      ++v8;
    v14 = sub_1C009CF24(v17, v21, a3);
    if ( v14 == 8 )
      v9 = v13;
    if ( *(_DWORD *)(v6 + 20) == *(_DWORD *)(a1 + 84) && *(_DWORD *)(v6 + 24) == *(_DWORD *)(a1 + 88) )
    {
      if ( a2 )
      {
LABEL_14:
        if ( *(_DWORD *)(v6 + 88) == v13 && *(_DWORD *)(v6 + 84) == 5 )
          v18[0] = *(_QWORD *)(v6 + 20);
        if ( v14 == 11 )
        {
          v20 = v13;
          v14 = 0;
        }
        if ( v14 > v7 )
          v7 = v14;
      }
      else if ( DMMVIDEOSIGNALMODE::HaveEquivalentMonitorFrequencyRequirements(
                  (const struct _D3DKMDT_VIDEO_SIGNAL_INFO *)(a1 + 72),
                  (const struct _D3DKMDT_VIDEO_SIGNAL_INFO *)(v6 + 8),
                  0) )
      {
        v13 = 1;
        goto LABEL_14;
      }
    }
  }
  if ( v8 == 1
    && (v20 || (unsigned __int8)sub_1C009D020(a3) && v9 && !(unsigned int)BmlCompareModeExtents(a1 + 84, v18)) )
  {
    return 11;
  }
  return (unsigned int)v7;
}
