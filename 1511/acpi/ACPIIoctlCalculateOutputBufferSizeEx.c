/*
 * XREFs of ACPIIoctlCalculateOutputBufferSizeEx @ 0x1C000A8EC
 * Callers:
 *     ACPIIoctlEvalPostProcessingEx @ 0x1C000A71C (ACPIIoctlEvalPostProcessingEx.c)
 *     ACPIIoctlCalculateOutputBufferEx @ 0x1C000A7D0 (ACPIIoctlCalculateOutputBufferEx.c)
 *     ACPIIoctlCalculateOutputBufferSizeEx @ 0x1C000A8EC (ACPIIoctlCalculateOutputBufferSizeEx.c)
 *     AcpiConvertObjDataToMethodArguments @ 0x1C003EEA8 (AcpiConvertObjDataToMethodArguments.c)
 * Callees:
 *     ACPIIoctlCalculateOutputBufferSizeEx @ 0x1C000A8EC (ACPIIoctlCalculateOutputBufferSizeEx.c)
 */

__int64 __fastcall ACPIIoctlCalculateOutputBufferSizeEx(__int64 a1, _DWORD *a2, _DWORD *a3, char a4)
{
  __int16 v4; // r10
  int v5; // ebx
  __int64 result; // rax
  _DWORD *v7; // rbp
  int v8; // esi
  char v9; // [rsp+40h] [rbp+8h] BYREF
  _DWORD *v10; // [rsp+48h] [rbp+10h]

  v10 = a2;
  v4 = *(_WORD *)(a1 + 2);
  if ( v4 == 1 )
  {
    v5 = 12;
LABEL_3:
    *a3 = 1;
LABEL_4:
    *a2 += v5;
    return 0LL;
  }
  v5 = 4;
  if ( (unsigned __int16)(v4 - 2) <= 1u )
  {
    if ( *(_DWORD *)(a1 + 24) >= 4u )
      v5 = *(_DWORD *)(a1 + 24);
    v5 += 4;
    goto LABEL_3;
  }
  if ( v4 != 4 )
  {
    if ( v4 )
      return 3222536207LL;
    v5 = 0;
    goto LABEL_3;
  }
  v7 = *(_DWORD **)(a1 + 32);
  if ( a4 )
  {
    v5 = 0;
    *a3 = *v7;
  }
  else
  {
    *a3 = 1;
  }
  v8 = 0;
  if ( !*v7 )
    goto LABEL_4;
  while ( 1 )
  {
    result = ACPIIoctlCalculateOutputBufferSizeEx(&v7[8 * v8 + 2 + 2 * v8], a2, &v9, 0LL);
    if ( (int)result < 0 )
      return result;
    a2 = v10;
    if ( (unsigned int)++v8 >= *v7 )
      goto LABEL_4;
  }
}
