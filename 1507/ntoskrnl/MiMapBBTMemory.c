/*
 * XREFs of MiMapBBTMemory @ 0x1407C8220
 * Callers:
 *     MiInitSystem @ 0x1407C8BD0 (MiInitSystem.c)
 * Callees:
 *     MiObtainSystemVa @ 0x140067684 (MiObtainSystemVa.c)
 *     MiMakeZeroedPageTables @ 0x1400697D8 (MiMakeZeroedPageTables.c)
 *     MI_SHOULD_PTE_BE_GLOBAL @ 0x1400B9CB0 (MI_SHOULD_PTE_BE_GLOBAL.c)
 *     MiReturnSystemVa @ 0x140108060 (MiReturnSystemVa.c)
 *     KeZeroPages @ 0x140186BF0 (KeZeroPages.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 */

void __fastcall MiMapBBTMemory(__int64 a1)
{
  unsigned __int64 v1; // rdi
  int *v3; // r14
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // rax
  unsigned __int64 *v6; // rsi
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 *v9; // r13
  __int64 *v10; // rbp
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // r15
  __int64 v14; // r12
  unsigned __int64 v15; // rdi

  v1 = 0LL;
  if ( BBTPagesToReserve )
  {
    v3 = *(int **)(*(_QWORD *)(a1 + 240) + 2472LL);
    if ( v3 )
    {
      v1 = (BBTPagesToReserve + 511) & 0xFFFFFFFFFFFFFE00uLL;
LABEL_23:
      v15 = v1 << 12;
      KeZeroPages(v3, v15);
      *(_QWORD *)v3 = v15;
      goto LABEL_24;
    }
    v4 = (BBTPagesToReserve + 511) & 0xFFFFFFFFFFFFFE00uLL;
    v5 = MiObtainSystemVa(v4 >> 9, 9);
    v3 = (int *)v5;
    if ( v5 )
    {
      v6 = (unsigned __int64 *)(((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      v7 = (__int64)&v6[v4 - 1];
      if ( (unsigned int)MiMakeZeroedPageTables((unsigned __int64)v6, v7, 0, 9) )
      {
        if ( (unsigned int)MI_SHOULD_PTE_BE_GLOBAL((unsigned __int64)v6) )
          v8 |= 0x100uLL;
        v9 = (__int64 *)(a1 + 32);
        v10 = *(__int64 **)(a1 + 32);
        v11 = BBTPagesToReserve;
        v12 = v8 & 0xFFFFFFFFFFFFFE7FuLL | ((unsigned __int64)(word_14034EC18 & 1) << 8) | 0x42;
        while ( v10 != v9 )
        {
          if ( *((_DWORD *)v10 + 4) == 23 )
          {
            v13 = v10[4];
            v14 = v10[3];
            if ( v13 + v1 > v11 )
              v13 = v11 - v1;
            v1 += v13;
            do
            {
              v12 ^= (v12 ^ (v14 << 12)) & 0xFFFFFFFFF000LL;
              *v6 = v12;
              if ( (unsigned __int64)(v6 + 0x12090482600LL) <= 0x7F8 )
                MiWritePteShadow((__int64)v6, v12);
              ++v6;
              ++v14;
              --v13;
            }
            while ( v13 );
            v11 = BBTPagesToReserve;
            if ( v1 == BBTPagesToReserve )
              goto LABEL_23;
          }
          v10 = (__int64 *)*v10;
        }
        if ( v1 < v11 )
          BBTPagesToReserve = v1;
        goto LABEL_23;
      }
      MiReturnSystemVa((unsigned __int64)v3, ((v7 << 25) + 0x10000000) >> 16, 9, 0LL);
      v3 = 0LL;
    }
    BBTPagesToReserve = 0LL;
LABEL_24:
    BBTBuffer = (__int64)v3;
  }
}
