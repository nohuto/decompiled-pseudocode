/*
 * XREFs of ?GetPresentCount@CPartitionVerticalBlankScheduler@@AEAAXPEAVCFrameInfo@@@Z @ 0x1800DF4BC
 * Callers:
 *     ?ProcessOutOfFrameDirectFlip@CPartitionVerticalBlankScheduler@@IEAAJPEAVCFrameInfo@@PEA_N@Z @ 0x1800E1A90 (-ProcessOutOfFrameDirectFlip@CPartitionVerticalBlankScheduler@@IEAAJPEAVCFrameInfo@@PEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetLastPresentCount@CRenderTargetManager@@QEAAJPEAI0@Z @ 0x1800DE7A4 (-GetLastPresentCount@CRenderTargetManager@@QEAAJPEAI0@Z.c)
 *     TemplateEventDescriptor @ 0x1800E1E38 (TemplateEventDescriptor.c)
 *     Template_qN16 @ 0x1800E1E54 (Template_qN16.c)
 */

void __fastcall CPartitionVerticalBlankScheduler::GetPresentCount(
        CPartitionVerticalBlankScheduler *this,
        struct CFrameInfo *a2)
{
  __int64 v4; // rcx
  unsigned int *v5; // rbx
  int LastPresentCount; // eax
  int v7; // edx
  int v8; // ecx
  int v9; // r9d
  unsigned int v10; // [rsp+48h] [rbp+10h] BYREF

  if ( *((_BYTE *)a2 + 273) )
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      TemplateEventDescriptor(this, &EVTDESC_SCHEDULE_GETPRESENTCOUNT_Start);
    v4 = *((_QWORD *)this + 21);
    v5 = (unsigned int *)((char *)a2 + 16);
    v10 = 16;
    LastPresentCount = CRenderTargetManager::GetLastPresentCount(*(CRenderTargetManager **)(v4 + 32), &v10, v5);
    if ( LastPresentCount < 0 )
      MilInstrumentationCheckHR(0x14u, &dword_1801663C8, 1u, LastPresentCount, 0x100Bu);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      Template_qN16(v8, v7, v10, v9, (__int64)v5);
  }
}
