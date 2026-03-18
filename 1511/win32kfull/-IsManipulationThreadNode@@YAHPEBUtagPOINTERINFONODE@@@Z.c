/*
 * XREFs of ?IsManipulationThreadNode@@YAHPEBUtagPOINTERINFONODE@@@Z @ 0x1C01F8EE0
 * Callers:
 *     ?xxxCleanupManipulationThread@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C0114B2C (-xxxCleanupManipulationThread@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     ?CountMTNodesReadyForRouting@@YAIPEBUtagPOINTERINPUTFRAME@@@Z @ 0x1C01F797C (-CountMTNodesReadyForRouting@@YAIPEBUtagPOINTERINPUTFRAME@@@Z.c)
 *     ?NodeMatchesMTGeneration@@YAHPEBUtagPOINTERINFONODE@@H@Z @ 0x1C01F92C0 (-NodeMatchesMTGeneration@@YAHPEBUtagPOINTERINFONODE@@H@Z.c)
 *     ?xxxProcessPointerPrimaryDown@@YAHPEBUtagPOINTERINPUTFRAME@@@Z @ 0x1C01FAFF4 (-xxxProcessPointerPrimaryDown@@YAHPEBUtagPOINTERINPUTFRAME@@@Z.c)
 *     BuildManipulationInputInfo @ 0x1C01FBB38 (BuildManipulationInputInfo.c)
 *     ?CommitAndReferenceFrame@PointerFrameList@@YAPEBUtagPOINTERINPUTFRAME@@PEAX0@Z @ 0x1C022EB20 (-CommitAndReferenceFrame@PointerFrameList@@YAPEBUtagPOINTERINPUTFRAME@@PEAX0@Z.c)
 *     ?PopulatePointerInfoNode@@YAHPEAUtagPOINTERINPUTFRAME@@PEAUtagPOINTERINFONODE@@@Z @ 0x1C022FD48 (-PopulatePointerInfoNode@@YAHPEAUtagPOINTERINPUTFRAME@@PEAUtagPOINTERINFONODE@@@Z.c)
 *     ?ProcessQFrameNode@@YAXPEAUtagPOINTERQFRAME@@PEBUtagPOINTERINPUTFRAME@@PEAUtagPOINTERINFONODE@@@Z @ 0x1C0230068 (-ProcessQFrameNode@@YAXPEAUtagPOINTERQFRAME@@PEBUtagPOINTERINPUTFRAME@@PEAUtagPOINTERINFONODE@@@.c)
 *     ?ProcessWindowEnterLeave@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagPOINTERINFONODE@@@Z @ 0x1C02301AC (-ProcessWindowEnterLeave@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagPOINTERINFONODE@@@Z.c)
 *     xxxSetManipulationInputTarget @ 0x1C0231318 (xxxSetManipulationInputTarget.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsManipulationThreadNode(const struct tagPOINTERINFONODE *a1)
{
  return (*((_DWORD *)a1 + 1) & 0x80u) != 0 && (*(_DWORD *)a1 & 0x400) != 0 && (*(_DWORD *)a1 & 0x800) == 0;
}
