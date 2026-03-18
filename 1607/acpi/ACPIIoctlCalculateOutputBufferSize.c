/*
 * XREFs of ACPIIoctlCalculateOutputBufferSize @ 0x1C0007E00
 * Callers:
 *     ACPIIoctlEvalPostProcessing @ 0x1C0007C20 (ACPIIoctlEvalPostProcessing.c)
 *     ACPIIoctlCalculateOutputBuffer @ 0x1C0007CD4 (ACPIIoctlCalculateOutputBuffer.c)
 *     ACPIIoctlCalculateOutputBufferSize @ 0x1C0007E00 (ACPIIoctlCalculateOutputBufferSize.c)
 * Callees:
 *     ACPIIoctlCalculateOutputBufferSize @ 0x1C0007E00 (ACPIIoctlCalculateOutputBufferSize.c)
 */

__int64 __fastcall ACPIIoctlCalculateOutputBufferSize(__int64 a1, _DWORD *a2, _DWORD *a3, char a4)
{
  __int16 v5; // dx
  int v6; // ebp
  __int64 result; // rax
  _DWORD *v8; // rsi
  __int64 v9; // rbx
  unsigned int v10; // eax
  char v11; // [rsp+30h] [rbp+8h] BYREF

  v5 = *(_WORD *)(a1 + 2);
  if ( v5 == 1 )
  {
    v6 = 8;
LABEL_3:
    *a3 = 1;
LABEL_4:
    *a2 += v6;
    return 0LL;
  }
  if ( (unsigned __int16)(v5 - 2) <= 1u )
  {
    v10 = *(_DWORD *)(a1 + 24);
    if ( v10 < 4 )
      v6 = 8;
    else
      v6 = v10 + 4;
    goto LABEL_3;
  }
  if ( v5 != 4 )
  {
    if ( v5 )
      return 3222536207LL;
    v6 = 0;
    goto LABEL_3;
  }
  v8 = *(_DWORD **)(a1 + 32);
  v9 = 0LL;
  if ( a4 )
  {
    v6 = 0;
    *a3 = *v8;
  }
  else
  {
    v6 = 4;
    *a3 = 1;
  }
  if ( !*v8 )
    goto LABEL_4;
  while ( 1 )
  {
    result = ACPIIoctlCalculateOutputBufferSize(&v8[8 * v9 + 2 + 2 * (unsigned int)v9], a2, &v11, 0LL);
    if ( (int)result < 0 )
      return result;
    v9 = (unsigned int)(v9 + 1);
    if ( (unsigned int)v9 >= *v8 )
      goto LABEL_4;
  }
}
