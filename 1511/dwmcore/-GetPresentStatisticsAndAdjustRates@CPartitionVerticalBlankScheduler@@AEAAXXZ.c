/*
 * XREFs of ?GetPresentStatisticsAndAdjustRates@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x18008F290
 * Callers:
 *     ?Run@CPartitionVerticalBlankScheduler@@MEAAJXZ @ 0x18008FC60 (-Run@CPartitionVerticalBlankScheduler@@MEAAJXZ.c)
 *     ?UpdateTimes@CPartitionVerticalBlankScheduler@@EEAAJXZ @ 0x1800FCA40 (-UpdateTimes@CPartitionVerticalBlankScheduler@@EEAAJXZ.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?IsOfType@CHwndRenderTarget@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18007BA90 (-IsOfType@CHwndRenderTarget@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsPrimaryMonitor@CHwndRenderTarget@@UEBA_NXZ @ 0x18007BAA0 (-IsPrimaryMonitor@CHwndRenderTarget@@UEBA_NXZ.c)
 *     ?GetPresentStatistics@CHwndRenderTarget@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@PEAU_UNSIGNED_RATIO@@@Z @ 0x18007C8A0 (-GetPresentStatistics@CHwndRenderTarget@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@PEAU_UNSIGNED_RATIO.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     TemplateEventDescriptor @ 0x1800BA27C (TemplateEventDescriptor.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     ?AssertW@@YAXPEBG000K@Z @ 0x1800BC5A0 (-AssertW@@YAXPEBG000K@Z.c)
 *     Template_qNR0 @ 0x1801001C0 (Template_qNR0.c)
 *     Template_xx @ 0x180100478 (Template_xx.c)
 *     Template_xxxxx @ 0x180100598 (Template_xxxxx.c)
 *     Template_q @ 0x180111C90 (Template_q.c)
 *     Template_x @ 0x180127D74 (Template_x.c)
 */

