/*
 * XREFs of MxRelocatePageTables @ 0x1407C4868
 * Callers:
 *     MmInitNucleus @ 0x1407D42F4 (MmInitNucleus.c)
 * Callees:
 *     MI_INITIALIZE_COLOR_BASE @ 0x140055C20 (MI_INITIALIZE_COLOR_BASE.c)
 *     MiPteHasShadow @ 0x14022551C (MiPteHasShadow.c)
 *     MxMovePageTables @ 0x1407C68A0 (MxMovePageTables.c)
 *     MxSwapPages @ 0x1407C7254 (MxSwapPages.c)
 */

// local variable allocation has failed, the output may be wrong!
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
  unsigned __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rax
  _BYTE v14[24]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v15; // [rsp+58h] [rbp+10h] BYREF

  MI_INITIALIZE_COLOR_BASE(0LL, 0, (__int64)v14);
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
    MxMovePageTables(v3, v4 - 8, 3, a1, (__int64)v14);
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
    MxMovePageTables(v9 + 8, v6, 3, a1, (__int64)v14);
  MxSwapPages(v14, 0xFFFFF6FBC0000000uLL);
  v10 = MEMORY[0xFFFFF6FBC0000000];
  v15 = MEMORY[0xFFFFF6FBC0000000];
  if ( (unsigned __int64)&STACK[0x90482413058] <= 0x7F8
    && (unsigned int)MiPteHasShadow()
    && (v10 & 1) != 0
    && ((v10 & 0x20) == 0 || (v10 & 0x42) == 0) )
  {
    v11 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
    if ( v11 )
    {
      v12 = *(_QWORD *)(v11 + 8 * (((unsigned __int64)&v15 >> 3) & 0x1FF));
      if ( (v12 & 0x20) != 0 )
        v10 |= 0x20uLL;
      if ( (v12 & 0x42) != 0 )
        v10 |= 0x42uLL;
    }
  }
  return MiIncrementPfn(48 * ((v10 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL);
}
