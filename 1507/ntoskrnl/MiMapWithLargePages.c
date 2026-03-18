/*
 * XREFs of MiMapWithLargePages @ 0x140158140
 * Callers:
 *     MiMapContiguousMemory @ 0x1401159C0 (MiMapContiguousMemory.c)
 *     MiUseLargeDriverPage @ 0x140573B54 (MiUseLargeDriverPage.c)
 * Callees:
 *     MiObtainSystemVa @ 0x140067684 (MiObtainSystemVa.c)
 *     MiMakeZeroedPageTables @ 0x1400697D8 (MiMakeZeroedPageTables.c)
 *     MI_SHOULD_PTE_BE_GLOBAL @ 0x1400B9CB0 (MI_SHOULD_PTE_BE_GLOBAL.c)
 *     MI_IS_PFN @ 0x1400C56E0 (MI_IS_PFN.c)
 *     MiReturnSystemVa @ 0x140108060 (MiReturnSystemVa.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 */

unsigned __int64 __fastcall MiMapWithLargePages(
        unsigned __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5)
{
  int v6; // r12d
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // r14
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rbp
  unsigned __int64 v13; // rdi
  unsigned __int64 *v14; // r15
  __int64 v15; // rdx
  unsigned __int64 v16; // rbx
  unsigned __int64 v17; // r12
  __int64 *v18; // rdi
  __int64 v19; // rdx
  char v20; // r8
  __int64 v21; // r9
  unsigned __int64 v22; // rbx
  __int64 v23; // rbx
  __int64 *v24; // r14
  unsigned __int64 v25; // rsi
  unsigned __int64 v27; // [rsp+68h] [rbp+10h]
  BOOL v28; // [rsp+80h] [rbp+28h]

  v6 = a5;
  if ( a5 == 9 )
    v6 = 15;
  v8 = a2 >> 9;
  v9 = a2 >> 9 << 9;
  if ( (a2 & 0x1FF) != 0 )
    LODWORD(v8) = v8 + 1;
  v10 = MiObtainSystemVa(v8, v6);
  v11 = v10;
  if ( !v10 )
    return 0LL;
  v13 = ((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  MI_IS_PFN(a1);
  v14 = (unsigned __int64 *)(v13 + 8 * v9);
  v28 = a5 == 12;
  if ( !(unsigned int)MiMakeZeroedPageTables(v13, (__int64)(v14 - 1), (a5 == 12) | 2u, a5) )
  {
LABEL_8:
    MiReturnSystemVa(v11, (a2 << 12) + v11, v6, 0LL);
    return 0LL;
  }
  if ( a2 != v9 )
  {
    v27 = v13 + 8 * a2;
    if ( !(unsigned int)MiMakeZeroedPageTables(v13 + 8 * v9, v27 - 8, v28, a5) )
      goto LABEL_8;
    if ( (unsigned int)MI_SHOULD_PTE_BE_GLOBAL(0LL) )
      v15 |= 0x100uLL;
    v16 = v15 & 0xFFFFFFFFFFFFFE7FuLL | ((unsigned __int64)(word_14034EC18 & 1) << 8);
    if ( v15 & 0x800 | ((word_14034EC18 & 1) << 8) & 0x800 )
      v16 |= 0x42uLL;
    if ( (unsigned __int64)v14 < v27 )
    {
      v17 = (unsigned __int64)(v14 + 0x12090482600LL);
      do
      {
        *v14 = v16;
        if ( v17 <= 0x7F8 )
          MiWritePteShadow(v14, v16);
        ++v14;
        v17 += 8LL;
        v16 ^= (v16 ^ ((v16 & 0xFFFFFFFFFFFFF000uLL) + 4096)) & 0xFFFFFFFFF000LL;
      }
      while ( (unsigned __int64)v14 < v27 );
    }
  }
  v18 = (__int64 *)(((v13 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  if ( (unsigned int)MI_SHOULD_PTE_BE_GLOBAL(0LL) )
    v19 |= 0x100uLL;
  v22 = v19 & 0xFFFFFFFFFFFFFE7FuLL | ((unsigned __int64)(unsigned __int8)(v20 & word_14034EC18) << 8);
  if ( v19 & 0x800 | ((unsigned __int8)(v20 & word_14034EC18) << 8) & 0x800 )
    v22 |= 0x42uLL;
  v23 = v22 | 0x80;
  v24 = &v18[v9 >> 9];
  if ( v18 < v24 )
  {
    v25 = (unsigned __int64)v18 + v21;
    do
    {
      *v18 = v23;
      if ( v25 <= 0x7F8 )
        MiWritePteShadow(v18, v23);
      ++v18;
      v25 += 8LL;
      v23 ^= (v23 ^ ((v23 & 0xFFFFFFFFFFFFF000uLL) + 0x200000)) & 0xFFFFFFFFF000LL;
    }
    while ( v18 < v24 );
  }
  return v11;
}
