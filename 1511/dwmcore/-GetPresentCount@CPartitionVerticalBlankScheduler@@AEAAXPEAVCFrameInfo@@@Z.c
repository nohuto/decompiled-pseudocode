/*
 * XREFs of ?GetPresentCount@CPartitionVerticalBlankScheduler@@AEAAXPEAVCFrameInfo@@@Z @ 0x1800FCC44
 * Callers:
 *     ?ProcessOutOfFrameDirectFlip@CPartitionVerticalBlankScheduler@@IEAAJPEAVCFrameInfo@@PEA_N@Z @ 0x18008E4D4 (-ProcessOutOfFrameDirectFlip@CPartitionVerticalBlankScheduler@@IEAAJPEAVCFrameInfo@@PEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     TemplateEventDescriptor @ 0x1800BA27C (TemplateEventDescriptor.c)
 *     ?GetLastPresentCount@CRenderTargetManager@@QEAAJPEAI0@Z @ 0x1800FB7B0 (-GetLastPresentCount@CRenderTargetManager@@QEAAJPEAI0@Z.c)
 *     Template_qN16 @ 0x180100140 (Template_qN16.c)
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
      TemplateEventDescriptor((__int64)this, &EVTDESC_SCHEDULE_GETPRESENTCOUNT_Start);
    v4 = *((_QWORD *)this + 22);
    v5 = (unsigned int *)((char *)a2 + 16);
    v10 = 16;
    LastPresentCount = CRenderTargetManager::GetLastPresentCount(*(CRenderTargetManager **)(v4 + 32), &v10, v5);
    if ( LastPresentCount < 0 )
      MilInstrumentationCheckHR(0x14u, &dword_18016FE48, 1u, LastPresentCount, 0x1029u);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      Template_qN16(v8, v7, v10, v9, (__int64)v5);
  }
}
