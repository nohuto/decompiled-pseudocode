/*
 * XREFs of xxxEndDeferWindowPosEx @ 0x1C0051394
 * Callers:
 *     xxxSetWindowPosAndBand @ 0x1C0074F6C (xxxSetWindowPosAndBand.c)
 *     xxxSetWindowRgn @ 0x1C007606C (xxxSetWindowRgn.c)
 *     ?xxxProcessDesktopRecalc@@YAXPEAUtagASYNCDTOPRECALC@@@Z @ 0x1C0090E2C (-xxxProcessDesktopRecalc@@YAXPEAUtagASYNCDTOPRECALC@@@Z.c)
 *     xxxMinMaximizeEx @ 0x1C00C83F4 (xxxMinMaximizeEx.c)
 *     NtUserEndDeferWindowPosEx @ 0x1C00F83E0 (NtUserEndDeferWindowPosEx.c)
 *     NtUserSetWindowBand @ 0x1C00FDC60 (NtUserSetWindowBand.c)
 *     xxxProcessSetWindowPosEvent @ 0x1C01022D4 (xxxProcessSetWindowPosEvent.c)
 *     xxxArrangeIconicWindows @ 0x1C0149340 (xxxArrangeIconicWindows.c)
 *     xxxRestoreMonitorsAndWindowsRects @ 0x1C01D81F4 (xxxRestoreMonitorsAndWindowsRects.c)
 * Callees:
 *     ?zzzBltValidBits@@YAHPEAUtagSMWP@@@Z @ 0x1C0050400 (-zzzBltValidBits@@YAHPEAUtagSMWP@@@Z.c)
 *     DestroySMWP @ 0x1C0051890 (DestroySMWP.c)
 *     PushW32ThreadLock @ 0x1C0051990 (PushW32ThreadLock.c)
 *     ?FindValidWindowPos@@YAPEAUtagWINDOWPOS@@PEAUtagSMWP@@@Z @ 0x1C00519F0 (-FindValidWindowPos@@YAPEAUtagWINDOWPOS@@PEAUtagSMWP@@@Z.c)
 *     ?ValidateSmwp@@YAHPEAUtagSMWP@@PEAH@Z @ 0x1C0051A2C (-ValidateSmwp@@YAHPEAUtagSMWP@@PEAH@Z.c)
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C0054A5C (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     ?ValidateWindowPos@@YAHPEAUtagCVR@@PEAUtagWND@@@Z @ 0x1C005594C (-ValidateWindowPos@@YAHPEAUtagCVR@@PEAUtagWND@@@Z.c)
 *     HMValidateHandleNoSecure @ 0x1C0055AB4 (HMValidateHandleNoSecure.c)
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z @ 0x1C0056A14 (-xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z.c)
 *     _GetDesktopWindow @ 0x1C00573D0 (_GetDesktopWindow.c)
 *     SetWindowGroupBand @ 0x1C0076224 (SetWindowGroupBand.c)
 *     ?ZOrderByOwner@@YAPEAUtagSMWP@@PEAU1@@Z @ 0x1C0076330 (-ZOrderByOwner@@YAPEAUtagSMWP@@PEAU1@@Z.c)
 *     PostIAMShellHookMessageEx @ 0x1C00783D0 (PostIAMShellHookMessageEx.c)
 *     SetOrClrWF @ 0x1C0080070 (SetOrClrWF.c)
 *     xxxSetTrayWindow @ 0x1C00803EC (xxxSetTrayWindow.c)
 *     PostShellHookMessagesEx @ 0x1C0081C20 (PostShellHookMessagesEx.c)
 *     xxxCallHook @ 0x1C00843C8 (xxxCallHook.c)
 *     ?xxxSwpActivate@@YAHPEAUtagWND@@@Z @ 0x1C008C694 (-xxxSwpActivate@@YAHPEAUtagWND@@@Z.c)
 *     xxxDoSyncPaint @ 0x1C00DB9D8 (xxxDoSyncPaint.c)
 *     GreClientRgnUpdatedStable @ 0x1C00ECDD8 (GreClientRgnUpdatedStable.c)
 *     ?AsyncWindowPos@@YAXPEAUtagSMWP@@@Z @ 0x1C00F37DC (-AsyncWindowPos@@YAXPEAUtagSMWP@@@Z.c)
 *     ?UnrefAndDestroySMWP@@YAXPEAUtagSMWP@@@Z @ 0x1C01C55A0 (-UnrefAndDestroySMWP@@YAXPEAUtagSMWP@@@Z.c)
 */

