/*
 * XREFs of HvlpQueryApicIdAndNumaNode @ 0x1401AF56C
 * Callers:
 *     HvlStartBootLogicalProcessors @ 0x140136B70 (HvlStartBootLogicalProcessors.c)
 *     HvlpSelectLpSet @ 0x1401AF638 (HvlpSelectLpSet.c)
 * Callees:
 *     xHalAllocatePmcCounterSet @ 0x14054F588 (xHalAllocatePmcCounterSet.c)
 */

__int64 __fastcall HvlpQueryApicIdAndNumaNode(__int64 a1, _DWORD *a2, _WORD *a3)
{
  __int64 (*v3)(void); // rax
  __int64 result; // rax

  *a2 = -1;
  v3 = (__int64 (*)(void))HvlpQueryProcessorNode;
  *a3 = -1;
  if ( v3 )
    result = v3();
  else
    result = off_1402D2838();
  if ( *a3 == 0xFFFF )
    *a3 = 0;
  return result;
}
