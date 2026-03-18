/*
 * XREFs of TintAngle @ 0x1C024F284
 * Callers:
 *     pDCIAdjClr @ 0x1C00A57C8 (pDCIAdjClr.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TintAngle(int a1, __int64 a2, int *a3, int *a4)
{
  __int64 result; // rax
  int v5; // esi
  int v8; // r11d
  int v9; // r8d
  int v10; // r10d
  int v11; // r8d
  int v12; // r9d
  int v13; // ecx
  int v14; // r9d
  int v15; // ecx

  result = (unsigned int)(a1 + 100);
  v5 = 1;
  if ( (unsigned int)result > 0xC8 )
    a1 = 100;
  if ( a1 > 0 )
  {
    v8 = 0;
  }
  else
  {
    a1 = -a1;
    v8 = 1;
    if ( !a1 )
    {
      *a4 = 0;
      *a3 = 0;
      return result;
    }
  }
  v9 = 6 * a1;
  if ( 6 * a1 >= 900 )
  {
    v9 = 1800 - v9;
    v5 = 0;
  }
  v10 = v9 / 10;
  v11 = v9 % 10;
  result = v10;
  v12 = SinNumber[v10];
  if ( v11 )
  {
    v13 = v11 * (SinNumber[v10 + 1] - v12) + 5;
    result = (unsigned int)((unsigned __int64)(1717986919LL * v13) >> 32) >> 31;
    v12 += v13 / 10;
  }
  if ( !v8 )
    v12 = -v12;
  *a3 = v12;
  if ( v11 )
  {
    result = (unsigned int)(10 - v11);
    v11 = 10 - v11;
    ++v10;
  }
  v14 = SinNumber[90 - v10];
  if ( v11 )
  {
    v15 = v11 * (SinNumber[90 - v10 + 1] - v14) + 5;
    result = (unsigned int)((unsigned __int64)(1717986919LL * v15) >> 32) >> 31;
    v14 += v15 / 10;
  }
  if ( !v5 )
    v14 = -v14;
  *a4 = v14;
  return result;
}
