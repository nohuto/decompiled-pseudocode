/*
 * XREFs of MiMapWithLargePages @ 0x14012E7FC
 * Callers:
 *     MiMapContiguousMemory @ 0x14009B0AC (MiMapContiguousMemory.c)
 *     MiUseLargeDriverPage @ 0x1404CFA5C (MiUseLargeDriverPage.c)
 * Callees:
 *     MiIsPfnInline @ 0x1400304A0 (MiIsPfnInline.c)
 *     MiMakeValidKernelPte @ 0x140034890 (MiMakeValidKernelPte.c)
 *     MiObtainSystemVa @ 0x1400A194C (MiObtainSystemVa.c)
 *     MiReturnSystemVa @ 0x1400BE760 (MiReturnSystemVa.c)
 *     MiMakeZeroedPageTables @ 0x140100034 (MiMakeZeroedPageTables.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
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
  __int64 v16; // rdx
  int v17; // ecx
  unsigned __int64 *v18; // r14
  __int64 v19; // r12
  unsigned __int64 ValidKernelPte; // rax
  __int64 v21; // rdx
  unsigned __int64 v22; // r9
  unsigned __int64 v23; // r10
  __int64 v24; // rcx
  __int64 v25; // r9
  unsigned __int64 *v26; // rdi
  unsigned __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // r9
  unsigned __int64 v30; // r9
  unsigned __int64 *v31; // r10
  __int64 v32; // rcx
  __int64 v33; // r9
  BOOL v35; // [rsp+70h] [rbp+28h]

  v6 = a5;
  if ( a5 == 9 )
    v6 = 15;
  v9 = a3 & 7;
  v10 = a2 >> 9;
  v11 = a2 >> 9 << 9;
  if ( (a2 & 0x1FF) != 0 )
    LODWORD(v10) = v10 + 1;
  v12 = MiObtainSystemVa(v10, v6);
  v13 = v12;
  if ( !v12 )
    return 0LL;
  v15 = ((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( MiIsPfnInline(a1) )
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
  v18 = (unsigned __int64 *)(v15 + 8 * v11);
  v35 = a5 == 12;
  if ( !(unsigned int)MiMakeZeroedPageTables(v15, (__int64)(v18 - 1), (a5 == 12) | 2u, a5) )
  {
LABEL_17:
    MiReturnSystemVa(v13, (a2 << 12) + v13, v6, 0LL);
    return 0LL;
  }
  if ( a2 == v11 )
  {
    v19 = a1;
  }
  else
  {
    if ( !(unsigned int)MiMakeZeroedPageTables(v15 + 8 * v11, v15 + 8 * (a2 - 1), v35, a5) )
      goto LABEL_17;
    v19 = a1;
    ValidKernelPte = MiMakeValidKernelPte(v11 + a1, v9, 0LL);
    v22 = ValidKernelPte;
    if ( (ValidKernelPte & 0x800) != 0 )
      v22 = ValidKernelPte | 0x42;
    v23 = v15 + 8 * a2;
    while ( (unsigned __int64)v18 < v23 )
    {
      *v18 = v22;
      if ( (unsigned int)MiPteInShadowRange(v18, v21) )
        MiWritePteShadow(v24, v25);
      v22 = (v25 ^ ((v25 & 0xFFFFFFFFFFFFF000uLL) + 4096)) & 0xFFFFFFFFF000LL ^ v25;
      ++v18;
    }
  }
  v26 = (unsigned __int64 *)(((v15 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v27 = MiMakeValidKernelPte(v19, v9, 0LL);
  v29 = v27;
  if ( (v27 & 0x800) != 0 )
    v29 = v27 | 0x42;
  v30 = v29 | 0x80;
  v31 = &v26[v11 >> 9];
  while ( v26 < v31 )
  {
    *v26 = v30;
    if ( (unsigned int)MiPteInShadowRange(v26, v28) )
      MiWritePteShadow(v32, v33);
    v30 = (v33 ^ ((v33 & 0xFFFFFFFFFFFFF000uLL) + 0x200000)) & 0xFFFFFFFFF000LL ^ v33;
    ++v26;
  }
  return v13;
}
