/*
 * XREFs of MiGetLargePageWorkMapping @ 0x14013ADC0
 * Callers:
 *     MiCreateZeroThreadContext @ 0x14013AB00 (MiCreateZeroThreadContext.c)
 *     MiScrubNodeLargePageList @ 0x1401FBCA8 (MiScrubNodeLargePageList.c)
 * Callees:
 *     MiObtainSystemVa @ 0x1400A3024 (MiObtainSystemVa.c)
 *     MiObtainDynamicVa @ 0x1400A3088 (MiObtainDynamicVa.c)
 *     MiReturnSystemVa @ 0x1400C08D0 (MiReturnSystemVa.c)
 *     MiMakeZeroedPageTables @ 0x1401022B4 (MiMakeZeroedPageTables.c)
 */

unsigned __int64 __fastcall MiGetLargePageWorkMapping(int a1)
{
  unsigned __int64 v1; // rbx
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rax
  int v4; // r8d
  unsigned __int64 v5; // rdi

  v1 = MiLargePageSizes[a1];
  v2 = v1 >> 9;
  if ( v1 <= 0x200 )
  {
    v3 = MiObtainSystemVa(v2, 0xFu);
    v4 = 2;
  }
  else
  {
    v3 = MiObtainDynamicVa(&qword_140326AD0, v2, 15, v2);
    v4 = 6;
  }
  v5 = v3;
  if ( v3 )
  {
    if ( (unsigned int)MiMakeZeroedPageTables(
                         ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
                         ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL + 8 * (v1 - 1),
                         v4,
                         9u) )
      return v5;
    MiReturnSystemVa(v5, v5 + (v1 << 12), 15, 0LL);
  }
  return 0LL;
}
