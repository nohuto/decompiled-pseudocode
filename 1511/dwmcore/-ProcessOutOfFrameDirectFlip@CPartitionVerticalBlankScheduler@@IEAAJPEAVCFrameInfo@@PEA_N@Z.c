/*
 * XREFs of ?ProcessOutOfFrameDirectFlip@CPartitionVerticalBlankScheduler@@IEAAJPEAVCFrameInfo@@PEA_N@Z @ 0x18008E4D4
 * Callers:
 *     ?Run@CPartitionVerticalBlankScheduler@@MEAAJXZ @ 0x18008FC60 (-Run@CPartitionVerticalBlankScheduler@@MEAAJXZ.c)
 * Callees:
 *     ?Init@COutOfFrameDirectFlipStats@@QEAAXPEAVCCompositionSurfaceInfo@@I@Z @ 0x18001DB94 (-Init@COutOfFrameDirectFlipStats@@QEAAXPEAVCCompositionSurfaceInfo@@I@Z.c)
 *     ?Reset@COutOfFrameDirectFlipStats@@QEAAXXZ @ 0x1800691FC (-Reset@COutOfFrameDirectFlipStats@@QEAAXXZ.c)
 *     ?PresentOutOfFrameDirectFlip@CRenderTargetManager@@QEAAJXZ @ 0x18007B12C (-PresentOutOfFrameDirectFlip@CRenderTargetManager@@QEAAJXZ.c)
 *     ?CalculateFrameTimeDelta@CPartitionVerticalBlankScheduler@@AEAA_KXZ @ 0x18008E6B4 (-CalculateFrameTimeDelta@CPartitionVerticalBlankScheduler@@AEAA_KXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ProcessOutOfFrameDirectFlipTokens@CComposition@@QEAAJIPEA_N0PEAVCOutOfFrameDirectFlipStats@@@Z @ 0x18009E0F0 (-ProcessOutOfFrameDirectFlipTokens@CComposition@@QEAAJIPEA_N0PEAVCOutOfFrameDirectFlipStats@@@Z.c)
 *     TemplateEventDescriptor @ 0x1800BA27C (TemplateEventDescriptor.c)
 *     ?Trace@CFrameInfo@@QEAAXK_K00@Z @ 0x1800FC5E4 (-Trace@CFrameInfo@@QEAAXK_K00@Z.c)
 *     ?GetPresentCount@CPartitionVerticalBlankScheduler@@AEAAXPEAVCFrameInfo@@@Z @ 0x1800FCC44 (-GetPresentCount@CPartitionVerticalBlankScheduler@@AEAAXPEAVCFrameInfo@@@Z.c)
 *     Template_xxxxq @ 0x1801004EC (Template_xxxxq.c)
 */

__int64 __fastcall CPartitionVerticalBlankScheduler::ProcessOutOfFrameDirectFlip(
        CPartitionVerticalBlankScheduler *this,
        struct CFrameInfo *a2,
        bool *a3)
{
  int v6; // eax
  __int64 v7; // rcx
  int v8; // edi
  __int64 v9; // r8
  __int64 v10; // rax
  int v11; // r10d
  unsigned __int64 v12; // rax
  unsigned int v13; // r10d
  struct CCompositionSurfaceInfo *v15[2]; // [rsp+40h] [rbp-28h] BYREF
  unsigned int v16; // [rsp+50h] [rbp-18h]
  bool v17; // [rsp+70h] [rbp+8h] BYREF

  v15[0] = 0LL;
  v15[1] = 0LL;
  v16 = 0;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 8) != 0 )
    TemplateEventDescriptor(this, &EVTDESC_SCHEDULE_PROCESS_OUTOFFRAME_DFLIP_Start);
  v6 = CComposition::ProcessOutOfFrameDirectFlipTokens(
         *((CComposition **)this + 22),
         *((_DWORD *)a2 + 25),
         &v17,
         a3,
         (struct COutOfFrameDirectFlipStats *)v15);
  v8 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x60Bu);
  }
  else if ( v17 )
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    {
      v10 = (*((_QWORD *)this + 8) - *((_QWORD *)this + 7)) / *((_QWORD *)this + 10);
      v9 = *((_QWORD *)this + 8) - *((_QWORD *)this + 7);
      Template_xxxxq(
        *((_DWORD *)this + 20) * v10,
        (unsigned __int64)(10000000 * (v9 - *((_QWORD *)this + 10) * v10)) % *((_QWORD *)this + 10),
        *((_DWORD *)this + 6)
      + 10000000 * v10
      + (unsigned __int64)(10000000 * (v9 - *((_QWORD *)this + 10) * v10)) / *((_QWORD *)this + 10),
        *((_DWORD *)a2 + 338) - *((_DWORD *)this + 48),
        *((_QWORD *)a2 + 11),
        *((_BYTE *)a2 + 80) - 1,
        0);
    }
    *((_BYTE *)a2 + 272) = 1;
    v8 = CRenderTargetManager::PresentOutOfFrameDirectFlip(*(CRenderTargetManager **)(*((_QWORD *)this + 22) + 32LL));
    *((_DWORD *)a2 + 294) = v8;
    v7 = *(unsigned int *)(*((_QWORD *)this + 22) + 336LL);
    *((_DWORD *)a2 + 296) = v7;
    if ( v8 >= 0 )
    {
      *((_BYTE *)a2 + 273) = 1;
      v11 = *((_DWORD *)this + 5572);
      ++*((_DWORD *)this + 6348);
      ++*((_QWORD *)this + 6);
      *((_DWORD *)this + 5574) = v11;
      v12 = CPartitionVerticalBlankScheduler::CalculateFrameTimeDelta(this);
      CFrameInfo::Trace(a2, v13, *((_QWORD *)this + 29), v12, *((_QWORD *)this + 2790));
      COutOfFrameDirectFlipStats::Init((CMILCOMBase **)a2 + 164, v15[0], v16);
      CPartitionVerticalBlankScheduler::GetPresentCount(this, a2);
      *((_QWORD *)a2 + 35) = *((_QWORD *)this + 8);
    }
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      TemplateEventDescriptor(v7, &EVTDESC_SCHEDULE_PRESENT_Stop);
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 8) != 0 )
    TemplateEventDescriptor(v7, &EVTDESC_SCHEDULE_PROCESS_OUTOFFRAME_DFLIP_Stop);
  COutOfFrameDirectFlipStats::Reset(v15);
  return (unsigned int)v8;
}
