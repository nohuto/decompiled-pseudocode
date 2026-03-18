/*
 * XREFs of ?UpdateTimes@CPartitionVerticalBlankScheduler@@EEAAJXZ @ 0x180065E90
 * Callers:
 *     ?Run@CPartitionVerticalBlankScheduler@@MEAAJXZ @ 0x1800945D0 (-Run@CPartitionVerticalBlankScheduler@@MEAAJXZ.c)
 * Callees:
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800400E0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?Reset@CCrossThreadComposition@@UEAAXXZ @ 0x180046620 (-Reset@CCrossThreadComposition@@UEAAXXZ.c)
 *     ?ReleaseResponseRef@CResponseItem@@QEAAXXZ @ 0x180061F8C (-ReleaseResponseRef@CResponseItem@@QEAAXXZ.c)
 *     ?RetireFrame@CPartitionVerticalBlankScheduler@@AEAAJPEAVCFrameInfo@@IPEA_N_N@Z @ 0x1800655A0 (-RetireFrame@CPartitionVerticalBlankScheduler@@AEAAJPEAVCFrameInfo@@IPEA_N_N@Z.c)
 *     ?RetireFrames@CPartitionVerticalBlankScheduler@@AEAAJ_N@Z @ 0x180065C70 (-RetireFrames@CPartitionVerticalBlankScheduler@@AEAAJ_N@Z.c)
 *     ?GetPresentStatisticsAndAdjustRates@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x180066DB0 (-GetPresentStatisticsAndAdjustRates@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 *     ?Reinitialize@CPartitionVerticalBlankScheduler@@AEAAJXZ @ 0x180067C24 (-Reinitialize@CPartitionVerticalBlankScheduler@@AEAAJXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180070B90 (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?ComputeLastVSyncFromPreviousFrame@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x180094BCC (-ComputeLastVSyncFromPreviousFrame@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     memset_0 @ 0x180099BC6 (memset_0.c)
 *     ??_GTouchUpdateInfo@CTelemetryTouchLatencyAnalysis@@QEAAPEAXI@Z @ 0x1800E1984 (--_GTouchUpdateInfo@CTelemetryTouchLatencyAnalysis@@QEAAPEAXI@Z.c)
 *     TemplateEventDescriptor @ 0x1800E1E38 (TemplateEventDescriptor.c)
 *     Template_qxqxxxqxxxxqxxxxxxxxxxqqqxqxxxx @ 0x1800E41BC (Template_qxqxxxqxxxxqxxxxxxxxxxqqqxqxxxx.c)
 */

