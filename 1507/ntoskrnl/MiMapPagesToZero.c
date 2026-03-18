/*
 * XREFs of MiMapPagesToZero @ 0x14022EE30
 * Callers:
 *     MiGetZeroingVa @ 0x1400FC4D0 (MiGetZeroingVa.c)
 * Callees:
 *     MiFinalizePageAttribute @ 0x140059C28 (MiFinalizePageAttribute.c)
 *     MiMakeProtectionPfnCompatible @ 0x1400797E8 (MiMakeProtectionPfnCompatible.c)
 *     MI_SHOULD_PTE_BE_GLOBAL @ 0x1400B9CB0 (MI_SHOULD_PTE_BE_GLOBAL.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 */

__int64 __fastcall MiMapPagesToZero(unsigned __int64 *a1, __int64 a2, int a3)
{
  __int64 v4; // rdi
  unsigned __int64 *v5; // rbx
  __int64 v6; // rbp
  __int64 v7; // rsi
  __int64 v8; // r8
  unsigned __int64 v9; // r9
  unsigned __int64 v10; // rdx

  v4 = a2;
  v5 = a1;
  if ( a3 == 1 )
    v6 = a2 + 24576;
  else
    v6 = 0LL;
  v7 = (__int64)((_QWORD)a1 << 25) >> 16;
  do
  {
    if ( (*(_BYTE *)(v4 + 34) & 0xC0) == 0xC0 )
      MiFinalizePageAttribute(v4, 1LL, 0);
    MiMakeProtectionPfnCompatible(4, v4);
    if ( (unsigned int)MI_SHOULD_PTE_BE_GLOBAL((unsigned __int64)v5) )
      v8 |= 0x100uLL;
    v10 = v8 & 0xFFFFFFFFFFFFFE7FuLL | ((unsigned __int64)(word_14034EC18 & 1) << 8) | 0x42;
    *v5 = v10;
    if ( v9 <= 0x7F8 )
      MiWritePteShadow((__int64)v5, v10);
    ++v5;
    if ( a3 == 1 )
      v4 += 48LL;
    else
      v4 = *(_QWORD *)v4;
  }
  while ( v4 != v6 );
  return v7;
}
