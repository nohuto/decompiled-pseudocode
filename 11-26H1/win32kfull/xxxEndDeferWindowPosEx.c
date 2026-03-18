/*
 * XREFs of xxxEndDeferWindowPosEx @ 0x14002B508
 * Callers:
 *     NtUserEndDeferWindowPosEx @ 0x14002A1D0 (NtUserEndDeferWindowPosEx.c)
 *     xxxSetWindowPosAndBand @ 0x140049010 (xxxSetWindowPosAndBand.c)
 *     ?xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z @ 0x140164D34 (-xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z.c)
 *     ?xxxMoveSizeSetWindowPosOld@@YAXPEAUMOVESIZEDATA@@UtagRECT@@@Z @ 0x140178774 (-xxxMoveSizeSetWindowPosOld@@YAXPEAUMOVESIZEDATA@@UtagRECT@@@Z.c)
 *     ?xxxSetWindowBand@@YAHPEAUtagWND@@0W4ZBID@@W4WindowBandOptions@@@Z @ 0x1401790C4 (-xxxSetWindowBand@@YAHPEAUtagWND@@0W4ZBID@@W4WindowBandOptions@@@Z.c)
 *     xxxProcessSetWindowPosEvent @ 0x1401791D4 (xxxProcessSetWindowPosEvent.c)
 *     xxxSetWindowRgn @ 0x140179368 (xxxSetWindowRgn.c)
 *     ?xxxUpdatePosAndStateForAction@AdvancedWindowPos@@YAXPEAUtagWND@@W4State@1@1IW4MinMaxOptions@@_NPEAUtagRECT@@3AEBU5@PEAUWindowAction@1@@Z @ 0x1402ED554 (-xxxUpdatePosAndStateForAction@AdvancedWindowPos@@YAXPEAUtagWND@@W4State@1@1IW4MinMaxOptions@@_N.c)
 *     xxxArrangeIconicWindows @ 0x1402FAF24 (xxxArrangeIconicWindows.c)
 * Callees:
 *     ??1?$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ @ 0x14000A21C (--1-$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ.c)
 *     PostShellHookMessagesEx @ 0x1400101EC (PostShellHookMessagesEx.c)
 *     ?PostIAMShellHookMessage@@YAXI_J@Z @ 0x140010D00 (-PostIAMShellHookMessage@@YAXI_J@Z.c)
 *     GreClientRgnUpdatedStable @ 0x140013468 (GreClientRgnUpdatedStable.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x140013998 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x14001996C (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14002AEA0 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ??$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140032860 (--$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140039F3C (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x14003A510 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     ??0CDwmSwpNotifyBatch@@QEAA@PEAUtagSMWP@@@Z @ 0x140046A10 (--0CDwmSwpNotifyBatch@@QEAA@PEAUtagSMWP@@@Z.c)
 *     xxxDoSyncPaint @ 0x140046CFC (xxxDoSyncPaint.c)
 *     _GetDesktopWindow @ 0x140048600 (_GetDesktopWindow.c)
 *     ?ZOrderByOwner@@YAPEAUtagSMWP@@PEAU1@@Z @ 0x1400487E4 (-ZOrderByOwner@@YAPEAUtagSMWP@@PEAU1@@Z.c)
 *     ?ValidateSmwp@@YAHPEAUtagSMWP@@PEAH@Z @ 0x14004A634 (-ValidateSmwp@@YAHPEAUtagSMWP@@PEAH@Z.c)
 *     ?ValidateWindowPos@@YAHPEAUtagCVR@@PEAUtagWND@@@Z @ 0x14004A948 (-ValidateWindowPos@@YAHPEAUtagCVR@@PEAUtagWND@@@Z.c)
 *     HMValidateHandleNoSecure @ 0x14004C2D0 (HMValidateHandleNoSecure.c)
 *     SetOrClrWF @ 0x14004EE90 (SetOrClrWF.c)
 *     SetWindowGroupBand @ 0x14017A7AC (SetWindowGroupBand.c)
 *     ??$ManualLock@X@?$Win32HMThreadLockBase@UtagWND@@$0A@$00@@QEAAXPEAUtagWND@@@Z @ 0x1401B7DA0 (--$ManualLock@X@-$Win32HMThreadLockBase@UtagWND@@$0A@$00@@QEAAXPEAUtagWND@@@Z.c)
 *     ?UnrefAndDestroySMWP@@YAXPEAUtagSMWP@@@Z @ 0x1401B8450 (-UnrefAndDestroySMWP@@YAXPEAUtagSMWP@@@Z.c)
 *     DestroySMWP @ 0x1401B8480 (DestroySMWP.c)
 *     ?FindValidWindowPos@@YAPEAUtagWINDOWPOS@@PEAUtagSMWP@@@Z @ 0x1401C2BA8 (-FindValidWindowPos@@YAPEAUtagWINDOWPOS@@PEAUtagSMWP@@@Z.c)
 *     ??1CDwmNotifyBatch@@IEAA@XZ @ 0x1401DEB84 (--1CDwmNotifyBatch@@IEAA@XZ.c)
 *     ?AsyncWindowPos@@YAXPEAUtagSMWP@@@Z @ 0x1401EF7CC (-AsyncWindowPos@@YAXPEAUtagSMWP@@@Z.c)
 *     ?xxxSwpActivate@@YAHPEAUtagWND@@W4SwpActivateOptions@@@Z @ 0x1401F8550 (-xxxSwpActivate@@YAHPEAUtagWND@@W4SwpActivateOptions@@@Z.c)
 *     ?xxxSetTrayWindow@@YAXPEAUtagDESKTOP@@PEAUtagWND@@@Z @ 0x1401FDB80 (-xxxSetTrayWindow@@YAXPEAUtagDESKTOP@@PEAUtagWND@@@Z.c)
 *     ?xxxInterceptSetWindowPos@WindowActions@@YAXPEAUtagSMWP@@@Z @ 0x140239A38 (-xxxInterceptSetWindowPos@WindowActions@@YAXPEAUtagSMWP@@@Z.c)
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x140260B0C (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@@Z @ 0x14026F8C8 (-xxxCalcValidRects@@YAHPEAUtagSMWP@@@Z.c)
 */

