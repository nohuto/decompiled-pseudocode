/*
 * XREFs of ?GetPresentStatisticsAndAdjustRates@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x1800459A0
 * Callers:
 *     ?Run@CPartitionVerticalBlankScheduler@@MEAAJXZ @ 0x180045FB0 (-Run@CPartitionVerticalBlankScheduler@@MEAAJXZ.c)
 *     ?UpdateTimes@CPartitionVerticalBlankScheduler@@EEAAJXZ @ 0x180111AC0 (-UpdateTimes@CPartitionVerticalBlankScheduler@@EEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsOfType@CHwndRenderTarget@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180073B70 (-IsOfType@CHwndRenderTarget@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsPrimaryMonitor@CHwndRenderTarget@@UEBA_NXZ @ 0x180073B80 (-IsPrimaryMonitor@CHwndRenderTarget@@UEBA_NXZ.c)
 *     ?GetPresentStatistics@CHwndRenderTarget@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@PEAU_UNSIGNED_RATIO@@@Z @ 0x180074700 (-GetPresentStatistics@CHwndRenderTarget@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@PEAU_UNSIGNED_RATIO.c)
 *     TemplateEventDescriptor @ 0x1800BCF6C (TemplateEventDescriptor.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     Template_qNR0 @ 0x1801140C8 (Template_qNR0.c)
 *     Template_x @ 0x1801141C0 (Template_x.c)
 *     Template_xx @ 0x18011436C (Template_xx.c)
 *     Template_xxxxx @ 0x18011448C (Template_xxxxx.c)
 *     Template_q @ 0x180129F68 (Template_q.c)
 */

void __fastcall CPartitionVerticalBlankScheduler::GetPresentStatisticsAndAdjustRates(
        CPartitionVerticalBlankScheduler *this)
{
  CPartitionVerticalBlankScheduler *v1; // rbx
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int128 *v4; // rax
  __int128 v5; // xmm0
  int v6; // r13d
  int v7; // r12d
  unsigned int v8; // esi
  unsigned int v9; // r14d
  __int64 v10; // r15
  __int64 v11; // rdx
  char v12; // al
  __int64 v13; // rbp
  CHwndRenderTarget *v14; // rdi
  __int64 (__fastcall *v15)(CHwndRenderTarget *, __int64); // rax
  char v16; // al
  CHwndRenderTarget *v17; // rcx
  __int64 (__fastcall *v18)(CHwndRenderTarget *__hidden, struct DXGI_FRAME_STATISTICS_DWM *, struct _UNSIGNED_RATIO *); // rax
  struct _UNSIGNED_RATIO *v19; // r8
  struct DXGI_FRAME_STATISTICS_DWM *v20; // rdx
  int PresentStatistics; // eax
  int v22; // ebp
  bool (__fastcall *v23)(CHwndRenderTarget *__hidden); // rax
  bool IsPrimaryMonitor; // al
  __int64 v25; // rax
  __int64 v26; // rcx
  unsigned int i; // edx
  __int64 v28; // rax
  __int64 v29; // r9
  float v30; // xmm2_4
  unsigned __int64 v31; // r8
  float v32; // xmm2_4
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rax
  __int64 v36; // r8
  unsigned int v37; // eax
  unsigned __int64 v38; // r8
  unsigned int v39; // edx
  unsigned __int64 v40; // r10
  unsigned __int64 v41; // rcx
  unsigned __int64 v42; // rdi
  unsigned __int64 v43; // rsi
  __int64 v44; // r8
  unsigned __int64 v45; // rdi
  unsigned __int64 v46; // r8
  unsigned __int64 v47; // r9
  unsigned __int64 v48; // r10
  unsigned __int64 v49; // rax
  unsigned __int64 v50; // rdx
  unsigned __int64 v51; // rax
  int v52; // edx
  __int64 v53; // r8
  _DWORD *v54; // rax
  unsigned int v55; // r8d
  __int64 v56; // r9
  char v57; // [rsp+40h] [rbp-D8h]
  __int64 v58; // [rsp+48h] [rbp-D0h]
  _DWORD v60[32]; // [rsp+60h] [rbp-B8h] BYREF

  v1 = this;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    TemplateEventDescriptor(this, &EVTDESC_SCHEDULE_GETPRESENTSTATS_Start);
  v2 = 4LL;
  v3 = *((_QWORD *)v1 + 2741) + 656LL;
  v4 = (__int128 *)(*((_QWORD *)v1 + 2742) + 656LL);
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
  *(_DWORD *)(*((_QWORD *)v1 + 2741) + 656LL) = 16;
  v10 = *((_QWORD *)v1 + 2741);
  v11 = *(_QWORD *)(*((_QWORD *)v1 + 23) + 32LL);
  v12 = 0;
  v13 = v10 + 664;
  v58 = v11;
  v57 = 0;
  if ( *(_DWORD *)(v11 + 48) )
  {
    while ( 1 )
    {
      if ( v8 >= *(_DWORD *)(v10 + 656) )
      {
LABEL_24:
        v1 = this;
        v6 = 0;
        v12 = v57;
        goto LABEL_25;
      }
      v14 = *(CHwndRenderTarget **)(*(_QWORD *)(v11 + 24) + 8LL * v9);
      v15 = *(__int64 (__fastcall **)(CHwndRenderTarget *, __int64))(*(_QWORD *)v14 + 48LL);
      v16 = (char *)v15 == (char *)CHwndRenderTarget::IsOfType ? CHwndRenderTarget::IsOfType(v14, 38LL) : v15(v14, 38LL);
      if ( v16 && !(*(unsigned __int8 (__fastcall **)(CHwndRenderTarget *))(*(_QWORD *)v14 + 144LL))(v14) )
        break;
LABEL_23:
      v11 = v58;
      if ( ++v9 >= *(_DWORD *)(v58 + 48) )
        goto LABEL_24;
    }
    v17 = (CHwndRenderTarget *)((char *)v14 + 112);
    v18 = *(__int64 (__fastcall **)(CHwndRenderTarget *__hidden, struct DXGI_FRAME_STATISTICS_DWM *, struct _UNSIGNED_RATIO *))(*((_QWORD *)v14 + 14) + 120LL);
    v19 = (struct _UNSIGNED_RATIO *)&v60[2 * v8];
    v20 = (struct DXGI_FRAME_STATISTICS_DWM *)(v13 + 32LL * v8);
    if ( v18 == CHwndRenderTarget::GetPresentStatistics )
      PresentStatistics = CHwndRenderTarget::GetPresentStatistics(v17, v20, v19);
    else
      PresentStatistics = v18(v17, v20, v19);
    v22 = PresentStatistics;
    v23 = *(bool (__fastcall **)(CHwndRenderTarget *__hidden))(*(_QWORD *)v14 + 176LL);
    if ( v23 == CHwndRenderTarget::IsPrimaryMonitor )
      IsPrimaryMonitor = CHwndRenderTarget::IsPrimaryMonitor(v14);
    else
      IsPrimaryMonitor = v23(v14);
    if ( IsPrimaryMonitor )
    {
      if ( v22 == 142213121 )
      {
        v57 = 1;
LABEL_20:
        if ( !v7 || v7 >= 0 && v22 < 0 )
          v7 = v22;
        ++v8;
        v13 = v10 + 664;
        goto LABEL_23;
      }
      v57 = 0;
    }
    if ( v22 < 0 )
      MilInstrumentationCheckHR(0x14u, &dword_1801B0840, 2u, v22, 0x43Eu);
    goto LABEL_20;
  }
LABEL_25:
  *(_DWORD *)(v10 + 656) = v8;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &dword_1801B0840, 2u, v7, 0xEADu);
    MilInstrumentationCheckHR(0x14u, &dword_1801B0838, 1u, v7, 0x37Fu);
