/*
 * XREFs of ?SetActiveExclusiveView@CAnalogCompositorClient@@QEAAXI@Z @ 0x1801676B8
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18003CEA0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 *     ??1CAnalogCompositorClient@@QEAA@XZ @ 0x1800BD2C0 (--1CAnalogCompositorClient@@QEAA@XZ.c)
 * Callees:
 *     ?ActivateView@CAnalogExclusiveView@@QEAAJXZ @ 0x180165534 (-ActivateView@CAnalogExclusiveView@@QEAAJXZ.c)
 *     ?DeactivateView@CAnalogExclusiveView@@QEAAXXZ @ 0x180165670 (-DeactivateView@CAnalogExclusiveView@@QEAAXXZ.c)
 *     ?GetExclusiveView@CAnalogCompositorClient@@AEAAPEAVCAnalogExclusiveView@@I@Z @ 0x180167530 (-GetExclusiveView@CAnalogCompositorClient@@AEAAPEAVCAnalogExclusiveView@@I@Z.c)
 */

void __fastcall CAnalogCompositorClient::SetActiveExclusiveView(CAnalogCompositorClient *this, int a2)
{
  CAnalogExclusiveView *ExclusiveView; // rax
  CAnalogCompositorClient *v4; // rcx
  CAnalogExclusiveView *v5; // rax

  if ( a2 != dword_1801F0398 )
  {
    ExclusiveView = CAnalogCompositorClient::GetExclusiveView(this, dword_1801F0398);
    if ( ExclusiveView )
      CAnalogExclusiveView::DeactivateView(ExclusiveView);
    v5 = CAnalogCompositorClient::GetExclusiveView(v4, a2);
    if ( v5 )
      CAnalogExclusiveView::ActivateView(v5);
    dword_1801F0398 = a2;
  }
}
