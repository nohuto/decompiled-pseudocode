/*
 * XREFs of ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x1C0023418
 * Callers:
 *     ?RemoveCrossDeviceVisualChild@CApplicationChannel@DirectComposition@@SAJIIII@Z @ 0x1C0014730 (-RemoveCrossDeviceVisualChild@CApplicationChannel@DirectComposition@@SAJIIII@Z.c)
 *     ?UnregisterChannel@CConnection@DirectComposition@@QEAAXPEAVCBatch@2@_N@Z @ 0x1C0023264 (-UnregisterChannel@CConnection@DirectComposition@@QEAAXPEAVCBatch@2@_N@Z.c)
 *     ??1CChannel@DirectComposition@@MEAA@XZ @ 0x1C00234F0 (--1CChannel@DirectComposition@@MEAA@XZ.c)
 *     ?EmitCreationCommand@CDuplicatedVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0023A80 (-EmitCreationCommand@CDuplicatedVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?AddCrossDeviceVisualChild@CApplicationChannel@DirectComposition@@SAJIIIIHII@Z @ 0x1C0023C08 (-AddCrossDeviceVisualChild@CApplicationChannel@DirectComposition@@SAJIIIIHII@Z.c)
 *     ?Delete@CSharedSystemResource@DirectComposition@@MEAAJPEAU_WIN32_DELETEMETHOD_PARAMETERS@@@Z @ 0x1C0023EB0 (-Delete@CSharedSystemResource@DirectComposition@@MEAAJPEAU_WIN32_DELETEMETHOD_PARAMETERS@@@Z.c)
 *     ?Initialize@CSharedSystemResource@DirectComposition@@IEAAJI@Z @ 0x1C0023F00 (-Initialize@CSharedSystemResource@DirectComposition@@IEAAJI@Z.c)
 *     ??_GCProcessData@DirectComposition@@AEAAPEAXI@Z @ 0x1C002464C (--_GCProcessData@DirectComposition@@AEAAPEAXI@Z.c)
 *     ?Create@CApplicationChannel@DirectComposition@@SAJPEAI@Z @ 0x1C0024874 (-Create@CApplicationChannel@DirectComposition@@SAJPEAI@Z.c)
 *     ?OnDwmRenderThreadExit@CConnection@DirectComposition@@SAXXZ @ 0x1C006B080 (-OnDwmRenderThreadExit@CConnection@DirectComposition@@SAXXZ.c)
 *     ?DestroyHandle@CConnection@DirectComposition@@SAJPEAUHDCOMPOSITIONCONNECTION__@@@Z @ 0x1C006B0DC (-DestroyHandle@CConnection@DirectComposition@@SAJPEAUHDCOMPOSITIONCONNECTION__@@@Z.c)
 *     NtDCompositionSignalGpuFence @ 0x1C006B170 (NtDCompositionSignalGpuFence.c)
 *     ?Create@CConnection@DirectComposition@@SAJPEAXPEAPEAUHDCOMPOSITIONCONNECTION__@@@Z @ 0x1C0080790 (-Create@CConnection@DirectComposition@@SAJPEAXPEAPEAUHDCOMPOSITIONCONNECTION__@@@Z.c)
 *     ?Create@CDwmChannel@DirectComposition@@SAJPEAI@Z @ 0x1C0082120 (-Create@CDwmChannel@DirectComposition@@SAJPEAI@Z.c)
 *     DCompositionForceRender @ 0x1C00D3C30 (DCompositionForceRender.c)
 *     NtDCompositionEnableDDASupport @ 0x1C00D3F30 (NtDCompositionEnableDDASupport.c)
 *     NtDCompositionEnableMMCSS @ 0x1C00D3F80 (NtDCompositionEnableMMCSS.c)
 *     NtDCompositionPendingBatches @ 0x1C00D4038 (NtDCompositionPendingBatches.c)
 *     NtDCompositionSyncWait @ 0x1C00D44F0 (NtDCompositionSyncWait.c)
 *     NtDesktopCaptureBits @ 0x1C00D4690 (NtDesktopCaptureBits.c)
 * Callees:
 *     ??_GCConnection@DirectComposition@@AEAAPEAXI@Z @ 0x1C006B6A8 (--_GCConnection@DirectComposition@@AEAAPEAXI@Z.c)
 */

__int64 __fastcall DirectComposition::CConnection::Release(DirectComposition::CConnection *this, unsigned int a2)
{
  unsigned __int32 v2; // ebx

  v2 = _InterlockedDecrement((volatile signed __int32 *)this);
  if ( !v2 && this )
    DirectComposition::CConnection::`scalar deleting destructor'(this, a2);
  return v2;
}
