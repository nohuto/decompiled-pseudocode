/*
 * XREFs of ?xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z @ 0x14011E2E4
 * Callers:
 *     xxxInternalInvalidate @ 0x14002CCF0 (xxxInternalInvalidate.c)
 *     xxxPrintWindow @ 0x14011CB78 (xxxPrintWindow.c)
 *     NtUserUpdateWindow @ 0x14011E0D0 (NtUserUpdateWindow.c)
 *     ?xxxUpdateThreadsWindows@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@PEAUHRGN__@@@Z @ 0x14011E160 (-xxxUpdateThreadsWindows@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@PEAUHRGN__@@@Z.c)
 *     xxxMNInvertItem @ 0x140120C3C (xxxMNInvertItem.c)
 *     xxxMNOpenHierarchy @ 0x14024D400 (xxxMNOpenHierarchy.c)
 *     xxxDragObject @ 0x1402F2554 (xxxDragObject.c)
 * Callees:
 *     ?xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z @ 0x14011E330 (-xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z.c)
 */

void __fastcall xxxInternalUpdateWindow(struct tagWND *a1, unsigned int a2)
{
  struct tagWND *v2; // r8
  __int64 v3; // rax

  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 24LL) & 0x20) != 0 )
  {
    v2 = a1;
    while ( 1 )
    {
      v2 = (struct tagWND *)*((_QWORD *)v2 + 11);
      if ( !v2 )
        break;
      if ( *((_QWORD *)v2 + 2) == *((_QWORD *)a1 + 2) )
      {
        v3 = *((_QWORD *)v2 + 5);
        if ( *(_QWORD *)(v3 + 136) || (*(_BYTE *)(v3 + 17) & 0x10) != 0 )
          return;
      }
    }
  }
  xxxUpdateWindow2(a1, a2);
}
