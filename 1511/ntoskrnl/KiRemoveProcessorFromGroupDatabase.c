/*
 * XREFs of KiRemoveProcessorFromGroupDatabase @ 0x1401C45A0
 * Callers:
 *     KiStartDynamicProcessor @ 0x140619E80 (KiStartDynamicProcessor.c)
 *     KeStartAllProcessors @ 0x140762F20 (KeStartAllProcessors.c)
 * Callees:
 *     KiUncommitNodeAssignment @ 0x1401C460C (KiUncommitNodeAssignment.c)
 */

__int64 __fastcall KiRemoveProcessorFromGroupDatabase(__int64 a1)
{
  __int64 v1; // r11
  __int64 *v2; // rdx
  __int64 v3; // rax
  bool v4; // zf
  int v5; // ecx
  __int64 result; // rax

  v1 = a1;
  v2 = &KiGroupBlock[2 * *(unsigned __int16 *)(*(_QWORD *)(a1 + 1600) + 144LL)];
  v3 = ~*(_QWORD *)(a1 + 1608);
  v4 = (v3 & *v2) == 0;
  *v2 &= v3;
  if ( v4 )
    KiUncommitNodeAssignment();
  v5 = *(unsigned __int8 *)(v1 + 1616) << 6;
  KiProcessorIndexToNumberMappingTable[*(unsigned int *)(v1 + 36)] = 0;
  result = *(unsigned __int8 *)(v1 + 1617);
  KiProcessorNumberToIndexMappingTable[(unsigned int)(result + v5)] = 0;
  return result;
}
