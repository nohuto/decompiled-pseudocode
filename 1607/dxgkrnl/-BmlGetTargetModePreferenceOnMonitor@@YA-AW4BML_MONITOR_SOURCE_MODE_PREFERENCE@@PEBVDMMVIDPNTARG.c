/*
 * XREFs of ?BmlGetTargetModePreferenceOnMonitor@@YA?AW4BML_MONITOR_SOURCE_MODE_PREFERENCE@@PEBVDMMVIDPNTARGETMODE@@EPEAVDMMVIDEOPRESENTTARGET@@@Z @ 0x1C00BEDE4
 * Callers:
 *     BmlCompareTargetModesWithMonitor @ 0x1C00BEBA4 (BmlCompareTargetModesWithMonitor.c)
 * Callees:
 *     ?HaveEquivalentMonitorFrequencyRequirements@DMMVIDEOSIGNALMODE@@SAEAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@0E@Z @ 0x1C000AE08 (-HaveEquivalentMonitorFrequencyRequirements@DMMVIDEOSIGNALMODE@@SAEAEBU_D3DKMDT_VIDEO_SIGNAL_INF.c)
 *     MonitorGetNextMonitorSourceMode @ 0x1C00BEF80 (MonitorGetNextMonitorSourceMode.c)
 *     BmlGetMonitorModePreference @ 0x1C00BF098 (BmlGetMonitorModePreference.c)
 *     BmlIsEDIDCapableOutputTechonology @ 0x1C00BF184 (BmlIsEDIDCapableOutputTechonology.c)
 *     ?BmlCompareModeExtents@@YA?AW4BML_COMPARISON_RESULT@@AEBU_D3DKMDT_2DREGION@@0@Z @ 0x1C00C01A8 (-BmlCompareModeExtents@@YA-AW4BML_COMPARISON_RESULT@@AEBU_D3DKMDT_2DREGION@@0@Z.c)
 */

__int64 __fastcall BmlGetTargetModePreferenceOnMonitor(__int64 a1, char a2, __int64 a3)
{
  __int64 v3; // rbx
  int v7; // ebp
  __int64 v8; // rdi
  int v9; // r12d
  char v10; // r13
  __int64 v11; // rcx
  int NextMonitorSourceMode; // eax
  int v13; // edi
  int v14; // r10d
  int MonitorModePreference; // r14d
  _QWORD *v16; // rax
  __int64 v17; // [rsp+20h] [rbp-48h] BYREF
  _QWORD v18[8]; // [rsp+28h] [rbp-40h] BYREF
  char v20; // [rsp+80h] [rbp+18h]
  unsigned int v21; // [rsp+88h] [rbp+20h] BYREF

  v3 = 0LL;
  if ( !*(_QWORD *)(a3 + 96) )
    return 0xFFFFFFFFLL;
  v8 = 0LL;
  v17 = 0LL;
  v21 = 0;
  v7 = -1;
  v9 = 0;
  v18[0] = 0LL;
  v20 = 0;
  v10 = 0;
  while ( 1 )
  {
    v11 = *(_QWORD *)(a3 + 96);
    if ( !v11 )
    {
      v13 = -1071774920;
      goto LABEL_34;
    }
    NextMonitorSourceMode = MonitorGetNextMonitorSourceMode(v11, v8, &v17, &v21);
    v13 = NextMonitorSourceMode;
    if ( NextMonitorSourceMode == 1075708748 )
      break;
    if ( NextMonitorSourceMode < 0 )
    {
      v3 = v17;
LABEL_34:
      v16 = (_QWORD *)WdLogNewEntry5_WdError(v11);
      v16[3] = v3;
      v16[4] = *(_QWORD *)(a3 + 96);
      v16[5] = v13;
      WdLogEvent5_WdError(v16);
      return 0xFFFFFFFFLL;
    }
    v8 = v17;
    if ( *(_DWORD *)(v17 + 88) == 1 && *(_DWORD *)(v17 + 84) == 5 )
      ++v9;
    MonitorModePreference = BmlGetMonitorModePreference(v17, v21, a3);
    if ( MonitorModePreference == 8 )
      v10 = v14;
    if ( *(_DWORD *)(v8 + 20) == *(_DWORD *)(a1 + 84) && *(_DWORD *)(v8 + 24) == *(_DWORD *)(a1 + 88) )
    {
      if ( a2 )
      {
LABEL_17:
        if ( *(_DWORD *)(v8 + 88) == v14 && *(_DWORD *)(v8 + 84) == 5 )
          v18[0] = *(_QWORD *)(v8 + 20);
        if ( MonitorModePreference == 11 )
        {
          v20 = v14;
          MonitorModePreference = 0;
        }
        if ( MonitorModePreference > v7 )
          v7 = MonitorModePreference;
      }
      else if ( DMMVIDEOSIGNALMODE::HaveEquivalentMonitorFrequencyRequirements(
                  (const struct _D3DKMDT_VIDEO_SIGNAL_INFO *)(a1 + 72),
                  (const struct _D3DKMDT_VIDEO_SIGNAL_INFO *)(v8 + 8),
                  0) )
      {
        v14 = 1;
        goto LABEL_17;
      }
    }
  }
  if ( v9 == 1
    && (v20
     || (unsigned __int8)BmlIsEDIDCapableOutputTechonology(a3)
     && v10
     && !(unsigned int)BmlCompareModeExtents(a1 + 84, v18)) )
  {
    return 11;
  }
  return (unsigned int)v7;
}
