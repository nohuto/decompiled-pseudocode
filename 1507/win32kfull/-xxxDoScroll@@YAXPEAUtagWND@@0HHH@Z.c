/*
 * XREFs of ?xxxDoScroll@@YAXPEAUtagWND@@0HHH@Z @ 0x1C0231D4C
 * Callers:
 *     ?xxxContScroll@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C0231C50 (-xxxContScroll@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?xxxMoveThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z @ 0x1C0232020 (-xxxMoveThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z.c)
 *     xxxDoScrollMenu @ 0x1C023352C (xxxDoScrollMenu.c)
 *     xxxEndScroll @ 0x1C02336E4 (xxxEndScroll.c)
 *     xxxSBTrackInit @ 0x1C02339E0 (xxxSBTrackInit.c)
 *     xxxSBWndProc @ 0x1C0233E70 (xxxSBWndProc.c)
 *     xxxTrackBox @ 0x1C0235470 (xxxTrackBox.c)
 * Callees:
 *     xxxSendMessage @ 0x1C0068C74 (xxxSendMessage.c)
 *     xxxWindowEvent @ 0x1C0070F10 (xxxWindowEvent.c)
 */

void __fastcall xxxDoScroll(struct tagWND *a1, struct tagWND *a2, unsigned __int16 a3, unsigned __int16 a4, int a5)
{
  __int64 v6; // r9
  __int64 v8; // rdx
  __int64 v9; // rcx
  _QWORD v10[5]; // [rsp+30h] [rbp-28h] BYREF

  v6 = 0LL;
  v10[0] = *(_QWORD *)(gptiCurrent + 376LL);
  *(_QWORD *)(gptiCurrent + 376LL) = v10;
  v10[1] = a2;
  if ( a2 )
    ++*((_DWORD *)a2 + 2);
  if ( a1 )
    v6 = *(_QWORD *)a1;
  xxxSendMessage(a2, (a5 != 0) + 276, a3 | (a4 << 16), v6);
  xxxWindowEvent(0x800Eu, (__int64 *)a2, (a5 != 0) - 6, 0, 1);
  ThreadUnlock1(v9, v8);
}
