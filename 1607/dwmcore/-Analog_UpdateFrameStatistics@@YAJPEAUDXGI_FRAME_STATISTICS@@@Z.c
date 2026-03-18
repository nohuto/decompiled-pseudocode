/*
 * XREFs of ?Analog_UpdateFrameStatistics@@YAJPEAUDXGI_FRAME_STATISTICS@@@Z @ 0x1801651A0
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateFrameStatistics@CAnalogExclusiveView@@QEAAXPEBUDXGI_FRAME_STATISTICS@@@Z @ 0x180165B94 (-UpdateFrameStatistics@CAnalogExclusiveView@@QEAAXPEBUDXGI_FRAME_STATISTICS@@@Z.c)
 *     ?GetExclusiveView@CAnalogCompositorClient@@AEAAPEAVCAnalogExclusiveView@@I@Z @ 0x180167530 (-GetExclusiveView@CAnalogCompositorClient@@AEAAPEAVCAnalogExclusiveView@@I@Z.c)
 */

__int64 __fastcall Analog_UpdateFrameStatistics(struct DXGI_FRAME_STATISTICS *a1)
{
  CAnalogCompositorClient *v2; // rcx
  CAnalogExclusiveView *ExclusiveView; // rax

  AcquireSRWLockExclusive(&stru_1801F03B0);
  ExclusiveView = CAnalogCompositorClient::GetExclusiveView(v2, dword_1801F0398);
  if ( ExclusiveView )
    CAnalogExclusiveView::UpdateFrameStatistics(ExclusiveView, a1);
  ReleaseSRWLockExclusive(&stru_1801F03B0);
  return 0LL;
}
