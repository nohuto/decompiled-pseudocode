/*
 * XREFs of MiMapSinglePage @ 0x140003778
 * Callers:
 *     MiInitializeForkMaps @ 0x140001E10 (MiInitializeForkMaps.c)
 *     MiUpdateForkMaps @ 0x14000336C (MiUpdateForkMaps.c)
 *     MiFillCombinePage @ 0x14022A650 (MiFillCombinePage.c)
 * Callees:
 *     KeFlushSingleTb @ 0x14003FB20 (KeFlushSingleTb.c)
 *     MiMakeProtectionPfnCompatible @ 0x1400797E8 (MiMakeProtectionPfnCompatible.c)
 *     MiReservePtes @ 0x1400AAD50 (MiReservePtes.c)
 *     MI_SHOULD_PTE_BE_GLOBAL @ 0x1400B9CB0 (MI_SHOULD_PTE_BE_GLOBAL.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 */

__int64 __fastcall MiMapSinglePage(unsigned __int64 a1, __int64 a2, int a3)
{
  __int64 v4; // rbp
  __int64 v6; // rdi
  __int64 result; // rax
  _QWORD *v8; // rbx
  __int64 v9; // rcx
  int ProtectionPfnCompatible; // eax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r8
  unsigned __int64 v14; // rdx
  __int64 v15; // rdx

  v4 = 48 * a2 - 0x58000000000LL;
  v6 = a1;
  if ( a1 )
  {
    v8 = (_QWORD *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    *v8 = 0LL;
    if ( (unsigned __int64)(v8 + 0x12090482600LL) <= 0x7F8 )
      MiWritePteShadow(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, 0LL);
    KeFlushSingleTb(v6, 0LL, 1LL);
  }
  else
  {
    result = MiReservePtes(&qword_14034FC70, 1LL);
    v8 = (_QWORD *)result;
    if ( !result )
      return result;
    v6 = result << 25 >> 16;
  }
  v9 = a3 < 0 ? 1 : 4;
  if ( (a3 & 0x40000000) == 0 )
    v9 = (unsigned int)v9 | 2;
  ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(v9, v4);
  v11 = 0x904C0000000LL;
  v12 = MmProtectToPteMask[ProtectionPfnCompatible] | 0xFFFFFFFFF021LL;
  if ( (unsigned __int64)(v8 + 0x12098000000LL) <= 0x3FFFFFFF )
    v12 &= ~qword_1403D0220 & 0x7FFFFFFFFFFFFFFFLL;
  if ( (unsigned __int64)v8 <= (((unsigned __int64)MmHighestUserAddress >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL
    && (unsigned __int64)v8 >= 0xFFFFF68000000000uLL
    || (unsigned __int64)v8 >= 0xFFFFF6FB40000000uLL
    && (unsigned __int64)v8 <= (((unsigned __int64)MmHighestUserAddress >> 18) & 0x3FFFFFF8) - 0x904C0000000LL
    || (unsigned __int64)v8 >= 0xFFFFF6FB7DA00000uLL
    && (v11 = 0x90482600000LL,
        (unsigned __int64)v8 <= (((unsigned __int64)MmHighestUserAddress >> 27) & 0x1FFFF8) - 0x90482600000LL)
    || (unsigned __int64)v8 >= 0xFFFFF6FB7DBED000uLL
    && (unsigned __int64)v8 <= 8 * (((unsigned __int64)MmHighestUserAddress >> 39) & 0x1FF) - 0x90482413000LL )
  {
    v12 |= 4uLL;
  }
  if ( (unsigned int)MI_SHOULD_PTE_BE_GLOBAL(v8, v11, v12) )
    v13 |= 0x100uLL;
  v14 = v13 & 0xFFFFFFFFFFFFFE7FuLL | ((unsigned __int64)(word_14034EC18 & 1) << 8);
  if ( v13 & 0x800 | ((word_14034EC18 & 1) << 8) & 0x800 )
    v14 |= 0x42uLL;
  v15 = (v14 ^ (a2 << 12)) & 0xFFFFFFFFF000LL ^ v14;
  *v8 = v15;
  if ( (unsigned __int64)(v8 + 0x12090482600LL) <= 0x7F8 )
    MiWritePteShadow(v8, v15);
  return v6;
}