LABEL_82:
    *(_BYTE *)(*((_QWORD *)v1 + 2741) + 648LL) = 0;
    goto LABEL_63;
  }
  if ( v12 )
    goto LABEL_82;
  v25 = *((_QWORD *)v1 + 2741);
  if ( !*(_DWORD *)(v25 + 656) )
    goto LABEL_82;
  *(_BYTE *)(v25 + 648) = 1;
  *(_DWORD *)(*((_QWORD *)v1 + 2741) + 96LL) = *(_DWORD *)(*((_QWORD *)v1 + 2741) + 656LL);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    Template_qNR0(
      *((_QWORD *)v1 + 2741),
      (unsigned int)&EVTDESC_SCHEDULE_GETPRESENTSTATS1,
      *(_DWORD *)(*((_QWORD *)v1 + 2741) + 656LL),
      32,
      *((_QWORD *)v1 + 2741) + 664LL);
  v26 = *((_QWORD *)v1 + 2741);
  for ( i = 0; i < *(_DWORD *)(v26 + 96); v26 = *((_QWORD *)v1 + 2741) )
  {
    v28 = *((_QWORD *)v1 + 10);
    v29 = i;
    v30 = (float)(int)v28;
    if ( v28 < 0 )
      v30 = v30 + 1.8446744e19;
    v31 = 0LL;
    v32 = v30 / (float)((float)(int)v60[2 * i] / (float)(int)v60[2 * i + 1]);
    if ( v32 >= 9.223372e18 )
    {
      v32 = v32 - 9.223372e18;
      if ( v32 < 9.223372e18 )
        v31 = 0x8000000000000000uLL;
    }
    ++i;
    *(_QWORD *)(v26 + 8 * v29 + 520) = v31 + (unsigned int)(int)v32;
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    Template_qNR0(
      (unsigned int)v60,
      (unsigned int)&EVTDESC_SCHEDULE_GETFRAMERATE,
      *(_DWORD *)(*((_QWORD *)v1 + 2741) + 96LL),
      8,
      (__int64)v60);
  if ( EventEnabled(Microsoft_Windows_Dwm_CoreHandle, &EVTDESC_SCHEDULE_STATS_DELTAS)
    && (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
  {
    Template_xx(
      *((_QWORD *)v1 + 2741),
      &EVTDESC_SCHEDULE_STATS_DELTAS,
      (unsigned int)(*(_DWORD *)(*((_QWORD *)v1 + 2741) + 680LL) - *(_DWORD *)(*((_QWORD *)v1 + 2741) + 668LL)),
      *(_QWORD *)(*((_QWORD *)v1 + 2741) + 688LL) - *(_QWORD *)(*((_QWORD *)v1 + 2741) + 672LL));
  }
  v33 = *((_QWORD *)v1 + 2742);
  if ( *(_BYTE *)(v33 + 648) )
  {
    if ( !*((_BYTE *)v1 + 22280) )
    {
      v34 = *(_QWORD *)(v33 + 688);
      v35 = *((_QWORD *)v1 + 2741);
      if ( v34 > 0 )
      {
        v36 = *(_QWORD *)(v35 + 688);
        if ( v36 > v34 )
        {
          v37 = *(_DWORD *)(v35 + 680);
          v38 = v36 - v34;
          v39 = *(_DWORD *)(v33 + 680);
          if ( v37 < v39 )
            v40 = -1 - v39 + (unsigned __int64)(v37 + 1);
          else
            v40 = v37 - v39;
          v41 = *((_QWORD *)v1 + 27);
          v42 = (v38 + (v41 >> 1)) / v41;
          v43 = v38 / v40;
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
            Template_xxxxx(
              *((_QWORD *)v1 + 32),
              (unsigned int)&EVTDESC_SCHEDULE_ADJUST_PERIODS,
              v40,
              v42,
              v38,
              v38 / v40,
              *((_QWORD *)v1 + 32));
          if ( v43 && v42 <= 7 )
          {
            v44 = *((_QWORD *)v1 + 27);
            v45 = (v43 + 15 * v44) >> 4;
            if ( (Microsoft_Windows_Dwm_CoreEnableBits & 4) != 0 )
              Template_x(v41, &EVTDESC_SCHEDULE_ADJUST_NEW_REFRESH_PERIOD, v44);
            v46 = *((_QWORD *)v1 + 32);
            if ( v46 == 3312656 )
              v47 = v45 / 0x328C10;
            else
              v47 = v45 / v46;
            v48 = 10000000 * (v45 - v46 * v47);
            if ( v46 == 3312656 )
              v49 = v48 / 0x328C10;
            else
              v49 = v48 / v46;
            v50 = v49 + 10000000 * v47;
            if ( v50 )
            {
              v51 = v50 * *((unsigned int *)v1 + 56);
              *((_QWORD *)v1 + 27) = v45;
              *((_QWORD *)v1 + 30) = v51;
              *((_QWORD *)v1 + 25) = v50;
            }
          }
        }
      }
    }
  }
  v52 = *(_DWORD *)(*((_QWORD *)v1 + 2741) + 680LL);
  if ( *((_DWORD *)v1 + 5578) )
  {
    v55 = 0;
    do
    {
      v56 = *(_QWORD *)(*((_QWORD *)v1 + 2786) + 8LL * v55);
      if ( *(_QWORD *)(v56 + 56) )
      {
        if ( !*(_DWORD *)(v56 + 24) )
          *(_DWORD *)(v56 + 24) = v52;
        *(_DWORD *)(v56 + 28) = v52;
      }
      ++v55;
    }
    while ( v55 < *((_DWORD *)v1 + 5578) );
  }
  v3 = 10LL;
  v53 = *(unsigned int *)(*((_QWORD *)v1 + 2741) + 680LL);
  v54 = (_DWORD *)((char *)v1 + 22996);
  do
  {
    if ( *(v54 - 19) )
    {
      if ( !*v54 )
        *v54 = v53;
      v54[1] = v53;
      ++v6;
    }
    v54 += 42;
    --v3;
  }
  while ( v3 );
  if ( v6 && (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    Template_q(0LL, &EVTDESC_TELEMETRY_TOUCH_ANALYSIS_UPDATEDXREFRESH_EVENT, v53);
LABEL_63:
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    TemplateEventDescriptor(v3, &EVTDESC_SCHEDULE_GETPRESENTSTATS_Stop);
}
