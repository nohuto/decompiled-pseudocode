/*
 * XREFs of ACPIIoctlCalculateOutputBufferEx @ 0x1C000A700
 * Callers:
 *     ACPIIoctlEvalPostProcessingEx @ 0x1C000A64C (ACPIIoctlEvalPostProcessingEx.c)
 *     ACPIIoctlCalculateOutputBufferEx @ 0x1C000A700 (ACPIIoctlCalculateOutputBufferEx.c)
 *     AcpiConvertObjDataToMethodArguments @ 0x1C003F368 (AcpiConvertObjDataToMethodArguments.c)
 * Callees:
 *     ACPIIoctlCalculateOutputBufferEx @ 0x1C000A700 (ACPIIoctlCalculateOutputBufferEx.c)
 *     ACPIIoctlCalculateOutputBufferSizeEx @ 0x1C000A81C (ACPIIoctlCalculateOutputBufferSizeEx.c)
 *     memmove @ 0x1C0023800 (memmove.c)
 */

__int64 __fastcall ACPIIoctlCalculateOutputBufferEx(__int64 a1, __int64 a2, char a3, __int64 a4)
{
  _WORD *v4; // rbx
  __int16 v6; // cx
  __int64 result; // rax
  unsigned int *v9; // rbp
  unsigned int v10; // esi
  __int64 v11; // rax
  int v12; // [rsp+40h] [rbp+8h] BYREF
  int v13; // [rsp+58h] [rbp+20h] BYREF

  v4 = (_WORD *)a2;
  v6 = *(_WORD *)(a1 + 2);
  if ( v6 == 1 )
  {
    *(_DWORD *)a2 = 0x80000;
    *(_QWORD *)(a2 + 4) = *(_QWORD *)(a1 + 16);
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
  v9 = *(unsigned int **)(a1 + 32);
  if ( !*v9 )
    return 3222536207LL;
  LOBYTE(a4) = 1;
  v12 = 0;
  v13 = 0;
  result = ACPIIoctlCalculateOutputBufferSizeEx(a1, &v12, &v13, a4);
  if ( (int)result >= 0 )
  {
    if ( !a3 )
    {
      *v4 = 3;
      v4[1] = v12;
      v4 += 2;
    }
    v10 = 0;
    if ( !*v9 )
      return 0LL;
    while ( 1 )
    {
      result = ACPIIoctlCalculateOutputBufferEx(&v9[8 * v10 + 2 + 2 * v10], v4, 0LL);
      if ( (int)result < 0 )
        break;
      LOWORD(v11) = v4[1];
      if ( (unsigned __int16)v11 < 4u )
        v11 = 4LL;
      else
        v11 = (unsigned __int16)v11;
      ++v10;
      v4 = (_WORD *)((char *)v4 + v11 + 4);
      if ( v10 >= *v9 )
        return 0LL;
    }
  }
  return result;
}
