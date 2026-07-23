/*
 * XREFs of WheaGetErrorSource @ 0x14022FFD8
 * Callers:
 *     <none>
 * Callees:
 *     WheapGetErrorSource @ 0x1402306D4 (WheapGetErrorSource.c)
 */

__int64 __fastcall WheaGetErrorSource(unsigned int a1)
{
  __int64 ErrorSource; // rcx
  __int64 result; // rax

  ErrorSource = WheapGetErrorSource(&WheapErrorSourceTable, a1);
  result = 0LL;
  if ( ErrorSource )
    return ErrorSource + 89;
  return result;
}
