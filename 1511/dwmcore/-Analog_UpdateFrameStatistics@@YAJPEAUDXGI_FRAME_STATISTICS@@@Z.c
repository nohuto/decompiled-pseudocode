/*
 * XREFs of ?Analog_UpdateFrameStatistics@@YAJPEAUDXGI_FRAME_STATISTICS@@@Z @ 0x18013AFB0
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateFrameStatistics@CAnalogExclusiveView@@QEAAXPEBUDXGI_FRAME_STATISTICS@@@Z @ 0x18013BA0C (-UpdateFrameStatistics@CAnalogExclusiveView@@QEAAXPEBUDXGI_FRAME_STATISTICS@@@Z.c)
 *     ?GetExclusiveView@CAnalogCompositorClient@@AEAAPEAVCAnalogExclusiveView@@I@Z @ 0x18013D514 (-GetExclusiveView@CAnalogCompositorClient@@AEAAPEAVCAnalogExclusiveView@@I@Z.c)
 */

__int64 __fastcall Analog_UpdateFrameStatistics(struct DXGI_FRAME_STATISTICS *a1)
{
  CAnalogCompositorClient *v2; // rcx
  CAnalogExclusiveView *ExclusiveView; // rax

  AcquireSRWLockExclusive(&stru_1801A3FC0);
  ExclusiveView = CAnalogCompositorClient::GetExclusiveView(v2, dword_1801A3FA8);
  if ( ExclusiveView )
    CAnalogExclusiveView::UpdateFrameStatistics(ExclusiveView, a1);
  ReleaseSRWLockExclusive(&stru_1801A3FC0);
  return 0LL;
}
