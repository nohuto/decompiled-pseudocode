/*
 * XREFs of PerfStatesInstantaneousFrequency @ 0x1C00027C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PerfStatesInstantaneousFrequency(__int64 a1, _DWORD *a2)
{
  __int64 result; // rax

  result = *(unsigned int *)(a1 + 4);
  *a2 = result;
  return result;
}
