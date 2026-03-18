/*
 * XREFs of GetInputDelegate @ 0x1C005804C
 * Callers:
 *     PostInputMessage @ 0x1C005816C (PostInputMessage.c)
 *     ?EndQFrameNodeDeferment@@YAXPEAUtagPOINTERQFRAME@@PEAUtagPOINTERINFONODE@@PEAUtagPOINTERINPUTFRAME@@_K@Z @ 0x1C01C0990 (-EndQFrameNodeDeferment@@YAXPEAUtagPOINTERQFRAME@@PEAUtagPOINTERINFONODE@@PEAUtagPOINTERINPUTFRA.c)
 *     ?PopulatePointerInfoNode@@YAHPEAUtagPOINTERINPUTFRAME@@PEAUtagPOINTERINFONODE@@@Z @ 0x1C01C109C (-PopulatePointerInfoNode@@YAHPEAUtagPOINTERINPUTFRAME@@PEAUtagPOINTERINFONODE@@@Z.c)
 *     xxxSetManipulationInputTarget @ 0x1C01C25B4 (xxxSetManipulationInputTarget.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetInputDelegate(__int64 a1, int a2)
{
  __int64 result; // rax
  int v3; // r8d

  result = 0LL;
  if ( a1 )
  {
    v3 = *(_DWORD *)(a1 + 320);
    if ( v3 )
    {
      if ( (v3 & a2) != 0 )
        return *(_QWORD *)(a1 + 312);
    }
  }
  return result;
}
