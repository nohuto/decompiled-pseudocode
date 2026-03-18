/*
 * XREFs of MiInitializeDummyPages @ 0x1407460E4
 * Callers:
 *     MmInitNucleus @ 0x140748C60 (MmInitNucleus.c)
 * Callees:
 *     MI_SHOULD_PTE_BE_GLOBAL @ 0x1400AA020 (MI_SHOULD_PTE_BE_GLOBAL.c)
 *     MxFillPhysicalPage @ 0x140748414 (MxFillPhysicalPage.c)
 *     MiAllocateDummyPage @ 0x140748580 (MiAllocateDummyPage.c)
 */

__int64 MiInitializeDummyPages()
{
  __int64 DummyPage; // rax
  __int64 v1; // rax
  __int64 v2; // rsi
  __int64 v3; // rbx
  ULONG_PTR v4; // r14
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rsi
  unsigned __int64 v9; // rcx
  __int64 v10; // rbx
  ULONG_PTR v11; // r14
  unsigned __int64 v12; // rdi
  __int64 result; // rax

  DummyPage = MiAllocateDummyPage();
  *(_QWORD *)(DummyPage + 16) = 32LL;
  qword_1402FF250 = (DummyPage + 0x58000000000LL) / 48;
  MxFillPhysicalPage(qword_1402FF250);
  qword_1402FF230 = MiAllocateDummyPage();
  *(_QWORD *)(qword_1402FF230 + 16) = 32LL;
  qword_1402FF238 = (qword_1402FF230 + 0x58000000000LL) / 48;
  MxFillPhysicalPage(qword_1402FF238);
  v1 = MiAllocateDummyPage();
  *(_QWORD *)(v1 + 16) = 32LL;
  v2 = qword_140381310;
  v3 = qword_140381308 ^ (qword_140381308 ^ (qword_1402FF250 << 12)) & 0xFFFFFFFFF000LL | 0x21;
  v4 = (v1 + 0x58000000000LL) / 48;
  v5 = (((unsigned __int64)MmPfnDatabase >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  qword_1402FF2A8 = v4;
  if ( v5 + 0x904C0000000LL <= 0x3FFFFFFF )
    v3 &= ~qword_140381310 & 0x7FFFFFFFFFFFFFFFLL;
  if ( v5 <= (((unsigned __int64)MmHighestUserAddress >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL
    && v5 >= 0xFFFFF68000000000uLL
    || v5 >= 0xFFFFF6FB40000000uLL
    && v5 <= (((unsigned __int64)MmHighestUserAddress >> 18) & 0x3FFFFFF8) - 0x904C0000000LL
    || v5 >= 0xFFFFF6FB7DA00000uLL
    && v5 <= (((unsigned __int64)MmHighestUserAddress >> 27) & 0x1FFFF8) - 0x90482600000LL
    || v5 >= 0xFFFFF6FB7DBED000uLL
    && v5 <= 8 * (((unsigned __int64)MmHighestUserAddress >> 39) & 0x1FF) - 0x90482413000LL )
  {
    v3 |= 4uLL;
  }
  if ( (unsigned int)MI_SHOULD_PTE_BE_GLOBAL(v5) )
    v3 |= 0x100uLL;
  v6 = ~v2 & (v3 | 0x8000000000000100uLL) ^ ((unsigned __int16)~(_WORD)v2 ^ (unsigned __int16)((unsigned __int8)word_1402FE760 << 8)) & 0x100;
  MxFillPhysicalPage(v4);
  qword_1402FF2B0 = (v6 & 0xFFFFFFFFFFFFFEFFuLL ^ (qword_1402FF2A8 << 12)) & 0xFFFFFFFFF000LL ^ v6 & 0xFFFFFFFFFFFFFEFFuLL;
  v7 = MiAllocateDummyPage();
  *(_QWORD *)(v7 + 16) = 32LL;
  v8 = qword_140381310;
  v9 = (((unsigned __int64)MmPfnDatabase >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v10 = qword_140381308 ^ (qword_140381308 ^ (qword_1402FF238 << 12)) & 0xFFFFFFFFF000LL | 0x21;
  v11 = (v7 + 0x58000000000LL) / 48;
  qword_1402FF2B8 = v11;
  if ( v9 + 0x904C0000000LL <= 0x3FFFFFFF )
    v10 &= ~qword_140381310 & 0x7FFFFFFFFFFFFFFFLL;
  if ( v9 <= (((unsigned __int64)MmHighestUserAddress >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL
    && v9 >= 0xFFFFF68000000000uLL
    || v9 >= 0xFFFFF6FB40000000uLL
    && v9 <= (((unsigned __int64)MmHighestUserAddress >> 18) & 0x3FFFFFF8) - 0x904C0000000LL
    || v9 >= 0xFFFFF6FB7DA00000uLL
    && v9 <= (((unsigned __int64)MmHighestUserAddress >> 27) & 0x1FFFF8) - 0x90482600000LL
    || v9 >= 0xFFFFF6FB7DBED000uLL
    && v9 <= 8 * (((unsigned __int64)MmHighestUserAddress >> 39) & 0x1FF) - 0x90482413000LL )
  {
    v10 |= 4uLL;
  }
  if ( (unsigned int)MI_SHOULD_PTE_BE_GLOBAL(v9) )
    v10 |= 0x100uLL;
  v12 = ~v8 & (v10 | 0x8000000000000100uLL) ^ ((unsigned __int16)~(_WORD)v8 ^ (unsigned __int16)((unsigned __int8)word_1402FE760 << 8)) & 0x100;
  MxFillPhysicalPage(v11);
  v12 &= ~0x100uLL;
  result = (v12 ^ (qword_1402FF2B8 << 12)) & 0xFFFFFFFFF000LL;
  qword_1402FF2C0 = result ^ v12;
  return result;
}
