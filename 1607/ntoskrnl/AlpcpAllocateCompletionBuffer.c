/*
 * XREFs of AlpcpAllocateCompletionBuffer @ 0x1404A5920
 * Callers:
 *     AlpcpCompleteDispatchMessage @ 0x14044A860 (AlpcpCompleteDispatchMessage.c)
 * Callees:
 *     AlpcpAllocateFromBitmap @ 0x1404A5A10 (AlpcpAllocateFromBitmap.c)
 */

__int64 __fastcall AlpcpAllocateCompletionBuffer(__int64 a1, int a2)
{
  __int64 v2; // rbx
  unsigned int v3; // esi
  int v4; // r13d
  __int64 v5; // r14
  unsigned __int64 v6; // rbp
  __int64 v7; // r12
  unsigned int v8; // edi
  unsigned int v9; // edi
  unsigned int v10; // eax
  unsigned int v11; // ecx
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 360);
  v3 = (unsigned int)(a2 + 63) >> 6;
  v4 = 0;
  v5 = *(_QWORD *)(v2 + 104);
  v6 = *(_QWORD *)(v2 + 96) >> 2;
  v7 = v5 + 4 * ((unsigned __int64)*(unsigned int *)(v2 + 136) >> 5);
  if ( !v6 )
    return 0xFFFFFFFFLL;
  while ( 1 )
  {
    v8 = *(_DWORD *)(v2 + 140);
    if ( v8 >= *(_DWORD *)(v2 + 136) )
      v9 = 0;
    else
      v9 = v8 & 0xFFFFFFE0;
    v10 = AlpcpAllocateFromBitmap(v5 + 4 * ((unsigned __int64)v9 >> 5), v7, v3);
    if ( v10 == -2 )
      goto LABEL_9;
    if ( v10 != -1 )
      break;
    if ( !v9 )
      return 0xFFFFFFFFLL;
    v10 = AlpcpAllocateFromBitmap(v5, v5 + 4 * ((unsigned __int64)v9 >> 5), v3);
    if ( v10 != -2 )
      goto LABEL_7;
LABEL_9:
    if ( (unsigned int)++v4 >= v6 )
      goto LABEL_7;
  }
  v10 += v9;
LABEL_7:
  if ( v10 <= 0xFFFFFFFD )
  {
    v11 = v10 + v3;
    result = v10 << 6;
    *(_DWORD *)(v2 + 140) = v11;
    return result;
  }
  return 0xFFFFFFFFLL;
}
