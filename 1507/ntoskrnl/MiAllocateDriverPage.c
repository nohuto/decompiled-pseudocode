/*
 * XREFs of MiAllocateDriverPage @ 0x140452A88
 * Callers:
 *     MiLockCode @ 0x140010950 (MiLockCode.c)
 *     MiMakeDriverPagesPrivate @ 0x1400246E4 (MiMakeDriverPagesPrivate.c)
 *     MiPrivateFixup @ 0x14007991C (MiPrivateFixup.c)
 *     MiFillPerSessionProtos @ 0x14021C1E0 (MiFillPerSessionProtos.c)
 *     MiReloadBootLoadedDrivers @ 0x1407CC4D4 (MiReloadBootLoadedDrivers.c)
 * Callees:
 *     MiPreInitializeSystemImagePage @ 0x1400252AC (MiPreInitializeSystemImagePage.c)
 *     MI_INITIALIZE_COLOR_BASE @ 0x140055C20 (MI_INITIALIZE_COLOR_BASE.c)
 *     MiFindContiguousPages @ 0x14005BA20 (MiFindContiguousPages.c)
 *     MiGetPage @ 0x1400BD890 (MiGetPage.c)
 *     MiWaitForFreePage @ 0x14022ECFC (MiWaitForFreePage.c)
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
              MiSystemPartition,
              0LL,
              qword_14034EA18,
              0LL,
              1uLL,
              1u,
              0x80000000,
              0x80000000,
              0x20000000u,
              (unsigned __int64 *)&v8) < 0 )
  {
    qword_14034EA18 = -1LL;
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
    if ( (++qword_14034EA50 & 0x1FF) != 0 )
      qword_14034EA18 = v8 - 1;
    else
      qword_14034EA18 = -1LL;
    MiPreInitializeSystemImagePage(48 * v8 - 0x58000000000LL);
  }
  return Page;
}
