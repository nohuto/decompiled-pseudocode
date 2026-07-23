/*
 * XREFs of PopGetLegacyPowerRequestFlags @ 0x140111720
 * Callers:
 *     PoRegisterSystemState @ 0x14020561C (PoRegisterSystemState.c)
 *     NtSetThreadExecutionState @ 0x14052D240 (NtSetThreadExecutionState.c)
 * Callees:
 *     <none>
 */

int __fastcall PopGetLegacyPowerRequestFlags(_DWORD *a1, int a2, unsigned int *a3)
{
  unsigned int v3; // r9d
  int result; // eax

  v3 = 0x80000000;
  result = 0;
  if ( a1 )
  {
    if ( a1[8] )
      v3 = -2147483646;
    if ( a1[9] )
      v3 |= 1u;
    if ( a1[10] )
      v3 |= 0x40u;
    result = (a2 ^ v3) & 0x7FFFFFFF;
  }
  if ( a3 )
    *a3 = v3;
  return result;
}
