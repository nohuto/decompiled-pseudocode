/*
 * XREFs of xxxSwitchWndProc @ 0x1C0201FD0
 * Callers:
 *     ?xxxWrapSwitchWndProc@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x1C01E3A50 (-xxxWrapSwitchWndProc@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 * Callees:
 *     zzzSetCursor @ 0x1C0062174 (zzzSetCursor.c)
 *     xxxDefWindowProc @ 0x1C0063B30 (xxxDefWindowProc.c)
 *     xxxSetWindowPosAndBand @ 0x1C00850A0 (xxxSetWindowPosAndBand.c)
 *     ?xxxPaintSwitchWindow@@YAXPEAUtagWND@@@Z @ 0x1C02009B0 (-xxxPaintSwitchWindow@@YAXPEAUtagWND@@@Z.c)
 *     xxxCancelCoolSwitch @ 0x1C0201158 (xxxCancelCoolSwitch.c)
 */

__int64 __fastcall xxxSwitchWndProc(struct tagWND *a1, unsigned int a2, __int64 a3, __int64 a4)
{
  unsigned int v6; // edi
  struct tagWND *v7; // rbx
  __int16 v8; // ax
  __int64 v10; // rdx
  __int64 v11; // rcx
  _QWORD v12[4]; // [rsp+40h] [rbp-28h] BYREF

  v6 = a2;
  v7 = a1;
  v8 = *((_WORD *)a1 + 33);
  if ( v8 == 672 )
  {
LABEL_8:
    switch ( a2 )
    {
      case 1u:
        zzzSetCursor(*(_QWORD *)(*((_QWORD *)a1 + 19) + 120LL));
        break;
      case 0x10u:
        xxxSetWindowPosAndBand(a1, 0LL, 0, 0, 0, 0, 151, 0);
        xxxCancelCoolSwitch();
        break;
      case 0x14u:
      case 0x3Au:
        v12[0] = *(_QWORD *)(gptiCurrent + 376LL);
        *(_QWORD *)(gptiCurrent + 376LL) = v12;
        ++*((_DWORD *)a1 + 2);
        v12[1] = a1;
        xxxPaintSwitchWindow(a1);
        ThreadUnlock1(v11, v10);
        return 0LL;
    }
    a2 = v6;
    a1 = v7;
    return xxxDefWindowProc(a1, a2, a3, a4);
  }
  if ( v8 )
    return 0LL;
  if ( a2 == 1 )
  {
    if ( *((_DWORD *)a1 + 58) + 376 < (unsigned int)*(unsigned __int16 *)(gpsi + 340LL) || *((_QWORD *)a1 + 47) )
      return 0LL;
    *((_WORD *)a1 + 33) = 672;
    goto LABEL_8;
  }
  return xxxDefWindowProc(a1, a2, a3, a4);
}
