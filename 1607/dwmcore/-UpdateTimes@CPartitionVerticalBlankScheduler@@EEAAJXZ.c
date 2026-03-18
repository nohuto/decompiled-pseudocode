/*
 * XREFs of ?UpdateTimes@CPartitionVerticalBlankScheduler@@EEAAJXZ @ 0x180111AC0
 * Callers:
 *     <none>
 * Callees:
 *     ?Reset@CCrossThreadComposition@@UEAAXXZ @ 0x180039310 (-Reset@CCrossThreadComposition@@UEAAXXZ.c)
 *     ?RetireFrames@CPartitionVerticalBlankScheduler@@AEAAJ_N@Z @ 0x1800448A0 (-RetireFrames@CPartitionVerticalBlankScheduler@@AEAAJ_N@Z.c)
 *     ?CalculateFrameTimeDelta@CPartitionVerticalBlankScheduler@@AEAA_KXZ @ 0x1800449F8 (-CalculateFrameTimeDelta@CPartitionVerticalBlankScheduler@@AEAA_KXZ.c)
 *     ?GetPresentStatisticsAndAdjustRates@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x1800459A0 (-GetPresentStatisticsAndAdjustRates@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 *     ?Reinitialize@CPartitionVerticalBlankScheduler@@AEAAJXZ @ 0x180047008 (-Reinitialize@CPartitionVerticalBlankScheduler@@AEAAJXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Clear@CFrameInfo@@QEAAXXZ @ 0x1800B3854 (-Clear@CFrameInfo@@QEAAXXZ.c)
 *     ?UpdateTimes@CPartitionScheduler@@IEAAJXZ @ 0x1800B6380 (-UpdateTimes@CPartitionScheduler@@IEAAJXZ.c)
 *     TemplateEventDescriptor @ 0x1800BCF6C (TemplateEventDescriptor.c)
 *     ?Trace@CFrameInfo@@QEAAXK_K00@Z @ 0x180111684 (-Trace@CFrameInfo@@QEAAXK_K00@Z.c)
 *     ?ComputeVSyncInfo@CPartitionVerticalBlankScheduler@@AEAAJXZ @ 0x1801118EC (-ComputeVSyncInfo@CPartitionVerticalBlankScheduler@@AEAAJXZ.c)
 */

__int64 __fastcall CPartitionVerticalBlankScheduler::UpdateTimes(CPartitionVerticalBlankScheduler *this)
{
  char v1; // al
  int v3; // eax
  int v4; // edx
  int v5; // edi
  int v6; // eax
  __int64 v7; // rcx
  int updated; // eax
  __int64 v9; // rcx
  unsigned int v11; // [rsp+28h] [rbp+20h]

  v1 = Microsoft_Windows_Dwm_CoreEnableBits;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
  {
    TemplateEventDescriptor((__int64)this, &EVTDESC_SCHEDULE_UPDATE_TIMES_Start);
    v1 = Microsoft_Windows_Dwm_CoreEnableBits;
  }
  if ( *((_BYTE *)this + 22280) && *((_BYTE *)this + 22281) )
  {
    if ( (v1 & 2) != 0 )
      TemplateEventDescriptor((__int64)this, &EVTDESC_SCHEDULE_RESET_Start);
    v3 = CPartitionVerticalBlankScheduler::RetireFrames(this, 1);
    v5 = v3;
    if ( v3 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x9FBu);
    }
    else
    {
      CCrossThreadComposition::Reset(*((CCrossThreadComposition **)this + 23), v4);
      v6 = CPartitionVerticalBlankScheduler::Reinitialize(this);
      *((_BYTE *)this + 22282) = 1;
      v5 = v6;
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
        TemplateEventDescriptor(v7, &EVTDESC_SCHEDULE_RESET_Stop);
    }
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, &dword_1801B083C, 1u, v5, 0x4E0u);
      goto LABEL_21;
    }
  }
  CFrameInfo::Clear((CPartitionVerticalBlankScheduler *)((char *)this + 1352 * *((unsigned int *)this + 5478) + 280));
  CPartitionVerticalBlankScheduler::GetPresentStatisticsAndAdjustRates(this);
  updated = CPartitionScheduler::UpdateTimes((LARGE_INTEGER *)this);
  *((_DWORD *)this + 6324) = updated;
  v5 = updated;
  if ( updated < 0 )
  {
    v11 = 1267;
  }
  else
  {
    *(_QWORD *)(*((_QWORD *)this + 2741) + 248LL) = *((_QWORD *)this + 8);
    *(_QWORD *)(*((_QWORD *)this + 2741) + 256LL) = *((_QWORD *)this + 4);
    updated = CPartitionVerticalBlankScheduler::ComputeVSyncInfo(this);
    v5 = updated;
    if ( updated < 0 )
    {
      v11 = 1274;
    }
    else
    {
      updated = CPartitionVerticalBlankScheduler::RetireFrames(this, 0);
      v5 = updated;
      if ( updated >= 0 )
      {
        *(_DWORD *)(*((_QWORD *)this + 2741) + 16LL) = *(_DWORD *)(*((_QWORD *)this + 2742) + 16LL) + 1;
        goto LABEL_21;
      }
      v11 = 1276;
    }
  }
  MilInstrumentationCheckHR(0x14u, &dword_1801B083C, 1u, updated, v11);
LABEL_21:
  CPartitionVerticalBlankScheduler::CalculateFrameTimeDelta(this);
  CFrameInfo::Trace(*((CFrameInfo **)this + 2741), *((_DWORD *)this + 5478));
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    TemplateEventDescriptor(v9, &EVTDESC_SCHEDULE_UPDATE_TIMES_Stop);
  return (unsigned int)v5;
}
