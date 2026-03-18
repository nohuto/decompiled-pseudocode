/*
 * XREFs of ACPIIoctlCalculateOutputBuffer @ 0x1C0009F18
 * Callers:
 *     ACPIIoctlEvalPostProcessing @ 0x1C0009E64 (ACPIIoctlEvalPostProcessing.c)
 *     ACPIIoctlCalculateOutputBuffer @ 0x1C0009F18 (ACPIIoctlCalculateOutputBuffer.c)
 * Callees:
 *     ACPIIoctlCalculateOutputBuffer @ 0x1C0009F18 (ACPIIoctlCalculateOutputBuffer.c)
 *     ACPIIoctlCalculateOutputBufferSize @ 0x1C000A040 (ACPIIoctlCalculateOutputBufferSize.c)
 *     memmove @ 0x1C0023800 (memmove.c)
 */

__int64 __fastcall ACPIIoctlCalculateOutputBuffer(__int64 a1, __int64 a2, char a3, __int64 a4)
{
  _WORD *v4; // rbx
  __int16 v6; // cx
  __int64 result; // rax
  _DWORD *v9; // r11
  int v10; // ebp
  __int64 v11; // rax
  _DWORD *v12; // [rsp+20h] [rbp-28h]
  int v13; // [rsp+50h] [rbp+8h] BYREF
  int v14; // [rsp+68h] [rbp+20h] BYREF

  v4 = (_WORD *)a2;
  v6 = *(_WORD *)(a1 + 2);
  if ( v6 == 1 )
  {
    *(_DWORD *)a2 = 0x40000;
    *(_DWORD *)(a2 + 4) = *(_DWORD *)(a1 + 16);
    return 0LL;
  }
  if ( (unsigned __int16)(v6 - 2) <= 1u )
  {
    *(_WORD *)a2 = (v6 != 2) + 1;
    *(_WORD *)(a2 + 2) = *(_WORD *)(a1 + 24);
    memmove((void *)(a2 + 4), *(const void **)(a1 + 32), *(unsigned int *)(a1 + 24));
    return 0LL;
  }
  if ( v6 != 4 )
    return 3222536207LL;
  v12 = *(_DWORD **)(a1 + 32);
  if ( !*v12 )
    return 3222536207LL;
  LOBYTE(a4) = 1;
  v13 = 0;
  v14 = 0;
  result = ACPIIoctlCalculateOutputBufferSize(a1, &v13, &v14, a4);
  if ( (int)result >= 0 )
  {
    if ( !a3 )
    {
      *v4 = 3;
      v4[1] = v13;
      v4 += 2;
    }
    v10 = 0;
    if ( !*v9 )
      return 0LL;
    while ( 1 )
    {
      result = ACPIIoctlCalculateOutputBuffer(&v9[8 * v10 + 2 + 2 * v10], v4, 0LL);
      if ( (int)result < 0 )
        break;
      LOWORD(v11) = v4[1];
      if ( (unsigned __int16)v11 < 4u )
        v11 = 4LL;
      else
        v11 = (unsigned __int16)v11;
      v9 = v12;
      v4 = (_WORD *)((char *)v4 + v11 + 4);
      if ( (unsigned int)++v10 >= *v12 )
        return 0LL;
    }
  }
  return result;
}
