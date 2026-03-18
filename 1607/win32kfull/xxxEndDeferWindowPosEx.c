/*
 * XREFs of xxxEndDeferWindowPosEx @ 0x1C0078230
 * Callers:
 *     xxxSetWindowRgn @ 0x1C00A592C (xxxSetWindowRgn.c)
 *     xxxSetWindowPosAndBand @ 0x1C00A652C (xxxSetWindowPosAndBand.c)
 *     ?xxxProcessDesktopRecalc@@YAXPEAUtagASYNCDTOPRECALC@@@Z @ 0x1C00ABD4C (-xxxProcessDesktopRecalc@@YAXPEAUtagASYNCDTOPRECALC@@@Z.c)
 *     xxxMinMaximizeEx @ 0x1C00B1498 (xxxMinMaximizeEx.c)
 *     NtUserEndDeferWindowPosEx @ 0x1C011CC00 (NtUserEndDeferWindowPosEx.c)
 *     NtUserSetWindowBand @ 0x1C01218C0 (NtUserSetWindowBand.c)
 *     xxxProcessSetWindowPosEvent @ 0x1C01252C8 (xxxProcessSetWindowPosEvent.c)
 *     xxxArrangeIconicWindows @ 0x1C014E1F0 (xxxArrangeIconicWindows.c)
 *     xxxRestoreMonitorsAndWindowsRects @ 0x1C01CF26C (xxxRestoreMonitorsAndWindowsRects.c)
 * Callees:
 *     DestroySMWP @ 0x1C0075EC0 (DestroySMWP.c)
 *     ?zzzBltValidBits@@YAHPEAUtagSMWP@@@Z @ 0x1C00777E4 (-zzzBltValidBits@@YAHPEAUtagSMWP@@@Z.c)
 *     ?FindValidWindowPos@@YAPEAUtagWINDOWPOS@@PEAUtagSMWP@@@Z @ 0x1C00781F4 (-FindValidWindowPos@@YAPEAUtagWINDOWPOS@@PEAUtagSMWP@@@Z.c)
 *     ?ValidateSmwp@@YAHPEAUtagSMWP@@PEAH@Z @ 0x1C0078DF8 (-ValidateSmwp@@YAHPEAUtagSMWP@@PEAH@Z.c)
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C0079418 (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z @ 0x1C0079810 (-xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z.c)
 *     ?ValidateWindowPos@@YAHPEAUtagCVR@@PEAUtagWND@@@Z @ 0x1C007A280 (-ValidateWindowPos@@YAHPEAUtagCVR@@PEAUtagWND@@@Z.c)
 *     HMValidateHandleNoSecure @ 0x1C007A3E8 (HMValidateHandleNoSecure.c)
 *     SetOrClrWF @ 0x1C00964B4 (SetOrClrWF.c)
 *     xxxSetTrayWindow @ 0x1C00991F4 (xxxSetTrayWindow.c)
 *     PostShellHookMessagesEx @ 0x1C00992D4 (PostShellHookMessagesEx.c)
 *     PushW32ThreadLock @ 0x1C009F990 (PushW32ThreadLock.c)
 *     xxxCallHook @ 0x1C00A3C90 (xxxCallHook.c)
 *     PostIAMShellHookMessageEx @ 0x1C00A4BF0 (PostIAMShellHookMessageEx.c)
 *     SetWindowGroupBand @ 0x1C00A4DA4 (SetWindowGroupBand.c)
 *     ?ZOrderByOwner@@YAPEAUtagSMWP@@PEAU1@@Z @ 0x1C00A4EF8 (-ZOrderByOwner@@YAPEAUtagSMWP@@PEAU1@@Z.c)
 *     xxxDoSyncPaint @ 0x1C00F97EC (xxxDoSyncPaint.c)
 *     GreClientRgnUpdatedStable @ 0x1C010BD6C (GreClientRgnUpdatedStable.c)
 *     ?AsyncWindowPos@@YAXPEAUtagSMWP@@@Z @ 0x1C0112C44 (-AsyncWindowPos@@YAXPEAUtagSMWP@@@Z.c)
 *     ?xxxSwpActivate@@YAHPEAUtagWND@@@Z @ 0x1C0114818 (-xxxSwpActivate@@YAHPEAUtagWND@@@Z.c)
 *     ?UnrefAndDestroySMWP@@YAXPEAUtagSMWP@@@Z @ 0x1C0124110 (-UnrefAndDestroySMWP@@YAXPEAUtagSMWP@@@Z.c)
 */

