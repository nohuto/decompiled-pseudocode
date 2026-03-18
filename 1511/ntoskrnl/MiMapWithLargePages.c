/*
 * XREFs of MiMapWithLargePages @ 0x140124B88
 * Callers:
 *     MiMapContiguousMemory @ 0x1400C0CB8 (MiMapContiguousMemory.c)
 *     MiUseLargeDriverPage @ 0x1403CC26C (MiUseLargeDriverPage.c)
 * Callees:
 *     MiReturnSystemVa @ 0x140015490 (MiReturnSystemVa.c)
 *     MiMakeZeroedPageTables @ 0x140017868 (MiMakeZeroedPageTables.c)
 *     MiObtainSystemVa @ 0x140018A70 (MiObtainSystemVa.c)
 *     MiMakeValidKernelPte @ 0x14004D080 (MiMakeValidKernelPte.c)
 *     MI_IS_PFN @ 0x140051760 (MI_IS_PFN.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 */

unsigned __int64 __fastcall MiMapWithLargePages(
        unsigned __int64 a1,
        unsigned __int64 a2,
        char a3,
        int a4,
        unsigned int a5)
{
  unsigned int v6; // r12d
  int v9; // esi
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // r15
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rbp
  unsigned __int64 v15; // rdi
  __int64 v16; // r9
  int v17; // ecx
  __int64 *v18; // r14
  __int64 v19; // r9
  __int64 v20; // r9
  __int64 v21; // r12
  unsigned __int64 ValidKernelPte; // rax
  __int64 v23; // rbx
  __int64 *v24; // rdi
  unsigned __int64 v25; // rax
  __int64 v26; // rbx
  __int64 v27; // rbx
  __int64 *v28; // rsi
  unsigned __int64 v29; // [rsp+20h] [rbp-48h]
  unsigned __int64 v31; // [rsp+78h] [rbp+10h]
  BOOL v32; // [rsp+90h] [rbp+28h]

  v6 = a5;
  if ( a5 == 9 )
    v6 = 15;
  v9 = a3 & 7;
  v10 = a2 >> 9;
  v11 = a2 >> 9 << 9;
  if ( (a2 & 0x1FF) != 0 )
    LODWORD(v10) = v10 + 1;
  v12 = MiObtainSystemVa(v10, v6);
  v31 = v12;
  v13 = v12;
  if ( !v12 )
    return 0LL;
  v15 = ((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( MI_IS_PFN(a1) )
  {
    v17 = *(unsigned __int8 *)(48 * v16 - 0x57FFFFFFFDELL) >> 6;
    if ( v17 )
    {
      if ( v17 == 2 )
        v9 |= 0x18u;
    }
    else
    {
      v9 |= 8u;
    }
  }
  else if ( a4 )
  {
    if ( a4 == 2 )
      v9 |= 0x38u;
  }
  else
  {
    v9 |= 0x28u;
  }
  v18 = (__int64 *)(v15 + 8 * v11);
  v32 = a5 == 12;
  if ( !(unsigned int)MiMakeZeroedPageTables(v15, (__int64)(v18 - 1), (a5 == 12) | 2u, a5) )
  {
LABEL_17:
    MiReturnSystemVa(v13, (a2 << 12) + v13, v6, 0LL);
    return 0LL;
  }
  if ( a2 == v11 )
  {
    v21 = a1;
  }
  else
  {
    v29 = v15 + 8 * a2;
    if ( !(unsigned int)MiMakeZeroedPageTables(v15 + 8 * v11, v29 - 8, v32, a5) )
      goto LABEL_17;
    v21 = a1;
    ValidKernelPte = MiMakeValidKernelPte(v11 + a1, v9, 0LL, v20);
    v23 = ValidKernelPte;
    if ( (ValidKernelPte & 0x800) != 0 )
      v23 = ValidKernelPte | 0x42;
    if ( (unsigned __int64)v18 < v29 )
    {
      do
      {
        *v18 = v23;
        if ( (unsigned int)MiPteInShadowRange(v18) )
          MiWritePteShadow(v18, v23);
        ++v18;
        v23 ^= (v23 ^ ((v23 & 0xFFFFFFFFFFFFF000uLL) + 4096)) & 0xFFFFFFFFF000LL;
      }
      while ( (unsigned __int64)v18 < v29 );
      v13 = v31;
    }
  }
  v24 = (__int64 *)(((v15 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v25 = MiMakeValidKernelPte(v21, v9, 0LL, v19);
  v26 = v25;
  if ( (v25 & 0x800) != 0 )
    v26 = v25 | 0x42;
  v27 = v26 | 0x80;
  v28 = &v24[v11 >> 9];
  if ( v24 < v28 )
  {
    do
    {
      *v24 = v27;
      if ( (unsigned int)MiPteInShadowRange(v24) )
        MiWritePteShadow(v24, v27);
      ++v24;
      v27 ^= (v27 ^ ((v27 & 0xFFFFFFFFFFFFF000uLL) + 0x200000)) & 0xFFFFFFFFF000LL;
    }
    while ( v24 < v28 );
    return v31;
  }
  return v13;
}
