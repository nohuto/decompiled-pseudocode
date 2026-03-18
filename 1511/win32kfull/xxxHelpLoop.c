/*
 * XREFs of xxxHelpLoop @ 0x1C023D09C
 * Callers:
 *     xxxSysCommand @ 0x1C0109460 (xxxSysCommand.c)
 * Callees:
 *     _GetProp @ 0x1C00540EC (_GetProp.c)
 *     xxxDispatchMessage @ 0x1C0054E2C (xxxDispatchMessage.c)
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     xxxWindowEvent @ 0x1C00608D0 (xxxWindowEvent.c)
 *     PtInRect @ 0x1C0066AB8 (PtInRect.c)
 *     zzzSetCursor @ 0x1C0070694 (zzzSetCursor.c)
 *     IsDPIDWMSysMet @ 0x1C0072254 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C007227C (IsDPIAbsoluteSysMet.c)
 *     SetOrClrWF @ 0x1C0080070 (SetOrClrWF.c)
 *     xxxRedrawTitle @ 0x1C0081B30 (xxxRedrawTitle.c)
 *     xxxCapture @ 0x1C008E5F8 (xxxCapture.c)
 *     xxxInternalEnumWindow @ 0x1C0090834 (xxxInternalEnumWindow.c)
 *     xxxReleaseCapture @ 0x1C0091ED0 (xxxReleaseCapture.c)
 *     xxxWindowHitTest @ 0x1C0096200 (xxxWindowHitTest.c)
 *     xxxTranslateMessage @ 0x1C0099414 (xxxTranslateMessage.c)
 *     GetWindowBorders @ 0x1C00CBEDC (GetWindowBorders.c)
 *     xxxWaitMessageEx @ 0x1C00CFAA4 (xxxWaitMessageEx.c)
 *     xxxInternalGetMessage @ 0x1C00D0420 (xxxInternalGetMessage.c)
 *     _GetParent @ 0x1C00D9E20 (_GetParent.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     memset @ 0x1C0152CC0 (memset.c)
 *     xxxSendHelpMessage @ 0x1C023D7CC (xxxSendHelpMessage.c)
 *     GetContextHelpId @ 0x1C024CF04 (GetContextHelpId.c)
 *     IsHelpParent @ 0x1C024CF6C (IsHelpParent.c)
 */

__int64 __fastcall xxxHelpLoop(__int64 a1)
{
  int WindowBorders; // r14d
  unsigned __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  int v6; // ecx
  __int64 v7; // rcx
  __int64 v8; // rcx
  _DWORD *v10; // rbx
  unsigned __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  int v14; // ecx
  __int64 v15; // rcx
  __int64 v16; // rcx
  int v17; // ecx
  _DWORD *v18; // rcx
  int v19; // ecx
  int v20; // eax
  int v21; // edx
  int v22; // ecx
  int v23; // eax
  int v24; // ecx
  __int64 v25; // rcx
  __int64 v27; // rax
  __int64 v28; // rbx
  __int64 *v29; // r10
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rcx
  int v33; // edi
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 Parent; // rsi
  __int64 v37; // rdx
  __int64 v38; // rcx
  int ContextHelpId; // eax
  __int64 v40; // rdx
  __int64 v41; // rcx
  _DWORD v42[4]; // [rsp+38h] [rbp-79h] BYREF
  _OWORD v43[3]; // [rsp+48h] [rbp-69h] BYREF
  __int64 v44; // [rsp+78h] [rbp-39h] BYREF
  __int64 v45; // [rsp+80h] [rbp-31h]
  __int64 v46; // [rsp+88h] [rbp-29h]
  _QWORD v47[3]; // [rsp+90h] [rbp-21h] BYREF
  _QWORD v48[3]; // [rsp+A8h] [rbp-9h] BYREF
  _QWORD v49[3]; // [rsp+C0h] [rbp+Fh] BYREF

  memset(v43, 0, sizeof(v43));
  xxxWindowEvent(0xCu, (__int64 *)a1, 0, 0, 0);
  zzzSetCursor(*(_QWORD *)&gasyscur[100]);
  xxxCapture(gptiCurrent, (__int64 *)a1, 4);
  WindowBorders = GetWindowBorders(*(_DWORD *)(a1 + 52), *(_DWORD *)(a1 + 48));
  if ( (unsigned int)IsDPIAbsoluteSysMet(6uLL) )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v3) + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v4) + 776) & 0x4000) != 0 )
    {
      goto LABEL_4;
    }
LABEL_15:
    v10 = (_DWORD *)(gpsi + 2292LL);
    goto LABEL_20;
  }
  if ( IsDPIDWMSysMet(v3)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v7) + 776) & 0x2000) == 0
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v8) + 776) & 0x4000) == 0
    && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
    && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL) + 244LL) & 1 )
  {
    goto LABEL_15;
  }
LABEL_4:
  if ( IsDPIDWMSysMet(6uLL)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v5) + 776) & 0x2000) != 0
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
      ? (v6 = 0)
      : (v6 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                        + 244LL) & 1),
        v6) )
  {
    v10 = (_DWORD *)(gpsi + 2680LL);
  }
  else
  {
    v10 = (_DWORD *)(gpsi + 1904LL);
  }
