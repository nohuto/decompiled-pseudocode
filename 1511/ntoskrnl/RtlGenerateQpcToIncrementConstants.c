/*
 * XREFs of RtlGenerateQpcToIncrementConstants @ 0x14014036C
 * Callers:
 *     KiSetupTimeIncrement @ 0x14014023C (KiSetupTimeIncrement.c)
 *     KeSetTimeAdjustment @ 0x1401C3FD8 (KeSetTimeAdjustment.c)
 * Callees:
 *     RtlpComputeFraction @ 0x14014039C (RtlpComputeFraction.c)
 */

unsigned __int64 __fastcall RtlGenerateQpcToIncrementConstants(unsigned int a1, char *a2)
{
  unsigned __int64 result; // rax
  char v4; // cl
  char v5; // [rsp+38h] [rbp+10h] BYREF

  result = RtlpComputeFraction(10000000LL, a1, &v5);
  v4 = v5;
  if ( v5 < 0 )
  {
    if ( result + (unsigned int)(1 << (-1 - v5)) >= result )
      result += (unsigned int)(1 << (-1 - v5));
    result >>= -v5;
    v4 = 0;
  }
  *a2 = v4;
  return result;
}
