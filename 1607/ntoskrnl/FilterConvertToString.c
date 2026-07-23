/*
 * XREFs of FilterConvertToString @ 0x1406E4A6C
 * Callers:
 *     PiDqTraceQueryCreate @ 0x14048D044 (PiDqTraceQueryCreate.c)
 * Callees:
 *     ExpressionConvertToString @ 0x1406E4664 (ExpressionConvertToString.c)
 */

__int64 __fastcall FilterConvertToString(unsigned int a1, __int64 a2, unsigned int a3, wchar_t *a4, unsigned int *a5)
{
  unsigned int v5; // ebx
  wchar_t *v6; // r14
  unsigned int v7; // edi
  unsigned int v11; // esi
  __int64 result; // rax
  unsigned int v13; // [rsp+50h] [rbp+8h] BYREF

  v5 = 2;
  v6 = a4;
  v7 = a3;
  if ( a3 >= 2 )
    *a4 = 0;
  v11 = 0;
  if ( a1 )
  {
    while ( 1 )
    {
      result = ExpressionConvertToString((_DWORD *)(a2 + 56LL * v11), v7, v6, &v13);
      if ( (int)(result + 0x80000000) >= 0 && (_DWORD)result != -1073741789 )
        break;
      if ( v5 + v13 - 2 < v5 )
        return 3221225621LL;
      v5 += v13 - 2;
      if ( v7 >= (unsigned __int64)v13 - 2 )
      {
        v7 += 2 - v13;
        v6 += ((unsigned __int64)v13 - 2) >> 1;
      }
      if ( ++v11 >= a1 )
        goto LABEL_10;
    }
  }
  else
  {
LABEL_10:
    result = 0LL;
    if ( a5 )
      *a5 = v5;
    if ( v5 > a3 )
      return 3221225507LL;
  }
  return result;
}
