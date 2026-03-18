/*
 * XREFs of MxRelocatePageTables @ 0x140745ED8
 * Callers:
 *     MmInitNucleus @ 0x140748C60 (MmInitNucleus.c)
 * Callees:
 *     MI_INITIALIZE_COLOR_BASE @ 0x140070760 (MI_INITIALIZE_COLOR_BASE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MxMovePageTables @ 0x140747B78 (MxMovePageTables.c)
 *     MxSwapPages @ 0x14074817C (MxSwapPages.c)
 */

__int64 __fastcall MxRelocatePageTables(int a1)
{
  __int64 v2; // rax
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // rdx
  __int64 v5; // r8
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rcx
  __int64 v8; // rax
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rax
  _BYTE v12[24]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v13; // [rsp+58h] [rbp+10h] BYREF

  MI_INITIALIZE_COLOR_BASE(0LL, 0, (__int64)v12);
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
    MxMovePageTables(v3, v4 - 8, 3, a1, (__int64)v12);
    v2 = MmPfnDatabase;
  }
  v6 = 0xFFFFF6FFFFFFFFF8uLL;
  v7 = v2 + (MxPfnAllocation << 12);
  v8 = 3LL;
  v9 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  do
  {
    v9 = ((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v6 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    --v8;
  }
  while ( v8 );
  if ( v9 < v6 )
    MxMovePageTables(v9 + 8, v6, 3, a1, (__int64)v12);
  MxSwapPages(v12, 0xFFFFF6FBC0000000uLL);
  v13 = MI_READ_PTE_LOCK_FREE((__int64 *)0xFFFFF6FBC0000000LL);
  v10 = MI_READ_PTE_LOCK_FREE(&v13);
  return MiIncrementPfn(48 * ((v10 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL);
}
