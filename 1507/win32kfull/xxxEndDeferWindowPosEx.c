/*
 * XREFs of xxxEndDeferWindowPosEx @ 0x1C00634F0
 * Callers:
 *     xxxMinMaximizeEx @ 0x1C003E778 (xxxMinMaximizeEx.c)
 *     ?xxxProcessDesktopRecalc@@YAXPEAUtagASYNCDTOPRECALC@@@Z @ 0x1C0045678 (-xxxProcessDesktopRecalc@@YAXPEAUtagASYNCDTOPRECALC@@@Z.c)
 *     xxxSetWindowRgn @ 0x1C00847E8 (xxxSetWindowRgn.c)
 *     xxxSetWindowPosAndBand @ 0x1C00850A0 (xxxSetWindowPosAndBand.c)
 *     NtUserEndDeferWindowPosEx @ 0x1C00F1D60 (NtUserEndDeferWindowPosEx.c)
 *     NtUserSetWindowBand @ 0x1C00F6870 (NtUserSetWindowBand.c)
 *     xxxProcessSetWindowPosEvent @ 0x1C00F7CEC (xxxProcessSetWindowPosEvent.c)
 *     xxxArrangeIconicWindows @ 0x1C011FC70 (xxxArrangeIconicWindows.c)
 *     xxxRestoreMonitorsAndWindowsRects @ 0x1C01D6784 (xxxRestoreMonitorsAndWindowsRects.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     ?xxxSwpActivate@@YAHPEAUtagWND@@@Z @ 0x1C0044810 (-xxxSwpActivate@@YAHPEAUtagWND@@@Z.c)
 *     xxxSetTrayWindow @ 0x1C0047654 (xxxSetTrayWindow.c)
 *     xxxCallHook @ 0x1C004A204 (xxxCallHook.c)
 *     SetOrClrWF @ 0x1C005B694 (SetOrClrWF.c)
 *     ?zzzBltValidBits@@YAHPEAUtagSMWP@@@Z @ 0x1C0062A3C (-zzzBltValidBits@@YAHPEAUtagSMWP@@@Z.c)
 *     ?FindValidWindowPos@@YAPEAUtagWINDOWPOS@@PEAUtagSMWP@@@Z @ 0x1C0063454 (-FindValidWindowPos@@YAPEAUtagWINDOWPOS@@PEAUtagSMWP@@@Z.c)
 *     PushW32ThreadLock @ 0x1C0063490 (PushW32ThreadLock.c)
 *     DestroySMWP @ 0x1C0063A00 (DestroySMWP.c)
 *     ?ValidateSmwp@@YAHPEAUtagSMWP@@PEAH@Z @ 0x1C0064F04 (-ValidateSmwp@@YAHPEAUtagSMWP@@PEAH@Z.c)
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C00665FC (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 *     ?ValidateWindowPos@@YAHPEAUtagCVR@@PEAUtagWND@@@Z @ 0x1C0066998 (-ValidateWindowPos@@YAHPEAUtagCVR@@PEAUtagWND@@@Z.c)
 *     HMValidateHandleNoSecure @ 0x1C0066B04 (HMValidateHandleNoSecure.c)
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z @ 0x1C0066D0C (-xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z.c)
 *     PostIAMShellHookMessageEx @ 0x1C007AFD0 (PostIAMShellHookMessageEx.c)
 *     SetWindowGroupBand @ 0x1C0083598 (SetWindowGroupBand.c)
 *     ?ZOrderByOwner@@YAPEAUtagSMWP@@PEAU1@@Z @ 0x1C00836EC (-ZOrderByOwner@@YAPEAUtagSMWP@@PEAU1@@Z.c)
 *     PostShellHookMessagesEx @ 0x1C0085F90 (PostShellHookMessagesEx.c)
 *     xxxDoSyncPaint @ 0x1C00D526C (xxxDoSyncPaint.c)
 *     GreClientRgnUpdatedStable @ 0x1C00E7C74 (GreClientRgnUpdatedStable.c)
 *     ?AsyncWindowPos@@YAXPEAUtagSMWP@@@Z @ 0x1C00ECC2C (-AsyncWindowPos@@YAXPEAUtagSMWP@@@Z.c)
 *     ?UnrefAndDestroySMWP@@YAXPEAUtagSMWP@@@Z @ 0x1C01C39E0 (-UnrefAndDestroySMWP@@YAXPEAUtagSMWP@@@Z.c)
 */

