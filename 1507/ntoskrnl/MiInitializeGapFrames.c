/*
 * XREFs of MiInitializeGapFrames @ 0x1407D501C
 * Callers:
 *     MmInitNucleus @ 0x1407D42F4 (MmInitNucleus.c)
 *     MiFillPfnGaps @ 0x1407D4FC4 (MiFillPfnGaps.c)
 * Callees:
 *     MiChargeResident @ 0x14003C6D0 (MiChargeResident.c)
 *     MiFinalizePageAttribute @ 0x140059C28 (MiFinalizePageAttribute.c)
 *     MiChargeCommit @ 0x14008F4A0 (MiChargeCommit.c)
 *     MiReservePtes @ 0x1400AAD50 (MiReservePtes.c)
 *     MiReleasePtes @ 0x1400B1800 (MiReleasePtes.c)
 *     MI_SHOULD_PTE_BE_GLOBAL @ 0x1400B9CB0 (MI_SHOULD_PTE_BE_GLOBAL.c)
 *     MiGetPage @ 0x1400BD890 (MiGetPage.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 */

__int64 __fastcall MiInitializeGapFrames(unsigned __int64 a1, __int64 *a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v6; // r8
  __int64 *v7; // rsi
  __int64 v8; // rbx
  __int64 *i; // r14
  __int64 Page; // rax
  __int64 v11; // r12
  __int64 v12; // rdi
  unsigned __int64 v13; // r8
  __int64 v14; // r10
  __int64 v15; // r9
  __int64 v16; // rdi
  unsigned __int64 *v17; // r8
  __int64 v18; // r9
  __int64 v19; // r11
  unsigned __int64 v20; // rdx
  __int64 v21; // r8
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rcx
  __int64 v24; // rdi
  unsigned __int64 v25; // rdx
  __int64 v26; // rdx

  if ( (unsigned int)MiChargeResident(MiSystemPartition, 4uLL, 0LL, a4) )
  {
    _InterlockedExchangeAdd64(&qword_14034F8C8, 4uLL);
    if ( (unsigned int)MiChargeCommit((__int64)MiSystemPartition, 4uLL, 1) )
    {
      v7 = MiReservePtes((__int64)&qword_14034FC70, 4u, v6);
      if ( v7 )
      {
        v8 = 0LL;
        for ( i = a2; ; ++i )
        {
          Page = MiGetPage((__int64)MiSystemPartition, v8, 8u);
          v11 = Page;
          if ( Page == -1 )
            break;
          v12 = 48 * Page - 0x58000000000LL;
          *(_QWORD *)v12 = 0LL;
          *(_QWORD *)(v12 + 40) &= ~0x200000000000000uLL;
          *(_WORD *)(v12 + 32) = 1;
          MiFinalizePageAttribute(v12, 1LL, 0);
          v13 = (unsigned __int64)&v7[v8];
          v14 = qword_1403D0230;
          v15 = qword_1403D0220;
          *(_QWORD *)(v12 + 24) = *(_QWORD *)(v12 + 24) & 0xC000000000000000uLL | 1;
          v16 = v14 ^ (v14 ^ (v11 << 12)) & 0xFFFFFFFFF000LL | 0x21;
          if ( v13 + 0x904C0000000LL <= 0x3FFFFFFF )
            v16 &= ~v15 & 0x7FFFFFFFFFFFFFFFLL;
          if ( v13 <= (((unsigned __int64)MmHighestUserAddress >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL
            && v13 >= 0xFFFFF68000000000uLL
            || v13 >= 0xFFFFF6FB40000000uLL
            && v13 <= (((unsigned __int64)MmHighestUserAddress >> 18) & 0x3FFFFFF8) - 0x904C0000000LL
            || v13 >= 0xFFFFF6FB7DA00000uLL
            && v13 <= (((unsigned __int64)MmHighestUserAddress >> 27) & 0x1FFFF8) - 0x90482600000LL
            || v13 >= 0xFFFFF6FB7DBED000uLL
            && v13 <= 8 * (((unsigned __int64)MmHighestUserAddress >> 39) & 0x1FF) - 0x90482413000LL )
          {
            v16 |= 4uLL;
          }
          if ( (unsigned int)MI_SHOULD_PTE_BE_GLOBAL((unsigned __int64)&v7[v8]) )
            v16 |= 0x100uLL;
          v20 = v16 & 0xFFFFFFFFFFFFFE7FuLL | ((unsigned __int64)(word_14034EC18 & 1) << 8) | 0x42;
          *v17 = v20;
          if ( (unsigned __int64)(v17 + 0x12090482600LL) <= 0x7F8 )
          {
            MiWritePteShadow((__int64)v17, v20);
            v19 = 0x12098000000LL;
            v18 = qword_1403D0220;
          }
          v21 = (__int64)(((unsigned __int64)(unsigned int)v8 << 28) + ((_QWORD)v7 << 25)) >> 16;
          if ( (_DWORD)v8 )
          {
            if ( (_DWORD)v8 == 1 )
            {
              v23 = (unsigned __int64)(v7 + 1);
              v24 = qword_1403D0218 ^ (qword_1403D0218 ^ (*a2 << 12)) & 0xFFFFFFFFF000LL | 0x21;
              if ( (unsigned __int64)&v7[v19 + 1] <= 0x3FFFFFFF )
                v24 &= ~v18 & 0x7FFFFFFFFFFFFFFFLL;
              if ( v23 <= (((unsigned __int64)MmHighestUserAddress >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL
                && v23 >= 0xFFFFF68000000000uLL
                || v23 >= 0xFFFFF6FB40000000uLL
                && v23 <= (((unsigned __int64)MmHighestUserAddress >> 18) & 0x3FFFFFF8) - v19 * 8
                || v23 >= 0xFFFFF6FB7DA00000uLL
                && v23 <= (((unsigned __int64)MmHighestUserAddress >> 27) & 0x1FFFF8) - 0x90482600000LL
                || v23 >= 0xFFFFF6FB7DBED000uLL
                && v23 <= 8 * (((unsigned __int64)MmHighestUserAddress >> 39) & 0x1FF) - 0x90482413000LL )
              {
                v24 |= 4uLL;
              }
              if ( (unsigned int)MI_SHOULD_PTE_BE_GLOBAL(v23) )
                v24 |= 0x100uLL;
              v25 = v24 & 0xFFFFFFFFFFFFFE7FuLL | ((unsigned __int64)(word_14034EC18 & 1) << 8);
            }
            else
            {
              if ( (unsigned int)MI_SHOULD_PTE_BE_GLOBAL(0LL) )
                v26 |= 0x100uLL;
              v25 = v26 & 0xFFFFFFFFFFFFFE3DuLL | 0x42;
            }
            v22 = v25;
          }
          else
          {
            v22 = a1;
          }
          memset64((void *)v21, v22, 0x200uLL);
          *i = v11;
          v8 = (unsigned int)(v8 + 1);
          if ( (unsigned int)v8 >= 4 )
          {
            MiReleasePtes((__int64)&qword_14034FC70, v7, 4u);
            return 1LL;
          }
        }
      }
    }
  }
  return 0LL;
}
