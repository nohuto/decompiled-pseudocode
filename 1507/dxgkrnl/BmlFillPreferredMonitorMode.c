/*
 * XREFs of BmlFillPreferredMonitorMode @ 0x1C00987A0
 * Callers:
 *     ?BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBU_D3DKMT_GETPATHSMODALITY@@GGI@Z @ 0x1C0099D04 (-BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBU_D3DKMT_GETPATHS.c)
 * Callees:
 *     MonitorGetNextMonitorSourceMode @ 0x1C0098AF0 (MonitorGetNextMonitorSourceMode.c)
 *     BmlGetMonitorModePreference @ 0x1C0098BF8 (BmlGetMonitorModePreference.c)
 *     ?BmlCompareModeExtents@@YA?AW4BML_COMPARISON_RESULT@@AEBU_D3DKMDT_2DREGION@@0@Z @ 0x1C0099738 (-BmlCompareModeExtents@@YA-AW4BML_COMPARISON_RESULT@@AEBU_D3DKMDT_2DREGION@@0@Z.c)
 *     BmlIsEDIDCapableOutputTechonology @ 0x1C0099844 (BmlIsEDIDCapableOutputTechonology.c)
 *     MonitorGetNextFrequencyRange @ 0x1C0099C20 (MonitorGetNextFrequencyRange.c)
 *     BmlIsLowResAnalogTvOutput @ 0x1C009AC14 (BmlIsLowResAnalogTvOutput.c)
 */

__int64 __fastcall BmlFillPreferredMonitorMode(__int64 a1, unsigned int a2, __int64 a3)
{
  _DWORD *v3; // rdi
  unsigned int v5; // r14d
  unsigned int v6; // r12d
  _DWORD *v7; // rdx
  int v8; // r13d
  __int64 v9; // rcx
  int NextFrequencyRange; // eax
  int v11; // esi
  unsigned __int64 v12; // rbx
  __int64 v13; // rsi
  int NextMonitorSourceMode; // eax
  int MonitorModePreference; // eax
  unsigned int v16; // r11d
  unsigned int v17; // r10d
  __int64 v18; // rdx
  int v20; // eax
  __int64 v21; // rcx
  _QWORD *v22; // rax
  _DWORD *v23; // [rsp+20h] [rbp-28h] BYREF
  unsigned __int64 v24; // [rsp+28h] [rbp-20h] BYREF
  __int64 v25; // [rsp+30h] [rbp-18h] BYREF
  unsigned __int64 v26; // [rsp+38h] [rbp-10h]
  char v29; // [rsp+A0h] [rbp+58h]
  __int64 v30; // [rsp+A0h] [rbp+58h]
  int v31; // [rsp+A8h] [rbp+60h]

  v3 = 0LL;
  v5 = 0;
  v24 = 0LL;
  v6 = 0;
  v26 = 0LL;
  if ( !*(_QWORD *)(a3 + 96) )
    return 3223192376LL;
  v7 = 0LL;
  v31 = 0;
  v23 = 0LL;
  v8 = -1;
  v29 = 0;
  while ( 1 )
  {
    v9 = *(_QWORD *)(a3 + 96);
    if ( !v9 )
      break;
    NextFrequencyRange = MonitorGetNextFrequencyRange(v9, v7, &v23);
    v11 = NextFrequencyRange;
    if ( NextFrequencyRange == 1075708748 )
    {
      v12 = v26;
      v13 = 0LL;
      v25 = 0LL;
      LODWORD(v23) = 0;
      while ( 1 )
      {
        v9 = *(_QWORD *)(a3 + 96);
        if ( !v9 )
          goto LABEL_53;
        NextMonitorSourceMode = MonitorGetNextMonitorSourceMode(v9, v13, &v25, &v23);
        v11 = NextMonitorSourceMode;
        if ( NextMonitorSourceMode == 1075708748 )
        {
          if ( v31 == 1 && (v29 || (unsigned __int8)BmlIsEDIDCapableOutputTechonology(a3) && v8 >= 8) )
          {
            v8 = 11;
            v24 = v12;
          }
          if ( (unsigned __int8)BmlIsLowResAnalogTvOutput(a3) )
          {
            if ( v5 < 0x400 )
              v5 = 1024;
            if ( v6 < 0x300 )
              v6 = 768;
            v20 = BmlCompareModeExtents(&qword_1C002F078, &v24);
            v21 = v24;
            if ( v20 == 1 )
              v21 = 0x30000000400LL;
            v24 = v21;
          }
          if ( v8 < 8 )
          {
            if ( (unsigned __int8)BmlIsLowResAnalogTvOutput(a3) )
            {
              v17 = 800;
              v16 = 600;
            }
            v24 = __PAIR64__(v16, v17);
          }
          else
          {
            v16 = HIDWORD(v24);
            v17 = v24;
          }
          if ( v5 < v17 )
            v5 = v17;
          LODWORD(v30) = v5;
          if ( v6 < v16 )
            v6 = v16;
          v18 = 104LL * a2;
          HIDWORD(v30) = v6;
          *(_QWORD *)(v18 + a1 + 52) = v24;
          *(_QWORD *)(v18 + a1 + 44) = v30;
          return 1075708748LL;
        }
        if ( NextMonitorSourceMode < 0 )
        {
          v3 = (_DWORD *)v25;
          goto LABEL_54;
        }
        v13 = v25;
        if ( *(_DWORD *)(v25 + 88) == 1 && *(_DWORD *)(v25 + 84) == 5 )
        {
          ++v31;
          v12 = *(_QWORD *)(v25 + 20);
        }
        MonitorModePreference = BmlGetMonitorModePreference(v25, (unsigned int)v23, a3);
        if ( MonitorModePreference == 11 )
        {
          v29 = 1;
          MonitorModePreference = 0;
        }
        if ( MonitorModePreference > v8 )
        {
          v8 = MonitorModePreference;
          v24 = *(_QWORD *)(v13 + 20);
        }
        if ( v5 < *(_DWORD *)(v13 + 20) )
          v5 = *(_DWORD *)(v13 + 20);
        if ( v6 < *(_DWORD *)(v13 + 24) )
          v6 = *(_DWORD *)(v13 + 24);
      }
    }
    if ( NextFrequencyRange < 0 )
    {
      v3 = v23;
      goto LABEL_54;
    }
    v7 = v23;
    if ( v23[9] == 1 )
    {
      if ( v5 < v23[10] )
        v5 = v23[10];
      if ( v6 < v23[11] )
        v6 = v23[11];
    }
  }
LABEL_53:
  v11 = -1071774920;
LABEL_54:
  v22 = (_QWORD *)WdLogNewEntry5_WdError(v9);
  v22[3] = v3;
  v22[4] = *(_QWORD *)(a3 + 96);
  v22[5] = v11;
  WdLogEvent5_WdError(v22);
  return (unsigned int)v11;
}
