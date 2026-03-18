/*
 * XREFs of IsValueSizeFixed @ 0x1406898D4
 * Callers:
 *     GetOperandValue @ 0x1406886A0 (GetOperandValue.c)
 *     LocalGetConditionForString @ 0x1406898FC (LocalGetConditionForString.c)
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
