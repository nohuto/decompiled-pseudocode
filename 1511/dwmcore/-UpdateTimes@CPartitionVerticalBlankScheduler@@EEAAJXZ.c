/*
 * XREFs of ?UpdateTimes@CPartitionVerticalBlankScheduler@@EEAAJXZ @ 0x1800FCA40
 * Callers:
 *     <none>
 * Callees:
 *     ?Clear@CFrameInfo@@QEAAXXZ @ 0x180069158 (-Clear@CFrameInfo@@QEAAXXZ.c)
 *     ?Reset@CCrossThreadComposition@@UEAAXXZ @ 0x180082090 (-Reset@CCrossThreadComposition@@UEAAXXZ.c)
 *     ?RetireFrames@CPartitionVerticalBlankScheduler@@AEAAJ_N@Z @ 0x18008E3A0 (-RetireFrames@CPartitionVerticalBlankScheduler@@AEAAJ_N@Z.c)
 *     ?CalculateFrameTimeDelta@CPartitionVerticalBlankScheduler@@AEAA_KXZ @ 0x18008E6B4 (-CalculateFrameTimeDelta@CPartitionVerticalBlankScheduler@@AEAA_KXZ.c)
 *     ?GetPresentStatisticsAndAdjustRates@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x18008F290 (-GetPresentStatisticsAndAdjustRates@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 *     ?Reinitialize@CPartitionVerticalBlankScheduler@@AEAAJXZ @ 0x180090CF0 (-Reinitialize@CPartitionVerticalBlankScheduler@@AEAAJXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     TemplateEventDescriptor @ 0x1800BA27C (TemplateEventDescriptor.c)
 *     ?Trace@CFrameInfo@@QEAAXK_K00@Z @ 0x1800FC5E4 (-Trace@CFrameInfo@@QEAAXK_K00@Z.c)
 *     ?ComputeVSyncInfo@CPartitionVerticalBlankScheduler@@AEAAJXZ @ 0x1800FC874 (-ComputeVSyncInfo@CPartitionVerticalBlankScheduler@@AEAAJXZ.c)
 *     ?UpdateTimes@CPartitionScheduler@@IEAAJXZ @ 0x1800FCCE4 (-UpdateTimes@CPartitionScheduler@@IEAAJXZ.c)
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
  if ( *((_BYTE *)this + 22656) && *((_BYTE *)this + 22657) )
  {
    if ( (v1 & 2) != 0 )
      TemplateEventDescriptor((__int64)this, &EVTDESC_SCHEDULE_RESET_Start);
    v3 = CPartitionVerticalBlankScheduler::RetireFrames(this, 1);
    v5 = v3;
    if ( v3 >= 0 )
    {
      CCrossThreadComposition::Reset(*((CCrossThreadComposition **)this + 22), v4);
      v6 = CPartitionVerticalBlankScheduler::Reinitialize(this);
      *((_BYTE *)this + 22658) = 1;
      v5 = v6;
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
        TemplateEventDescriptor(v7, &EVTDESC_SCHEDULE_RESET_Stop);
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0xAB0u);
    }
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, &dword_180178D28, 1u, v5, 0x53Bu);
      goto LABEL_22;
    }
  }
  CFrameInfo::Clear((CPartitionVerticalBlankScheduler *)((char *)this + 1376 * *((unsigned int *)this + 5572) + 272));
  CPartitionVerticalBlankScheduler::GetPresentStatisticsAndAdjustRates(this);
  updated = CPartitionScheduler::UpdateTimes(this);
  *((_DWORD *)this + 6282) = updated;
  v5 = updated;
  if ( updated >= 0 )
  {
    *(_QWORD *)(*((_QWORD *)this + 2788) + 248LL) = *((_QWORD *)this + 8);
    *(_QWORD *)(*((_QWORD *)this + 2788) + 256LL) = *((_QWORD *)this + 4);
    updated = CPartitionVerticalBlankScheduler::ComputeVSyncInfo(this);
    v5 = updated;
    if ( updated >= 0 )
    {
      updated = CPartitionVerticalBlankScheduler::RetireFrames(this, 0);
      v5 = updated;
      if ( updated >= 0 )
      {
        *(_DWORD *)(*((_QWORD *)this + 2788) + 16LL) = *(_DWORD *)(*((_QWORD *)this + 2789) + 16LL) + 1;
        goto LABEL_22;
      }
      v11 = 1367;
    }
    else
    {
      v11 = 1365;
    }
  }
  else
  {
    v11 = 1358;
  }
  MilInstrumentationCheckHR(0x14u, &dword_180178D28, 1u, updated, v11);
LABEL_22:
  CPartitionVerticalBlankScheduler::CalculateFrameTimeDelta(this);
  CFrameInfo::Trace(*((CFrameInfo **)this + 2788), *((_DWORD *)this + 5572));
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    TemplateEventDescriptor(v9, &EVTDESC_SCHEDULE_UPDATE_TIMES_Stop);
  return (unsigned int)v5;
}
