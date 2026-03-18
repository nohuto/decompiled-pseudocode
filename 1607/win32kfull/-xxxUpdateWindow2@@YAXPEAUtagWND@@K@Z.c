/*
 * XREFs of ?xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z @ 0x1C005E76C
 * Callers:
 *     ?xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z @ 0x1C005E728 (-xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z.c)
 *     ?xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z @ 0x1C005E76C (-xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z.c)
 * Callees:
 *     DecPaintCount @ 0x1C005CB80 (DecPaintCount.c)
 *     ?xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z @ 0x1C005E76C (-xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z.c)
 *     ?ValidateParents@@YAHPEAUtagWND@@H@Z @ 0x1C005E984 (-ValidateParents@@YAHPEAUtagWND@@H@Z.c)
 *     HMUnlockObject @ 0x1C005EAEC (HMUnlockObject.c)
 *     xxxSendMessage @ 0x1C0074E60 (xxxSendMessage.c)
 *     GetStyleWindow @ 0x1C007A490 (GetStyleWindow.c)
 *     _GetDesktopWindow @ 0x1C007B420 (_GetDesktopWindow.c)
 *     SetOrClrWF @ 0x1C00964B4 (SetOrClrWF.c)
 *     _PostMessage @ 0x1C00A4CB0 (_PostMessage.c)
 *     xxxSimpleDoSyncPaint @ 0x1C010D750 (xxxSimpleDoSyncPaint.c)
 *     xxxCompositedPaint @ 0x1C0225130 (xxxCompositedPaint.c)
 */

void __fastcall xxxUpdateWindow2(struct tagWND *a1, int a2)
{
  __int64 StyleWindow; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // [rsp+20h] [rbp-28h] BYREF
  __int64 v13; // [rsp+28h] [rbp-20h]

  StyleWindow = GetStyleWindow(a1, 2818LL);
  if ( StyleWindow )
  {
    v12 = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = &v12;
    v13 = StyleWindow;
    ++*(_DWORD *)(StyleWindow + 8);
    xxxCompositedPaint((struct tagWND *)StyleWindow);
LABEL_8:
    ThreadUnlock1(v6, v5);
    return;
  }
  if ( *((_QWORD *)a1 + 20) )
  {
    if ( !(unsigned int)ValidateParents(a1, a2 & 4) )
      return;
  }
  else if ( (*((_BYTE *)a1 + 41) & 0x10) == 0 )
  {
    goto LABEL_4;
  }
  if ( (*((_BYTE *)a1 + 41) & 0x10) != 0 )
  {
    SetOrClrWF(0LL, a1, 272LL, 1LL);
    if ( !*((_QWORD *)a1 + 20) )
      DecPaintCount((__int64)a1);
  }
  SetOrClrWF(1LL, a1, 576LL, 1LL);
  SetOrClrWF(0LL, a1, 288LL, 1LL);
  if ( (*((_BYTE *)a1 + 45) & 2) == 0 && (*((_BYTE *)a1 + 55) & 0x20) != 0 && *(_QWORD *)(*((_QWORD *)a1 + 19) + 112LL) )
  {
    v9 = 38LL;
    v8 = 1LL;
  }
  else
  {
    if ( gfShellFrameHangResilient )
    {
      if ( (*(_DWORD *)(gptiCurrent + 1096LL) & 0x40000) != 0 )
      {
        v10 = *((_QWORD *)a1 + 2);
        if ( gptiCurrent != v10 )
        {
          v11 = *(_QWORD *)(v10 + 736);
          if ( v11 )
            v11 += 16LL;
          if ( !v11 || *(_DWORD *)(v11 + 8) != 15 || *(_QWORD *)(v11 + 16) || *(_QWORD *)(v11 + 24) )
            PostMessage(a1, 15LL, 0LL);
          goto LABEL_21;
        }
      }
    }
    v8 = 0LL;
    v9 = 15LL;
  }
  xxxSendMessage(a1, v9, v8, 0LL);
LABEL_21:
  if ( (*((_BYTE *)a1 + 42) & 0x40) != 0 )
    xxxSimpleDoSyncPaint(a1);
LABEL_4:
  if ( (a2 & 1) != 0 && a1 != (struct tagWND *)GetDesktopWindow(a1) )
  {
    v5 = 0LL;
    v6 = gptiCurrent;
    v12 = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = &v12;
    v7 = *((_QWORD *)a1 + 12);
    v13 = 0LL;
    while ( v7 )
    {
      if ( (*(_BYTE *)(v7 + 48) & 0x20) == 0 || !*(_QWORD *)(v7 + 160) && (*(_BYTE *)(v7 + 41) & 0x10) == 0 )
        goto LABEL_11;
      v6 = *(_QWORD *)(v7 + 72);
      if ( !v6 )
        goto LABEL_11;
      do
      {
        if ( *(_QWORD *)(v6 + 160) )
          break;
        if ( (*(_BYTE *)(v6 + 41) & 0x10) != 0 )
          break;
        v6 = *(_QWORD *)(v6 + 72);
      }
      while ( v6 );
      if ( v6 )
      {
        v7 = *(_QWORD *)(v7 + 72);
      }
      else
      {
LABEL_11:
        v13 = v7;
        ++*(_DWORD *)(v7 + 8);
        if ( v5 )
          HMUnlockObject(v5);
        xxxUpdateWindow2((struct tagWND *)v7, a2 | 4);
        v5 = v13;
        v7 = *(_QWORD *)(v7 + 72);
      }
    }
    goto LABEL_8;
  }
}