__int64 __fastcall CPartitionVerticalBlankScheduler::UpdateTimes(CPartitionVerticalBlankScheduler *this)
{
  unsigned __int64 v1; // rbp
  char v2; // al
  CPartitionVerticalBlankScheduler *v3; // rdi
  __int64 v4; // r15
  CMILCOMBase *v5; // rcx
  unsigned int v6; // r12d
  unsigned int v7; // edx
  unsigned int i; // ebx
  unsigned int j; // ebx
  signed int v10; // esi
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // r9
  unsigned __int64 v16; // r11
  unsigned __int64 v17; // rdx
  __int64 v18; // rcx
  unsigned __int64 v19; // rbx
  __int64 v20; // r11
  unsigned __int64 v21; // r9
  unsigned __int64 v22; // r8
  unsigned __int64 v23; // r10
  unsigned __int64 v24; // rcx
  unsigned __int64 v25; // rdx
  unsigned __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rdx
  __int64 v29; // rcx
  unsigned __int64 v30; // rdx
  __int64 v31; // rax
  unsigned int v32; // ebx
  int v33; // r8d
  unsigned int k; // eax
  __int64 v35; // rdx
  int v36; // eax
  __int64 v37; // rcx
  unsigned __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r14
  char v41; // al
  int v43; // eax
  int v44; // edx
  signed int v45; // eax
  __int64 v46; // rcx
  bool v47; // zf
  unsigned int v48; // edx
  int v49; // r8d
  __int64 v50; // rcx
  CTelemetryTouchLatencyAnalysis::TouchUpdateInfo *v51; // rcx
  signed int LastError; // eax
  unsigned __int64 v53; // rtt
  __int64 v54; // r8
  _BYTE v55[32]; // [rsp+170h] [rbp+170h] BYREF

  v1 = (unsigned __int64)v55 & 0xFFFFFFFFFFFFFFC0uLL;
  v2 = Microsoft_Windows_Dwm_CoreEnableBits;
  v3 = this;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
  {
    TemplateEventDescriptor(this, &EVTDESC_SCHEDULE_UPDATE_TIMES_Start);
    v2 = Microsoft_Windows_Dwm_CoreEnableBits;
  }
  if ( *((_BYTE *)v3 + 22648) && *((_BYTE *)v3 + 22649) )
  {
    if ( (v2 & 2) != 0 )
      TemplateEventDescriptor(this, &EVTDESC_SCHEDULE_RESET_Start);
    v43 = CPartitionVerticalBlankScheduler::RetireFrames(v3, 1);
    *(_DWORD *)(((unsigned __int64)v55 & 0xFFFFFFFFFFFFFFC0uLL) + 4) = v43;
    v10 = v43;
    if ( v43 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v43, 0xA9Fu);
    }
    else
    {
      CCrossThreadComposition::Reset(*((CCrossThreadComposition **)v3 + 21), v44);
      v45 = CPartitionVerticalBlankScheduler::Reinitialize(v3);
      *((_BYTE *)v3 + 22650) = 1;
      v10 = v45;
      v47 = (Microsoft_Windows_Dwm_CoreEnableBits & 2) == 0;
      *(_DWORD *)(((unsigned __int64)v55 & 0xFFFFFFFFFFFFFFC0uLL) + 4) = v45;
      if ( !v47 )
        TemplateEventDescriptor(v46, &EVTDESC_SCHEDULE_RESET_Stop);
    }
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, &dword_18016A93C, 1u, v10, 0x53Bu);
      goto LABEL_45;
    }
  }
  v4 = (__int64)v3 + 1376 * *((unsigned int *)v3 + 5570) + 264;
  v5 = *(CMILCOMBase **)(v4 + 1312);
  if ( v5 )
  {
    CMILCOMBase::InternalRelease(v5);
    *(_QWORD *)(v4 + 1312) = 0LL;
  }
  *(_QWORD *)(v4 + 1320) = 0LL;
  *(_DWORD *)(v4 + 1328) = 0;
  memset_0((void *)v4, 0, 0x4C0uLL);
  v6 = 0;
  if ( *(_DWORD *)(v4 + 1240) )
  {
    do
      (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        *(_QWORD *)(*(_QWORD *)(v4 + 1216) + 8LL * v6++));
    while ( v6 < *(_DWORD *)(v4 + 1240) );
    v3 = this;
  }
  *(_DWORD *)(v4 + 1240) = 0;
  DynArrayImpl<0>::ShrinkToSize((_QWORD *)(v4 + 1216), 8u);
  for ( i = 0; i < *(_DWORD *)(v4 + 1272); ++i )
  {
    v51 = *(CTelemetryTouchLatencyAnalysis::TouchUpdateInfo **)(*(_QWORD *)(v4 + 1248) + 8LL * i);
    if ( v51 )
      CTelemetryTouchLatencyAnalysis::TouchUpdateInfo::`scalar deleting destructor'(v51, v7);
  }
  *(_DWORD *)(v4 + 1272) = 0;
  DynArrayImpl<0>::ShrinkToSize((_QWORD *)(v4 + 1248), 8u);
  for ( j = 0; j < *(_DWORD *)(v4 + 1304); ++j )
    CResponseItem::ReleaseResponseRef(*(CResponseItem **)(*(_QWORD *)(v4 + 1280) + 8LL * j));
  *(_DWORD *)(v4 + 1304) = 0;
  DynArrayImpl<0>::ShrinkToSize((_QWORD *)(v4 + 1280), 8u);
  CPartitionVerticalBlankScheduler::GetPresentStatisticsAndAdjustRates(v3);
  *(_DWORD *)(((unsigned __int64)v55 & 0xFFFFFFFFFFFFFFC0uLL) + 4) = 0;
  v10 = 0;
  SetLastError(0);
  if ( QueryPerformanceCounter((LARGE_INTEGER *)(v1 + 8)) )
  {
    v11 = *(_QWORD *)(((unsigned __int64)v55 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
    v12 = *((_QWORD *)v3 + 7);
    if ( v11 >= v12 )
    {
      *((_QWORD *)v3 + 8) = v12;
      *((_QWORD *)v3 + 7) = v11;
      goto LABEL_12;
    }
    ++*((_DWORD *)v3 + 20);
    v10 = -2003304293;
    *(_DWORD *)(((unsigned __int64)v55 & 0xFFFFFFFFFFFFFFC0uLL) + 4) = -2003304293;
    MilInstrumentationCheckHR(0x14u, &dword_18016A93C, 1u, -2003304293, 0xB0u);
  }
  else
  {
    LastError = GetLastError();
    v10 = LastError;
    if ( LastError > 0 )
      v10 = (unsigned __int16)LastError | 0x80070000;
    if ( v10 >= 0 )
      v10 = -2003304445;
    *(_DWORD *)(((unsigned __int64)v55 & 0xFFFFFFFFFFFFFFC0uLL) + 4) = v10;
    MilInstrumentationCheckHR(0x14u, &dword_18016A93C, 1u, v10, 0xA6u);
  }
  MilInstrumentationCheckHR(0x14u, &dword_18016A93C, 1u, v10, 0x59u);
LABEL_12:
  v13 = *((_QWORD *)v3 + 7) - *((_QWORD *)v3 + 6);
  v14 = *((_QWORD *)v3 + 9);
  if ( v14 == 3312659 )
    v15 = v13 / 0x328C13;
  else
    v15 = v13 / v14;
  v16 = 10000000 * (v13 - v14 * v15);
  if ( v14 == 3312659 )
    v17 = v16 / 0x328C13;
  else
    v17 = v16 / v14;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &dword_18016A93C, 1u, v10, 0x89u);
  }
  else
  {
    *((_QWORD *)v3 + 3) = *((_QWORD *)v3 + 2) + v17 + 10000000 * v15;
    *((_QWORD *)v3 + 4) = v17 + 10000000 * v15;
  }
  *((_DWORD *)v3 + 6250) = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &dword_18016A93C, 1u, v10, 0x54Eu);
  }
  else
  {
    *(_QWORD *)(*((_QWORD *)v3 + 2787) + 248LL) = *((_QWORD *)v3 + 7);
    *(_QWORD *)(*((_QWORD *)v3 + 2787) + 256LL) = *((_QWORD *)v3 + 3);
    v18 = *((_QWORD *)v3 + 2787);
    v19 = *((_QWORD *)v3 + 25);
    if ( !*(_BYTE *)(v18 + 648) || *(_BYTE *)(v18 + 1368) )
    {
      CPartitionVerticalBlankScheduler::ComputeLastVSyncFromPreviousFrame(v3);
    }
    else
    {
      *(_QWORD *)(v18 + 232) = *(_QWORD *)(v18 + 688);
      *(_DWORD *)(*((_QWORD *)v3 + 2787) + 100LL) = *(_DWORD *)(*((_QWORD *)v3 + 2787) + 680LL);
    }
    v20 = *((_QWORD *)v3 + 2787);
    v21 = *((_QWORD *)v3 + 9);
    v22 = *(_QWORD *)(v20 + 232) - *((_QWORD *)v3 + 6);
    if ( v21 == 3312659 )
      v23 = v22 / 0x328C13;
    else
      v23 = v22 / v21;
    v24 = 10000000 * (v22 - v21 * v23);
    if ( v21 == 3312659 )
      v25 = v24 / 0x328C13;
    else
      v25 = v24 / v21;
    v26 = v25 + 10000000 * v23;
    *(_QWORD *)(v20 + 240) = v26;
    *(_QWORD *)(v20 + 240) = *((_QWORD *)v3 + 2) + v26;
    v27 = *((_QWORD *)v3 + 2788);
    v28 = *(_QWORD *)(v27 + 232);
    if ( v28 )
      *((_QWORD *)v3 + 2789) = ((v19 >> 4) + *(_QWORD *)(*((_QWORD *)v3 + 2787) + 232LL) - v28) / v19;
    else
      *((_QWORD *)v3 + 2789) = 1LL;
    v29 = *((_QWORD *)v3 + 2787);
    v30 = *(_QWORD *)(v29 + 248);
    if ( *(_QWORD *)(v29 + 232) > v30
      || *(_QWORD *)(v29 + 240) > *(_QWORD *)(v29 + 256)
      || *(_BYTE *)(v29 + 648) && *(_QWORD *)(v29 + 688) < *(_QWORD *)(v27 + 248) )
    {
      *(_QWORD *)(v29 + 232) = v30;
      *(_QWORD *)(*((_QWORD *)v3 + 2787) + 240LL) = *(_QWORD *)(*((_QWORD *)v3 + 2787) + 256LL);
    }
    v31 = *((_QWORD *)v3 + 2788);
    v32 = -1;
    v10 = 0;
    *(_DWORD *)(((unsigned __int64)v55 & 0xFFFFFFFFFFFFFFC0uLL) + 4) = 0;
    *(_QWORD *)(*((_QWORD *)v3 + 2787) + 88LL) = *((_QWORD *)v3 + 2789) + *(_QWORD *)(v31 + 88);
    v33 = *((_DWORD *)v3 + 5573);
    if ( v33 == -1 )
    {
      v48 = *((_DWORD *)v3 + 5572);
      if ( v48 != -1 )
      {
        v49 = ((_BYTE)v48 + 1) & 0xF;
        while ( v48 != v49 )
        {
          v50 = 1376LL * v48;
          if ( *((_BYTE *)v3 + v50 + 552) )
            break;
          if ( *((_BYTE *)v3 + v50 + 537) )
            v32 = v48;
          v48 = ((_BYTE)v48 - 1) & 0xF;
        }
      }
    }
    else
    {
      for ( k = ((_BYTE)v33 + 1) & 0xF; k != v33; k = ((_BYTE)k + 1) & 0xF )
      {
        if ( v32 != -1 )
          goto LABEL_40;
        v35 = 1376LL * k;
        if ( *((_BYTE *)v3 + v35 + 537) && !*((_BYTE *)v3 + v35 + 552) )
          v32 = k;
      }
    }
    if ( v32 != -1 )
    {
LABEL_40:
      while ( 1 )
      {
        v36 = CPartitionVerticalBlankScheduler::RetireFrame(
                (__int64)v3,
                (CPartitionVerticalBlankScheduler *)((char *)v3 + 1376 * v32 + 264),
                v32,
                (bool *)((unsigned __int64)v55 & 0xFFFFFFFFFFFFFFC0uLL),
                0);
        *(_DWORD *)(((unsigned __int64)v55 & 0xFFFFFFFFFFFFFFC0uLL) + 4) = v36;
        v10 = v36;
        if ( v36 < 0 )
          break;
        v32 = ((_BYTE)v32 + 1) & 0xF;
        if ( !*(_BYTE *)v1 || v32 == *((_DWORD *)v3 + 5570) )
          goto LABEL_43;
      }
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v36, 0x7AFu);
    }
LABEL_43:
    if ( v10 < 0 )
      MilInstrumentationCheckHR(0x14u, &dword_18016A93C, 1u, v10, 0x557u);
    else
      *(_DWORD *)(*((_QWORD *)v3 + 2787) + 16LL) = *(_DWORD *)(*((_QWORD *)v3 + 2788) + 16LL) + 1;
  }
LABEL_45:
  v37 = *(_QWORD *)(*((_QWORD *)v3 + 2788) + 240LL);
  if ( v37 )
  {
    v38 = *(_QWORD *)(*((_QWORD *)v3 + 2787) + 240LL) - v37;
  }
  else
  {
    v53 = *((_QWORD *)v3 + 25) - *((_QWORD *)v3 + 6);
    v38 = *((_QWORD *)v3 + 2)
        + 10000000 * (v53 / *((_QWORD *)v3 + 9))
        + 10000000 * (v53 % *((_QWORD *)v3 + 9)) / *((_QWORD *)v3 + 9);
  }
  v39 = *((_QWORD *)v3 + 28);
  v40 = *((_QWORD *)v3 + 2787);
  v41 = Microsoft_Windows_Dwm_CoreEnableBits;
  *(_QWORD *)(((unsigned __int64)v55 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = v39;
  *(_QWORD *)(((unsigned __int64)v55 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = v40;
  *(_QWORD *)(((unsigned __int64)v55 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = v38;
  if ( (v41 & 1) != 0 )
  {
    v54 = *(_QWORD *)(((unsigned __int64)v55 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
    Template_qxqxxxqxxxxqxxxxxxxxxxqqqxqxxxx(
      *(_DWORD *)(v54 + 16),
      (_DWORD)this,
      *((_DWORD *)this + 5570),
      *(_QWORD *)v54,
      *(_DWORD *)(v54 + 16),
      *(_QWORD *)(v54 + 1352),
      *(_QWORD *)(v54 + 1344),
      *(_DWORD *)(v40 + 164));
    v41 = Microsoft_Windows_Dwm_CoreEnableBits;
    v10 = *(_DWORD *)(((unsigned __int64)v55 & 0xFFFFFFFFFFFFFFC0uLL) + 4);
  }
  if ( (v41 & 2) != 0 )
    TemplateEventDescriptor(v39, &EVTDESC_SCHEDULE_UPDATE_TIMES_Stop);
  return (unsigned int)v10;
}
