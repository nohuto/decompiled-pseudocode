/*
 * XREFs of BmlFillPreferredMonitorMode @ 0x1C00BEC0C
 * Callers:
 *     ?BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBU_D3DKMT_GETPATHSMODALITY@@GGI@Z @ 0x1C00BF450 (-BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBU_D3DKMT_GETPATHS.c)
 * Callees:
 *     MonitorGetNextMonitorSourceMode @ 0x1C00BEF80 (MonitorGetNextMonitorSourceMode.c)
 *     BmlGetMonitorModePreference @ 0x1C00BF098 (BmlGetMonitorModePreference.c)
 *     BmlIsEDIDCapableOutputTechonology @ 0x1C00BF184 (BmlIsEDIDCapableOutputTechonology.c)
 *     MonitorGetNextFrequencyRange @ 0x1C00BF364 (MonitorGetNextFrequencyRange.c)
 *     ?BmlCompareModeExtents@@YA?AW4BML_COMPARISON_RESULT@@AEBU_D3DKMDT_2DREGION@@0@Z @ 0x1C00C01A8 (-BmlCompareModeExtents@@YA-AW4BML_COMPARISON_RESULT@@AEBU_D3DKMDT_2DREGION@@0@Z.c)
 *     BmlIsLowResAnalogTvOutput @ 0x1C00C05DC (BmlIsLowResAnalogTvOutput.c)
 */

__int64 __fastcall BmlFillPreferredMonitorMode(__int64 a1, unsigned int a2, __int64 a3)
{
  _DWORD *v3; // rdi
  unsigned int v5; // r14d
  unsigned int v6; // r12d
  int v8; // r13d
  unsigned int v9; // r11d
  unsigned int v10; // r10d
  __int64 v11; // rdx
  _DWORD *v12; // rdx
  __int64 v13; // rcx
  int NextFrequencyRange; // eax
  int v15; // esi
  unsigned __int64 v16; // rbx
  __int64 v17; // r10
  int NextMonitorSourceMode; // eax
  int MonitorModePreference; // eax
  int v20; // eax
  __int64 v21; // rcx
  _QWORD *v22; // rax
  _DWORD *v23; // [rsp+20h] [rbp-28h] BYREF
  unsigned __int64 v24; // [rsp+28h] [rbp-20h] BYREF
  __int64 v25; // [rsp+30h] [rbp-18h] BYREF
  unsigned __int64 v26; // [rsp+38h] [rbp-10h]
  __int64 v29; // [rsp+A0h] [rbp+58h]
  char v30; // [rsp+A0h] [rbp+58h]
  int v31; // [rsp+A8h] [rbp+60h]

  v3 = 0LL;
  v5 = 0;
  v24 = 0LL;
  v6 = 0;
  v26 = 0LL;
  if ( !*(_QWORD *)(a3 + 96) )
    return 3223192376LL;
  v12 = 0LL;
  v31 = 0;
  v23 = 0LL;
  v8 = -1;
  v30 = 0;
  while ( 1 )
  {
    v13 = *(_QWORD *)(a3 + 96);
    if ( !v13 )
      break;
    NextFrequencyRange = MonitorGetNextFrequencyRange(v13, v12, &v23);
    v15 = NextFrequencyRange;
    if ( NextFrequencyRange == 1075708748 )
    {
      v16 = v26;
      v17 = 0LL;
      v25 = 0LL;
      LODWORD(v23) = 0;
      while ( 1 )
      {
        v13 = *(_QWORD *)(a3 + 96);
        if ( !v13 )
          goto LABEL_53;
        NextMonitorSourceMode = MonitorGetNextMonitorSourceMode(v13, v17, &v25, &v23);
        v15 = NextMonitorSourceMode;
        if ( NextMonitorSourceMode == 1075708748 )
        {
          if ( v31 == 1 && (v30 || (unsigned __int8)BmlIsEDIDCapableOutputTechonology(a3) && v8 >= 8) )
          {
            v8 = 11;
            v24 = v16;
          }
          if ( (unsigned __int8)BmlIsLowResAnalogTvOutput(a3) )
          {
            if ( v5 < 0x400 )
              v5 = 1024;
            if ( v6 < 0x300 )
              v6 = 768;
            v20 = BmlCompareModeExtents(&qword_1C0038CE0, &v24);
            v21 = v24;
            if ( v20 == 1 )
              v21 = 0x30000000400LL;
            v24 = v21;
          }
          if ( v8 < 8 )
          {
            if ( (unsigned __int8)BmlIsLowResAnalogTvOutput(a3) )
            {
              v10 = 800;
              v9 = 600;
            }
            v24 = __PAIR64__(v9, v10);
          }
          else
          {
            v9 = HIDWORD(v24);
            v10 = v24;
          }
          if ( v5 < v10 )
            v5 = v10;
          LODWORD(v29) = v5;
          if ( v6 < v9 )
            v6 = v9;
          v11 = 104LL * a2;
          HIDWORD(v29) = v6;
          *(_QWORD *)(v11 + a1 + 52) = v24;
          *(_QWORD *)(v11 + a1 + 44) = v29;
          return 1075708748LL;
        }
        if ( NextMonitorSourceMode < 0 )
        {
          v3 = (_DWORD *)v25;
          goto LABEL_54;
        }
        if ( *(_DWORD *)(v25 + 88) == 1 && *(_DWORD *)(v25 + 84) == 5 )
        {
          ++v31;
          v16 = *(_QWORD *)(v25 + 20);
        }
        MonitorModePreference = BmlGetMonitorModePreference(v25, (unsigned int)v23, a3);
        if ( MonitorModePreference == 11 )
        {
          v30 = 1;
          MonitorModePreference = 0;
        }
        if ( MonitorModePreference > v8 )
        {
          v8 = MonitorModePreference;
          v24 = *(_QWORD *)(v17 + 20);
        }
        if ( v5 < *(_DWORD *)(v17 + 20) )
          v5 = *(_DWORD *)(v17 + 20);
        if ( v6 < *(_DWORD *)(v17 + 24) )
          v6 = *(_DWORD *)(v17 + 24);
      }
    }
    if ( NextFrequencyRange < 0 )
    {
      v3 = v23;
      goto LABEL_54;
    }
    v12 = v23;
    if ( v23[9] == 1 )
    {
      if ( v5 < v23[10] )
        v5 = v23[10];
      if ( v6 < v23[11] )
        v6 = v23[11];
    }
  }
LABEL_53:
  v15 = -1071774920;
LABEL_54:
  v22 = (_QWORD *)WdLogNewEntry5_WdError(v13);
  v22[3] = v3;
  v22[4] = *(_QWORD *)(a3 + 96);
  v22[5] = v15;
  WdLogEvent5_WdError(v22);
  return (unsigned int)v15;
}