__int64 __fastcall xxxEndDeferWindowPosEx(struct tagSMWP *a1, int a2)
{
  struct tagSMWP *v3; // rbx
  struct tagWINDOWPOS *ValidWindowPos; // rax
  __int64 v5; // r9
  __int64 v6; // r15
  int v7; // r14d
  __int64 v8; // rsi
  __int64 v9; // rax
  int v10; // edx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 result; // rax
  struct tagCVR *v16; // rsi
  int v17; // r14d
  __int64 v18; // rdx
  __int64 v19; // r14
  int v20; // esi
  bool v21; // cf
  __int64 v22; // rdx
  __int64 v23; // rcx
  int v24; // eax
  int v25; // r12d
  __int64 v26; // r12
  __int64 v27; // rsi
  __int64 v28; // rax
  __int64 v29; // r13
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rdx
  __int64 v33; // r8
  int v34; // eax
  __int64 v35; // rdx
  __int64 v36; // rcx
  int v37; // esi
  _DWORD *v38; // rdx
  _DWORD *v39; // rdx
  __int64 ThreadWin32Thread; // rax
  __int64 v42; // rcx
  __int64 v43; // rdx
  _QWORD v44[3]; // [rsp+28h] [rbp-41h] BYREF
  _QWORD v45[3]; // [rsp+40h] [rbp-29h] BYREF
  _QWORD v46[3]; // [rsp+58h] [rbp-11h] BYREF
  _QWORD v47[10]; // [rsp+70h] [rbp+7h] BYREF
  int v48; // [rsp+D0h] [rbp+67h] BYREF
  int v49; // [rsp+E0h] [rbp+77h]
  HWND v50; // [rsp+E8h] [rbp+7Fh] BYREF

  v3 = a1;
  v49 = 0;
  if ( !*((_DWORD *)a1 + 7) )
    goto LABEL_79;
  if ( !(unsigned int)ValidateSmwp(a1, &v48) )
    goto LABEL_79;
  ValidWindowPos = FindValidWindowPos(v3);
  if ( !ValidWindowPos )
    goto LABEL_79;
  v5 = gSharedInfo[0];
  v6 = *(_QWORD *)(*(_QWORD *)(LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*(_DWORD *)ValidWindowPos
                             + gSharedInfo[1])
                 + 88LL);
  if ( !v6 || !*(_QWORD *)(v6 + 24) )
    goto LABEL_79;
  v7 = 0;
  if ( *((int *)v3 + 7) > 0 )
  {
    v8 = 0LL;
    do
    {
      v9 = *((_QWORD *)v3 + 5);
      if ( *(_QWORD *)(v9 + v8) )
      {
        v10 = *(_DWORD *)(v9 + v8 + 152);
        if ( v10 )
        {
          v11 = *(_QWORD *)(*(_DWORD *)(v5 + 16) * (unsigned int)(unsigned __int16)*(_DWORD *)(v9 + v8)
                          + *(_QWORD *)(v5 + 8));
          if ( *(_DWORD *)(v11 + 304) != v10 )
            SetWindowGroupBand((struct tagWND *)v11);
          *(_DWORD *)(*((_QWORD *)v3 + 5) + v8 + 152) = 0;
          v5 = gSharedInfo[0];
        }
      }
      ++v7;
      v8 += 168LL;
    }
    while ( v7 < *((_DWORD *)v3 + 7) );
  }
  if ( a2 )
    AsyncWindowPos(v3);
  v12 = *(_QWORD *)(v6 + 24);
  v13 = 0LL;
  if ( v12 )
  {
    v14 = *(_QWORD *)(v12 + 8);
    if ( v14 )
      v13 = *(_QWORD *)(v14 + 16);
  }
  if ( v6 == v13 )
  {
    result = (__int64)ZOrderByOwner(v3);
    v3 = (struct tagSMWP *)result;
    if ( !result )
      return result;
    if ( a2 )
    {
      v16 = *(struct tagCVR **)(result + 40);
      v17 = *(_DWORD *)(result + 28);
      while ( --v17 >= 0 )
      {
        if ( *(_QWORD *)v16 && !(unsigned int)ValidateWindowPos(v16, 0LL) )
          *(_QWORD *)v16 = 0LL;
        v16 = (struct tagCVR *)((char *)v16 + 168);
      }
      AsyncWindowPos(v3);
    }
  }
  v46[0] = *(_QWORD *)(gptiCurrent + 376LL);
  *(_QWORD *)(gptiCurrent + 376LL) = v46;
  v46[1] = v6;
  ++*(_DWORD *)(v6 + 8);
  if ( (*((_DWORD *)v3 + 6) & 2) != 0 )
  {
    ++*((_DWORD *)v3 + 2);
    PushW32ThreadLock((__int64)v3, v47, (__int64)UnrefAndDestroySMWP);
    v49 = 1;
  }
  else
  {
    PushW32ThreadLock((__int64)v3, v47, (__int64)DestroySMWP);
  }
  ++*(_DWORD *)(gptiCurrent + 1056LL);
  *((_DWORD *)v3 + 6) |= 4u;
  if ( (unsigned int)xxxCalcValidRects(v3, &v50) )
  {
    LOBYTE(v18) = 1;
    v19 = HMValidateHandleNoSecure(v50, v18);
    v44[0] = *(_QWORD *)(gptiCurrent + 376LL);
    *(_QWORD *)(gptiCurrent + 376LL) = v44;
    v44[1] = v19;
    if ( v19 )
      ++*(_DWORD *)(v19 + 8);
    v20 = *(_DWORD *)(gptiCurrent + 784LL);
    LODWORD(v50) = v20;
    v21 = (unsigned int)zzzBltValidBits(v3) != 0;
    v24 = *((_DWORD *)v3 + 6);
    v25 = v21 ? v48 : 0;
    v48 = v25;
    if ( (v24 & 1) != 0 )
    {
      v26 = *((int *)v3 + 7);
      if ( *((_DWORD *)v3 + 7) )
      {
        v27 = 168 * v26;
        do
        {
          v28 = *((_QWORD *)v3 + 5);
          v27 -= 168LL;
          --v26;
          v23 = *(_QWORD *)(v28 + v27);
          if ( v23 )
          {
            if ( (*(_DWORD *)(v28 + v27 + 32) & 0xF0000000) != 0 )
            {
              LOBYTE(v22) = 1;
              v29 = HMValidateHandleNoSecure(v23, v22);
              if ( v29 )
              {
                v30 = *(_QWORD *)(gptiCurrent + 376LL);
                *(_QWORD *)(gptiCurrent + 376LL) = v45;
                v45[0] = v30;
                v45[1] = v29;
                ++*(_DWORD *)(v29 + 8);
                v31 = *((_QWORD *)v3 + 5);
                if ( (*(_DWORD *)(v31 + v27 + 32) & 0x10000000) != 0 )
                {
                  if ( (*(_DWORD *)(v31 + v27 + 156) & 8) != 0 )
                  {
                    PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 416LL), 21LL, *(_QWORD *)(v31 + v27));
                  }
                  else
                  {
                    PostShellHookMessagesEx(1uLL, *(_QWORD *)(v31 + v27), 0LL);
                    xxxCallHook(1, *(_QWORD *)(*((_QWORD *)v3 + 5) + v27), 0LL, 0xAu);
                  }
                }
                v32 = *((_QWORD *)v3 + 5);
                if ( (*(_DWORD *)(v32 + v27 + 32) & 0x20000000) != 0 )
                {
                  PostShellHookMessagesEx(2uLL, *(_QWORD *)(v32 + v27), 0LL);
                  xxxCallHook(2, *(_QWORD *)(*((_QWORD *)v3 + 5) + v27), 0LL, 0xAu);
                }
                v33 = *((_QWORD *)v3 + 5);
                if ( (*(_DWORD *)(v33 + v27 + 32) & 0x40000000) != 0 )
                {
                  v34 = *(_DWORD *)(v33 + v27 + 156);
                  if ( (v34 & 8) != 0 )
                  {
                    v35 = 23LL;
                  }
                  else
                  {
                    if ( (v34 & 0x10) == 0 )
                      xxxSetTrayWindow(*(_QWORD *)(v29 + 24), (__int64 *)v29);
                    v33 = *((_QWORD *)v3 + 5);
                    v35 = 19LL;
                  }
                  PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 416LL), v35, *(_QWORD *)(v33 + v27));
                }
                v36 = *(unsigned int *)(*((_QWORD *)v3 + 5) + v27 + 32);
                if ( (int)v36 < 0 )
                  xxxSetTrayWindow(*(_QWORD *)(gptiCurrent + 416LL), (__int64 *)1);
                ThreadUnlock1(v36, v32);
              }
            }
          }
        }
        while ( v26 );
        v20 = (int)v50;
      }
      v25 = v48;
    }
    if ( gptiCurrent == gptiForeground
      && v20
      && !*(_DWORD *)(gptiCurrent + 784LL)
      && !(unsigned int)IsImmersiveAppRestricted(*(_QWORD *)(gptiCurrent + 384LL)) )
    {
      *(_DWORD *)(gptiCurrent + 448LL) |= 0x20u;
    }
    v37 = 0;
    if ( v19 )
      v37 = xxxSwpActivate((struct tagWND *)v19);
    if ( v25 )
      xxxDoSyncPaint(v6, 4LL);
    ThreadUnlock1(v23, v22);
    if ( v37 )
    {
      v38 = *(_DWORD **)(*(_QWORD *)(gptiCurrent + 392LL) + 80LL);
      if ( v38 )
        SetOrClrWF(0, v38, 0x101u, 1);
      v39 = *(_DWORD **)(*(_QWORD *)(gptiCurrent + 392LL) + 88LL);
      if ( v39 )
        SetOrClrWF(0, v39, 0x101u, 1);
    }
    xxxSendChangedMsgs(v3);
  }
  if ( (*(_DWORD *)(gptiCurrent + 1056LL))-- == 1 )
  {
    GreLockVisRgn(*gpDispInfo);
    GreClientRgnUpdatedStable();
    GreUnlockVisRgn(*gpDispInfo);
  }
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v42 = v47[0];
  *(_QWORD *)(ThreadWin32Thread + 16) = v47[0];
  ThreadUnlock1(v42, v43);
  if ( v49 )
    UnrefAndDestroySMWP(v3);
  else
LABEL_79:
    DestroySMWP(v3);
  return 1LL;
}
