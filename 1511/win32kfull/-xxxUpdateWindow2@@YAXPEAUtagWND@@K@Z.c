/*
 * XREFs of ?xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z @ 0x1C00964EC
 * Callers:
 *     ?xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z @ 0x1C00964A8 (-xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z.c)
 *     ?xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z @ 0x1C00964EC (-xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z.c)
 * Callees:
 *     GetStyleWindow @ 0x1C0054CF0 (GetStyleWindow.c)
 *     _GetDesktopWindow @ 0x1C00573D0 (_GetDesktopWindow.c)
 *     xxxSendMessage @ 0x1C0057FE8 (xxxSendMessage.c)
 *     _PostMessage @ 0x1C0078490 (_PostMessage.c)
 *     SetOrClrWF @ 0x1C0080070 (SetOrClrWF.c)
 *     ?xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z @ 0x1C00964EC (-xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z.c)
 *     ?ValidateParents@@YAHPEAUtagWND@@H@Z @ 0x1C00966C0 (-ValidateParents@@YAHPEAUtagWND@@H@Z.c)
 *     ThreadLockExchangeAlways @ 0x1C0096828 (ThreadLockExchangeAlways.c)
 *     xxxSimpleDoSyncPaint @ 0x1C00EE158 (xxxSimpleDoSyncPaint.c)
 *     DecPaintCount @ 0x1C00F15F4 (DecPaintCount.c)
 *     xxxCompositedPaint @ 0x1C0224568 (xxxCompositedPaint.c)
 */

void __fastcall xxxUpdateWindow2(struct tagWND *a1, int a2)
{
  __int64 StyleWindow; // rax
  unsigned __int64 v5; // r8
  unsigned int v6; // edx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // [rsp+20h] [rbp-28h] BYREF
  __int64 v13; // [rsp+28h] [rbp-20h]

  StyleWindow = GetStyleWindow((__int64)a1, 2818);
  if ( StyleWindow )
  {
    v12 = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = &v12;
    v13 = StyleWindow;
    ++*(_DWORD *)(StyleWindow + 8);
    xxxCompositedPaint((struct tagWND *)StyleWindow);
LABEL_16:
    ThreadUnlock1(v8, v7);
    return;
  }
  if ( *((_QWORD *)a1 + 20) )
  {
    if ( !(unsigned int)ValidateParents(a1, a2 & 4) )
      return;
  }
  else if ( (*((_BYTE *)a1 + 41) & 0x10) == 0 )
  {
    goto LABEL_12;
  }
  if ( (*((_BYTE *)a1 + 41) & 0x10) != 0 )
  {
    SetOrClrWF(0, a1, 0x110u, 1);
    if ( !*((_QWORD *)a1 + 20) )
      DecPaintCount(a1);
  }
  SetOrClrWF(1, a1, 0x240u, 1);
  SetOrClrWF(0, a1, 0x120u, 1);
  if ( (*((_BYTE *)a1 + 45) & 2) == 0 && (*((_BYTE *)a1 + 55) & 0x20) != 0 && *(_QWORD *)(*((_QWORD *)a1 + 19) + 112LL) )
  {
    v6 = 38;
    v5 = 1LL;
  }
  else
  {
    if ( gfShellFrameHangResilient )
    {
      if ( (*(_DWORD *)(gptiCurrent + 1072LL) & 0x40000) != 0 )
      {
        v10 = *((_QWORD *)a1 + 2);
        if ( gptiCurrent != v10 )
        {
          v11 = *(_QWORD *)(v10 + 736);
          if ( v11 )
            v11 += 16LL;
          if ( !v11 || *(_DWORD *)(v11 + 8) != 15 || *(_QWORD *)(v11 + 16) || *(_QWORD *)(v11 + 24) )
            PostMessage((__int64)a1, 15LL, 0LL, 0LL);
          goto LABEL_10;
        }
      }
    }
    v5 = 0LL;
    v6 = 15;
  }
  xxxSendMessage(a1, v6, v5, 0LL);
LABEL_10:
  if ( (*((_BYTE *)a1 + 42) & 0x40) != 0 )
    xxxSimpleDoSyncPaint(a1);
LABEL_12:
  if ( (a2 & 1) != 0 && a1 != (struct tagWND *)GetDesktopWindow((__int64)a1) )
  {
    v8 = gptiCurrent;
    v12 = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = &v12;
    v13 = 0LL;
    v9 = *((_QWORD *)a1 + 12);
    while ( v9 )
    {
      if ( (*(_BYTE *)(v9 + 48) & 0x20) == 0 || !*(_QWORD *)(v9 + 160) && (*(_BYTE *)(v9 + 41) & 0x10) == 0 )
        goto LABEL_19;
      v7 = *(_QWORD *)(v9 + 72);
      v8 = v7;
      if ( !v7 )
        goto LABEL_19;
      do
      {
        if ( *(_QWORD *)(v8 + 160) )
          break;
        if ( (*(_BYTE *)(v8 + 41) & 0x10) != 0 )
          break;
        v8 = *(_QWORD *)(v8 + 72);
      }
      while ( v8 );
      if ( v8 )
      {
        v9 = *(_QWORD *)(v9 + 72);
      }
      else
      {
LABEL_19:
        ThreadLockExchangeAlways(v9, &v12);
        xxxUpdateWindow2((struct tagWND *)v9, a2 | 4);
        v9 = *(_QWORD *)(v9 + 72);
      }
    }
    goto LABEL_16;
  }
}
