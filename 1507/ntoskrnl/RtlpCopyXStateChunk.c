/*
 * XREFs of RtlpCopyXStateChunk @ 0x140124AEC
 * Callers:
 *     RtlpCopyExtendedContext @ 0x1400205A0 (RtlpCopyExtendedContext.c)
 *     RtlCopyContext @ 0x1406CFE94 (RtlCopyContext.c)
 * Callees:
 *     memmove @ 0x140195740 (memmove.c)
 *     memset @ 0x140195A80 (memset.c)
 */

__int64 __fastcall RtlpCopyXStateChunk(char a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // r12
  unsigned __int64 *v9; // r13
  _QWORD *v10; // r14
  _QWORD *v11; // r9
  __int64 v12; // r15
  unsigned int v13; // r14d
  unsigned __int64 v14; // r15
  char v15; // al
  __int64 v16; // rbp
  __int64 v17; // rdx
  _DWORD *v18; // rsi
  int v20; // ecx
  __int64 v21; // [rsp+20h] [rbp-38h]
  unsigned __int64 v22; // [rsp+28h] [rbp-30h]
  _QWORD *v23; // [rsp+70h] [rbp+18h]
  char v24; // [rsp+80h] [rbp+28h]

  v6 = 64LL;
  v7 = 64LL;
  v22 = *(unsigned int *)(a3 + 20);
  v8 = *(unsigned int *)(a5 + 20);
  if ( v22 < 0x40 || v8 < 0x40 )
    return 2147483653LL;
  v9 = (unsigned __int64 *)(a2 + *(int *)(a3 + 16));
  v10 = (_QWORD *)(a4 + *(int *)(a5 + 16));
  v23 = v10;
  memset(v9, 0, 0x40uLL);
  v11 = v10;
  v12 = *v10 & MEMORY[0xFFFFF780000003D8];
  v13 = 2;
  v14 = v12 & 0xFFFFFFFFFFFFFFFCuLL;
  *v9 = v14;
  if ( (MEMORY[0xFFFFF780000003EC] & 2) != 0 )
  {
    v15 = 1;
    v16 = v23[1] & (MEMORY[0xFFFFF780000003D8] | 3LL);
    v17 = MEMORY[0xFFFFF780000005F8];
  }
  else
  {
    v15 = 0;
    v16 = 0LL;
    v17 = 0LL;
  }
  v21 = v17;
  v24 = v15;
  v9[1] = v16;
  if ( a1 == 1 )
  {
    v18 = (_DWORD *)0xFFFFF78000000404LL;
    while ( v14 )
    {
      if ( v15 )
      {
        if ( ((1LL << v13) & v16) != 0 )
        {
          v7 = v6;
          if ( ((1LL << v13) & v17) != 0 )
            v7 = (v6 + 63) & 0xFFFFFFFFFFFFFFC0uLL;
          v6 = v7 + (unsigned int)*v18;
        }
      }
      else
      {
        v20 = *(v18 - 1);
        v6 = (unsigned int)(v20 + *v18 - 512);
        v7 = (unsigned int)(v20 - 512);
      }
      if ( _bittest64((const __int64 *)&v14, v13) )
      {
        if ( v6 > v22 || v6 > v8 )
          return 2147483653LL;
        memmove((char *)v9 + v7, (char *)v11 + v7, (unsigned int)*v18);
        _bittestandreset64((__int64 *)&v14, v13);
      }
      ++v13;
      v18 += 2;
      if ( v13 >= 0x40 )
        return 0LL;
      v15 = v24;
      v17 = v21;
      v11 = v23;
    }
  }
  return 0LL;
}
