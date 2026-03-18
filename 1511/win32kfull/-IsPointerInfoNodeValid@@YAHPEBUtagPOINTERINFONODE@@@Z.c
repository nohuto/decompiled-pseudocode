/*
 * XREFs of ?IsPointerInfoNodeValid@@YAHPEBUtagPOINTERINFONODE@@@Z @ 0x1C01DB740
 * Callers:
 *     ?xxxCleanupManipulationThread@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C0114B2C (-xxxCleanupManipulationThread@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     ?ContactVisualization@@YAHKPEBUtagPOINTERINFONODE@@HK@Z @ 0x1C01DB1E0 (-ContactVisualization@@YAHKPEBUtagPOINTERINFONODE@@HK@Z.c)
 *     ?IsAnyNodeMessageNonDelegated@@YAHPEBUtagPOINTERINFONODE@@@Z @ 0x1C01F8E70 (-IsAnyNodeMessageNonDelegated@@YAHPEBUtagPOINTERINFONODE@@@Z.c)
 *     ?IsPointerInfoNodePrimary@@YAHPEBUtagPOINTERINFONODE@@@Z @ 0x1C01F8FEC (-IsPointerInfoNodePrimary@@YAHPEBUtagPOINTERINFONODE@@@Z.c)
 *     ?RevalidateFrameProcessing@@YAHPEAUtagTHREADINFO@@HPEBUtagPOINTERINFONODE@@H@Z @ 0x1C01F9A4C (-RevalidateFrameProcessing@@YAHPEAUtagTHREADINFO@@HPEBUtagPOINTERINFONODE@@H@Z.c)
 *     ?xxxDeterminePointerTargetWindow@@YAPEAUtagWND@@PEAUtagTHREADINFO@@PEBUtagPOINTERINFONODE@@PEAUtagQ@@HPEAHPEAUtagPOINT@@@Z @ 0x1C01F9D58 (-xxxDeterminePointerTargetWindow@@YAPEAUtagWND@@PEAUtagTHREADINFO@@PEBUtagPOINTERINFONODE@@PEAUt.c)
 *     ?xxxGeneratePointerInputMessagesCore@@YAHHHHPEBUtagPOINTERINPUTFRAME@@@Z @ 0x1C01FA3E4 (-xxxGeneratePointerInputMessagesCore@@YAHHHHPEBUtagPOINTERINPUTFRAME@@@Z.c)
 *     ?xxxPointerParentNotify@@YAXPEAUtagWND@@PEBUtagPOINTERINFONODE@@@Z @ 0x1C01FAF30 (-xxxPointerParentNotify@@YAXPEAUtagWND@@PEBUtagPOINTERINFONODE@@@Z.c)
 *     ?xxxSetPointerFrameTargetWindows@@YAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C01FB2E8 (-xxxSetPointerFrameTargetWindows@@YAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 *     ?_AdjustFrameHwnd@Edgy@@YAXPEBUtagPOINTERINPUTFRAME@@PEAUHWND__@@@Z @ 0x1C0229734 (-_AdjustFrameHwnd@Edgy@@YAXPEBUtagPOINTERINPUTFRAME@@PEAUHWND__@@@Z.c)
 *     ?_GetArcData@Edgy@@YA?AUtagARC_DATA@1@AEAUtagEDGY_DATA@@PEBUtagPOINTERINPUTFRAME@@@Z @ 0x1C02297F4 (-_GetArcData@Edgy@@YA-AUtagARC_DATA@1@AEAUtagEDGY_DATA@@PEBUtagPOINTERINPUTFRAME@@@Z.c)
 *     ?_StoreLastUpDataAndPost@Edgy@@YAXAEAUtagEDGY_DATA@@PEBUtagPOINTERINPUTFRAME@@@Z @ 0x1C022A31C (-_StoreLastUpDataAndPost@Edgy@@YAXAEAUtagEDGY_DATA@@PEBUtagPOINTERINPUTFRAME@@@Z.c)
 *     ?CommitAndReferenceFrame@PointerFrameList@@YAPEBUtagPOINTERINPUTFRAME@@PEAX0@Z @ 0x1C022EB20 (-CommitAndReferenceFrame@PointerFrameList@@YAPEBUtagPOINTERINPUTFRAME@@PEAX0@Z.c)
 *     ?DereferencePointerInputFrame@@YAXPEAUtagPOINTERINPUTFRAME@@@Z @ 0x1C022F4E0 (-DereferencePointerInputFrame@@YAXPEAUtagPOINTERINPUTFRAME@@@Z.c)
 *     ?FindValidNodeInFrame@@YAPEAUtagPOINTERINFONODE@@PEBUtagPOINTERINPUTFRAME@@GPEAK@Z @ 0x1C022F7F4 (-FindValidNodeInFrame@@YAPEAUtagPOINTERINFONODE@@PEBUtagPOINTERINPUTFRAME@@GPEAK@Z.c)
 *     ?IsAnyNodeMessageDelegated@@YAHPEBUtagPOINTERINFONODE@@@Z @ 0x1C022FC2C (-IsAnyNodeMessageDelegated@@YAHPEBUtagPOINTERINFONODE@@@Z.c)
 *     ?TryCoalesceQFrame@@YAXPEAUtagPOINTERINPUTFRAME@@PEBU1@PEBUtagPOINTERQFRAME@@@Z @ 0x1C0230A6C (-TryCoalesceQFrame@@YAXPEAUtagPOINTERINPUTFRAME@@PEBU1@PEBUtagPOINTERQFRAME@@@Z.c)
 *     xxxSetManipulationInputTarget @ 0x1C0231318 (xxxSetManipulationInputTarget.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsPointerInfoNodeValid(const struct tagPOINTERINFONODE *a1)
{
  unsigned int v1; // edx

  v1 = 0;
  if ( (*(_DWORD *)a1 & 0x1000) == 0 )
    return *((_DWORD *)a1 + 15) != 0;
  return v1;
}