__int64 __fastcall xxxEndDeferWindowPosEx(struct tagSMWP *a1, int a2)
{
  struct tagSMWP *v3; // rbx
  struct tagWINDOWPOS *ValidWindowPos; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r15
  int v8; // r14d
  __int64 v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 result; // rax
  struct tagCVR *v13; // rsi
  int v14; // r14d
  __int64 v15; // rdx
  __int64 v16; // r14
  int v17; // esi
  bool v18; // cf
  __int64 v19; // rdx
  __int64 v20; // rcx
  int v21; // eax
  int v22; // r12d
  __int64 v23; // r12
  __int64 v24; // rsi
  __int64 v25; // rax
  __int64 v26; // r13
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rdx
  __int64 v30; // r8
  int v31; // eax
  __int64 v32; // rdx
  __int64 v33; // rcx
  int v34; // esi
  __int64 v35; // rdx
  __int64 v36; // rdx
  __int64 ThreadWin32Thread; // rax
  __int64 v39; // rcx
  __int64 v40; // rdx
  _QWORD v41[3]; // [rsp+28h] [rbp-41h] BYREF
  _QWORD v42[3]; // [rsp+40h] [rbp-29h] BYREF
  _QWORD v43[3]; // [rsp+58h] [rbp-11h] BYREF
  _QWORD v44[10]; // [rsp+70h] [rbp+7h] BYREF
  int v45; // [rsp+D0h] [rbp+67h] BYREF
  int v46; // [rsp+E0h] [rbp+77h]
  HWND v47; // [rsp+E8h] [rbp+7Fh] BYREF

  v3 = a1;
  v46 = 0;
  if ( !*((_DWORD *)a1 + 7) )
    goto LABEL_76;
  if ( !(unsigned int)ValidateSmwp(a1, &v45) )
    goto LABEL_76;
  ValidWindowPos = FindValidWindowPos(v3);
  if ( !ValidWindowPos )
    goto LABEL_76;
  v6 = gSharedInfo;
  v7 = *(_QWORD *)(*(_QWORD *)(*((_DWORD *)&gSharedInfo + 4) * (unsigned int)(unsigned __int16)*(_DWORD *)ValidWindowPos
                             + *((_QWORD *)&gSharedInfo + 1))
                 + 88LL);
  if ( !v7 || !*(_QWORD *)(v7 + 24) )
    goto LABEL_76;
  v8 = 0;
  if ( *((int *)v3 + 7) > 0 )
  {
    v9 = 0LL;
    do
    {
      v10 = *((_QWORD *)v3 + 5);
      if ( *(_QWORD *)(v10 + v9) )
      {
        v5 = *(unsigned int *)(v10 + v9 + 152);
        if ( (_DWORD)v5 )
        {
          v11 = *(_QWORD *)(*(_DWORD *)(v6 + 16) * (unsigned int)(unsigned __int16)*(_DWORD *)(v10 + v9)
                          + *(_QWORD *)(v6 + 8));
          if ( *(_DWORD *)(v11 + 304) != (_DWORD)v5 )
            SetWindowGroupBand((struct tagWND *)v11);
          *(_DWORD *)(*((_QWORD *)v3 + 5) + v9 + 152) = 0;
          v6 = gSharedInfo;
        }
      }
      ++v8;
      v9 += 168LL;
    }
    while ( v8 < *((_DWORD *)v3 + 7) );
  }
  if ( a2 )
    AsyncWindowPos(v3);
  if ( v7 == GetDesktopWindow(v7, v5) )
  {
    result = (__int64)ZOrderByOwner(v3);
    v3 = (struct tagSMWP *)result;
    if ( !result )
      return result;
    if ( a2 )
    {
      v13 = *(struct tagCVR **)(result + 40);
      v14 = *(_DWORD *)(result + 28);
      while ( --v14 >= 0 )
      {
        if ( *(_QWORD *)v13 && !(unsigned int)ValidateWindowPos(v13, 0LL) )
          *(_QWORD *)v13 = 0LL;
        v13 = (struct tagCVR *)((char *)v13 + 168);
      }
      AsyncWindowPos(v3);
    }
  }
  v43[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v43;
  v43[1] = v7;
  ++*(_DWORD *)(v7 + 8);
  if ( (*((_DWORD *)v3 + 6) & 2) != 0 )
  {
    ++*((_DWORD *)v3 + 2);
    PushW32ThreadLock(v3, v44, UnrefAndDestroySMWP);
    v46 = 1;
  }
  else
  {
    PushW32ThreadLock(v3, v44, DestroySMWP);
  }
  ++*(_DWORD *)(gptiCurrent + 1048LL);
  *((_DWORD *)v3 + 6) |= 4u;
  if ( (unsigned int)xxxCalcValidRects(v3, &v47) )
  {
    LOBYTE(v15) = 1;
    v16 = HMValidateHandleNoSecure(v47, v15);
    v41[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v41;
    v41[1] = v16;
    if ( v16 )
      ++*(_DWORD *)(v16 + 8);
    v17 = *(_DWORD *)(gptiCurrent + 776LL);
    LODWORD(v47) = v17;
    v18 = (unsigned int)zzzBltValidBits(v3) != 0;
    v21 = *((_DWORD *)v3 + 6);
    v22 = v18 ? v45 : 0;
    v45 = v22;
    if ( (v21 & 1) != 0 )
    {
      v23 = *((int *)v3 + 7);
      if ( *((_DWORD *)v3 + 7) )
      {
        v24 = 168 * v23;
        do
        {
          v25 = *((_QWORD *)v3 + 5);
          v24 -= 168LL;
          --v23;
          v20 = *(_QWORD *)(v25 + v24);
          if ( v20 )
          {
            if ( (*(_DWORD *)(v25 + v24 + 32) & 0xF0000000) != 0 )
            {
              LOBYTE(v19) = 1;
              v26 = HMValidateHandleNoSecure(v20, v19);
              if ( v26 )
              {
                v27 = *(_QWORD *)(gptiCurrent + 368LL);
                *(_QWORD *)(gptiCurrent + 368LL) = v42;
                v42[0] = v27;
                v42[1] = v26;
                ++*(_DWORD *)(v26 + 8);
                v28 = *((_QWORD *)v3 + 5);
                if ( (*(_DWORD *)(v28 + v24 + 32) & 0x10000000) != 0 )
                {
                  if ( (*(_DWORD *)(v28 + v24 + 156) & 8) != 0 )
                  {
                    PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 408LL), 21LL, *(_QWORD *)(v28 + v24));
                  }
                  else
                  {
                    PostShellHookMessagesEx(1uLL, *(_QWORD *)(v28 + v24), 0LL);
                    xxxCallHook(1LL, *(_QWORD *)(*((_QWORD *)v3 + 5) + v24), 0LL);
                  }
                }
                v29 = *((_QWORD *)v3 + 5);
                if ( (*(_DWORD *)(v29 + v24 + 32) & 0x20000000) != 0 )
                {
                  PostShellHookMessagesEx(2uLL, *(_QWORD *)(v29 + v24), 0LL);
                  xxxCallHook(2LL, *(_QWORD *)(*((_QWORD *)v3 + 5) + v24), 0LL);
                }
                v30 = *((_QWORD *)v3 + 5);
                if ( (*(_DWORD *)(v30 + v24 + 32) & 0x40000000) != 0 )
                {
                  v31 = *(_DWORD *)(v30 + v24 + 156);
                  if ( (v31 & 8) != 0 )
                  {
                    v32 = 23LL;
                  }
                  else
                  {
                    if ( (v31 & 0x10) == 0 )
                      xxxSetTrayWindow(*(_QWORD *)(v26 + 24), v26);
                    v30 = *((_QWORD *)v3 + 5);
                    v32 = 19LL;
                  }
                  PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 408LL), v32, *(_QWORD *)(v30 + v24));
                }
                v33 = *(unsigned int *)(*((_QWORD *)v3 + 5) + v24 + 32);
                if ( (int)v33 < 0 )
                  xxxSetTrayWindow(*(_QWORD *)(gptiCurrent + 408LL), 1LL);
                ThreadUnlock1(v33, v29);
              }
            }
          }
        }
        while ( v23 );
        v17 = (int)v47;
      }
      v22 = v45;
    }
    if ( gptiCurrent == gptiForeground
      && v17
      && !*(_DWORD *)(gptiCurrent + 776LL)
      && !(unsigned int)IsImmersiveAppRestricted(*(_QWORD *)(gptiCurrent + 376LL)) )
    {
      *(_DWORD *)(gptiCurrent + 440LL) |= 0x20u;
    }
    v34 = 0;
    if ( v16 )
      v34 = xxxSwpActivate((struct tagWND *)v16);
    if ( v22 )
      xxxDoSyncPaint(v7, 4LL);
    ThreadUnlock1(v20, v19);
    if ( v34 )
    {
      v35 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 80LL);
      if ( v35 )
        SetOrClrWF(0LL, v35, 257LL, 1LL);
      v36 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 88LL);
      if ( v36 )
        SetOrClrWF(0LL, v36, 257LL, 1LL);
    }
    xxxSendChangedMsgs(v3);
  }
  if ( (*(_DWORD *)(gptiCurrent + 1048LL))-- == 1 )
  {
    GreLockVisRgn(*gpDispInfo);
    GreClientRgnUpdatedStable();
    GreUnlockVisRgn(*gpDispInfo);
  }
  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  v39 = v44[0];
  *(_QWORD *)(ThreadWin32Thread + 16) = v44[0];
  ThreadUnlock1(v39, v40);
  if ( v46 )
    UnrefAndDestroySMWP(v3);
  else
LABEL_76:
    DestroySMWP(v3);
  return 1LL;
}
