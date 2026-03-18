/*
 * XREFs of ?GetPresentStatisticsAndAdjustRates@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x180066DB0
 * Callers:
 *     ?UpdateTimes@CPartitionVerticalBlankScheduler@@EEAAJXZ @ 0x180065E90 (-UpdateTimes@CPartitionVerticalBlankScheduler@@EEAAJXZ.c)
 * Callees:
 *     ?IsOfType@CHwndRenderTarget@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18004A540 (-IsOfType@CHwndRenderTarget@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsPrimaryMonitor@CHwndRenderTarget@@UEBA_NXZ @ 0x18004A550 (-IsPrimaryMonitor@CHwndRenderTarget@@UEBA_NXZ.c)
 *     ?GetPresentStatistics@CHwndRenderTarget@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@PEAU_UNSIGNED_RATIO@@@Z @ 0x18004B220 (-GetPresentStatistics@CHwndRenderTarget@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@PEAU_UNSIGNED_RATIO.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     TemplateEventDescriptor @ 0x1800E1E38 (TemplateEventDescriptor.c)
 *     Template_qNR0 @ 0x1800E1ED4 (Template_qNR0.c)
 *     Template_xx @ 0x1800E218C (Template_xx.c)
 *     Template_xxxxx @ 0x1800E22AC (Template_xxxxx.c)
 *     Template_q @ 0x1800F7910 (Template_q.c)
 *     Template_x @ 0x18010D3A4 (Template_x.c)
 *     ?AssertW@@YAXPEBG000K@Z @ 0x180128D60 (-AssertW@@YAXPEBG000K@Z.c)
 */

