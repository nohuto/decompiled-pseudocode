/*
 * XREFs of MmSetMinimumAgeRate @ 0x1404539CC
 * Callers:
 *     PfSetSuperfetchInformation @ 0x140454728 (PfSetSuperfetchInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmSetMinimumAgeRate(unsigned int a1)
{
  __int64 result; // rax
  __int16 v2; // r8
  unsigned int v4; // ecx

  result = 0LL;
  if ( a1 )
  {
    v2 = 1;
    v4 = 1;
    if ( a1 / 6 > 1 )
      v4 = a1 / 6;
    result = 0x3E8 / v4;
    if ( (unsigned int)result > 1 )
      v2 = 0x3E8 / v4;
    *(_WORD *)(qword_140355188 + 2360) = v2;
  }
  else
  {
    *(_WORD *)(qword_140355188 + 2360) = 0;
  }
  return result;
}
