/*
 * XREFs of KeCheckProcessorGroupAffinity @ 0x14007D2E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall KeCheckProcessorGroupAffinity(__int64 a1, int a2)
{
  return ((unsigned int)KiProcessorIndexToNumberMappingTable[a2] >> 6 == *(unsigned __int16 *)(a1 + 8)) & (*(_QWORD *)a1 >> (KiProcessorIndexToNumberMappingTable[a2] & 0x3F));
}
