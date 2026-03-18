/*
 * XREFs of IsValueSizeFixed @ 0x1406CE114
 * Callers:
 *     GetOperandValue @ 0x1406CCF20 (GetOperandValue.c)
 *     LocalGetConditionForString @ 0x1406CE13C (LocalGetConditionForString.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsValueSizeFixed(unsigned __int8 a1)
{
  bool result; // al

  result = 0;
  if ( a1 )
    return a1 <= 4u;
  return result;
}