__int64 __fastcall xxxEndDeferWindowPosEx(struct tagSMWP *a1, __int64 a2, __int64 a3)
{
  int v3; // r12d
  struct tagSMWP *v4; // rbx
  struct tagWINDOWPOS *ValidWindowPos; // rax
  __int64 v6; // r9
  __int64 v7; // r15
  int v8; // r14d
  __int64 v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rsi
  __int64 *ThreadWin32Thread; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // r14
  int v20; // esi
  bool v21; // cf
  __int64 v22; // rdx
  __int64 v23; // rcx
  int v24; // eax
  int v25; // r12d
  int v26; // esi
  __int64 v28; // rdi
  __int64 *v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 result; // rax
  struct tagCVR *v33; // rsi
  int v34; // r14d
  __int64 v35; // r12
  __int64 v36; // rsi
  __int64 v37; // rax
  __int64 v38; // r13
  __int64 v39; // rcx
  __int64 v40; // rdx
  __int64 v41; // rdx
  __int64 v42; // r8
  __int64 v43; // rcx
  __int64 v44; // rdx
  __int64 v45; // rdx
  __int64 v46; // rcx
  int v47; // eax
  __int64 v48; // rdx
  _QWORD v49[3]; // [rsp+28h] [rbp-41h] BYREF
  _QWORD v50[3]; // [rsp+40h] [rbp-29h] BYREF
  _QWORD v51[3]; // [rsp+58h] [rbp-11h] BYREF
  _QWORD v52[10]; // [rsp+70h] [rbp+7h] BYREF
  int v53; // [rsp+D0h] [rbp+67h] BYREF
  int v54; // [rsp+E0h] [rbp+77h]
  HWND v55; // [rsp+E8h] [rbp+7Fh] BYREF

  v3 = a2;
  v4 = a1;
  v54 = 0;
  if ( !*((_DWORD *)a1 + 7) )
    goto LABEL_37;
  if ( !(unsigned int)ValidateSmwp(a1, &v53) )
    goto LABEL_37;
  ValidWindowPos = FindValidWindowPos(v4);
  if ( !ValidWindowPos )
    goto LABEL_37;
  v6 = gSharedInfo;
  v7 = *(_QWORD *)(*(_QWORD *)(*((_DWORD *)&gSharedInfo + 4) * (unsigned int)(unsigned __int16)*(_DWORD *)ValidWindowPos
                             + *((_QWORD *)&gSharedInfo + 1))
                 + 88LL);
  if ( !v7 || !*(_QWORD *)(v7 + 24) )
    goto LABEL_37;
  v8 = 0;
  if ( *((int *)v4 + 7) > 0 )
  {
    v9 = 0LL;
    do
    {
      v10 = *((_QWORD *)v4 + 5);
      if ( *(_QWORD *)(v10 + v9) )
      {
        a2 = *(unsigned int *)(v10 + v9 + 152);
        if ( (_DWORD)a2 )
        {
          v46 = *(_QWORD *)(*(_DWORD *)(v6 + 16) * (unsigned int)(unsigned __int16)*(_DWORD *)(v10 + v9)
                          + *(_QWORD *)(v6 + 8));
          if ( *(_DWORD *)(v46 + 304) != (_DWORD)a2 )
            SetWindowGroupBand((struct tagWND *)v46);
          *(_DWORD *)(*((_QWORD *)v4 + 5) + v9 + 152) = 0;
          v6 = gSharedInfo;
        }
      }
      ++v8;
      v9 += 168LL;
    }
    while ( v8 < *((_DWORD *)v4 + 7) );
  }
  if ( v3 )
    AsyncWindowPos(v4);
  v11 = *(_QWORD *)(v7 + 24);
  v12 = 0LL;
  if ( v11 )
  {
    v13 = *(_QWORD *)(v11 + 8);
    if ( v13 )
      v12 = *(_QWORD *)(v13 + 16);
  }
  if ( v7 != v12 )
  {
LABEL_17:
    v50[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v50;
    v50[1] = v7;
    ++*(_DWORD *)(v7 + 8);
    if ( (*((_DWORD *)v4 + 6) & 2) != 0 )
    {
      ++*((_DWORD *)v4 + 2);
      PushW32ThreadLock(v4, v49, UnrefAndDestroySMWP);
      v54 = 1;
    }
    else
    {
      v14 = 0LL;
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread(), a2, a3, v6);
      if ( ThreadWin32Thread )
        v14 = *ThreadWin32Thread;
      v49[0] = *(_QWORD *)(v14 + 16);
      *(_QWORD *)(v14 + 16) = v49;
      v49[2] = DestroySMWP;
      v49[1] = v4;
    }
    ++*(_DWORD *)(gptiCurrent + 1072LL);
    *((_DWORD *)v4 + 6) |= 4u;
    if ( (unsigned int)xxxCalcValidRects(v4, &v55) )
    {
      LOBYTE(v16) = 1;
      v19 = HMValidateHandleNoSecure(v55, v16);
      v51[0] = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = v51;
      v51[1] = v19;
      if ( v19 )
        ++*(_DWORD *)(v19 + 8);
      v20 = *(_DWORD *)(gptiCurrent + 784LL);
      LODWORD(v55) = v20;
      v21 = (unsigned int)zzzBltValidBits(v4) != 0;
      v24 = *((_DWORD *)v4 + 6);
      v25 = v21 ? v53 : 0;
      v53 = v25;
      if ( (v24 & 1) != 0 )
      {
        v35 = *((int *)v4 + 7);
        if ( *((_DWORD *)v4 + 7) )
        {
          v36 = 168 * v35;
          do
          {
            v37 = *((_QWORD *)v4 + 5);
            v36 -= 168LL;
            --v35;
            v23 = *(_QWORD *)(v37 + v36);
            if ( v23 )
            {
              if ( (*(_DWORD *)(v37 + v36 + 32) & 0xF0000000) != 0 )
              {
                LOBYTE(v22) = 1;
                v38 = HMValidateHandleNoSecure(v23, v22);
                if ( v38 )
                {
                  v39 = *(_QWORD *)(gptiCurrent + 368LL);
                  *(_QWORD *)(gptiCurrent + 368LL) = v52;
                  v52[0] = v39;
                  v52[1] = v38;
                  ++*(_DWORD *)(v38 + 8);
                  v40 = *((_QWORD *)v4 + 5);
                  if ( (*(_DWORD *)(v40 + v36 + 32) & 0x10000000) != 0 )
                  {
                    if ( (*(_DWORD *)(v40 + v36 + 156) & 8) != 0 )
                    {
                      PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 408LL), 21LL, *(_QWORD *)(v40 + v36));
                    }
                    else
                    {
                      PostShellHookMessagesEx(1uLL, *(_QWORD *)(v40 + v36), 0LL);
                      xxxCallHook(1LL, *(_QWORD *)(*((_QWORD *)v4 + 5) + v36), 0LL, 10LL);
                    }
                  }
                  v41 = *((_QWORD *)v4 + 5);
                  if ( (*(_DWORD *)(v41 + v36 + 32) & 0x20000000) != 0 )
                  {
                    PostShellHookMessagesEx(2uLL, *(_QWORD *)(v41 + v36), 0LL);
                    xxxCallHook(2LL, *(_QWORD *)(*((_QWORD *)v4 + 5) + v36), 0LL, 10LL);
                  }
                  v42 = *((_QWORD *)v4 + 5);
                  if ( (*(_DWORD *)(v42 + v36 + 32) & 0x40000000) != 0 )
                  {
                    v47 = *(_DWORD *)(v42 + v36 + 156);
                    if ( (v47 & 8) != 0 )
                    {
                      v48 = 23LL;
                    }
                    else
                    {
                      if ( (v47 & 0x10) == 0 )
                        xxxSetTrayWindow(*(_QWORD *)(v38 + 24), v38);
                      v42 = *((_QWORD *)v4 + 5);
                      v48 = 19LL;
                    }
                    PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 408LL), v48, *(_QWORD *)(v42 + v36));
                  }
                  v43 = *(unsigned int *)(*((_QWORD *)v4 + 5) + v36 + 32);
                  if ( (int)v43 < 0 )
                    xxxSetTrayWindow(*(_QWORD *)(gptiCurrent + 408LL), 1LL);
                  ThreadUnlock1(v43, v41);
                }
              }
            }
          }
          while ( v35 );
          v20 = (int)v55;
        }
        v25 = v53;
      }
      if ( gptiCurrent == gptiForeground
        && v20
        && !*(_DWORD *)(gptiCurrent + 784LL)
        && !(unsigned int)IsImmersiveAppRestricted(*(_QWORD *)(gptiCurrent + 376LL)) )
      {
        *(_DWORD *)(gptiCurrent + 440LL) |= 0x20u;
      }
      v26 = 0;
      if ( v19 )
        v26 = xxxSwpActivate((struct tagWND *)v19);
      if ( v25 )
        xxxDoSyncPaint(v7, 4LL);
      ThreadUnlock1(v23, v22);
      if ( v26 )
      {
        v44 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 88LL);
        if ( v44 )
          SetOrClrWF(0LL, v44, 257LL, 1LL);
        v45 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 96LL);
        if ( v45 )
          SetOrClrWF(0LL, v45, 257LL, 1LL);
      }
      xxxSendChangedMsgs(v4);
    }
    if ( (*(_DWORD *)(gptiCurrent + 1072LL))-- == 1 )
    {
      GreLockVisRgn(*gpDispInfo);
      GreClientRgnUpdatedStable();
      GreUnlockVisRgn(*gpDispInfo);
    }
    v28 = 0LL;
    v29 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread(), v16, v17, v18);
    if ( v29 )
      v28 = *v29;
    *(_QWORD *)(v28 + 16) = v49[0];
    ThreadUnlock1(v31, v30);
    if ( v54 )
    {
      UnrefAndDestroySMWP(v4);
      return 1LL;
    }
LABEL_37:
    DestroySMWP(v4, a2, a3);
    return 1LL;
  }
  result = (__int64)ZOrderByOwner(v4);
  v4 = (struct tagSMWP *)result;
  if ( result )
  {
    if ( v3 )
    {
      v33 = *(struct tagCVR **)(result + 40);
      v34 = *(_DWORD *)(result + 28);
      while ( --v34 >= 0 )
      {
        if ( *(_QWORD *)v33 && !(unsigned int)ValidateWindowPos(v33, 0LL) )
          *(_QWORD *)v33 = 0LL;
        v33 = (struct tagCVR *)((char *)v33 + 168);
      }
      AsyncWindowPos(v4);
    }
    goto LABEL_17;
  }
  return result;
}
