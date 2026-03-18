/*
 * XREFs of ?CanCoalesceIgnoreNode@@YAHPEBUtagPOINTERINPUTFRAME@@PEBUtagPOINTERINFONODE@@PEAW4tagPOINTERCOALESCE@@@Z @ 0x1C022E46C
 * Callers:
 *     ?CoalesceQFrames@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagPOINTERQFRAME@@PEAU1@@Z @ 0x1C022E7F8 (-CoalesceQFrames@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagPOINTERQFRAME@@PEAU1@@Z.c)
 * Callees:
 *     ?IsNodeFullyReleased@@YAHPEBUtagPOINTERINFONODE@@@Z @ 0x1C01F8F00 (-IsNodeFullyReleased@@YAHPEBUtagPOINTERINFONODE@@@Z.c)
 *     ?FindNodeInFrame@@YAPEAUtagPOINTERINFONODE@@PEBUtagPOINTERINPUTFRAME@@GPEAK@Z @ 0x1C022F670 (-FindNodeInFrame@@YAPEAUtagPOINTERINFONODE@@PEBUtagPOINTERINPUTFRAME@@GPEAK@Z.c)
 */

__int64 __fastcall CanCoalesceIgnoreNode(
        const struct tagPOINTERINPUTFRAME *a1,
        const struct tagPOINTERINFONODE *a2,
        enum tagPOINTERCOALESCE *a3)
{
  struct tagPOINTERINFONODE *NodeInFrame; // rax
  _DWORD *v4; // r11
  _DWORD *v6; // r11

  NodeInFrame = FindNodeInFrame(a1, *((_WORD *)a2 + 30), 0LL);
  if ( !NodeInFrame )
  {
    *v4 = 3;
    return 0LL;
  }
  if ( (*(_DWORD *)NodeInFrame & 0x1000) == 0 && !(unsigned int)IsNodeFullyReleased(NodeInFrame) )
  {
    *v6 = 20;
    return 0LL;
  }
  return 1LL;
}
