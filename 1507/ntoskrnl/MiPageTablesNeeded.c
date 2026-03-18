/*
 * XREFs of MiPageTablesNeeded @ 0x140069BA0
 * Callers:
 *     MiMakeZeroedPageTables @ 0x1400697D8 (MiMakeZeroedPageTables.c)
 *     MiAddPhysicalMemory @ 0x1402123C8 (MiAddPhysicalMemory.c)
 *     MmCreateShadowMapping @ 0x1406A833C (MmCreateShadowMapping.c)
 * Callees:
 *     MiCountExistingPageTables @ 0x140069C68 (MiCountExistingPageTables.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 */

__int64 __fastcall MiPageTablesNeeded(unsigned __int64 a1, unsigned __int64 a2, unsigned int a3, int a4)
{
  __int64 v4; // rbx
  unsigned __int64 *v5; // r11
  unsigned int i; // r10d
  char v9; // [rsp+30h] [rbp-58h] BYREF
  char v10; // [rsp+38h] [rbp-50h] BYREF

  v4 = 0LL;
  v5 = (unsigned __int64 *)&v10;
  for ( i = 0; i < 4; ++i )
  {
    a1 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    a2 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    *(v5 - 1) = a1;
    *v5 = a2;
    if ( i >= a3 )
      v4 += ((__int64)(a2 - a1) >> 3) + 1;
    v5 += 2;
  }
  if ( a4 != 1 )
    v4 -= MiCountExistingPageTables(a1, a2, (unsigned int)&v9, 3, a3);
  return v4;
}
