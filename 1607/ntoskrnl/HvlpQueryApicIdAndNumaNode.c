/*
 * XREFs of HvlpQueryApicIdAndNumaNode @ 0x1401BBB78
 * Callers:
 *     HvlStartBootLogicalProcessors @ 0x140139CA4 (HvlStartBootLogicalProcessors.c)
 *     HvlpSelectLpSet @ 0x1401BBCAC (HvlpSelectLpSet.c)
 * Callees:
 *     xHalAllocatePmcCounterSet @ 0x140581DE0 (xHalAllocatePmcCounterSet.c)
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
    result = off_1402F24D8();
  if ( *a3 == 0xFFFF )
    *a3 = 0;
  return result;
}