void __fastcall CPartitionVerticalBlankScheduler::GetPresentStatisticsAndAdjustRates(
        CPartitionVerticalBlankScheduler *this)
{
  CPartitionVerticalBlankScheduler *v1; // rdi
  __int64 v2; // rdx
  _QWORD *v3; // rcx
  __int128 *v4; // rax
  __int128 v5; // xmm0
  int v6; // ebx
  char v7; // r13
  int v8; // r12d
  unsigned int v9; // ebp
  unsigned int v10; // r14d
  __int64 v11; // rax
  __int64 v12; // r15
  __int64 v13; // rcx
  __int64 v14; // rdi
  CHwFullScreenRenderTarget **v15; // rsi
  bool (__fastcall *v16)(__int64, int); // rbx
  bool v17; // al
  int PresentStatistics; // eax
  int v19; // ebx
  _BOOL8 (__fastcall *v20)(CHwndRenderTarget *); // r13
  bool IsPrimaryMonitor; // al
  __int64 v22; // rax
  __int64 v23; // rcx
  unsigned int i; // edx
  __int64 v25; // rax
  __int64 v26; // r9
  float v27; // xmm2_4
  unsigned __int64 v28; // r8
  float v29; // xmm2_4
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rax
  __int64 v33; // rbx
  unsigned int v34; // eax
  unsigned __int64 v35; // rbx
  unsigned int v36; // edx
  unsigned __int64 v37; // rbp
  unsigned __int64 v38; // rcx
  unsigned __int64 v39; // r14
  unsigned __int64 v40; // rsi
  __int64 v41; // r8
  unsigned __int64 v42; // rbx
  unsigned __int64 v43; // r9
  unsigned __int64 v44; // r8
  unsigned __int64 v45; // r10
  unsigned __int64 v46; // rax
  unsigned __int64 v47; // rdx
  unsigned __int64 v48; // rax
  int v49; // r8d
  __int64 v50; // r8
  _DWORD *v51; // rax
  unsigned int v52; // edx
  __int64 v53; // r9
  char v54; // [rsp+40h] [rbp-D8h]
  __int64 (__fastcall *v55)(CHwFullScreenRenderTarget **, struct DXGI_FRAME_STATISTICS_DWM *, struct _UNSIGNED_RATIO *); // [rsp+50h] [rbp-C8h]
  _DWORD v57[32]; // [rsp+60h] [rbp-B8h] BYREF

  v1 = this;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    TemplateEventDescriptor(this, &EVTDESC_SCHEDULE_GETPRESENTSTATS_Start);
  v2 = 4LL;
  v3 = (_QWORD *)(*((_QWORD *)v1 + 2787) + 656LL);
  v4 = (__int128 *)(*((_QWORD *)v1 + 2788) + 656LL);
  do
  {
    v3 += 16;
    v5 = *v4;
    v4 += 8;
    *((_OWORD *)v3 - 8) = v5;
    *((_OWORD *)v3 - 7) = *(v4 - 7);
    *((_OWORD *)v3 - 6) = *(v4 - 6);
    *((_OWORD *)v3 - 5) = *(v4 - 5);
    *((_OWORD *)v3 - 4) = *(v4 - 4);
    *((_OWORD *)v3 - 3) = *(v4 - 3);
    *((_OWORD *)v3 - 2) = *(v4 - 2);
    *((_OWORD *)v3 - 1) = *(v4 - 1);
    --v2;
  }
  while ( v2 );
  v6 = 0;
  *v3 = *(_QWORD *)v4;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  v54 = 0;
  v10 = 0;
  *(_DWORD *)(*((_QWORD *)v1 + 2787) + 656LL) = 16;
  v11 = *((_QWORD *)v1 + 21);
  v12 = *((_QWORD *)v1 + 2787);
  v13 = *(_QWORD *)(v11 + 32);
  if ( *(_DWORD *)(v13 + 48) )
  {
    v14 = *(_QWORD *)(v11 + 32);
    while ( 1 )
    {
      if ( v9 >= *(_DWORD *)(v12 + 656) )
      {
LABEL_25:
        v1 = this;
        v6 = 0;
        goto LABEL_26;
      }
      v15 = *(CHwFullScreenRenderTarget ***)(*(_QWORD *)(v14 + 24) + 8LL * v10);
      v16 = (bool (__fastcall *)(__int64, int))*((_QWORD *)*v15 + 6);
      v17 = v16 == CHwndRenderTarget::IsOfType
          ? CHwndRenderTarget::IsOfType(*(_QWORD *)(*(_QWORD *)(v14 + 24) + 8LL * v10), 36)
          : v16(*(_QWORD *)(*(_QWORD *)(v14 + 24) + 8LL * v10), 36);
      if ( v17 && !(*((unsigned __int8 (__fastcall **)(CHwFullScreenRenderTarget **))*v15 + 16))(v15) )
        break;
LABEL_24:
      if ( ++v10 >= *(_DWORD *)(v14 + 48) )
        goto LABEL_25;
    }
    v55 = (__int64 (__fastcall *)(CHwFullScreenRenderTarget **, struct DXGI_FRAME_STATISTICS_DWM *, struct _UNSIGNED_RATIO *))*((_QWORD *)v15[5] + 16);
    if ( v55 == CHwndRenderTarget::GetPresentStatistics )
      PresentStatistics = CHwndRenderTarget::GetPresentStatistics(
                            v15 + 5,
                            (struct DXGI_FRAME_STATISTICS_DWM *)(v12 + 664 + 32LL * v9),
                            (struct _UNSIGNED_RATIO *)&v57[2 * v9]);
    else
      PresentStatistics = v55(
                            v15 + 5,
                            (struct DXGI_FRAME_STATISTICS_DWM *)(v12 + 664 + 32LL * v9),
                            (struct _UNSIGNED_RATIO *)&v57[2 * v9]);
    v19 = PresentStatistics;
    v20 = (_BOOL8 (__fastcall *)(CHwndRenderTarget *))*((_QWORD *)*v15 + 20);
    if ( v20 == CHwndRenderTarget::IsPrimaryMonitor )
      IsPrimaryMonitor = CHwndRenderTarget::IsPrimaryMonitor((CHwndRenderTarget *)v15);
    else
      IsPrimaryMonitor = v20((CHwndRenderTarget *)v15);
    if ( IsPrimaryMonitor )
    {
      if ( v19 == 142213121 )
      {
        v7 = 1;
        v54 = 1;
LABEL_21:
        if ( !v8 || v8 >= 0 && v19 < 0 )
          v8 = v19;
        ++v9;
        goto LABEL_24;
      }
      v7 = 0;
      v54 = 0;
    }
    else
    {
      v7 = v54;
    }
    if ( v19 < 0 )
      MilInstrumentationCheckHR(0x14u, &dword_18016AAE0, 2u, v19, 0x453u);
    goto LABEL_21;
  }
LABEL_26:
  *(_DWORD *)(v12 + 656) = v9;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &dword_18016AAE0, 2u, v8, 0xFF3u);
    MilInstrumentationCheckHR(0x14u, &dword_18016A928, 1u, v8, 0x3BAu);
