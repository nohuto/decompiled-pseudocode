/*
 * XREFs of RtlpCopyXStateChunk @ 0x1400A6B18
 * Callers:
 *     RtlpCopyExtendedContext @ 0x1400F1048 (RtlpCopyExtendedContext.c)
 *     RtlCopyContext @ 0x14068C258 (RtlCopyContext.c)
 * Callees:
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 */

__int64 __fastcall RtlpCopyXStateChunk(char a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // r12
  unsigned __int64 *v9; // r13
  _QWORD *v10; // rsi
  unsigned int v11; // ebp
  _QWORD *v12; // r9
  unsigned __int64 v13; // r15
  char v14; // al
  unsigned __int64 v15; // rsi
  __int64 v16; // rdx
  _DWORD *v17; // r14
  int v19; // ecx
  __int64 v20; // [rsp+20h] [rbp-38h]
  unsigned __int64 v21; // [rsp+28h] [rbp-30h]
  _QWORD *v22; // [rsp+70h] [rbp+18h]
  char v23; // [rsp+80h] [rbp+28h]

  v6 = 64LL;
  v7 = 64LL;
  v21 = *(unsigned int *)(a3 + 20);
  v8 = *(unsigned int *)(a5 + 20);
  if ( v21 < 0x40 || v8 < 0x40 )
    return 2147483653LL;
  v9 = (unsigned __int64 *)(a2 + *(int *)(a3 + 16));
  v10 = (_QWORD *)(a4 + *(int *)(a5 + 16));
  v22 = v10;
  memset(v9, 0, 0x40uLL);
  v11 = 2;
  v12 = v10;
  v13 = *v10 & MEMORY[0xFFFFF780000003D8] & 0xFFFFFFFFFFFFFFFCuLL;
  *v9 = v13;
  if ( (MEMORY[0xFFFFF780000003EC] & 2) != 0 )
  {
    v14 = 1;
    v15 = v10[1] & (MEMORY[0xFFFFF780000003D8] | 3LL) | 0x8000000000000000uLL;
    v16 = MEMORY[0xFFFFF780000005F8];
  }
  else
  {
    v14 = 0;
    v15 = 0LL;
    v16 = 0LL;
  }
  v20 = v16;
  v23 = v14;
  v9[1] = v15;
  if ( a1 == 1 )
  {
    v17 = (_DWORD *)0xFFFFF78000000404LL;
    while ( v13 )
    {
      if ( v14 )
      {
        if ( ((1LL << v11) & v15) != 0 )
        {
          v7 = v6;
          if ( ((1LL << v11) & v16) != 0 )
            v7 = (v6 + 63) & 0xFFFFFFFFFFFFFFC0uLL;
          v6 = v7 + (unsigned int)*v17;
        }
      }
      else
      {
        v19 = *(v17 - 1);
        v6 = (unsigned int)(v19 + *v17 - 512);
        v7 = (unsigned int)(v19 - 512);
      }
      if ( _bittest64((const __int64 *)&v13, v11) )
      {
        if ( v6 > v21 || v6 > v8 )
          return 2147483653LL;
        memmove((char *)v9 + v7, (char *)v12 + v7, (unsigned int)*v17);
        _bittestandreset64((__int64 *)&v13, v11);
      }
      ++v11;
      v17 += 2;
      if ( v11 >= 0x40 )
        return 0LL;
      v14 = v23;
      v16 = v20;
      v12 = v22;
    }
  }
  return 0LL;
}
