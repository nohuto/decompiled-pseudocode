/*
 * XREFs of MiGetZeroingVa @ 0x1400FC4D0
 * Callers:
 *     MiZeroLargePage @ 0x1400FC2EC (MiZeroLargePage.c)
 * Callees:
 *     MI_SHOULD_PTE_BE_GLOBAL @ 0x1400B9CB0 (MI_SHOULD_PTE_BE_GLOBAL.c)
 *     MiReplaceUltraBit @ 0x1400FC6D4 (MiReplaceUltraBit.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 *     MiMapPagesToZero @ 0x14022EE30 (MiMapPagesToZero.c)
 */

__int64 __fastcall MiGetZeroingVa(__int64 *a1, __int64 a2)
{
  __int64 v4; // rbp
  __int64 v5; // rax
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // r9
  __int64 v8; // rbx
  unsigned __int64 *v9; // r9
  unsigned __int64 v10; // rdx

  if ( *((_BYTE *)a1 + 32) != 1 )
    return MiMapPagesToZero(a1[5], 48 * a2 - 0x58000000000LL);
  v4 = *a1;
  if ( a1[1] == -1 || a1[2] == 512 )
  {
    v5 = MiReplaceUltraBit(a1, 1LL);
    a1[2] = 0LL;
    a1[1] = v5;
  }
  v6 = *(_QWORD *)(v4 + 48) + ((a1[2] + (a1[1] << 9)) << 21);
  v7 = ((v6 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  v8 = ~qword_1403D0220 & 0x7FFFFFFFFFFFFFFFLL & (qword_1403D0230 ^ (qword_1403D0230 ^ (a2 << 12)) & 0xFFFFFFFFF000LL | 0x21);
  if ( v7 <= (((unsigned __int64)MmHighestUserAddress >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL
    && v7 >= 0xFFFFF68000000000uLL
    || v7 >= 0xFFFFF6FB40000000uLL
    && v7 <= (((unsigned __int64)MmHighestUserAddress >> 18) & 0x3FFFFFF8) - 0x904C0000000LL
    || v7 >= 0xFFFFF6FB7DA00000uLL
    && v7 <= (((unsigned __int64)MmHighestUserAddress >> 27) & 0x1FFFF8) - 0x90482600000LL
    || v7 >= 0xFFFFF6FB7DBED000uLL
    && v7 <= 8 * (((unsigned __int64)MmHighestUserAddress >> 39) & 0x1FF) - 0x90482413000LL )
  {
    v8 |= 4uLL;
  }
  if ( (unsigned int)MI_SHOULD_PTE_BE_GLOBAL(
                       (((unsigned __int64)(*(_QWORD *)(v4 + 48) + ((a1[2] + (a1[1] << 9)) << 21)) >> 18) & 0x3FFFFFF8)
                     - 0x904C0000000LL) )
    v8 |= 0x100uLL;
  v10 = v8 ^ (v8 ^ ((unsigned __int64)(unsigned __int8)word_14034EC18 << 8)) & 0x100 | 0xC2;
  *v9 = v10;
  if ( (unsigned __int64)(v9 + 0x12090482600LL) <= 0x7F8 )
    MiWritePteShadow(v9, v10);
  return v6;
}