LABEL_80:
    *(_BYTE *)(*((_QWORD *)v1 + 2787) + 648LL) = 0;
    goto LABEL_68;
  }
  if ( v7 )
    goto LABEL_80;
  v22 = *((_QWORD *)v1 + 2787);
  if ( !*(_DWORD *)(v22 + 656) )
    goto LABEL_80;
  *(_BYTE *)(v22 + 648) = 1;
  *(_DWORD *)(*((_QWORD *)v1 + 2787) + 96LL) = *(_DWORD *)(*((_QWORD *)v1 + 2787) + 656LL);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    Template_qNR0(
      *((_QWORD *)v1 + 2787),
      (unsigned int)&EVTDESC_SCHEDULE_GETPRESENTSTATS1,
      *(_DWORD *)(*((_QWORD *)v1 + 2787) + 656LL),
      32,
      *((_QWORD *)v1 + 2787) + 664LL);
  v23 = *((_QWORD *)v1 + 2787);
  for ( i = 0; i < *(_DWORD *)(v23 + 96); v23 = *((_QWORD *)v1 + 2787) )
  {
    v25 = *((_QWORD *)v1 + 9);
    v26 = i;
    v27 = (float)(int)v25;
    if ( v25 < 0 )
      v27 = v27 + 1.8446744e19;
    v28 = 0LL;
    v29 = v27 / (float)((float)(int)v57[2 * i] / (float)(int)v57[2 * i + 1]);
    if ( v29 >= 9.223372e18 )
    {
      v29 = v29 - 9.223372e18;
      if ( v29 < 9.223372e18 )
        v28 = 0x8000000000000000uLL;
    }
    ++i;
    *(_QWORD *)(v23 + 8 * v26 + 520) = v28 + (unsigned int)(int)v29;
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    Template_qNR0(
      (unsigned int)v57,
      (unsigned int)&EVTDESC_SCHEDULE_GETFRAMERATE,
      *(_DWORD *)(*((_QWORD *)v1 + 2787) + 96LL),
      8,
      (__int64)v57);
  if ( EventEnabled(Microsoft_Windows_Dwm_CoreHandle, &EVTDESC_SCHEDULE_STATS_DELTAS)
    && (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
  {
    Template_xx(
      *((_QWORD *)v1 + 2787),
      &EVTDESC_SCHEDULE_STATS_DELTAS,
      (unsigned int)(*(_DWORD *)(*((_QWORD *)v1 + 2787) + 680LL) - *(_DWORD *)(*((_QWORD *)v1 + 2787) + 668LL)),
      *(_QWORD *)(*((_QWORD *)v1 + 2787) + 688LL) - *(_QWORD *)(*((_QWORD *)v1 + 2787) + 672LL));
  }
  v30 = *((_QWORD *)v1 + 2788);
  if ( *(_BYTE *)(v30 + 648) )
  {
    v31 = *(_QWORD *)(v30 + 688);
    v32 = *((_QWORD *)v1 + 2787);
    if ( v31 > 0 )
    {
      v33 = *(_QWORD *)(v32 + 688);
      if ( v33 > v31 )
      {
        v34 = *(_DWORD *)(v32 + 680);
        v35 = v33 - v31;
        v36 = *(_DWORD *)(v30 + 680);
        if ( v34 < v36 )
          v37 = -1 - v36 + (unsigned __int64)(v34 + 1);
        else
          v37 = v34 - v36;
        if ( !v37 )
          AssertW(
            0LL,
            L"cDelta > 0",
            L"CRateInfo::AdjustPeriods",
            L"windows\\dwm\\dwmcore\\engine\\rateinfo.cpp",
            0x87u);
        v38 = *((_QWORD *)v1 + 25);
        v39 = (v35 + (v38 >> 1)) / v38;
        if ( v37 == 1 )
          v40 = v35;
        else
          v40 = v35 / v37;
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
          Template_xxxxx(
            *((_QWORD *)v1 + 30),
            (unsigned int)&EVTDESC_SCHEDULE_ADJUST_PERIODS,
            v37,
            v39,
            v35,
            v40,
            *((_QWORD *)v1 + 30));
        if ( v40 && v39 <= 7 )
        {
          v41 = *((_QWORD *)v1 + 25);
          v42 = (v40 + 15 * v41) >> 4;
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 4) != 0 )
            Template_x(v38, &EVTDESC_SCHEDULE_ADJUST_NEW_REFRESH_PERIOD, v41);
          v43 = *((_QWORD *)v1 + 30);
          if ( v43 == 3312659 )
            v44 = v42 / 0x328C13;
          else
            v44 = v42 / v43;
          v45 = 10000000 * (v42 - v43 * v44);
          if ( v43 == 3312659 )
            v46 = v45 / 0x328C13;
          else
            v46 = v45 / v43;
          v47 = v46 + 10000000 * v44;
          if ( v47 )
          {
            v48 = v47 * *((unsigned int *)v1 + 52);
            *((_QWORD *)v1 + 25) = v42;
            *((_QWORD *)v1 + 28) = v48;
            *((_QWORD *)v1 + 23) = v47;
          }
        }
      }
      v6 = 0;
    }
  }
  v49 = *(_DWORD *)(*((_QWORD *)v1 + 2787) + 680LL);
  if ( *((_DWORD *)v1 + 5670) )
  {
    v52 = 0;
    do
    {
      v53 = *(_QWORD *)(*((_QWORD *)v1 + 2832) + 8LL * v52);
      if ( *(_QWORD *)(v53 + 56) )
      {
        if ( !*(_DWORD *)(v53 + 24) )
          *(_DWORD *)(v53 + 24) = v49;
        *(_DWORD *)(v53 + 28) = v49;
      }
      ++v52;
    }
    while ( v52 < *((_DWORD *)v1 + 5670) );
  }
  v13 = 10LL;
  v50 = *(unsigned int *)(*((_QWORD *)v1 + 2787) + 680LL);
  v51 = (_DWORD *)((char *)v1 + 23360);
  do
  {
    if ( *(v51 - 18) )
    {
      if ( !*v51 )
        *v51 = v50;
      v51[1] = v50;
      ++v6;
    }
    v51 += 40;
    --v13;
  }
  while ( v13 );
  if ( v6 && (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    Template_q(0LL, &EVTDESC_TELEMETRY_TOUCH_ANALYSIS_UPDATEDXREFRESH_EVENT, v50);
LABEL_68:
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    TemplateEventDescriptor(v13, &EVTDESC_SCHEDULE_GETPRESENTSTATS_Stop);
}
