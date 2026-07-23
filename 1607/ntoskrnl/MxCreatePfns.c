/*
 * XREFs of MxCreatePfns @ 0x140797A68
 * Callers:
 *     MiInitializePfnsForValidMappings @ 0x14078F8AC (MiInitializePfnsForValidMappings.c)
 *     MxCreatePfns @ 0x140797A68 (MxCreatePfns.c)
 * Callees:
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401F237C (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 *     MxCreatePfns @ 0x140797A68 (MxCreatePfns.c)
 *     MiIsRegularMemory @ 0x140797D00 (MiIsRegularMemory.c)
 *     MxCreatePfn @ 0x140797D78 (MxCreatePfn.c)
 */

void __fastcall MxCreatePfns(unsigned __int64 a1, unsigned __int64 a2, int a3, __int64 a4)
{
  int v4; // edi
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rsi
  __int64 v7; // r11
  __int64 v8; // r9
  unsigned __int64 v9; // r11
  unsigned __int64 v10; // r9
  __int64 v11; // rcx
  __int64 v12; // r9
  __int64 v13; // r10
  __int64 v14; // r11
  unsigned __int64 v15; // r9
  __int64 v16; // rcx
  __int64 v17; // r9
  __int64 v18; // r10
  __int64 v19; // r11
  unsigned __int64 v20; // rdi
  unsigned __int64 v21; // rbp
  __int64 v22; // rbx
  __int64 v23; // [rsp+20h] [rbp-48h] BYREF
  __int64 v24[8]; // [rsp+28h] [rbp-40h] BYREF
  unsigned __int64 v25; // [rsp+70h] [rbp+8h]

  if ( a1 <= a2 )
  {
    v25 = a1;
    v4 = a3;
    v5 = a1;
    do
    {
      v23 = MI_READ_PTE_LOCK_FREE(v5);
      if ( (v23 & 1) != 0 )
      {
        v6 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v23) >> 12) & 0xFFFFFFFFFLL;
        v24[0] = MI_READ_PTE_LOCK_FREE((v7 & (v5 >> 9)) - 0x98000000000LL);
        v9 = MI_GET_PAGE_FRAME_FROM_PTE((__int64)v24);
        *(_QWORD *)(48 * v9 - 0x58000000000LL + 24) ^= (*(_QWORD *)(48 * v9 - 0x58000000000LL + 24) ^ (*(_QWORD *)(48 * v9 - 0x58000000000LL + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
        if ( v4 )
        {
          if ( (v8 & 0x80u) == 0LL )
          {
            MxCreatePfn(v6, v5, v9, 0LL, v23);
            if ( v5 != 0xFFFFF6FB7DBEDF68uLL )
              MxCreatePfns((__int64)(v5 << 25) >> 16, ((__int64)(v5 << 25) >> 16) + 4088, (unsigned int)(v4 - 1), a4);
          }
          else
          {
            v15 = v8 & 0xFFFFFFFFFFFFFFFBuLL;
            if ( (v15 & 0x42) != 0 )
              v15 |= 0x800uLL;
            v23 = ((unsigned __int16)v15 ^ (unsigned __int16)((unsigned __int8)word_140326AE8 << 8)) & 0x100 ^ v15;
            *(_QWORD *)v5 = v23;
            if ( MiPteInShadowRange(v5) )
              MiWritePteShadow(v16, v17);
            v20 = (__int64)(v5 << 25) >> 16;
            v21 = v20 + 4096;
            if ( v20 < v20 + 4096 )
            {
              v22 = v19;
              do
              {
                if ( (unsigned int)MiIsRegularMemory(v18, v6) )
                {
                  MxCreatePfn(v6, v20, v22, 1LL, v23);
                  v18 = a4;
                }
                ++v6;
                v20 += 8LL;
              }
              while ( v20 < v21 );
              v5 = v25;
            }
            v4 = a3;
          }
        }
        else
        {
          v10 = v8 & 0xFFFFFFFFFFFFFFFBuLL;
          if ( (v10 & 0x42) != 0 )
            v10 |= 0x800uLL;
          v23 = ((unsigned __int16)v10 ^ (unsigned __int16)((unsigned __int8)word_140326AE8 << 8)) & 0x100 ^ v10;
          *(_QWORD *)v5 = v23;
          if ( MiPteInShadowRange(v5) )
            MiWritePteShadow(v11, v12);
          if ( (unsigned int)MiIsRegularMemory(v13, v6) )
            MxCreatePfn(v6, v5, v14, 1LL, v23);
        }
      }
      v5 += 8LL;
      v25 = v5;
    }
    while ( v5 <= a2 );
  }
}
