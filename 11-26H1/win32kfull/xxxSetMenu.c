/*
 * XREFs of xxxSetMenu @ 0x1402224F0
 * Callers:
 *     NtUserSetMenu @ 0x140222360 (NtUserSetMenu.c)
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     xxxSetWindowPos @ 0x140048EC0 (xxxSetWindowPos.c)
 *     ?LockWndMenuWorker@@YAPEAXPEAUtagWND@@_NAEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x14004B768 (-LockWndMenuWorker@@YAPEAXPEAUtagWND@@_NAEBV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 */

__int64 __fastcall xxxSetMenu(struct tagWND *a1, _QWORD **a2, int a3)
{
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0xC0) == 0x40 )
  {
    UserSetLastError(1436);
    return 0LL;
  }
  else
  {
    LockWndMenuWorker(a1, 0, a2);
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x20) == 0 )
    {
      if ( a3 )
        xxxSetWindowPos(a1, 0LL, 0LL, 0LL, 0, 0, 55);
    }
    return 1LL;
  }
}
