/*
 * XREFs of rimExtractTouchInfo @ 0x1C00DD80C
 * Callers:
 *     rimExtractPointerDeviceUsages @ 0x1C00DD0D8 (rimExtractPointerDeviceUsages.c)
 * Callees:
 *     rimExtractData @ 0x1C00DC994 (rimExtractData.c)
 */

__int64 __fastcall rimExtractTouchInfo(__int64 a1, int a2, _DWORD *a3)
{
  __int64 result; // rax
  int v7; // [rsp+40h] [rbp+8h] BYREF
  int v8; // [rsp+50h] [rbp+18h] BYREF

  v8 = 0;
  v7 = 0;
  a3[6] = rimExtractData(a1, 13, 72, 1, &v8);
  a3[7] = rimExtractData(a1, 13, 73, 1, &v7);
  if ( v8 == v7 && v7 == 1 )
    a3[41] |= 1u;
  a3[5] = 1;
  if ( (*(_DWORD *)(a1 + 252) & 0x40000) != 0 )
  {
    a3[51] = rimExtractData(a1, 13, 48, 4, a3 + 41);
  }
  else if ( a2 )
  {
    a3[41] |= 4u;
    a3[51] = 512;
  }
  result = rimExtractData(a1, 13, 63, 2, a3 + 41);
  a3[50] = result;
  return result;
}
