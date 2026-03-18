/*
 * XREFs of _lambda_2e0afbfd7a2bdc8e3f89afe913cad268_::operator() @ 0x1C02DA3E4
 * Callers:
 *     ?ValidateIFIMETRICS@@YA_NPEAU_IFIMETRICS@@@Z @ 0x1C02DC0A0 (-ValidateIFIMETRICS@@YA_NPEAU_IFIMETRICS@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall lambda_2e0afbfd7a2bdc8e3f89afe913cad268_::operator()(_QWORD **a1, int a2)
{
  _DWORD *v2; // r8
  unsigned int v3; // eax
  unsigned int v4; // ecx
  _BOOL8 result; // rax

  result = 0;
  if ( (unsigned __int64)a2 >= 0xC )
  {
    v2 = (_DWORD *)**a1;
    v3 = v2[6];
    v4 = v3 + a2;
    if ( v3 + a2 >= v3 && v4 + 20 >= v4 && v4 + 20 <= *v2 )
      return 1;
  }
  return result;
}
