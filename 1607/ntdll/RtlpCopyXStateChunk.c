/*
 * XREFs of RtlpCopyXStateChunk @ 0x18008BB34
 * Callers:
 *     RtlCopyContext @ 0x18008B9E0 (RtlCopyContext.c)
 *     RtlpCopyExtendedContext @ 0x1800EB67C (RtlpCopyExtendedContext.c)
 * Callees:
 *     memmove @ 0x1800AC980 (memmove.c)
 *     memset @ 0x1800ACCC0 (memset.c)
 */

__int64 __fastcall RtlpCopyXStateChunk(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // r12
  unsigned __int64 *v8; // r13
  _QWORD *v9; // r14
  unsigned int v10; // ebp
  unsigned __int64 v11; // r15
  char v12; // al
  unsigned __int64 v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // r14
  int v17; // ecx
  _QWORD *v18; // [rsp+20h] [rbp-48h]
  char v19; // [rsp+70h] [rbp+8h]
  unsigned __int64 v20; // [rsp+80h] [rbp+18h]
  __int64 v21; // [rsp+90h] [rbp+28h]

  v5 = 64LL;
  v20 = *(unsigned int *)(a3 + 20);
  v6 = 64LL;
  v7 = *(unsigned int *)(a5 + 20);
  if ( v20 < 0x40 || v7 < 0x40 )
    return 2147483653LL;
  v8 = (unsigned __int64 *)(a2 + *(int *)(a3 + 16));
  v9 = (_QWORD *)(a4 + *(int *)(a5 + 16));
  v18 = v9;
  memset(v8, 0, 0x40uLL);
  v10 = 2;
  v11 = *v9 & MEMORY[0x7FFE03D8] & 0xFFFFFFFFFFFFFFFCuLL;
  *v8 = v11;
  if ( (MEMORY[0x7FFE03EC] & 2) != 0 )
  {
    v14 = MEMORY[0x7FFE05F8];
    v12 = 1;
    v13 = v9[1] & (MEMORY[0x7FFE03D8] | 3LL) | 0x8000000000000000uLL;
  }
  else
  {
    v12 = 0;
    v13 = 0LL;
    v14 = 0LL;
  }
  v21 = v14;
  v15 = 2147353604LL;
  v19 = v12;
  v8[1] = v13;
  while ( v11 )
  {
    if ( v12 )
    {
      if ( ((1LL << v10) & v13) != 0 )
      {
        v6 = v5;
        if ( ((1LL << v10) & v14) != 0 )
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
    if ( _bittest64((const __int64 *)&v11, v10) )
    {
      if ( v5 > v20 || v5 > v7 )
        return 2147483653LL;
      memmove((char *)v8 + v6, (char *)v18 + v6, *(unsigned int *)v15);
      _bittestandreset64((__int64 *)&v11, v10);
    }
    ++v10;
    v15 += 8LL;
    if ( v10 >= 0x40 )
      break;
    v12 = v19;
    v14 = v21;
  }
  return 0LL;
}
