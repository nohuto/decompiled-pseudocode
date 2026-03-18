/*
 * XREFs of MiCopyTopLevelMappings @ 0x140101694
 * Callers:
 *     MiUpdateSystemPdes @ 0x1401E0EC4 (MiUpdateSystemPdes.c)
 *     MmCreateProcessAddressSpace @ 0x1405261BC (MmCreateProcessAddressSpace.c)
 * Callees:
 *     MiGetTopPteAddress @ 0x14012A3F0 (MiGetTopPteAddress.c)
 *     memmove @ 0x140171280 (memmove.c)
 *     MiShadowTopLevelPxes @ 0x1401EF5E0 (MiShadowTopLevelPxes.c)
 */

unsigned __int64 __fastcall MiCopyTopLevelMappings(__int64 a1, __int64 a2)
{
  __int64 TopPteAddress; // rax
  __int64 v5; // rax
  unsigned __int64 result; // rax

  memmove(
    (void *)(a2 + 2048),
    (const void *)0xFFFFF6FB7DBED800LL,
    8 * ((__int64)(8 * (((unsigned __int64)qword_140327F90 >> 39) & 0x1FF) - 2048) >> 3) + 8);
  TopPteAddress = MiGetTopPteAddress(0LL);
  MiShadowTopLevelPxes(a1, TopPteAddress + 2048, 256LL);
  memmove(
    (void *)(a2 + 8 * ((((unsigned __int64)qword_140326CF8 >> 39) & 0x1FF) + 1)),
    (const void *)(8 * (((unsigned __int64)qword_140326CF8 >> 39) & 0x1FF) - 0x90482412FF8LL),
    8
  * ((__int64)(0xFFFFF6FB7DBEDFF8uLL - (8 * (((unsigned __int64)qword_140326CF8 >> 39) & 0x1FF) - 0x90482412FF8LL)) >> 3)
  + 8);
  v5 = *(_QWORD *)(a1 + 1024);
  if ( v5 )
  {
    result = *(_QWORD *)(v5 + 7808);
    *(_QWORD *)(a2 + 8 * (((unsigned __int64)qword_140326910 >> 39) & 0x1FF)) = result;
  }
  else
  {
    result = ((unsigned __int64)qword_140326910 >> 39) & 0x1FF;
    *(_QWORD *)(a2 + 8 * result) = 0LL;
  }
  return result;
}
