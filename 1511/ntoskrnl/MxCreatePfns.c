/*
 * XREFs of MxCreatePfns @ 0x140747D18
 * Callers:
 *     MiInitializePfnsForValidMappings @ 0x140745E40 (MiInitializePfnsForValidMappings.c)
 *     MxCreatePfns @ 0x140747D18 (MxCreatePfns.c)
 * Callees:
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401CE7A4 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 *     MxCreatePfns @ 0x140747D18 (MxCreatePfns.c)
 *     MxCreatePfn @ 0x140747FEC (MxCreatePfn.c)
 *     MiIsRegularMemory @ 0x140748108 (MiIsRegularMemory.c)
 */

void __fastcall MxCreatePfns(unsigned __int64 a1, unsigned __int64 a2, int a3, __int64 a4)
{
  unsigned __int64 v4; // rdi
  __int64 v5; // rbx
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // r8
  __int64 v8; // rbp
  unsigned __int64 v9; // rbx
  __int64 v10; // rbx
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // rbp
  unsigned __int64 v13; // rbx
  __int64 v14; // rbx
  __int64 v15; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v16; // [rsp+28h] [rbp-40h]
  __int64 v17[7]; // [rsp+30h] [rbp-38h] BYREF
  unsigned __int64 v18; // [rsp+70h] [rbp+8h]

  if ( a1 <= a2 )
  {
    v18 = a1;
    v4 = a1;
    do
    {
      v15 = MI_READ_PTE_LOCK_FREE((__int64 *)v4);
      v5 = v15;
      if ( (v15 & 1) != 0 )
      {
        v6 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v15) >> 12) & 0xFFFFFFFFFLL;
        v17[0] = MI_READ_PTE_LOCK_FREE((__int64 *)(((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL));
        v7 = MI_GET_PAGE_FRAME_FROM_PTE((__int64)v17);
        v16 = v7;
        v8 = 48 * v6 - 0x58000000000LL;
        *(_QWORD *)(48 * v7 - 0x58000000000LL + 24) ^= (*(_QWORD *)(48 * v7 - 0x58000000000LL + 24) ^ (*(_QWORD *)(48 * v7 - 0x58000000000LL + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
        if ( a3 != 1 )
        {
          if ( !a3 )
          {
            v13 = v5 & 0xFFFFFFFFFFFFFFFBuLL;
            if ( (v13 & 0x42) != 0 )
              v13 |= 0x800uLL;
            v14 = ((unsigned __int16)v13 ^ (unsigned __int16)((unsigned __int8)word_1402FE760 << 8)) & 0x100 ^ v13;
            v15 = v14;
            *(_QWORD *)v4 = v14;
            if ( MiPteInShadowRange(v4) )
              MiWritePteShadow(v4, v14);
            if ( (unsigned int)MiIsRegularMemory(a4, v6) )
            {
              if ( (*(_BYTE *)(v8 + 34) & 7) != 6
                || (*(_QWORD *)(v8 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 1
                && (*(_QWORD *)(v8 + 40) & 0xFFFFFFFFFLL) == 0xFFFFFFFFDLL )
              {
                MxCreatePfn(v6, v4, v16, 1LL);
              }
              else
              {
                *(_QWORD *)(v8 + 24) ^= (*(_QWORD *)(v8 + 24) ^ (*(_QWORD *)(v8 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
              }
            }
            goto LABEL_28;
          }
LABEL_26:
          MxCreatePfn(v6, v4, v7, 0LL);
          if ( v4 != 0xFFFFF6FB7DBEDF68uLL )
            MxCreatePfns((__int64)(v4 << 25) >> 16, ((__int64)(v4 << 25) >> 16) + 4088, (unsigned int)(a3 - 1), a4);
          goto LABEL_28;
        }
        if ( (v5 & 0x80u) == 0LL )
          goto LABEL_26;
        v9 = v5 & 0xFFFFFFFFFFFFFFFBuLL;
        if ( (v9 & 0x42) != 0 )
          v9 |= 0x800uLL;
        v10 = ((unsigned __int16)v9 ^ (unsigned __int16)((unsigned __int8)word_1402FE760 << 8)) & 0x100 ^ v9;
        v15 = v10;
        *(_QWORD *)v4 = v10;
        if ( MiPteInShadowRange(v4) )
          MiWritePteShadow(v4, v10);
        v11 = (__int64)(v4 << 25) >> 16;
        v12 = v11 + 4096;
        if ( v11 < v11 + 4096 )
        {
          do
          {
            if ( (unsigned int)MiIsRegularMemory(a4, v6) )
              MxCreatePfn(v6, v11, v16, 1LL);
            ++v6;
            v11 += 8LL;
          }
          while ( v11 < v12 );
          v4 = v18;
        }
      }
LABEL_28:
      v4 += 8LL;
      v18 = v4;
    }
    while ( v4 <= a2 );
  }
}
