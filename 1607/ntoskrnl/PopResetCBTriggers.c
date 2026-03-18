/*
 * XREFs of PopResetCBTriggers @ 0x14056E530
 * Callers:
 *     PopApplyPolicy @ 0x14056DFD8 (PopApplyPolicy.c)
 *     PopBatteryUpdateCompositeInformation @ 0x14066F4EC (PopBatteryUpdateCompositeInformation.c)
 * Callees:
 *     <none>
 */

int *__fastcall PopResetCBTriggers(unsigned __int8 a1)
{
  int *result; // rax
  int v2; // edx
  __int64 v3; // rcx

  result = &dword_14030378C;
  v2 = ~a1;
  v3 = 4LL;
  do
  {
    *result &= v2;
    result += 6;
    --v3;
  }
  while ( v3 );
  return result;
}
