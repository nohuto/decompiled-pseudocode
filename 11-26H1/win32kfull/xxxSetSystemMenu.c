/*
 * XREFs of xxxSetSystemMenu @ 0x14023E21C
 * Callers:
 *     NtUserSetSystemMenu @ 0x140255BB0 (NtUserSetSystemMenu.c)
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     _DestroyMenu @ 0x140033000 (_DestroyMenu.c)
 *     ?LockWndMenuWorker@@YAPEAXPEAUtagWND@@_NAEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x14004B768 (-LockWndMenuWorker@@YAPEAXPEAUtagWND@@_NAEBV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 *     MNPositionSysMenu @ 0x14023E29C (MNPositionSysMenu.c)
 */

__int64 __fastcall xxxSetSystemMenu(_QWORD *a1, _QWORD **a2)
{
  struct _HEAD *v3; // rsi

  if ( (*(_BYTE *)(a1[5] + 30LL) & 8) != 0 )
  {
    v3 = (struct _HEAD *)a1[20];
    if ( LockWndMenuWorker(a1, 1u, a2) )
      DestroyMenu(v3);
    MNPositionSysMenu(a1);
    return 1LL;
  }
  else
  {
    UserSetLastError(1437);
    return 0LL;
  }
}
