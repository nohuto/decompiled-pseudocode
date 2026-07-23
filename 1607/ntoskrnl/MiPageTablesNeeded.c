/*
 * XREFs of MiPageTablesNeeded @ 0x140100298
 * Callers:
 *     MiMakeZeroedPageTables @ 0x140100034 (MiMakeZeroedPageTables.c)
 *     MiAddPhysicalMemory @ 0x1406576C0 (MiAddPhysicalMemory.c)
 *     MmCreateShadowMapping @ 0x14065BD7C (MmCreateShadowMapping.c)
 * Callees:
 *     MiCountExistingPageTables @ 0x14010036C (MiCountExistingPageTables.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

__int64 __fastcall MiPageTablesNeeded(unsigned __int64 a1, unsigned __int64 a2, unsigned int a3, int a4)
{
  __int64 v4; // rbx
  unsigned int v5; // r11d
  unsigned __int64 *v6; // rdi
  char v9; // [rsp+30h] [rbp-58h] BYREF
  char v10; // [rsp+38h] [rbp-50h] BYREF

  v4 = 0LL;
  v5 = 0;
  v6 = (unsigned __int64 *)&v10;
  do
  {
    a1 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    a2 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    *(v6 - 1) = a1;
    *v6 = a2;
    if ( v5 >= a3 )
      v4 += ((__int64)(a2 - a1) >> 3) + 1;
    ++v5;
    v6 += 2;
  }
  while ( v5 < 4 );
  if ( a4 != 1 )
    v4 -= MiCountExistingPageTables(a1, a2, (unsigned int)&v9, 3, a3);
  return v4;
}
