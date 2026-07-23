/*
 * XREFs of MiMapBBTMemory @ 0x1407A6948
 * Callers:
 *     MiInitSystem @ 0x1407A3AAC (MiInitSystem.c)
 * Callees:
 *     MiMakeValidKernelPte @ 0x140034890 (MiMakeValidKernelPte.c)
 *     MiObtainSystemVa @ 0x1400A194C (MiObtainSystemVa.c)
 *     MiReturnSystemVa @ 0x1400BE760 (MiReturnSystemVa.c)
 *     MiMakeZeroedPageTables @ 0x140100034 (MiMakeZeroedPageTables.c)
 *     KeZeroPages @ 0x1401623C0 (KeZeroPages.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 */

void __fastcall MiMapBBTMemory(__int64 a1)
{
  unsigned __int64 v2; // rbx
  int *v3; // rdi
  unsigned __int64 v4; // rax
  __int64 *v5; // rsi
  __int64 v6; // rbx
  unsigned __int64 ValidKernelPte; // rax
  unsigned __int64 v8; // rcx
  __int64 *v9; // r14
  __int64 *v10; // r11
  __int64 v11; // r9
  unsigned __int64 v12; // r10
  __int64 v13; // rbp
  __int64 v14; // rcx
  __int64 v15; // r10
  unsigned __int64 v16; // rbx

  if ( BBTPagesToReserve )
  {
    v2 = (BBTPagesToReserve + 511) & 0xFFFFFFFFFFFFFE00uLL;
    v3 = *(int **)(*(_QWORD *)(a1 + 240) + 2472LL);
    if ( !v3 )
    {
      v4 = MiObtainSystemVa(v2 >> 9, 9u);
      v3 = (int *)v4;
      if ( !v4 )
      {
        BBTPagesToReserve = 0LL;
LABEL_21:
        BBTBuffer = (__int64)v3;
        return;
      }
      v5 = (__int64 *)(((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      v6 = (__int64)&v5[v2 - 1];
      if ( !(unsigned int)MiMakeZeroedPageTables((unsigned __int64)v5, v6, 0, 9u) )
      {
        MiReturnSystemVa((unsigned __int64)v3, ((v6 << 25) + 0x10000000) >> 16, 9, 0LL);
        v3 = 0LL;
        BBTPagesToReserve = 0LL;
        goto LABEL_21;
      }
      ValidKernelPte = MiMakeValidKernelPte(-1LL, 4, (unsigned __int64)v5);
      v8 = BBTPagesToReserve;
      v9 = (__int64 *)(a1 + 32);
      v10 = *(__int64 **)(a1 + 32);
      v11 = ValidKernelPte | 0x42;
      v2 = 0LL;
      while ( v10 != v9 )
      {
        if ( *((_DWORD *)v10 + 4) == 23 )
        {
          v12 = v10[4];
          v13 = v10[3];
          if ( v12 + v2 > v8 )
            v12 = v8 - v2;
          v2 += v12;
          do
          {
            *v5 = (v11 ^ (v13 << 12)) & 0xFFFFFFFFF000LL ^ v11;
            if ( MiPteInShadowRange((unsigned __int64)v5) )
              MiWritePteShadow(v14, v11);
            ++v5;
            ++v13;
          }
          while ( v15 != 1 );
          v8 = BBTPagesToReserve;
          if ( v2 == BBTPagesToReserve )
            goto LABEL_20;
        }
        v10 = (__int64 *)*v10;
      }
      if ( v2 < v8 )
        BBTPagesToReserve = v2;
    }
LABEL_20:
    v16 = v2 << 12;
    KeZeroPages(v3, v16);
    *(_QWORD *)v3 = v16;
    goto LABEL_21;
  }
}
