/*
 * XREFs of MiInitializeDynamicBitmap @ 0x140579BF4
 * Callers:
 *     MiBuildDynamicRegion @ 0x14015FC6C (MiBuildDynamicRegion.c)
 *     MiSessionCreate @ 0x140579240 (MiSessionCreate.c)
 *     MiInitializeSessionPool @ 0x140579B44 (MiInitializeSessionPool.c)
 *     MiBuildPagedPool @ 0x1407C9C28 (MiBuildPagedPool.c)
 *     MiInitializeSystemPtes @ 0x1407CA5BC (MiInitializeSystemPtes.c)
 *     MiInitializeNonPagedPool @ 0x1407CB188 (MiInitializeNonPagedPool.c)
 *     MiInitializePteInfo @ 0x1407E72E4 (MiInitializePteInfo.c)
 * Callees:
 *     MiMakeZeroedPageTables @ 0x1400697D8 (MiMakeZeroedPageTables.c)
 *     MI_SHOULD_PTE_BE_GLOBAL @ 0x1400B9CB0 (MI_SHOULD_PTE_BE_GLOBAL.c)
 *     MiFillGapAddresses @ 0x140163BCC (MiFillGapAddresses.c)
 *     MiPteInShadowRange @ 0x140225548 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 */

__int64 __fastcall MiInitializeDynamicBitmap(unsigned __int64 *a1, unsigned __int64 a2, unsigned __int64 a3, char a4)
{
  unsigned __int64 *v6; // rdi
  unsigned __int64 v7; // rsi
  __int64 *v10; // r8
  __int64 result; // rax
  __int64 v12; // rbx
  __int64 v13; // rbx
  __int64 v14; // rdx
  unsigned __int64 v15; // rbx

  v6 = (unsigned __int64 *)(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v7 = (a3 >> 15) + ((unsigned __int64)(((unsigned int)(a3 >> 3) & 0xFFF) + 4095) >> 12);
  if ( (a4 & 2) != 0 )
  {
LABEL_7:
    v12 = qword_14034F710;
    if ( (a4 & 8) == 0 )
      v12 = qword_14034F6F8;
    v13 = qword_1403D0218 ^ (qword_1403D0218 ^ (v12 << 12)) & 0xFFFFFFFFF000LL | 0x21;
    if ( (unsigned __int64)(v6 + 0x12098000000LL) <= 0x3FFFFFFF )
      v13 &= ~qword_1403D0220 & 0x7FFFFFFFFFFFFFFFLL;
    if ( (unsigned __int64)v6 <= (((unsigned __int64)MmHighestUserAddress >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL
      && (unsigned __int64)v6 >= 0xFFFFF68000000000uLL
      || (unsigned __int64)v6 >= 0xFFFFF6FB40000000uLL
      && (unsigned __int64)v6 <= (((unsigned __int64)MmHighestUserAddress >> 18) & 0x3FFFFFF8) - 0x904C0000000LL
      || (unsigned __int64)v6 >= 0xFFFFF6FB7DA00000uLL
      && (unsigned __int64)v6 <= (((unsigned __int64)MmHighestUserAddress >> 27) & 0x1FFFF8) - 0x90482600000LL
      || (unsigned __int64)v6 >= 0xFFFFF6FB7DBED000uLL
      && (unsigned __int64)v6 <= 8 * (((unsigned __int64)MmHighestUserAddress >> 39) & 0x1FF) - 0x90482413000LL )
    {
      v13 |= 4uLL;
    }
    if ( (unsigned int)MI_SHOULD_PTE_BE_GLOBAL((unsigned __int64)v6) )
      v13 |= 0x100uLL;
    v15 = ~v14 & (v13 | 0x8000000000000000uLL);
    if ( (a4 & 1) != 0 )
      v15 ^= (v15 ^ ((unsigned __int64)(unsigned __int8)word_14034EC18 << 8)) & 0x100;
    for ( ; v7; --v7 )
    {
      *v6 = v15;
      if ( MiPteInShadowRange((__int64)v6) )
        MiWritePteShadow((__int64)v6, v15);
      ++v6;
    }
    goto LABEL_28;
  }
  if ( (a4 & 4) == 0 )
  {
    result = MiMakeZeroedPageTables((unsigned __int64)v6, ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000008LL + 8 * v7, 1, 3);
    if ( !(_DWORD)result )
      return result;
    goto LABEL_7;
  }
  v10 = &qword_14034F748;
  if ( (a4 & 8) == 0 )
    v10 = &qword_14034F728;
  MiFillGapAddresses(a2, (v7 << 12) + a2 - 1, (int)v10);
LABEL_28:
  result = 1LL;
  a1[1] = a2;
  *a1 = a3;
  return result;
}
