/*
 * XREFs of AuthzBasepCompareUnsigned @ 0x140234B98
 * Callers:
 *     AuthzBasepCompareFQBNOperands @ 0x140234484 (AuthzBasepCompareFQBNOperands.c)
 *     AuthzBasepCompareIntegerOperands @ 0x1402346F0 (AuthzBasepCompareIntegerOperands.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall AuthzBasepCompareUnsigned(unsigned __int8 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  switch ( a1 )
  {
    case 0x80u:
      return a2 == a3;
    case 0x81u:
      return a2 != a3;
    case 0x82u:
      return a2 < a3;
    case 0x83u:
      return a2 <= a3;
    case 0x84u:
      return a2 > a3;
  }
  return a1 == 133 && a2 >= a3;
}
