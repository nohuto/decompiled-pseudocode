/*
 * XREFs of PnpConvertDevpropcompkeyArrayToString @ 0x14062D710
 * Callers:
 *     PiDqTraceQueryCreate @ 0x14048D044 (PiDqTraceQueryCreate.c)
 * Callees:
 *     ConvertDevpropcompkeyToString @ 0x1406E3E60 (ConvertDevpropcompkeyToString.c)
 */

__int64 __fastcall PnpConvertDevpropcompkeyArrayToString(
        __int64 a1,
        unsigned int a2,
        _WORD *a3,
        unsigned int a4,
        unsigned int *a5)
{
  unsigned int v5; // ebx
  unsigned int v6; // edi
  _WORD *v7; // r14
  unsigned int v11; // esi
  __int64 result; // rax
  unsigned int v13; // [rsp+58h] [rbp+10h] BYREF

  v5 = 2;
  v6 = a4;
  v7 = a3;
  if ( a4 >= 2 )
    *a3 = 0;
  v11 = 0;
  if ( a2 )
  {
    while ( 1 )
    {
      result = ConvertDevpropcompkeyToString(a1 + 32LL * v11, v7, v6, &v13);
      if ( (int)(result + 0x80000000) >= 0 && (_DWORD)result != -1073741789 )
        break;
      if ( v5 + v13 - 2 < v5 )
        return 3221225621LL;
      v5 += v13 - 2;
      if ( v6 >= (unsigned __int64)v13 - 2 )
      {
        v6 += 2 - v13;
        v7 += ((unsigned __int64)v13 - 2) >> 1;
      }
      if ( ++v11 >= a2 )
        goto LABEL_10;
    }
  }
  else
  {
LABEL_10:
    result = 0LL;
    if ( a5 )
      *a5 = v5;
    if ( v5 > a4 )
      return 3221225507LL;
  }
  return result;
}
