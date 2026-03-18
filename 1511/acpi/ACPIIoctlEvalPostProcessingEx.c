/*
 * XREFs of ACPIIoctlEvalPostProcessingEx @ 0x1C000A71C
 * Callers:
 *     ACPIIoctlEvalControlMethodEx @ 0x1C000C0CC (ACPIIoctlEvalControlMethodEx.c)
 *     ACPIIoctlAsyncEvalControlMethodEx @ 0x1C003D148 (ACPIIoctlAsyncEvalControlMethodEx.c)
 *     ACPIIoctlAsyncEvalControlMethodExCompletion @ 0x1C003D280 (ACPIIoctlAsyncEvalControlMethodExCompletion.c)
 * Callees:
 *     ACPIIoctlCalculateOutputBufferEx @ 0x1C000A7D0 (ACPIIoctlCalculateOutputBufferEx.c)
 *     ACPIIoctlCalculateOutputBufferSizeEx @ 0x1C000A8EC (ACPIIoctlCalculateOutputBufferSizeEx.c)
 */

__int64 __fastcall ACPIIoctlEvalPostProcessingEx(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  _DWORD *v4; // rsi
  unsigned int v7; // edi
  __int64 result; // rax
  __int64 v9; // r8
  unsigned int v10; // edx
  _DWORD *v11; // rcx
  int v12; // eax
  int v13; // [rsp+40h] [rbp+8h] BYREF
  int v14; // [rsp+50h] [rbp+18h] BYREF

  v4 = 0LL;
  v7 = *(_DWORD *)(a1[23] + 8LL);
  if ( !v7 )
  {
    result = 0LL;
    goto LABEL_10;
  }
  v13 = 0;
  v14 = 0;
  LOBYTE(a4) = 1;
  result = ACPIIoctlCalculateOutputBufferSizeEx(a2, &v13, &v14, a4);
  if ( (int)result < 0 )
  {
LABEL_10:
    a1[7] = 0LL;
    return result;
  }
  v9 = 20LL;
  v10 = v13 + 12;
  if ( (unsigned int)(v13 + 12) < 0x14 )
    v10 = 20;
  if ( v7 >= 0x14 )
  {
    v11 = (_DWORD *)a1[3];
    v12 = v14;
    *v11 = 1114596673;
    v4 = v11 + 3;
    v11[1] = v10;
    v11[2] = v12;
  }
  if ( v10 > v7 )
  {
    a1[7] = 20LL;
    return 2147483653LL;
  }
  else
  {
    LOBYTE(v9) = 1;
    a1[7] = v10;
    result = ACPIIoctlCalculateOutputBufferEx(a2, v4, v9);
    if ( (int)result < 0 )
      a1[7] = 0LL;
    else
      return 0LL;
  }
  return result;
}
