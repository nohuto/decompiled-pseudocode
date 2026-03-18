/*
 * XREFs of MiAllocateDriverPage @ 0x140526790
 * Callers:
 *     MiLockCode @ 0x1400155F0 (MiLockCode.c)
 *     MiMakeDriverPagesPrivate @ 0x140086098 (MiMakeDriverPagesPrivate.c)
 *     MiPrivateFixup @ 0x14010B3F0 (MiPrivateFixup.c)
 *     MiFillPerSessionProtos @ 0x140661E34 (MiFillPerSessionProtos.c)
 *     MiReloadBootLoadedDrivers @ 0x1407A57F0 (MiReloadBootLoadedDrivers.c)
 * Callees:
 *     MiGetPage @ 0x14003DA50 (MiGetPage.c)
 *     MiInitializePageColorBase @ 0x1400E60A0 (MiInitializePageColorBase.c)
 *     MiPreInitializeSystemImagePage @ 0x140104440 (MiPreInitializeSystemImagePage.c)
 *     MiFindContiguousPages @ 0x1401044A0 (MiFindContiguousPages.c)
 *     MiWaitForFreePage @ 0x1401F41DC (MiWaitForFreePage.c)
 */

__int64 MiAllocateDriverPage()
{
  __int64 *v0; // rbp
  __int64 Page; // rbx
  _WORD *v3; // r8
  __int16 v4; // ax
  unsigned int v5; // esi
  _BYTE v6[16]; // [rsp+80h] [rbp+80h] BYREF

  v0 = (__int64 *)((unsigned __int64)v6 & 0xFFFFFFFFFFFFFFE0uLL);
  if ( (int)MiFindContiguousPages(
              (__int64)MiSystemPartition,
              0LL,
              qword_140326818,
              0LL,
              1LL,
              1u,
              0x80000000,
              0x80000000,
              0x20000000,
              (__int64 *)((unsigned __int64)v6 & 0xFFFFFFFFFFFFFFE0uLL)) < 0 )
  {
    qword_140326818 = -1LL;
    MiInitializePageColorBase(0LL, 0, (unsigned __int64)v6 & 0xFFFFFFFFFFFFFFE0uLL);
    v3 = (_WORD *)*v0;
    v4 = *(_WORD *)(((unsigned __int64)v6 & 0xFFFFFFFFFFFFFFE0uLL) + 8);
    v5 = *(unsigned __int16 *)(((unsigned __int64)v6 & 0xFFFFFFFFFFFFFFE0uLL) + 0xA) | (unsigned __int16)(v4 & ++*v3);
    while ( 1 )
    {
      Page = MiGetPage((__int64)MiSystemPartition, v5, 0);
      if ( Page != -1 )
        break;
      if ( KeGetCurrentIrql() == 2 )
        return -1LL;
      MiWaitForFreePage((__int64)MiSystemPartition);
    }
  }
  else
  {
    Page = *v0;
    if ( (++qword_140326860 & 0x1FF) != 0 )
      qword_140326818 = Page - 1;
    else
      qword_140326818 = -1LL;
    MiPreInitializeSystemImagePage(48 * Page - 0x58000000000LL);
  }
  return Page;
}
