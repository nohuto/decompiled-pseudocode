/*
 * XREFs of MiInitializeDummyPages @ 0x140796198
 * Callers:
 *     MiInitNucleus @ 0x1407D06B4 (MiInitNucleus.c)
 * Callees:
 *     MI_SHOULD_PTE_BE_GLOBAL @ 0x1400368B0 (MI_SHOULD_PTE_BE_GLOBAL.c)
 *     MiMakeDemandZeroPte @ 0x1401F2560 (MiMakeDemandZeroPte.c)
 *     MxFillPhysicalPage @ 0x140798170 (MxFillPhysicalPage.c)
 *     MiAllocateDummyPage @ 0x140798314 (MiAllocateDummyPage.c)
 */

__int64 MiInitializeDummyPages()
{
  __int64 DemandZeroPte; // rbx
  __int64 v1; // rdx
  __int64 DummyPage; // rax
  ULONG_PTR v3; // r15
  __int64 v4; // r14
  __int64 v5; // r11
  unsigned __int64 v6; // rdi
  __int64 v7; // rax
  ULONG_PTR v8; // r14
  __int64 v9; // rdi
  __int64 v10; // r11
  unsigned __int64 v11; // rbx
  __int64 result; // rax

  MiAllocateDummyPage();
  DemandZeroPte = MiMakeDemandZeroPte(1);
  *(_QWORD *)(v1 + 16) = DemandZeroPte;
  qword_1403276E0 = (v1 + 0x58000000000LL) / 48;
  MxFillPhysicalPage(qword_1403276E0);
  qword_1403276C0 = MiAllocateDummyPage();
  *(_QWORD *)(qword_1403276C0 + 16) = DemandZeroPte;
  qword_1403276C8 = (qword_1403276C0 + 0x58000000000LL) / 48;
  MxFillPhysicalPage(qword_1403276C8);
  DummyPage = MiAllocateDummyPage();
  *(_QWORD *)(DummyPage + 16) = DemandZeroPte;
  v3 = (DummyPage + 0x58000000000LL) / 48;
  qword_140327748 = v3;
  v4 = qword_1403A9350;
  if ( (unsigned int)MI_SHOULD_PTE_BE_GLOBAL((((unsigned __int64)MmPfnDatabase >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) )
    v5 |= 0x100uLL;
  v6 = ~v4 & (v5 | 0x8000000000000100uLL) ^ ((unsigned __int16)~(_WORD)v4 ^ (unsigned __int16)((unsigned __int8)word_140326AE8 << 8)) & 0x100;
  MxFillPhysicalPage(v3);
  qword_140327750 = (v6 & 0xFFFFFFFFFFFFFEFFuLL ^ (qword_140327748 << 12)) & 0xFFFFFFFFF000LL ^ v6 & 0xFFFFFFFFFFFFFEFFuLL;
  v7 = MiAllocateDummyPage();
  *(_QWORD *)(v7 + 16) = DemandZeroPte;
  v8 = (v7 + 0x58000000000LL) / 48;
  qword_140327758 = v8;
  v9 = qword_1403A9350;
  if ( (unsigned int)MI_SHOULD_PTE_BE_GLOBAL((((unsigned __int64)MmPfnDatabase >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) )
    v10 |= 0x100uLL;
  v11 = ~v9 & (v10 | 0x8000000000000100uLL) ^ ((unsigned __int16)~(_WORD)v9 ^ (unsigned __int16)((unsigned __int8)word_140326AE8 << 8)) & 0x100;
  MxFillPhysicalPage(v8);
  v11 &= ~0x100uLL;
  result = (v11 ^ (qword_140327758 << 12)) & 0xFFFFFFFFF000LL;
  qword_140327760 = result ^ v11;
  return result;
}
