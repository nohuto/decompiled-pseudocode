/*
 * XREFs of ACPIIoctlEvalPostProcessing @ 0x1C0009E64
 * Callers:
 *     ACPIIoctlEvalControlMethod @ 0x1C000C300 (ACPIIoctlEvalControlMethod.c)
 *     ACPIIoctlAsyncEvalControlMethod @ 0x1C003D3B0 (ACPIIoctlAsyncEvalControlMethod.c)
 *     ACPIIoctlAsyncEvalControlMethodCompletion @ 0x1C003D4E0 (ACPIIoctlAsyncEvalControlMethodCompletion.c)
 * Callees:
 *     ACPIIoctlCalculateOutputBuffer @ 0x1C0009F18 (ACPIIoctlCalculateOutputBuffer.c)
 *     ACPIIoctlCalculateOutputBufferSize @ 0x1C000A040 (ACPIIoctlCalculateOutputBufferSize.c)
 */

__int64 __fastcall ACPIIoctlEvalPostProcessing(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v6; // r10d
  unsigned __int64 v7; // r11
  __int64 v8; // r8
  unsigned int v9; // edx
  _DWORD *v10; // rcx
  int v11; // eax
  int v13; // [rsp+30h] [rbp+8h] BYREF
  int v14; // [rsp+40h] [rbp+18h] BYREF

  if ( !*(_DWORD *)(a1[23] + 8LL) )
  {
    a1[7] = 0LL;
    return 0LL;
  }
  v13 = 0;
  v14 = 0;
  LOBYTE(a4) = 1;
  if ( (int)ACPIIoctlCalculateOutputBufferSize(a2, &v13, &v14, a4) < 0 )
  {
    a1[7] &= v7;
    return 0LL;
  }
  v8 = (unsigned int)(v7 + 20);
  v9 = v13 + 12;
  if ( v13 + 12 < (unsigned int)v8 )
    v9 = v7 + 20;
  if ( v6 >= (unsigned int)v8 )
  {
    v10 = (_DWORD *)a1[3];
    v11 = v14;
    *v10 = 1114596673;
    v7 = (unsigned __int64)(v10 + 3);
    v10[1] = v9;
    v10[2] = v11;
  }
  if ( v9 <= v6 )
  {
    LOBYTE(v8) = 1;
    a1[7] = v9;
    if ( (int)ACPIIoctlCalculateOutputBuffer(a2, v7, v8) < 0 )
      a1[7] = 0LL;
    return 0LL;
  }
  a1[7] = v8;
  return 2147483653LL;
}