void __fastcall CPartitionVerticalBlankScheduler::GetPresentStatisticsAndAdjustRates(
        CPartitionVerticalBlankScheduler *this)
{
  CPartitionVerticalBlankScheduler *v1; // rdi
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int128 *v4; // rax
  __int128 v5; // xmm0
  int v6; // r13d
  int v7; // r12d
  unsigned int v8; // ebp
  unsigned int v9; // r14d
  __int64 v10; // r15
  __int64 v11; // rdx
  char v12; // al
  __int64 v13; // rdi
  CHwFullScreenRenderTarget **v14; // rsi
  bool (__fastcall *v15)(__int64, int); // rbx
  char v16; // al
  int PresentStatistics; // eax
  int v18; // ebx
  bool IsPrimaryMonitor; // al
  __int64 v20; // rax
  __int64 v21; // rcx
  unsigned int i; // edx
  __int64 v23; // rax
  __int64 v24; // r9
  float v25; // xmm2_4
  unsigned __int64 v26; // r8
  float v27; // xmm2_4
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rax
  __int64 v31; // rbx
  unsigned int v32; // eax
  unsigned __int64 v33; // rbx
  unsigned int v34; // edx
  unsigned __int64 v35; // rsi
  unsigned __int64 v36; // rcx
  unsigned __int64 v37; // r14
  unsigned __int64 v38; // rbp
  __int64 v39; // r8
  unsigned __int64 v40; // rbx
  unsigned __int64 v41; // rax
  unsigned __int64 v42; // rcx
  int v43; // edx
  __int64 v44; // r8
  _DWORD *v45; // rax
  unsigned int v46; // r8d
  __int64 v47; // r9
  char v48; // [rsp+40h] [rbp-E8h]
  __int64 (__fastcall *v49)(CHwFullScreenRenderTarget **, struct DXGI_FRAME_STATISTICS_DWM *, struct _UNSIGNED_RATIO *); // [rsp+48h] [rbp-E0h]
  _BOOL8 (__fastcall *v50)(CHwndRenderTarget *); // [rsp+48h] [rbp-E0h]
  __int64 v51; // [rsp+50h] [rbp-D8h]
  _DWORD v53[32]; // [rsp+70h] [rbp-B8h] BYREF

  v1 = this;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    TemplateEventDescriptor(this, &EVTDESC_SCHEDULE_GETPRESENTSTATS_Start);
  v2 = 4LL;
  v3 = *((_QWORD *)v1 + 2788) + 656LL;
  v4 = (__int128 *)(*((_QWORD *)v1 + 2789) + 656LL);
  do
  {
    v3 += 128LL;
    v5 = *v4;
    v4 += 8;
    *(_OWORD *)(v3 - 128) = v5;
    *(_OWORD *)(v3 - 112) = *(v4 - 7);
    *(_OWORD *)(v3 - 96) = *(v4 - 6);
    *(_OWORD *)(v3 - 80) = *(v4 - 5);
    *(_OWORD *)(v3 - 64) = *(v4 - 4);
    *(_OWORD *)(v3 - 48) = *(v4 - 3);
    *(_OWORD *)(v3 - 32) = *(v4 - 2);
    *(_OWORD *)(v3 - 16) = *(v4 - 1);
    --v2;
  }
  while ( v2 );
  v6 = 0;
  *(_QWORD *)v3 = *(_QWORD *)v4;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  *(_DWORD *)(*((_QWORD *)v1 + 2788) + 656LL) = 16;
  v10 = *((_QWORD *)v1 + 2788);
  v11 = *(_QWORD *)(*((_QWORD *)v1 + 22) + 32LL);
  v12 = 0;
  v51 = v11;
  v48 = 0;
  if ( *(_DWORD *)(v11 + 48) )
  {
    v13 = v10 + 664;
    while ( 1 )
    {
      if ( v8 >= *(_DWORD *)(v10 + 656) )
      {
LABEL_25:
        v1 = this;
        v6 = 0;
        v12 = v48;
        goto LABEL_26;
      }
      v14 = *(CHwFullScreenRenderTarget ***)(*(_QWORD *)(v11 + 24) + 8LL * v9);
      v15 = (bool (__fastcall *)(__int64, int))*((_QWORD *)*v14 + 6);
      v16 = v15 == CHwndRenderTarget::IsOfType
          ? CHwndRenderTarget::IsOfType((__int64)v14, 37)
          : ((__int64 (__fastcall *)(CHwFullScreenRenderTarget **, __int64, bool (__fastcall *)(__int64, int)))v15)(
              v14,
              37LL,
              CHwndRenderTarget::IsOfType);
      if ( v16 && !(*((unsigned __int8 (__fastcall **)(CHwFullScreenRenderTarget **))*v14 + 17))(v14) )
        break;
LABEL_24:
      v11 = v51;
      if ( ++v9 >= *(_DWORD *)(v51 + 48) )
        goto LABEL_25;
    }
    v49 = (__int64 (__fastcall *)(CHwFullScreenRenderTarget **, struct DXGI_FRAME_STATISTICS_DWM *, struct _UNSIGNED_RATIO *))*((_QWORD *)v14[5] + 16);
    if ( v49 == CHwndRenderTarget::GetPresentStatistics )
      PresentStatistics = CHwndRenderTarget::GetPresentStatistics(
                            v14 + 5,
                            (struct DXGI_FRAME_STATISTICS_DWM *)(v13 + 32LL * v8),
                            (struct _UNSIGNED_RATIO *)&v53[2 * v8]);
    else
      PresentStatistics = v49(
                            v14 + 5,
                            (struct DXGI_FRAME_STATISTICS_DWM *)(v13 + 32LL * v8),
                            (struct _UNSIGNED_RATIO *)&v53[2 * v8]);
    v18 = PresentStatistics;
    v50 = (_BOOL8 (__fastcall *)(CHwndRenderTarget *))*((_QWORD *)*v14 + 21);
    if ( v50 == CHwndRenderTarget::IsPrimaryMonitor )
      IsPrimaryMonitor = CHwndRenderTarget::IsPrimaryMonitor((CHwndRenderTarget *)v14);
    else
      IsPrimaryMonitor = v50((CHwndRenderTarget *)v14);
    if ( IsPrimaryMonitor )
    {
      if ( v18 == 142213121 )
      {
        v48 = 1;
LABEL_21:
        if ( !v7 || v7 >= 0 && v18 < 0 )
          v7 = v18;
        ++v8;
        goto LABEL_24;
      }
      v48 = 0;
    }
    if ( v18 < 0 )
      MilInstrumentationCheckHR(0x14u, &dword_180178D20, 2u, v18, 0x44Fu);
    goto LABEL_21;
  }
LABEL_26:
  *(_DWORD *)(v10 + 656) = v8;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &dword_180178D20, 2u, v7, 0x1011u);
    MilInstrumentationCheckHR(0x14u, &dword_180178CD8, 1u, v7, 0x3BAu);
