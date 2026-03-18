/*
 * XREFs of PopResetCBTriggers @ 0x14053E770
 * Callers:
 *     PopApplyPolicy @ 0x14053E204 (PopApplyPolicy.c)
 *     PopBatteryUpdateCompositeInformation @ 0x1406370C8 (PopBatteryUpdateCompositeInformation.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall PopResetCBTriggers(unsigned __int8 a1)
{
  _DWORD *result; // rax
  int v2; // edx
  __int64 v3; // rcx

  result = &unk_1402DE4EC;
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
