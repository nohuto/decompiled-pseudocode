/*
 * XREFs of SpbCheckPwnd @ 0x1C000DD28
 * Callers:
 *     zzzLockWindowUpdate2 @ 0x1C0121EF4 (zzzLockWindowUpdate2.c)
 *     ?xxxDWP_SetRedraw@@YAXPEAUtagWND@@H@Z @ 0x1C0126500 (-xxxDWP_SetRedraw@@YAXPEAUtagWND@@H@Z.c)
 * Callees:
 *     SpbCheckRect @ 0x1C000C984 (SpbCheckRect.c)
 *     FreeSpb @ 0x1C000CAC0 (FreeSpb.c)
 *     ?IsSpbPresentOrNull@@YA_NPEAUtagSPB@@@Z @ 0x1C01E11A8 (-IsSpbPresentOrNull@@YA_NPEAUtagSPB@@@Z.c)
 */

char __fastcall SpbCheckPwnd(struct tagWND *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  struct tagSPB **v5; // rdi
  struct tagSPB *v6; // rsi
  struct tagSPB *i; // rbx
  __int64 v8; // rax

  while ( 1 )
  {
    v4 = gpDispInfo;
    v5 = *(struct tagSPB ***)(gpDispInfo + 72LL);
    if ( !v5 )
      break;
    while ( 1 )
    {
      v6 = *v5;
      for ( i = v5[1]; i; i = (struct tagSPB *)*((_QWORD *)i + 11) )
      {
        if ( a1 == i )
          FreeSpb((__int64)v5, v4, a3);
      }
      if ( !IsSpbPresentOrNull(v6) )
        break;
      v5 = (struct tagSPB **)v6;
      if ( !v6 )
      {
        v4 = gpDispInfo;
        goto LABEL_10;
      }
    }
  }
LABEL_10:
  v8 = *(_QWORD *)v4;
  if ( *(_QWORD *)(*(_QWORD *)v4 + 72LL) )
    LOBYTE(v8) = SpbCheckRect(a1, (struct tagRECT *)a1 + 7, 0);
  return v8;
}
