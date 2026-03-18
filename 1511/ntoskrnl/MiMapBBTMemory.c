/*
 * XREFs of MiMapBBTMemory @ 0x14074E034
 * Callers:
 *     MiInitSystem @ 0x14074C59C (MiInitSystem.c)
 * Callees:
 *     MiReturnSystemVa @ 0x140015490 (MiReturnSystemVa.c)
 *     MiMakeZeroedPageTables @ 0x140017868 (MiMakeZeroedPageTables.c)
 *     MiObtainSystemVa @ 0x140018A70 (MiObtainSystemVa.c)
 *     MiMakeValidKernelPte @ 0x14004D080 (MiMakeValidKernelPte.c)
 *     KeZeroPages @ 0x140157480 (KeZeroPages.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 */

void __fastcall MiMapBBTMemory(__int64 a1)
{
  int *v2; // rsi
  unsigned __int64 v3; // rdi
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // rax
  __int64 *v6; // r15
  __int64 v7; // rbx
  __int64 v8; // r9
  unsigned __int64 ValidKernelPte; // rax
  unsigned __int64 v10; // rcx
  __int64 *v11; // r13
  __int64 *v12; // rbp
  __int64 v13; // rbx
  unsigned __int64 v14; // r14
  __int64 v15; // r12
  unsigned __int64 v16; // rdi

  if ( BBTPagesToReserve )
  {
    v2 = *(int **)(*(_QWORD *)(a1 + 240) + 2472LL);
    if ( v2 )
    {
      v3 = (BBTPagesToReserve + 511) & 0xFFFFFFFFFFFFFE00uLL;
LABEL_21:
      v16 = v3 << 12;
      KeZeroPages(v2, v16);
      *(_QWORD *)v2 = v16;
      goto LABEL_22;
    }
    v4 = (BBTPagesToReserve + 511) & 0xFFFFFFFFFFFFFE00uLL;
    v5 = MiObtainSystemVa(v4 >> 9, 9u);
    v2 = (int *)v5;
    if ( v5 )
    {
      v6 = (__int64 *)(((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      v7 = (__int64)&v6[v4 - 1];
      if ( (unsigned int)MiMakeZeroedPageTables((unsigned __int64)v6, v7, 0, 9u) )
      {
        ValidKernelPte = MiMakeValidKernelPte(-1LL, 4, (unsigned __int64)v6, v8);
        v10 = BBTPagesToReserve;
        v11 = (__int64 *)(a1 + 32);
        v12 = *(__int64 **)(a1 + 32);
        v13 = ValidKernelPte | 0x42;
        v3 = 0LL;
        while ( v12 != v11 )
        {
          if ( *((_DWORD *)v12 + 4) == 23 )
          {
            v14 = v12[4];
            v15 = v12[3];
            if ( v14 + v3 > v10 )
              v14 = v10 - v3;
            v3 += v14;
            do
            {
              v13 ^= (v13 ^ (v15 << 12)) & 0xFFFFFFFFF000LL;
              *v6 = v13;
              if ( MiPteInShadowRange((__int64)v6) )
                MiWritePteShadow((__int64)v6, v13);
              ++v6;
              ++v15;
              --v14;
            }
            while ( v14 );
            v10 = BBTPagesToReserve;
            if ( v3 == BBTPagesToReserve )
              goto LABEL_21;
          }
          v12 = (__int64 *)*v12;
        }
        if ( v3 < v10 )
          BBTPagesToReserve = v3;
        goto LABEL_21;
      }
      MiReturnSystemVa((unsigned __int64)v2, ((v7 << 25) + 0x10000000) >> 16, 9, 0LL);
      v2 = 0LL;
      BBTPagesToReserve = 0LL;
    }
    else
    {
      BBTPagesToReserve = 0LL;
    }
LABEL_22:
    BBTBuffer = (__int64)v2;
  }
}
