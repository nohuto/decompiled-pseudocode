/*
 * XREFs of PopResetCBTriggers @ 0x140599D20
 * Callers:
 *     PopApplyPolicy @ 0x1405997B4 (PopApplyPolicy.c)
 *     PopBatteryUpdateCompositeInformation @ 0x1406B6F28 (PopBatteryUpdateCompositeInformation.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall PopResetCBTriggers(unsigned __int8 a1)
{
  _DWORD *result; // rax
  int v2; // edx
  __int64 v3; // rcx

  result = &unk_14032EAAC;
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