__int64 __fastcall xxxEndDeferWindowPosEx(struct tagSMWP *a1, int a2)
{
  int v4; // r12d
  struct tagTHREADINFO *v5; // rsi
  struct tagWINDOWPOS *ValidWindowPos; // rax
  struct tagWND *v7; // r13
  struct tagSMWP *v8; // rdx
  int v9; // r14d
  __int64 v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rcx
  struct tagWND *v15; // rax
  struct tagSMWP *v16; // rax
  struct tagCVR *v18; // rdi
  int v19; // r14d
  struct tagTHREADINFO *BugCheckParameter4; // rax
  struct tagTHREADINFO *v21; // rax
  void (__fastcall *v22)(struct tagSMWP *); // rax
  struct tagTHREADINFO *v23; // rax
  struct tagTHREADINFO *v24; // rax
  __int64 v25; // rdx
  __int64 v26; // r14
  int v27; // r15d
  __int64 v28; // rdi
  __int64 v29; // rdx
  __int64 v30; // r12
  int v31; // edi
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rdx
  char valid; // al
  __int64 v36; // rdx
  int v37; // r15d
  __int64 v38; // r14
  __int64 v39; // rdi
  __int64 v40; // rax
  __int64 v41; // rcx
  __int64 v42; // rax
  struct tagDESKTOP **v43; // r15
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rdx
  __int64 v47; // rdx
  int v48; // eax
  unsigned int v49; // ecx
  int v50; // edi
  __int64 v51; // rdx
  __int64 v52; // rdx
  __int64 v53; // rdx
  Gre::Base *v55; // rcx
  ULONG_PTR BugCheckParameter2[2]; // [rsp+30h] [rbp-69h] BYREF
  __int64 v57; // [rsp+40h] [rbp-59h]
  __int64 v58; // [rsp+48h] [rbp-51h]
  ULONG_PTR BugCheckParameter3[2]; // [rsp+50h] [rbp-49h] BYREF
  struct tagTHREADINFO *v60; // [rsp+60h] [rbp-39h]
  ULONG_PTR v61[3]; // [rsp+68h] [rbp-31h] BYREF
  ULONG_PTR v62[2]; // [rsp+80h] [rbp-19h] BYREF
  _BYTE v63[96]; // [rsp+90h] [rbp-9h] BYREF
  int v64; // [rsp+100h] [rbp+67h]
  int v65; // [rsp+110h] [rbp+77h] BYREF
  int v66; // [rsp+118h] [rbp+7Fh]

  v65 = 0;
  v4 = 0;
  v5 = PtiCurrent();
  v64 = 0;
  if ( !*((_DWORD *)a1 + 7) )
    goto LABEL_94;
  if ( !(unsigned int)ValidateSmwp(a1, &v65) )
    goto LABEL_94;
  v57 = -1LL;
  v61[2] = 0LL;
  *(_OWORD *)BugCheckParameter2 = 0LL;
  ValidWindowPos = FindValidWindowPos(a1);
  if ( !ValidWindowPos )
    goto LABEL_94;
  v7 = *(struct tagWND **)(_HMObjectFromHandle(*(_QWORD *)ValidWindowPos) + 104);
  if ( !v7 || !*((_QWORD *)v7 + 3) )
    goto LABEL_94;
  BugCheckParameter3[1] = 0LL;
  BugCheckParameter3[0] = -1LL;
  Win32HMThreadLockBase<tagWND,0,1>::ManualLock<void>(BugCheckParameter3, v7);
  v9 = 0;
  if ( *((int *)a1 + 7) > 0 )
  {
    v10 = 0LL;
    do
    {
      v11 = *((_QWORD *)a1 + 5);
      v12 = *(_QWORD *)(v10 + v11);
      if ( v12 && *(_DWORD *)(v10 + v11 + 152) )
      {
        v13 = _HMObjectFromHandle(v12);
        v14 = *((_QWORD *)a1 + 5);
        if ( *(_DWORD *)(*(_QWORD *)(v13 + 40) + 236LL) != *(_DWORD *)(v10 + v14 + 152) )
        {
          v15 = (struct tagWND *)_HMObjectFromHandle(*(_QWORD *)(v10 + v14));
          SetWindowGroupBand(v15);
        }
        *(_DWORD *)(v10 + *((_QWORD *)a1 + 5) + 152) = 0;
      }
      ++v9;
      v10 += 168LL;
    }
    while ( v9 < *((_DWORD *)a1 + 7) );
    v4 = 0;
  }
  if ( a2 )
    AsyncWindowPos(a1);
  WindowActions::xxxInterceptSetWindowPos(a1, v8);
  if ( v7 != (struct tagWND *)GetDesktopWindow(v7) )
  {
LABEL_30:
    if ( (*((_DWORD *)a1 + 6) & 2) != 0 )
    {
      HMLockObject(a1);
      if ( v57 != -1 )
      {
        BugCheckParameter4 = PtiCurrent();
        KeBugCheckEx(0x164u, 0x12uLL, (ULONG_PTR)BugCheckParameter2, (ULONG_PTR)a1, (ULONG_PTR)BugCheckParameter4);
      }
      v21 = PtiCurrent();
      v4 = 1;
      v64 = 1;
      BugCheckParameter2[0] = *((_QWORD *)v21 + 47);
      *((_QWORD *)v21 + 47) = BugCheckParameter2;
      v22 = UnrefAndDestroySMWP;
    }
    else
    {
      if ( v57 != -1 )
      {
        v23 = PtiCurrent();
        KeBugCheckEx(0x164u, 0x12uLL, (ULONG_PTR)BugCheckParameter2, (ULONG_PTR)a1, (ULONG_PTR)v23);
      }
      v24 = PtiCurrent();
      BugCheckParameter2[0] = *((_QWORD *)v24 + 47);
      *((_QWORD *)v24 + 47) = BugCheckParameter2;
      v22 = (void (__fastcall *)(struct tagSMWP *))DestroySMWP;
    }
    ++*((_DWORD *)v5 + 334);
    v57 = (__int64)v22;
    BugCheckParameter2[1] = (ULONG_PTR)a1;
    *((_DWORD *)a1 + 6) |= 4u;
    CDwmSwpNotifyBatch::CDwmSwpNotifyBatch((CDwmSwpNotifyBatch *)v63, a1);
    v26 = 0LL;
    v27 = 0;
    v58 = 0LL;
    if ( *((int *)a1 + 7) > 0 )
    {
      while ( 1 )
      {
        LOBYTE(v25) = 1;
        v28 = v26 + *((_QWORD *)a1 + 5);
        if ( HMValidateHandleNoSecure(*(_QWORD *)v28, v25) )
        {
          if ( (*(_DWORD *)(v28 + 32) & 0x10) == 0 )
            break;
        }
        ++v27;
        v26 += 168LL;
        if ( v27 >= *((_DWORD *)a1 + 7) )
        {
          v26 = v58;
          goto LABEL_42;
        }
      }
      v26 = v28;
      v58 = v28;
    }
LABEL_42:
    if ( (unsigned int)xxxCalcValidRects(a1) )
    {
      v30 = 0LL;
      if ( v26 )
      {
        LOBYTE(v29) = 1;
        v30 = HMValidateHandleNoSecure(*(_QWORD *)v26, v29);
      }
      Win32HM_LockIntoThread<1>(v5, v30, v61);
      v31 = *((_DWORD *)v5 + 234);
      v66 = v31;
      v60 = *(struct tagTHREADINFO **)(W32GetUserSessionState(v33, v32) + 18944);
      valid = zzzBltValidBits((__int64)a1, v34);
      v37 = (valid & 1) != 0 ? v65 : 0;
      v65 = v37;
      if ( (valid & 2) != 0 )
        GenerateMouseMove(0LL);
      if ( (*((_DWORD *)a1 + 6) & 1) != 0 )
      {
        v38 = *((int *)a1 + 7);
        if ( *((_DWORD *)a1 + 7) )
        {
          v39 = 168 * v38;
          do
          {
            v40 = *((_QWORD *)a1 + 5);
            v39 -= 168LL;
            --v38;
            v41 = *(_QWORD *)(v39 + v40);
            if ( v41 )
            {
              if ( (*(_DWORD *)(v39 + v40 + 32) & 0x70000000) != 0 )
              {
                LOBYTE(v36) = 1;
                v42 = HMValidateHandleNoSecure(v41, v36);
                v43 = (struct tagDESKTOP **)v42;
                if ( v42 )
                {
                  Win32HM_LockIntoThread<0>((__int64)v5, v42, v62);
                  v44 = *((_QWORD *)a1 + 5);
                  if ( (*(_DWORD *)(v39 + v44 + 32) & 0x10000000) != 0 )
                  {
                    v45 = *(_QWORD *)(v39 + v44);
                    if ( (*(_DWORD *)(v39 + v44 + 156) & 8) != 0 )
                    {
                      PostIAMShellHookMessage(0x15u, v45);
                    }
                    else
                    {
                      PostShellHookMessagesEx((LastWokenThread *)1, v45);
                      xxxCallHook(1, *(_QWORD *)(v39 + *((_QWORD *)a1 + 5)), 0LL, 10);
                    }
                  }
                  v46 = *((_QWORD *)a1 + 5);
                  if ( (*(_DWORD *)(v39 + v46 + 32) & 0x20000000) != 0 )
                  {
                    PostShellHookMessagesEx((LastWokenThread *)2, *(_QWORD *)(v39 + v46));
                    xxxCallHook(2, *(_QWORD *)(v39 + *((_QWORD *)a1 + 5)), 0LL, 10);
                  }
                  v47 = *((_QWORD *)a1 + 5);
                  if ( (*(_DWORD *)(v39 + v47 + 32) & 0x40000000) != 0 )
                  {
                    v48 = *(_DWORD *)(v39 + v47 + 156);
                    if ( (v48 & 8) != 0 )
                    {
                      v49 = 23;
                    }
                    else
                    {
                      if ( (v48 & 0x10) == 0 )
                        xxxSetTrayWindow(v43[3], (struct tagWND *)v43);
                      v47 = *((_QWORD *)a1 + 5);
                      v49 = 19;
                    }
                    PostIAMShellHookMessage(v49, *(_QWORD *)(v39 + v47));
                  }
                  Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(v62);
                }
              }
            }
          }
          while ( v38 );
          v37 = v65;
          v31 = v66;
        }
        v26 = v58;
      }
      if ( v5 == v60 && v31 && !*((_DWORD *)v5 + 234) && !(unsigned int)IsImmersiveAppRestricted(*((_QWORD *)v5 + 57)) )
        tagTHREADINFO::SetForegroundActivate(v5, 16LL);
      v50 = 0;
      if ( v30 )
      {
        v51 = *(_BYTE *)(v26 + 35) & 1 | 2u;
        if ( (*(_DWORD *)(v26 + 156) & 0x400) == 0 )
          v51 = *(_BYTE *)(v26 + 35) & 1;
        v50 = xxxSwpActivate(v30, v51);
      }
      if ( v37 )
        xxxDoSyncPaint(v7, 4u);
      Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)v61);
      if ( v50 )
      {
        v52 = *(_QWORD *)(*((_QWORD *)v5 + 58) + 128LL);
        if ( v52 )
          SetOrClrWF(0LL, v52, 257LL, 1LL);
        v53 = *(_QWORD *)(*((_QWORD *)v5 + 58) + 136LL);
        if ( v53 )
          SetOrClrWF(0LL, v53, 257LL, 1LL);
      }
      xxxSendChangedMsgs(a1);
      v4 = v64;
    }
    CDwmNotifyBatch::~CDwmNotifyBatch((CDwmNotifyBatch *)v63);
    if ( (*((_DWORD *)v5 + 334))-- == 1 )
    {
      GreLockVisRgn();
      GreClientRgnUpdatedStable(v55);
      GreUnlockVisRgn();
    }
    Win32HMOptionalThreadLockAlways<tagMENU>::~Win32HMOptionalThreadLockAlways<tagMENU>(BugCheckParameter3);
    if ( v57 != -1 )
    {
      *((_QWORD *)PtiCurrent() + 47) = BugCheckParameter2[0];
      v57 = -1LL;
    }
    if ( v4 )
    {
      UnrefAndDestroySMWP(a1);
      return 1LL;
    }
LABEL_94:
    DestroySMWP(a1);
    return 1LL;
  }
  v16 = ZOrderByOwner(a1);
  a1 = v16;
  if ( v16 )
  {
    if ( a2 )
    {
      v18 = (struct tagCVR *)*((_QWORD *)v16 + 5);
      v19 = *((_DWORD *)v16 + 7);
      while ( --v19 >= 0 )
      {
        if ( *(_QWORD *)v18 && !(unsigned int)ValidateWindowPos(v18, 0LL) )
          *(_QWORD *)v18 = 0LL;
        v18 = (struct tagCVR *)((char *)v18 + 168);
      }
      AsyncWindowPos(a1);
    }
    goto LABEL_30;
  }
  Win32HMOptionalThreadLockAlways<tagMENU>::~Win32HMOptionalThreadLockAlways<tagMENU>(BugCheckParameter3);
  if ( v57 != -1 )
    *((_QWORD *)PtiCurrent() + 47) = BugCheckParameter2[0];
  return 0LL;
}
