/*
 * XREFs of MiAllocateDriverPage @ 0x140484298
 * Callers:
 *     MiLockCode @ 0x1400B7B30 (MiLockCode.c)
 *     MiMakeDriverPagesPrivate @ 0x1400BDAC8 (MiMakeDriverPagesPrivate.c)
 *     MiPrivateFixup @ 0x1400FEA08 (MiPrivateFixup.c)
 *     MiFillPerSessionProtos @ 0x14062C154 (MiFillPerSessionProtos.c)
 *     MiReloadBootLoadedDrivers @ 0x14074AF5C (MiReloadBootLoadedDrivers.c)
 * Callees:
 *     MiGetPage @ 0x1400549D0 (MiGetPage.c)
 *     MI_INITIALIZE_COLOR_BASE @ 0x140070760 (MI_INITIALIZE_COLOR_BASE.c)
 *     MiPreInitializeSystemImagePage @ 0x1400BE47C (MiPreInitializeSystemImagePage.c)
 *     MiFindContiguousPages @ 0x1400BE4E0 (MiFindContiguousPages.c)
 *     MiWaitForFreePage @ 0x1401E4C20 (MiWaitForFreePage.c)
 */

__int64 MiAllocateDriverPage()
{
  __int64 Page; // rbx
  _WORD *v2; // r8
  __int16 v3; // ax
  unsigned int v4; // esi
  _WORD *v5; // [rsp+50h] [rbp-18h] BYREF
  __int16 v6; // [rsp+58h] [rbp-10h]
  unsigned __int16 v7; // [rsp+5Ah] [rbp-Eh]
  __int64 v8; // [rsp+70h] [rbp+8h] BYREF

  if ( (int)MiFindContiguousPages(
              (unsigned __int64)MiSystemPartition,
              0LL,
              qword_1402FE558,
              0LL,
              1uLL,
              1u,
              0x80000000,
              0x80000000,
              0x20000000u,
              (unsigned __int64 *)&v8) < 0 )
  {
    qword_1402FE558 = -1LL;
    MI_INITIALIZE_COLOR_BASE(0LL, 0, (__int64)&v5);
    v2 = v5;
    v3 = v6;
    ++*v5;
    v4 = v7 | (unsigned __int16)(v3 & *v2);
    while ( 1 )
    {
      Page = MiGetPage((__int64)MiSystemPartition, v4, 0);
      if ( Page != -1 )
        break;
      if ( KeGetCurrentIrql() == 2 )
        return -1LL;
      MiWaitForFreePage((__int64)MiSystemPartition);
    }
  }
  else
  {
    Page = v8;
    if ( (++qword_1402FE590 & 0x1FF) != 0 )
      qword_1402FE558 = v8 - 1;
    else
      qword_1402FE558 = -1LL;
    MiPreInitializeSystemImagePage(48 * v8 - 0x58000000000LL);
  }
  return Page;
}
