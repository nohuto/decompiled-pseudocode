/*
 * XREFs of ?ProcessOutOfFrameDirectFlip@CPartitionVerticalBlankScheduler@@IEAAJPEAVCFrameInfo@@PEA_N@Z @ 0x1800E1A90
 * Callers:
 *     ?Run@CPartitionVerticalBlankScheduler@@MEAAJXZ @ 0x1800945D0 (-Run@CPartitionVerticalBlankScheduler@@MEAAJXZ.c)
 * Callees:
 *     ?Init@COutOfFrameDirectFlipStats@@QEAAXPEAVCCompositionSurfaceInfo@@I@Z @ 0x180010098 (-Init@COutOfFrameDirectFlipStats@@QEAAXPEAVCCompositionSurfaceInfo@@I@Z.c)
 *     ?Reset@COutOfFrameDirectFlipStats@@QEAAXXZ @ 0x18005ECA0 (-Reset@COutOfFrameDirectFlipStats@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Trace@CFrameInfo@@QEAAXK_K00@Z @ 0x1800DF178 (-Trace@CFrameInfo@@QEAAXK_K00@Z.c)
 *     ?CalculateFrameTimeDelta@CPartitionVerticalBlankScheduler@@AEAA_KXZ @ 0x1800DF450 (-CalculateFrameTimeDelta@CPartitionVerticalBlankScheduler@@AEAA_KXZ.c)
 *     ?GetPresentCount@CPartitionVerticalBlankScheduler@@AEAAXPEAVCFrameInfo@@@Z @ 0x1800DF4BC (-GetPresentCount@CPartitionVerticalBlankScheduler@@AEAAXPEAVCFrameInfo@@@Z.c)
 *     TemplateEventDescriptor @ 0x1800E1E38 (TemplateEventDescriptor.c)
 *     Template_xxxxq @ 0x1800E2200 (Template_xxxxq.c)
 *     ?ProcessOutOfFrameDirectFlipTokens@CComposition@@QEAAJIPEA_N0PEAVCOutOfFrameDirectFlipStats@@@Z @ 0x1800E3798 (-ProcessOutOfFrameDirectFlipTokens@CComposition@@QEAAJIPEA_N0PEAVCOutOfFrameDirectFlipStats@@@Z.c)
 *     ?PresentOutOfFrameDirectFlip@CRenderTargetManager@@QEAAJXZ @ 0x1800E8D50 (-PresentOutOfFrameDirectFlip@CRenderTargetManager@@QEAAJXZ.c)
 */

__int64 __fastcall CPartitionVerticalBlankScheduler::ProcessOutOfFrameDirectFlip(
        CComposition **this,
        struct CFrameInfo *a2,
        bool *a3)
{
  int v6; // eax
  __int64 v7; // rcx
  int v8; // edi
  signed __int64 v9; // r8
  unsigned __int64 v10; // rax
  int v11; // r10d
  int v12; // r10d
  struct CCompositionSurfaceInfo *v14[2]; // [rsp+40h] [rbp-28h] BYREF
  unsigned int v15; // [rsp+50h] [rbp-18h]
  bool v16; // [rsp+70h] [rbp+8h] BYREF

  v14[0] = 0LL;
  v14[1] = 0LL;
  v15 = 0;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 8) != 0 )
    TemplateEventDescriptor(this, &EVTDESC_SCHEDULE_PROCESS_OUTOFFRAME_DFLIP_Start);
  v6 = CComposition::ProcessOutOfFrameDirectFlipTokens(
         this[21],
         *((_DWORD *)a2 + 25),
         &v16,
         a3,
         (struct COutOfFrameDirectFlipStats *)v14);
  v8 = v6;
  if ( v6 >= 0 )
  {
    if ( v16 )
    {
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      {
        v10 = (this[7] - this[6]) / (unsigned __int64)this[9];
        v9 = this[7] - this[6];
        Template_xxxxq(
          *((_DWORD *)this + 18) * v10,
          10000000 * (v9 - (unsigned __int64)this[9] * v10) % (unsigned __int64)this[9],
          *((_DWORD *)this + 4)
        + 10000000 * v10
        + 10000000 * (v9 - (unsigned __int64)this[9] * v10) / (unsigned __int64)this[9],
          *((_DWORD *)a2 + 338) - *((_DWORD *)this + 46),
          *((_QWORD *)a2 + 11),
          *((_BYTE *)a2 + 80) - 1,
          0);
      }
      *((_BYTE *)a2 + 272) = 1;
      v8 = CRenderTargetManager::PresentOutOfFrameDirectFlip(*((CRenderTargetManager **)this[21] + 4));
      *((_DWORD *)a2 + 294) = v8;
      v7 = *((unsigned int *)this[21] + 84);
      *((_DWORD *)a2 + 296) = v7;
      if ( v8 >= 0 )
      {
        *((_BYTE *)a2 + 273) = 1;
        v11 = *((_DWORD *)this + 5570);
        ++*((_DWORD *)this + 6316);
        this[5] = (CComposition *)((char *)this[5] + 1);
        *((_DWORD *)this + 5572) = v11;
        CPartitionVerticalBlankScheduler::CalculateFrameTimeDelta((CPartitionVerticalBlankScheduler *)this);
        CFrameInfo::Trace(a2, v12);
        COutOfFrameDirectFlipStats::Init((CMILCOMBase **)a2 + 164, v14[0], v15);
        CPartitionVerticalBlankScheduler::GetPresentCount((CPartitionVerticalBlankScheduler *)this, a2);
        *((_QWORD *)a2 + 35) = this[7];
      }
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
        TemplateEventDescriptor(v7, &EVTDESC_SCHEDULE_PRESENT_Stop);
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x5FBu);
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 8) != 0 )
    TemplateEventDescriptor(v7, &EVTDESC_SCHEDULE_PROCESS_OUTOFFRAME_DFLIP_Stop);
  COutOfFrameDirectFlipStats::Reset(v14);
  return (unsigned int)v8;
}
