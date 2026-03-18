/*
 * XREFs of _lambda_8016ea96d34cec30f2825a10b1baeb47_::operator() @ 0x1C02D5F7C
 * Callers:
 *     ?ValidateIFIMETRICS@@YA_NPEAU_IFIMETRICS@@@Z @ 0x1C02D7BF0 (-ValidateIFIMETRICS@@YA_NPEAU_IFIMETRICS@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall lambda_8016ea96d34cec30f2825a10b1baeb47_::operator()(unsigned int ***a1, unsigned int a2, int a3)
{
  unsigned int v3; // r8d
  _BOOL8 result; // rax

  result = 0;
  if ( (unsigned __int64)(int)a2 >= 0xC0 )
  {
    v3 = a2 + a3;
    if ( v3 >= a2 && v3 <= ***a1 )
      return 1;
  }
  return result;
}
