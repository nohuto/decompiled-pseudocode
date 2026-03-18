/*
 * XREFs of xxxSwitchWndProc @ 0x1C01F9680
 * Callers:
 *     ?xxxWrapSwitchWndProc@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x1C01DA790 (-xxxWrapSwitchWndProc@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 * Callees:
 *     zzzSetCursor @ 0x1C0078168 (zzzSetCursor.c)
 *     xxxDefWindowProc @ 0x1C007CE70 (xxxDefWindowProc.c)
 *     xxxSetWindowPosAndBand @ 0x1C00A652C (xxxSetWindowPosAndBand.c)
 *     ?xxxPaintSwitchWindow@@YAXPEAUtagWND@@@Z @ 0x1C01F8078 (-xxxPaintSwitchWindow@@YAXPEAUtagWND@@@Z.c)
 *     xxxCancelCoolSwitch @ 0x1C01F8800 (xxxCancelCoolSwitch.c)
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
        xxxSetWindowPosAndBand(a1, 0, 0, 0, 0, 0, 151, 0);
        xxxCancelCoolSwitch();
        break;
      case 0x14u:
      case 0x3Au:
        v12[0] = *(_QWORD *)(gptiCurrent + 368LL);
        *(_QWORD *)(gptiCurrent + 368LL) = v12;
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
    if ( *((_DWORD *)a1 + 58) + 360 < (unsigned int)*(unsigned __int16 *)(gpsi + 340LL) || *((_QWORD *)a1 + 45) )
      return 0LL;
    *((_WORD *)a1 + 33) = 672;
    goto LABEL_8;
  }
  return xxxDefWindowProc(a1, a2, a3, a4);
}