LABEL_78:
    *(_BYTE *)(*((_QWORD *)v1 + 2788) + 648LL) = 0;
    goto LABEL_61;
  }
  if ( v12 )
    goto LABEL_78;
  v20 = *((_QWORD *)v1 + 2788);
  if ( !*(_DWORD *)(v20 + 656) )
    goto LABEL_78;
  *(_BYTE *)(v20 + 648) = 1;
  *(_DWORD *)(*((_QWORD *)v1 + 2788) + 96LL) = *(_DWORD *)(*((_QWORD *)v1 + 2788) + 656LL);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    Template_qNR0(
      *((_QWORD *)v1 + 2788),
      (unsigned int)&EVTDESC_SCHEDULE_GETPRESENTSTATS1,
      *(_DWORD *)(*((_QWORD *)v1 + 2788) + 656LL),
      32,
      *((_QWORD *)v1 + 2788) + 664LL);
  v21 = *((_QWORD *)v1 + 2788);
  for ( i = 0; i < *(_DWORD *)(v21 + 96); v21 = *((_QWORD *)v1 + 2788) )
  {
    v23 = *((_QWORD *)v1 + 10);
    v24 = i;
    v25 = (float)(int)v23;
    if ( v23 < 0 )
      v25 = v25 + 1.8446744e19;
    v26 = 0LL;
    v27 = v25 / (float)((float)(int)v53[2 * i] / (float)(int)v53[2 * i + 1]);
    if ( v27 >= 9.223372e18 )
    {
      v27 = v27 - 9.223372e18;
      if ( v27 < 9.223372e18 )
        v26 = 0x8000000000000000uLL;
    }
    ++i;
    *(_QWORD *)(v21 + 8 * v24 + 520) = v26 + (unsigned int)(int)v27;
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    Template_qNR0(
      (unsigned int)v53,
      (unsigned int)&EVTDESC_SCHEDULE_GETFRAMERATE,
      *(_DWORD *)(*((_QWORD *)v1 + 2788) + 96LL),
      8,
      (__int64)v53);
  if ( EventEnabled(Microsoft_Windows_Dwm_CoreHandle, &EVTDESC_SCHEDULE_STATS_DELTAS)
    && (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
  {
    Template_xx(
      *((_QWORD *)v1 + 2788),
      &EVTDESC_SCHEDULE_STATS_DELTAS,
      (unsigned int)(*(_DWORD *)(*((_QWORD *)v1 + 2788) + 680LL) - *(_DWORD *)(*((_QWORD *)v1 + 2788) + 668LL)),
      *(_QWORD *)(*((_QWORD *)v1 + 2788) + 688LL) - *(_QWORD *)(*((_QWORD *)v1 + 2788) + 672LL));
  }
  v28 = *((_QWORD *)v1 + 2789);
  if ( *(_BYTE *)(v28 + 648) )
  {
    v29 = *(_QWORD *)(v28 + 688);
    v30 = *((_QWORD *)v1 + 2788);
    if ( v29 > 0 )
    {
      v31 = *(_QWORD *)(v30 + 688);
      if ( v31 > v29 )
      {
        v32 = *(_DWORD *)(v30 + 680);
        v33 = v31 - v29;
        v34 = *(_DWORD *)(v28 + 680);
        if ( v32 < v34 )
          v35 = -1 - v34 + (unsigned __int64)(v32 + 1);
        else
          v35 = v32 - v34;
        if ( !v35 )
          AssertW(
            0LL,
            L"cDelta > 0",
            L"CRateInfo::AdjustPeriods",
            L"windows\\dwm\\dwmcore\\engine\\rateinfo.cpp",
            0x87u);
        v36 = *((_QWORD *)v1 + 26);
        v37 = (v33 + (v36 >> 1)) / v36;
        v38 = v33 / v35;
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
          Template_xxxxx(
            *((_QWORD *)v1 + 31),
            (unsigned int)&EVTDESC_SCHEDULE_ADJUST_PERIODS,
            v35,
            v37,
            v33,
            v33 / v35,
            *((_QWORD *)v1 + 31));
        if ( v38 && v37 <= 7 )
        {
          v39 = *((_QWORD *)v1 + 26);
          v40 = (v38 + 15 * v39) >> 4;
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 4) != 0 )
            Template_x(v36, &EVTDESC_SCHEDULE_ADJUST_NEW_REFRESH_PERIOD, v39);
          v41 = 10000000 * (v40 / *((_QWORD *)v1 + 31)) + 10000000 * (v40 % *((_QWORD *)v1 + 31)) / *((_QWORD *)v1 + 31);
          if ( v41 )
          {
            v42 = v41 * *((unsigned int *)v1 + 54);
            *((_QWORD *)v1 + 26) = v40;
            *((_QWORD *)v1 + 29) = v42;
            *((_QWORD *)v1 + 24) = v41;
          }
        }
      }
    }
  }
  v43 = *(_DWORD *)(*((_QWORD *)v1 + 2788) + 680LL);
  if ( *((_DWORD *)v1 + 5672) )
  {
    v46 = 0;
    do
    {
      v47 = *(_QWORD *)(*((_QWORD *)v1 + 2833) + 8LL * v46);
      if ( *(_QWORD *)(v47 + 56) )
      {
        if ( !*(_DWORD *)(v47 + 24) )
          *(_DWORD *)(v47 + 24) = v43;
        *(_DWORD *)(v47 + 28) = v43;
      }
      ++v46;
    }
    while ( v46 < *((_DWORD *)v1 + 5672) );
  }
  v3 = 10LL;
  v44 = *(unsigned int *)(*((_QWORD *)v1 + 2788) + 680LL);
  v45 = (_DWORD *)((char *)v1 + 23372);
  do
  {
    if ( *(v45 - 19) )
    {
      if ( !*v45 )
        *v45 = v44;
      v45[1] = v44;
      ++v6;
    }
    v45 += 42;
    --v3;
  }
  while ( v3 );
  if ( v6 && (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    Template_q(0LL, &EVTDESC_TELEMETRY_TOUCH_ANALYSIS_UPDATEDXREFRESH_EVENT, v44);
LABEL_61:
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    TemplateEventDescriptor(v3, &EVTDESC_SCHEDULE_GETPRESENTSTATS_Stop);
}
