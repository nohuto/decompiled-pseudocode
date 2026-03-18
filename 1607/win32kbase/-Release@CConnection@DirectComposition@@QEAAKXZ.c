/*
 * XREFs of ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x1C00187F4
 * Callers:
 *     ?Create@CApplicationChannel@DirectComposition@@SAJPEAI0PEAPEAX@Z @ 0x1C000D5B4 (-Create@CApplicationChannel@DirectComposition@@SAJPEAI0PEAPEAX@Z.c)
 *     ??_GCProcessData@DirectComposition@@AEAAPEAXI@Z @ 0x1C000DC00 (--_GCProcessData@DirectComposition@@AEAAPEAXI@Z.c)
 *     NtDCompositionRetireFrame @ 0x1C0017390 (NtDCompositionRetireFrame.c)
 *     NtDCompositionGetFrameStatistics @ 0x1C00174F0 (NtDCompositionGetFrameStatistics.c)
 *     ?UnregisterChannel@CConnection@DirectComposition@@QEAAXPEAVCBatch@2@_N@Z @ 0x1C00191A4 (-UnregisterChannel@CConnection@DirectComposition@@QEAAXPEAVCBatch@2@_N@Z.c)
 *     ??1CChannel@DirectComposition@@MEAA@XZ @ 0x1C0042564 (--1CChannel@DirectComposition@@MEAA@XZ.c)
 *     ?Delete@CSharedSystemResource@DirectComposition@@MEAAJPEAU_WIN32_DELETEMETHOD_PARAMETERS@@@Z @ 0x1C0048740 (-Delete@CSharedSystemResource@DirectComposition@@MEAAJPEAU_WIN32_DELETEMETHOD_PARAMETERS@@@Z.c)
 *     ?Initialize@CSharedSystemResource@DirectComposition@@IEAAJI@Z @ 0x1C0048798 (-Initialize@CSharedSystemResource@DirectComposition@@IEAAJI@Z.c)
 *     ?OnDwmRenderThreadExit@CConnection@DirectComposition@@SAXXZ @ 0x1C0078540 (-OnDwmRenderThreadExit@CConnection@DirectComposition@@SAXXZ.c)
 *     ?Create@CDwmChannel@DirectComposition@@SAJPEAI@Z @ 0x1C00803E0 (-Create@CDwmChannel@DirectComposition@@SAJPEAI@Z.c)
 *     ?Create@CConnection@DirectComposition@@SAJPEAXPEAPEAUHDCOMPOSITIONCONNECTION__@@@Z @ 0x1C00812A0 (-Create@CConnection@DirectComposition@@SAJPEAXPEAPEAUHDCOMPOSITIONCONNECTION__@@@Z.c)
 *     ?DestroyHandle@CConnection@DirectComposition@@SAJPEAUHDCOMPOSITIONCONNECTION__@@@Z @ 0x1C0082810 (-DestroyHandle@CConnection@DirectComposition@@SAJPEAUHDCOMPOSITIONCONNECTION__@@@Z.c)
 *     DCompositionForceRender @ 0x1C00E3140 (DCompositionForceRender.c)
 *     DCompositionRenderBlack @ 0x1C00E31B0 (DCompositionRenderBlack.c)
 *     NtDCompositionEnableDDASupport @ 0x1C00E3760 (NtDCompositionEnableDDASupport.c)
 *     NtDCompositionEnableMMCSS @ 0x1C00E37B0 (NtDCompositionEnableMMCSS.c)
 *     NtDCompositionSyncWait @ 0x1C00E3960 (NtDCompositionSyncWait.c)
 *     NtDesktopCaptureBits @ 0x1C00E3B00 (NtDesktopCaptureBits.c)
 * Callees:
 *     ??_GCConnection@DirectComposition@@AEAAPEAXI@Z @ 0x1C0018814 (--_GCConnection@DirectComposition@@AEAAPEAXI@Z.c)
 */

__int64 __fastcall DirectComposition::CConnection::Release(DirectComposition::CConnection *this, unsigned int a2)
{
  unsigned __int32 v2; // ebx

  v2 = _InterlockedDecrement((volatile signed __int32 *)this);
  if ( !v2 && this )
    DirectComposition::CConnection::`scalar deleting destructor'(this, a2);
  return v2;
}
