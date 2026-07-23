/*
 * XREFs of MiCopyTopLevelMappings @ 0x1400FF414
 * Callers:
 *     MiUpdateSystemPdes @ 0x1401E0CF0 (MiUpdateSystemPdes.c)
 *     MmCreateProcessAddressSpace @ 0x14050921C (MmCreateProcessAddressSpace.c)
 * Callees:
 *     MiGetTopPteAddress @ 0x14012A960 (MiGetTopPteAddress.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     MiShadowTopLevelPxes @ 0x1401EF40C (MiShadowTopLevelPxes.c)
 */

unsigned __int64 __fastcall MiCopyTopLevelMappings(__int64 a1, __int64 a2)
{
  __int64 TopPteAddress; // rax
  __int64 v5; // rax
  unsigned __int64 result; // rax

  memmove(
    (void *)(a2 + 2048),
    (const void *)0xFFFFF6FB7DBED800LL,
    8 * ((__int64)(8 * (((unsigned __int64)qword_140327FD0 >> 39) & 0x1FF) - 2048) >> 3) + 8);
  TopPteAddress = MiGetTopPteAddress(0LL);
  MiShadowTopLevelPxes(a1, TopPteAddress + 2048, 256LL);
  memmove(
    (void *)(a2 + 8 * ((((unsigned __int64)qword_140326D38 >> 39) & 0x1FF) + 1)),
    (const void *)(8 * (((unsigned __int64)qword_140326D38 >> 39) & 0x1FF) - 0x90482412FF8LL),
    8
  * ((__int64)(0xFFFFF6FB7DBEDFF8uLL - (8 * (((unsigned __int64)qword_140326D38 >> 39) & 0x1FF) - 0x90482412FF8LL)) >> 3)
  + 8);
  v5 = *(_QWORD *)(a1 + 1024);
  if ( v5 )
  {
    result = *(_QWORD *)(v5 + 7808);
    *(_QWORD *)(a2 + 8 * (((unsigned __int64)qword_140326950 >> 39) & 0x1FF)) = result;
  }
  else
  {
    result = ((unsigned __int64)qword_140326950 >> 39) & 0x1FF;
    *(_QWORD *)(a2 + 8 * result) = 0LL;
  }
  return result;
}
