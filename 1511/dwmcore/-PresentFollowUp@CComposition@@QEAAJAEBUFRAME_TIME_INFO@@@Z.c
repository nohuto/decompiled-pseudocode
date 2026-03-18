/*
 * XREFs of ?PresentFollowUp@CComposition@@QEAAJAEBUFRAME_TIME_INFO@@@Z @ 0x18010132C
 * Callers:
 *     ?PresentFrame@CPartitionVerticalBlankScheduler@@AEAAJPEAVCFrameInfo@@I_N1@Z @ 0x18008F880 (-PresentFrame@CPartitionVerticalBlankScheduler@@AEAAJPEAVCFrameInfo@@I_N1@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?PresentFollowup@CRenderTargetManager@@QEAAJIPEAI@Z @ 0x180104C40 (-PresentFollowup@CRenderTargetManager@@QEAAJIPEAI@Z.c)
 */

__int64 __fastcall CComposition::PresentFollowUp(CRenderTargetManager **this, const struct FRAME_TIME_INFO *a2)
{
  unsigned int v3; // ebx
  int v4; // eax

  if ( *((_DWORD *)this + 84) == 2 )
  {
    return 142213121;
  }
  else
  {
    v4 = CRenderTargetManager::PresentFollowup(
           this[4],
           *(_DWORD *)(*(_QWORD *)a2 + 96LL),
           (unsigned int *)(*(_QWORD *)a2 + 164LL));
    v3 = v4;
    if ( v4 >= 0 )
    {
      if ( v4 == 142213130 )
        SetEvent(*((HANDLE *)this[63] + 12));
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x663u);
    }
  }
  return v3;
}
