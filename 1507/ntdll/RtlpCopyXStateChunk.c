/*
 * XREFs of RtlpCopyXStateChunk @ 0x180067734
 * Callers:
 *     RtlCopyContext @ 0x180067250 (RtlCopyContext.c)
 *     RtlpCopyExtendedContext @ 0x1800DBCEC (RtlpCopyExtendedContext.c)
 * Callees:
 *     memmove @ 0x180098200 (memmove.c)
 *     memset @ 0x180098540 (memset.c)
 */

__int64 __fastcall RtlpCopyXStateChunk(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // r12
  unsigned __int64 *v8; // r14
  unsigned int v9; // ebp
  _QWORD *v10; // r9
  unsigned __int64 v11; // r15
  char v12; // r13
  __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // r14
  int v17; // ecx
  unsigned __int64 v18; // [rsp+20h] [rbp-38h]
  unsigned __int64 *v19; // [rsp+28h] [rbp-30h]
  __int64 v20; // [rsp+70h] [rbp+18h]
  _QWORD *v21; // [rsp+80h] [rbp+28h]

  v5 = 64LL;
  v18 = *(unsigned int *)(a3 + 20);
  v6 = 64LL;
  v7 = *(unsigned int *)(a5 + 20);
  if ( v18 < 0x40 || v7 < 0x40 )
    return 2147483653LL;
  v8 = (unsigned __int64 *)(a2 + *(int *)(a3 + 16));
  v19 = v8;
  v21 = (_QWORD *)(a4 + *(int *)(a5 + 16));
  memset(v8, 0, 0x40uLL);
  v9 = 2;
  v10 = v21;
  v11 = *v21 & MEMORY[0x7FFE03D8] & 0xFFFFFFFFFFFFFFFCuLL;
  *v8 = v11;
  if ( (MEMORY[0x7FFE03EC] & 2) != 0 )
  {
    v12 = 1;
    v14 = MEMORY[0x7FFE05F8];
    v13 = v21[1] & (MEMORY[0x7FFE03D8] | 3LL);
  }
  else
  {
    v12 = 0;
    v13 = 0LL;
    v14 = 0LL;
  }
  v8[1] = v13;
  v15 = 2147353604LL;
  v20 = v14;
  while ( v11 )
  {
    if ( v12 )
    {
      if ( ((1LL << v9) & v13) != 0 )
      {
        v6 = v5;
        if ( ((1LL << v9) & v14) != 0 )
          v6 = (v5 + 63) & 0xFFFFFFFFFFFFFFC0uLL;
        v5 = v6 + *(unsigned int *)v15;
      }
    }
    else
    {
      v17 = *(_DWORD *)(v15 - 4);
      v5 = (unsigned int)(v17 + *(_DWORD *)v15 - 512);
      v6 = (unsigned int)(v17 - 512);
    }
    if ( _bittest64((const __int64 *)&v11, v9) )
    {
      if ( v5 > v18 || v5 > v7 )
        return 2147483653LL;
      memmove((char *)v19 + v6, (char *)v10 + v6, *(unsigned int *)v15);
      _bittestandreset64((__int64 *)&v11, v9);
    }
    ++v9;
    v15 += 8LL;
    if ( v9 >= 0x40 )
      break;
    v14 = v20;
    v10 = v21;
  }
  return 0LL;
}
