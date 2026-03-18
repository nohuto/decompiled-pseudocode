/*
 * XREFs of MiInitializeDummyPages @ 0x1407C6220
 * Callers:
 *     MmInitNucleus @ 0x1407D42F4 (MmInitNucleus.c)
 * Callees:
 *     MI_SHOULD_PTE_BE_GLOBAL @ 0x1400B9CB0 (MI_SHOULD_PTE_BE_GLOBAL.c)
 *     MiMakeDemandZeroPte @ 0x140225C14 (MiMakeDemandZeroPte.c)
 *     MxFillPhysicalPage @ 0x1407C76BC (MxFillPhysicalPage.c)
 *     MiAllocateDummyPage @ 0x1407C79D0 (MiAllocateDummyPage.c)
 */

__int64 MiInitializeDummyPages()
{
  __int64 DemandZeroPte; // rax
  __int64 v1; // rdx
  __int64 v2; // rbx
  __int64 DummyPage; // rax
  __int64 v4; // rdx
  __int64 v5; // r9
  ULONG_PTR v6; // r10
  unsigned __int64 v7; // rbx
  __int64 result; // rax

  MiAllocateDummyPage();
  DemandZeroPte = MiMakeDemandZeroPte(1);
  *(_QWORD *)(v1 + 16) = DemandZeroPte;
  v2 = DemandZeroPte;
  qword_14034F710 = (v1 + 0x58000000000LL) / 48;
  MxFillPhysicalPage(qword_14034F710);
  qword_14034F6F0 = MiAllocateDummyPage();
  *(_QWORD *)(qword_14034F6F0 + 16) = v2;
  qword_14034F6F8 = (qword_14034F6F0 + 0x58000000000LL) / 48;
  MxFillPhysicalPage((qword_14034F6F0 + 0x58000000000LL) / 48);
  DummyPage = MiAllocateDummyPage();
  *(_QWORD *)(DummyPage + 16) = v2;
  qword_14034F768 = (DummyPage + 0x58000000000LL) / 48;
  if ( (unsigned int)MI_SHOULD_PTE_BE_GLOBAL((((unsigned __int64)MmPfnDatabase >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) )
    v4 |= 0x100uLL;
  v7 = ~v5 & (v4 | 0x8000000000000100uLL) ^ ((unsigned __int16)~(_WORD)v5 ^ (unsigned __int16)((unsigned __int8)word_14034EC18 << 8)) & 0x100;
  MxFillPhysicalPage(v6);
  v7 &= ~0x100uLL;
  result = (v7 ^ (qword_14034F768 << 12)) & 0xFFFFFFFFF000LL;
  qword_14034F770 = result ^ v7;
  return result;
}
