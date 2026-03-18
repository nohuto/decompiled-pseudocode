/*
 * XREFs of ?IsManipulationThreadNode@@YAHPEBUtagPOINTERINFONODE@@@Z @ 0x1C01F00C8
 * Callers:
 *     ?xxxCleanupManipulationThread@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C01088A8 (-xxxCleanupManipulationThread@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     ?CommitAndReferenceFrame@PointerFrameList@@YAPEBUtagPOINTERINPUTFRAME@@PEAX0@Z @ 0x1C01BFE30 (-CommitAndReferenceFrame@PointerFrameList@@YAPEBUtagPOINTERINPUTFRAME@@PEAX0@Z.c)
 *     ?DereferencePointerInputFrameAndMessageData@@YAXPEAUtagPOINTERINPUTFRAME@@@Z @ 0x1C01C0840 (-DereferencePointerInputFrameAndMessageData@@YAXPEAUtagPOINTERINPUTFRAME@@@Z.c)
 *     ?PopulatePointerInfoNode@@YAHPEAUtagPOINTERINPUTFRAME@@PEAUtagPOINTERINFONODE@@@Z @ 0x1C01C109C (-PopulatePointerInfoNode@@YAHPEAUtagPOINTERINPUTFRAME@@PEAUtagPOINTERINFONODE@@@Z.c)
 *     ?ProcessQFrameNode@@YAXPEAUtagPOINTERQFRAME@@PEBUtagPOINTERINPUTFRAME@@PEAUtagPOINTERINFONODE@@@Z @ 0x1C01C13C0 (-ProcessQFrameNode@@YAXPEAUtagPOINTERQFRAME@@PEBUtagPOINTERINPUTFRAME@@PEAUtagPOINTERINFONODE@@@.c)
 *     ?ProcessWindowEnterLeave@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagPOINTERINFONODE@@@Z @ 0x1C01C1504 (-ProcessWindowEnterLeave@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagPOINTERINFONODE@@@Z.c)
 *     UnreferenceUndispatchedFrame @ 0x1C01C2464 (UnreferenceUndispatchedFrame.c)
 *     xxxSetManipulationInputTarget @ 0x1C01C25B4 (xxxSetManipulationInputTarget.c)
 *     ?CountMTNodesReadyForRouting@@YAIPEBUtagPOINTERINPUTFRAME@@@Z @ 0x1C01EEB4C (-CountMTNodesReadyForRouting@@YAIPEBUtagPOINTERINPUTFRAME@@@Z.c)
 *     ?NodeMatchesMTGeneration@@YAHPEBUtagPOINTERINFONODE@@H@Z @ 0x1C01F04C8 (-NodeMatchesMTGeneration@@YAHPEBUtagPOINTERINFONODE@@H@Z.c)
 *     ?xxxProcessPointerPrimaryDown@@YAHPEBUtagPOINTERINPUTFRAME@@@Z @ 0x1C01F23E0 (-xxxProcessPointerPrimaryDown@@YAHPEBUtagPOINTERINPUTFRAME@@@Z.c)
 *     BuildManipulationInputInfo @ 0x1C01F2EA0 (BuildManipulationInputInfo.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsManipulationThreadNode(const struct tagPOINTERINFONODE *a1)
{
  return (*((_DWORD *)a1 + 1) & 0x100) != 0 && (*(_DWORD *)a1 & 0x400) != 0 && (*(_DWORD *)a1 & 0x800) == 0;
}
