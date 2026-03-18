/*
 * XREFs of SpbCheckPwnd @ 0x1C00095D4
 * Callers:
 *     zzzLockWindowUpdate2 @ 0x1C0044DC8 (zzzLockWindowUpdate2.c)
 *     ?xxxDWP_SetRedraw@@YAXPEAUtagWND@@H@Z @ 0x1C00FB378 (-xxxDWP_SetRedraw@@YAXPEAUtagWND@@H@Z.c)
 * Callees:
 *     SpbCheckRect @ 0x1C00085DC (SpbCheckRect.c)
 *     FreeSpb @ 0x1C0008718 (FreeSpb.c)
 *     ?IsSpbPresentOrNull@@YA_NPEAUtagSPB@@@Z @ 0x1C01EA118 (-IsSpbPresentOrNull@@YA_NPEAUtagSPB@@@Z.c)
 */

char __fastcall SpbCheckPwnd(struct tagWND *a1)
{
  __int64 *v2; // rdx
  struct tagSPB **v3; // rdi
  struct tagSPB *v4; // rsi
  struct tagSPB *i; // rbx
  __int64 v6; // rax

  while ( 1 )
  {
    v2 = (__int64 *)gpDispInfo;
    v3 = *(struct tagSPB ***)(gpDispInfo + 72LL);
    if ( !v3 )
      break;
    while ( 1 )
    {
      v4 = *v3;
      for ( i = v3[1]; i; i = (struct tagSPB *)*((_QWORD *)i + 11) )
      {
        if ( a1 == i )
          FreeSpb((__int64)v3);
      }
      if ( !IsSpbPresentOrNull(v4) )
        break;
      v3 = (struct tagSPB **)v4;
      if ( !v4 )
      {
        v2 = (__int64 *)gpDispInfo;
        goto LABEL_10;
      }
    }
  }
LABEL_10:
  v6 = *v2;
  if ( *(_QWORD *)(*v2 + 72) )
    LOBYTE(v6) = SpbCheckRect(a1, (struct tagRECT *)a1 + 7, 0);
  return v6;
}
