/*
 * XREFs of AuthzBasepSupportSetOperation @ 0x14009ED60
 * Callers:
 *     AuthzBasepIsValidExpression @ 0x14009EC60 (AuthzBasepIsValidExpression.c)
 * Callees:
 *     <none>
 */

bool __fastcall AuthzBasepSupportSetOperation(char a1)
{
  unsigned __int8 v1; // cl
  unsigned __int64 v2; // rax
  __int64 v3; // rcx
  bool result; // al

  v1 = a1 + 0x80;
  result = 0;
  if ( v1 <= 0x22u )
  {
    v2 = v1;
    v3 = 0x7000FFFC3LL;
    if ( _bittest64(&v3, v2) )
      return 1;
  }
  return result;
}
