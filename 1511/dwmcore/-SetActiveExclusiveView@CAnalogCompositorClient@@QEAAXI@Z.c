/*
 * XREFs of ?SetActiveExclusiveView@CAnalogCompositorClient@@QEAAXI@Z @ 0x18013D6AC
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x180096A00 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 *     ??1CAnalogCompositorClient@@QEAA@XZ @ 0x1800BA658 (--1CAnalogCompositorClient@@QEAA@XZ.c)
 * Callees:
 *     ?ActivateView@CAnalogExclusiveView@@QEAAJXZ @ 0x18013B398 (-ActivateView@CAnalogExclusiveView@@QEAAJXZ.c)
 *     ?DeactivateView@CAnalogExclusiveView@@QEAAXXZ @ 0x18013B4A8 (-DeactivateView@CAnalogExclusiveView@@QEAAXXZ.c)
 *     ?GetExclusiveView@CAnalogCompositorClient@@AEAAPEAVCAnalogExclusiveView@@I@Z @ 0x18013D514 (-GetExclusiveView@CAnalogCompositorClient@@AEAAPEAVCAnalogExclusiveView@@I@Z.c)
 */

void __fastcall CAnalogCompositorClient::SetActiveExclusiveView(CAnalogCompositorClient *this, int a2)
{
  CAnalogExclusiveView *ExclusiveView; // rax
  CAnalogCompositorClient *v4; // rcx
  CAnalogExclusiveView *v5; // rax

  if ( a2 != dword_1801A3FA8 )
  {
    ExclusiveView = CAnalogCompositorClient::GetExclusiveView(this, dword_1801A3FA8);
    if ( ExclusiveView )
      CAnalogExclusiveView::DeactivateView(ExclusiveView);
    v5 = CAnalogCompositorClient::GetExclusiveView(v4, a2);
    if ( v5 )
      CAnalogExclusiveView::ActivateView(v5);
    dword_1801A3FA8 = a2;
  }
}
