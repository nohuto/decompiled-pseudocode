/*
 * XREFs of RtlWnfCompareChangeStamp @ 0x1800D9A00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlWnfCompareChangeStamp(unsigned int a1, unsigned int a2)
{
  if ( a1 == a2 )
    return 0LL;
  else
    return a1 < a2 ? -1 : 1;
}
