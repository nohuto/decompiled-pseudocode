/*
 * XREFs of KeRemoveProcessorAffinityEx @ 0x1400427C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall KeRemoveProcessorAffinityEx(unsigned __int16 *a1, int a2)
{
  unsigned int v3; // ecx
  __int64 result; // rax
  __int64 v5; // rdx

  v3 = KiProcessorIndexToNumberMappingTable[a2];
  result = v3 >> 6;
  if ( *a1 > (unsigned int)result )
  {
    v5 = (unsigned int)result;
    result = *(_QWORD *)&a1[4 * result + 4] & ~(1LL << (v3 & 0x3F));
    *(_QWORD *)&a1[4 * v5 + 4] = result;
  }
  return result;
}
