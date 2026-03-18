/*
 * XREFs of ?FindValidNodeInFrame@@YAPEAUtagPOINTERINFONODE@@PEBUtagPOINTERINPUTFRAME@@GPEAK@Z @ 0x1C01C0B7C
 * Callers:
 *     ?CanCoalesceNodeWithPrevious@@YAHPEBUtagPOINTERINPUTFRAME@@PEBUtagPOINTERINFONODE@@PEAUtagQMSG@@PEAUtagPOINTERQFRAME@@PEAW4tagPOINTERCOALESCE@@@Z @ 0x1C01BF7C8 (-CanCoalesceNodeWithPrevious@@YAHPEBUtagPOINTERINPUTFRAME@@PEBUtagPOINTERINFONODE@@PEAUtagQMSG@@.c)
 *     ?CoalesceNodeWithPrevious@@YA_KPEBUtagPOINTERINPUTFRAME@@0PEAUtagPOINTERINFONODE@@KH@Z @ 0x1C01BFA20 (-CoalesceNodeWithPrevious@@YA_KPEBUtagPOINTERINPUTFRAME@@0PEAUtagPOINTERINFONODE@@KH@Z.c)
 *     ?GetPrevMTNodeTarget@@YAPEAUtagWND@@PEAUtagPOINTERINFONODE@@PEAUtagPOINTERINPUTFRAME@@@Z @ 0x1C01C0EF0 (-GetPrevMTNodeTarget@@YAPEAUtagWND@@PEAUtagPOINTERINFONODE@@PEAUtagPOINTERINPUTFRAME@@@Z.c)
 *     ?ProcessWindowEnterLeave@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagPOINTERINFONODE@@@Z @ 0x1C01C1504 (-ProcessWindowEnterLeave@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagPOINTERINFONODE@@@Z.c)
 *     xxxSetManipulationInputTarget @ 0x1C01C25B4 (xxxSetManipulationInputTarget.c)
 *     ?_SuppressDeadzoneContactsInFrame@PalmRejection@@YAXPEAUtagPOINTERINPUTFRAME@@0UtagPOINT@@@Z @ 0x1C02295D0 (-_SuppressDeadzoneContactsInFrame@PalmRejection@@YAXPEAUtagPOINTERINPUTFRAME@@0UtagPOINT@@@Z.c)
 * Callees:
 *     ?FindNodeInFrame@@YAPEAUtagPOINTERINFONODE@@PEBUtagPOINTERINPUTFRAME@@GPEAK@Z @ 0x1C01C0AC0 (-FindNodeInFrame@@YAPEAUtagPOINTERINFONODE@@PEBUtagPOINTERINPUTFRAME@@GPEAK@Z.c)
 *     ?IsPointerInfoNodeValid@@YAHPEBUtagPOINTERINFONODE@@@Z @ 0x1C01C0FF4 (-IsPointerInfoNodeValid@@YAHPEBUtagPOINTERINFONODE@@@Z.c)
 */

struct tagPOINTERINFONODE *__fastcall FindValidNodeInFrame(
        const struct tagPOINTERINPUTFRAME *a1,
        __int16 a2,
        unsigned int *a3)
{
  struct tagPOINTERINFONODE *NodeInFrame; // rax
  __int64 v5; // r11
  unsigned int v7; // [rsp+48h] [rbp+20h] BYREF

  NodeInFrame = FindNodeInFrame(a1, a2, &v7);
  if ( !NodeInFrame || !(unsigned int)IsPointerInfoNodeValid(NodeInFrame) )
    return 0LL;
  if ( a3 )
    *a3 = v7;
  return (struct tagPOINTERINFONODE *)v5;
}
