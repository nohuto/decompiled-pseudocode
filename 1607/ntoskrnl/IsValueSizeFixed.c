/*
 * XREFs of IsValueSizeFixed @ 0x1406CE24C
 * Callers:
 *     GetOperandValue @ 0x1406CD058 (GetOperandValue.c)
 *     LocalGetConditionForString @ 0x1406CE274 (LocalGetConditionForString.c)
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
