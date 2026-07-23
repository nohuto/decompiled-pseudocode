/*
 * XREFs of MxRelocatePageTables @ 0x14078F670
 * Callers:
 *     MiInitNucleus @ 0x1407D06B4 (MiInitNucleus.c)
 * Callees:
 *     MiInitializePageColorBase @ 0x1400E3F40 (MiInitializePageColorBase.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 *     MxMovePageTables @ 0x1407978A8 (MxMovePageTables.c)
 *     MxSwapPages @ 0x140797EAC (MxSwapPages.c)
 */

__int64 __fastcall MxRelocatePageTables(int a1)
{
  __int64 v2; // r8
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // rdx
  __int64 v5; // r9
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rdx
  __int64 v8; // r9
  unsigned __int64 v9; // rax
  _BYTE v11[24]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v12; // [rsp+58h] [rbp+10h] BYREF

  MiInitializePageColorBase(0LL, 0, (__int64)v11);
  v2 = MmPfnDatabase;
  v3 = 0xFFFFF6C000000000uLL;
  v4 = (((unsigned __int64)MmPfnDatabase >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v5 = 3LL;
  do
  {
    v3 = ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v4 = ((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    --v5;
  }
  while ( v5 );
  if ( v3 < v4 )
  {
    MxMovePageTables(v3, v4 - 8, 3, a1, (__int64)v11);
    v2 = MmPfnDatabase;
  }
  v6 = (((unsigned __int64)(v2 + (MxPfnAllocation << 12)) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v7 = 0xFFFFF6FFFFFFFFF8uLL;
  v8 = 3LL;
  do
  {
    v6 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v7 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    --v8;
  }
  while ( v8 );
  if ( v6 < v7 )
    MxMovePageTables(v6 + 8, v7, 3, a1, (__int64)v11);
  MxSwapPages(v11, 0xFFFFF6FBC0000000uLL);
  v12 = MI_READ_PTE_LOCK_FREE(0xFFFFF6FBC0000000uLL);
  v9 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v12);
  return MiIncrementPfn(48 * ((v9 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL);
}