LABEL_20:
  if ( (unsigned int)IsDPIAbsoluteSysMet(5uLL) )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v11) + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v12) + 776) & 0x4000) != 0 )
    {
      goto LABEL_23;
    }
  }
  else if ( !IsDPIDWMSysMet(v11)
         || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v15) + 776) & 0x2000) != 0
         || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v16) + 776) & 0x4000) != 0
         || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
           ? (v17 = 0)
           : (v17 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                          + 8LL)
                              + 244LL) & 1),
             !v17) )
  {
LABEL_23:
    if ( IsDPIDWMSysMet(5uLL)
      && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v13) + 776) & 0x2000) != 0
      && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
        ? (v14 = 0)
        : (v14 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                           + 244LL) & 1),
          v14) )
    {
      v18 = (_DWORD *)(gpsi + 2676LL);
    }
    else
    {
      v18 = (_DWORD *)(gpsi + 1900LL);
    }
    goto LABEL_39;
  }
  v18 = (_DWORD *)(gpsi + 2288LL);
LABEL_39:
  v19 = -(WindowBorders * *v18);
  v20 = *(_DWORD *)(a1 + 112) - v19;
  v21 = -(WindowBorders * *v10);
  v22 = *(_DWORD *)(a1 + 120) + v19;
  v42[0] = v20;
  v23 = *(_DWORD *)(a1 + 116);
  v42[2] = v22;
  v24 = *(_DWORD *)(a1 + 124);
  v42[1] = v23 - v21;
  v42[3] = v21 + v24;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( *(_QWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 64LL) != a1 )
        goto LABEL_56;
      if ( (unsigned int)xxxInternalGetMessage(v43, 0LL, 0, 0, 2u, 0) )
        break;
      xxxWaitMessageEx(0x3CFFu, 0, 0LL);
    }
    if ( DWORD2(v43[0]) == 161 )
      goto LABEL_56;
    if ( DWORD2(v43[0]) == 513 )
      break;
    if ( DWORD2(v43[0]) == 516 || DWORD2(v43[0]) == 519 || DWORD2(v43[0]) == 523 )
      goto LABEL_56;
    if ( DWORD2(v43[0]) == 512 )
    {
      if ( PtInRect(v42, *(unsigned __int64 *)((char *)&v43[2] + 4)) )
        v25 = *(_QWORD *)&gasyscur[100];
      else
        v25 = *(_QWORD *)&gasyscur[4];
      zzzSetCursor(v25);
    }
    else if ( DWORD2(v43[0]) == 256 && *(_QWORD *)&v43[1] == 27LL )
    {
      xxxInternalGetMessage(v43, 0LL, 0, 0, 1u, 1u);
LABEL_56:
      xxxReleaseCapture();
      zzzSetCursor(*(_QWORD *)&gasyscur[4]);
      xxxRedrawTitle((struct tagWND *)a1, 0x1000u);
      SetOrClrWF(0, (_DWORD *)a1, 0x580u, 1);
      xxxWindowEvent(0x800Au, (__int64 *)a1, -2, 4, 0);
      return xxxWindowEvent(0xDu, (__int64 *)a1, 0, 0, 0);
    }
    xxxInternalGetMessage(v43, 0LL, 0, 0, 1u, 1u);
    xxxTranslateMessage((__int64)v43, 0);
    xxxDispatchMessage(v43);
  }
  if ( !PtInRect(v42, *(unsigned __int64 *)((char *)&v43[2] + 4)) )
    goto LABEL_56;
  v27 = xxxWindowHitTest((struct tagWND *)a1);
  v28 = ValidateHwnd(v27);
  v47[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v47;
  v47[1] = v28;
  if ( v28 )
    ++*(_DWORD *)(v28 + 8);
  if ( (unsigned int)IsHelpParent(v28) )
  {
    v46 = *(_QWORD *)((char *)&v43[2] + 4);
    v44 = v28;
    v45 = 0LL;
    xxxInternalEnumWindow(v28, (__int64 (__fastcall *)(__int64, __int64))EnumPwndDlgChildProc, (__int64)&v44, 1);
    v29 = (__int64 *)gptiCurrent;
    v28 = v45;
  }
  if ( v28 == a1 )
    v28 = 0LL;
  if ( !v28 )
  {
    if ( !GetProp(a1, *(unsigned __int16 *)(gpsi + 1360LL), 1LL) )
    {
      ThreadUnlock1(v31, v30);
      goto LABEL_56;
    }
    v28 = a1;
  }
  v32 = *v29;
  v49[0] = *(_QWORD *)(*v29 + 368);
  *(_QWORD *)(v32 + 368) = v49;
  ++*(_DWORD *)(v28 + 8);
  v49[1] = v28;
  zzzSetCursor(*(_QWORD *)&gasyscur[4]);
  xxxReleaseCapture();
  xxxRedrawTitle((struct tagWND *)a1, 0x1000u);
  SetOrClrWF(0, (_DWORD *)a1, 0x580u, 1);
  xxxInternalGetMessage(v43, 0LL, 0, 0, 1u, 1u);
  xxxWindowEvent(0x800Au, (__int64 *)a1, -2, 4, 0);
  xxxWindowEvent(0xDu, (__int64 *)a1, 0, 0, 0);
  if ( (*(_BYTE *)(v28 + 55) & 0xC0) != 0x40 || (v33 = *(unsigned __int16 *)(v28 + 192), v33 == 0xFFFF) )
    v33 = -1;
  if ( (*(_BYTE *)(v28 + 55) & 8) == 0 )
  {
    Parent = v28;
    goto LABEL_76;
  }
  Parent = GetParent(v28);
  if ( Parent )
  {
LABEL_76:
    v48[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v48;
    v48[1] = Parent;
    ++*(_DWORD *)(Parent + 8);
    ContextHelpId = GetContextHelpId(v28);
    xxxSendHelpMessage(Parent, 1, v33, *(_QWORD *)v28, ContextHelpId);
    ThreadUnlock1(v41, v40);
  }
  ThreadUnlock1(v35, v34);
  return ThreadUnlock1(v38, v37);
}
