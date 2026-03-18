/*
 * XREFs of xxxHelpLoop @ 0x1402FAAB4
 * Callers:
 *     xxxSysCommand @ 0x1402D135C (xxxSysCommand.c)
 * Callees:
 *     ??0?$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z @ 0x14000E1F8 (--0-$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z.c)
 *     xxxRedrawTitle @ 0x14001111C (xxxRedrawTitle.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x140013998 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14002AEA0 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     xxxDispatchMessage @ 0x140035320 (xxxDispatchMessage.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1400368B8 (-zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140039F3C (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     xxxWindowEvent @ 0x140043360 (xxxWindowEvent.c)
 *     SetOrClrWF @ 0x14004EE90 (SetOrClrWF.c)
 *     xxxInternalGetMessage @ 0x140057C40 (xxxInternalGetMessage.c)
 *     xxxTranslateMessage @ 0x14005BDE8 (xxxTranslateMessage.c)
 *     xxxWaitMessageEx @ 0x14005C04C (xxxWaitMessageEx.c)
 *     ?xxxWindowHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAHW4WindowHitTestOption@@@Z @ 0x14008A10C (-xxxWindowHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAHW4WindowHitTestOption@@@Z.c)
 *     PtInRect @ 0x14008C1B0 (PtInRect.c)
 *     GetWindowBorders @ 0x140123A0C (GetWindowBorders.c)
 *     xxxReleaseCapture @ 0x14014AA5C (xxxReleaseCapture.c)
 *     ?xxxCapture@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@I@Z @ 0x14014ABAC (-xxxCapture@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@I@Z.c)
 *     _GetParent @ 0x1401B529C (_GetParent.c)
 *     xxxSendHelpMessage @ 0x1401C7838 (xxxSendHelpMessage.c)
 *     xxxInternalEnumWindow @ 0x1401F90C4 (xxxInternalEnumWindow.c)
 *     GetContextHelpId @ 0x140260160 (GetContextHelpId.c)
 *     ?IsHelpParent@@YAHPEAUtagWND@@@Z @ 0x14030338C (-IsHelpParent@@YAHPEAUtagWND@@@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

void __fastcall xxxHelpLoop(struct tagWND *a1)
{
  struct tagTHREADINFO *v2; // r14
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 UserSessionState; // rax
  int WindowBorders; // eax
  _DWORD *v7; // r8
  int v8; // ecx
  int v9; // edx
  __int64 v10; // rcx
  int v11; // edx
  __int64 v12; // rdx
  __int64 v13; // rcx
  struct tagCURSOR **v14; // rax
  __int64 v15; // rax
  struct tagWND *v16; // rsi
  struct tagWND *v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rdi
  char v23; // cl
  int v24; // edi
  struct tagTHREADINFO **Parent; // rsi
  unsigned int ContextHelpId; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rax
  unsigned __int64 v30; // [rsp+28h] [rbp-49h]
  ULONG_PTR v31; // [rsp+38h] [rbp-39h] BYREF
  int v32; // [rsp+40h] [rbp-31h]
  int v33; // [rsp+44h] [rbp-2Dh]
  __int128 v34; // [rsp+48h] [rbp-29h] BYREF
  __int128 v35; // [rsp+58h] [rbp-19h]
  __int128 v36; // [rsp+68h] [rbp-9h]
  __int128 v37; // [rsp+78h] [rbp+7h] BYREF
  __int64 v38; // [rsp+88h] [rbp+17h]
  ULONG_PTR BugCheckParameter3[2]; // [rsp+90h] [rbp+1Fh] BYREF
  ULONG_PTR v40[2]; // [rsp+A0h] [rbp+2Fh] BYREF

  v34 = 0LL;
  v35 = 0LL;
  v36 = 0LL;
  v2 = PtiCurrent((__int64)a1);
  v38 = 0LL;
  v37 = 0LL;
  xxxWindowEvent(0xCu, a1, 0, 0, 0);
  UserSessionState = W32GetUserSessionState(v4, v3);
  zzzSetCursor(*(struct tagCURSOR **)(UserSessionState + 28536));
  xxxCapture(v2, a1, 4);
  WindowBorders = GetWindowBorders(*(_DWORD *)(*((_QWORD *)a1 + 5) + 28LL), *(_DWORD *)(*((_QWORD *)a1 + 5) + 24LL));
  v7 = (_DWORD *)*((_QWORD *)a1 + 5);
  v8 = v7[24] - WindowBorders;
  LODWORD(v31) = WindowBorders + v7[22];
  v9 = v7[23];
  v32 = v8;
  v10 = (unsigned int)(v7[25] - WindowBorders);
  HIDWORD(v31) = WindowBorders + v9;
  v33 = v10;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( *(struct tagWND **)(*((_QWORD *)v2 + 58) + 112LL) != a1 )
        goto LABEL_35;
      LODWORD(v30) = 2;
      if ( (unsigned int)xxxInternalGetMessage((__int64)&v34, 0, 0, 0, v30, 0) )
        break;
      xxxWaitMessageEx(15615LL, 0, 0);
    }
    if ( DWORD2(v34) == 161 )
      goto LABEL_35;
    if ( DWORD2(v34) == 513 )
    {
      if ( !PtInRect(&v31, *(unsigned __int64 *)((char *)&v36 + 4)) )
        goto LABEL_35;
      v15 = xxxWindowHitTest((__int64)a1, *(__int64 *)((char *)&v36 + 4), 0LL, 0);
      v16 = (struct tagWND *)ValidateHwnd(v15);
      Win32HMThreadLockBase<tagMENU,1,0>::Win32HMThreadLockBase<tagMENU,1,0>(&v31, (__int64)v16);
      if ( (unsigned int)IsHelpParent(v16) )
      {
        v38 = *(_QWORD *)((char *)&v36 + 4);
        v37 = (unsigned __int64)v16;
        xxxInternalEnumWindow(v16, (__int64 (__fastcall *)(__int64, __int64))EnumPwndDlgChildProc, (__int64)&v37, 1u);
        v16 = (struct tagWND *)*((_QWORD *)&v37 + 1);
      }
      v17 = 0LL;
      if ( v16 != a1 )
        v17 = v16;
      if ( !v17 && (!*(_DWORD *)(*((_QWORD *)a1 + 5) + 280LL) || (v17 = a1) == 0LL) )
      {
        Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((__int64 *)&v31);
        goto LABEL_35;
      }
      Win32HM_LockIntoThread<0>((__int64)v2, (__int64)v17, BugCheckParameter3);
      v20 = W32GetUserSessionState(v19, v18);
      zzzSetCursor(*(struct tagCURSOR **)(v20 + 21912));
      xxxReleaseCapture(v21);
      xxxRedrawTitle(a1, 4096LL);
      SetOrClrWF(0, a1, 0x580u, 1);
      LODWORD(v30) = 1;
      xxxInternalGetMessage((__int64)&v34, 0, 0, 0, v30, 1);
      xxxWindowEvent(0x800Au, a1, -2, 4, 0);
      xxxWindowEvent(0xDu, a1, 0, 0, 0);
      v22 = *((_QWORD *)v17 + 5);
      v23 = *(_BYTE *)(v22 + 31);
      if ( (v23 & 0xC0) != 0x40 || (v24 = *(_DWORD *)(v22 + 320), v24 == 0xFFFF) )
        v24 = -1;
      if ( (v23 & 8) != 0 )
      {
        Parent = (struct tagTHREADINFO **)GetParent(v17);
        if ( !Parent )
        {
LABEL_31:
          Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(BugCheckParameter3);
          Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((__int64 *)&v31);
          return;
        }
      }
      else
      {
        Parent = (struct tagTHREADINFO **)v17;
      }
      Win32HM_LockIntoThread<0>((__int64)v2, (__int64)Parent, v40);
      ContextHelpId = GetContextHelpId((__int64)v17);
      xxxSendHelpMessage(Parent, 1, v24, *(_QWORD *)v17, ContextHelpId);
      Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(v40);
      goto LABEL_31;
    }
    v10 = (unsigned int)(DWORD2(v34) - 516);
    if ( (unsigned int)v10 <= 7 )
    {
      v11 = 137;
      if ( _bittest(&v11, v10) )
        goto LABEL_35;
    }
    if ( DWORD2(v34) != 512 )
      break;
    if ( PtInRect(&v31, *(unsigned __int64 *)((char *)&v36 + 4)) )
      v14 = (struct tagCURSOR **)(W32GetUserSessionState(v13, v12) + 28536);
    else
      v14 = (struct tagCURSOR **)(W32GetUserSessionState(v13, v12) + 21912);
    zzzSetCursor(*v14);
LABEL_16:
    LODWORD(v30) = 1;
    xxxInternalGetMessage((__int64)&v34, 0, 0, 0, v30, 1);
    xxxTranslateMessage((__int64)&v34, 0);
    xxxDispatchMessage((struct tagMSG *)&v34);
  }
  if ( DWORD2(v34) != 256 || (_QWORD)v35 != 27LL )
    goto LABEL_16;
  LODWORD(v30) = 1;
  xxxInternalGetMessage((__int64)&v34, 0, 0, 0, v30, 1);
LABEL_35:
  xxxReleaseCapture(v10);
  v29 = W32GetUserSessionState(v28, v27);
  zzzSetCursor(*(struct tagCURSOR **)(v29 + 21912));
  xxxRedrawTitle(a1, 4096LL);
  SetOrClrWF(0, a1, 0x580u, 1);
  xxxWindowEvent(0x800Au, a1, -2, 4, 0);
  xxxWindowEvent(0xDu, a1, 0, 0, 0);
}
