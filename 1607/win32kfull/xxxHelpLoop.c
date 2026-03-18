/*
 * XREFs of xxxHelpLoop @ 0x1C0234AF4
 * Callers:
 *     xxxSysCommand @ 0x1C012ABE4 (xxxSysCommand.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     PtInRect @ 0x1C0059530 (PtInRect.c)
 *     IsDPIDWMSysMet @ 0x1C006EA84 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C006EAAC (IsDPIAbsoluteSysMet.c)
 *     zzzSetCursor @ 0x1C0078168 (zzzSetCursor.c)
 *     xxxDispatchMessage @ 0x1C0078FD0 (xxxDispatchMessage.c)
 *     _GetProp @ 0x1C007AFEC (_GetProp.c)
 *     xxxWindowEvent @ 0x1C0087F70 (xxxWindowEvent.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0088728 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     SetOrClrWF @ 0x1C00964B4 (SetOrClrWF.c)
 *     xxxInternalEnumWindow @ 0x1C0099400 (xxxInternalEnumWindow.c)
 *     xxxRedrawTitle @ 0x1C00A0C90 (xxxRedrawTitle.c)
 *     xxxCapture @ 0x1C00AACF4 (xxxCapture.c)
 *     GetWindowBorders @ 0x1C00B0350 (GetWindowBorders.c)
 *     xxxReleaseCapture @ 0x1C00BB8C0 (xxxReleaseCapture.c)
 *     xxxInternalGetMessage @ 0x1C00DF5A8 (xxxInternalGetMessage.c)
 *     xxxWaitMessageEx @ 0x1C00DF5E4 (xxxWaitMessageEx.c)
 *     xxxTranslateMessage @ 0x1C00E7A34 (xxxTranslateMessage.c)
 *     _GetParent @ 0x1C00F878C (_GetParent.c)
 *     xxxWindowHitTest @ 0x1C0117FD0 (xxxWindowHitTest.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     memset @ 0x1C015A380 (memset.c)
 *     xxxSendHelpMessage @ 0x1C02351A4 (xxxSendHelpMessage.c)
 *     GetContextHelpId @ 0x1C0249234 (GetContextHelpId.c)
 *     IsHelpParent @ 0x1C024929C (IsHelpParent.c)
 */

__int64 __fastcall xxxHelpLoop(__int64 a1)
{
  __int64 v2; // r8
  __int64 v3; // r9
  int WindowBorders; // r14d
  __int64 v5; // rdx
  unsigned __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  int v19; // ecx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  _DWORD *v31; // rbx
  __int64 v32; // rdx
  unsigned __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rdx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rdx
  __int64 v44; // r8
  __int64 v45; // r9
  int v46; // ecx
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 v51; // rdx
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 v54; // rdx
  __int64 v55; // r8
  __int64 v56; // r9
  int v57; // ecx
  _DWORD *v58; // rcx
  int v59; // ecx
  int v60; // eax
  int v61; // edx
  int v62; // ecx
  int v63; // eax
  int v64; // ecx
  __int64 v65; // rcx
  __int64 v66; // r8
  __int64 v67; // r9
  __int64 v68; // rdx
  __int64 v69; // r8
  __int64 v70; // r9
  __int64 v72; // rax
  __int64 v73; // rbx
  __int64 *v74; // r10
  __int64 v75; // rdx
  __int64 v76; // rcx
  __int64 v77; // rcx
  int v78; // edi
  __int64 v79; // rdx
  __int64 v80; // rcx
  __int64 Parent; // rsi
  __int64 v82; // rdx
  __int64 v83; // rcx
  int ContextHelpId; // eax
  __int64 v85; // rdx
  __int64 v86; // rcx
  _DWORD v87[4]; // [rsp+38h] [rbp-69h] BYREF
  _QWORD v88[6]; // [rsp+48h] [rbp-59h] BYREF
  __int64 v89; // [rsp+78h] [rbp-29h] BYREF
  __int64 v90; // [rsp+80h] [rbp-21h]
  __int64 v91; // [rsp+88h] [rbp-19h]
  _QWORD v92[3]; // [rsp+90h] [rbp-11h] BYREF
  _QWORD v93[3]; // [rsp+A8h] [rbp+7h] BYREF
  _QWORD v94[3]; // [rsp+C0h] [rbp+1Fh] BYREF

  memset(v88, 0, sizeof(v88));
  xxxWindowEvent(0xCu, (__int64 *)a1, 0, 0, 0);
  zzzSetCursor(*(_QWORD *)&gasyscur[100]);
  xxxCapture(gptiCurrent, (__int64 *)a1, 4);
  WindowBorders = GetWindowBorders(*(unsigned int *)(a1 + 52), *(unsigned int *)(a1 + 48), v2, v3);
  if ( (unsigned int)IsDPIAbsoluteSysMet(6uLL) )
  {
    if ( (W32GetCurrentThreadDpiAwarenessContext(v6, v5, v7, v8) & 0xF) != 0 )
      goto LABEL_3;
LABEL_13:
    v31 = (_DWORD *)(gpsi + 2292LL);
    goto LABEL_18;
  }
  if ( IsDPIDWMSysMet(v6)
    && (W32GetCurrentThreadDpiAwarenessContext(v21, v20, v22, v23) & 0xF) == 0
    && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v24, v25, v26) + 408)
    && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v27, v28, v29) + 408)
                             + 8LL)
                 + 244LL) & 1 )
  {
    goto LABEL_13;
  }
LABEL_3:
  if ( IsDPIDWMSysMet(6uLL)
    && (W32GetCurrentThreadDpiAwarenessContext(v10, v9, v11, v12) & 0xF) == 1
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v13, v14, v15) + 408)
      ? (v19 = 0)
      : (v19 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v16, v17, v18)
                                                 + 408)
                                     + 8LL)
                         + 244LL) & 1),
        v19) )
  {
    v31 = (_DWORD *)(gpsi + 2680LL);
  }
  else
  {
    v31 = (_DWORD *)(gpsi + 1904LL);
  }
LABEL_18:
  if ( (unsigned int)IsDPIAbsoluteSysMet(5uLL) )
  {
    if ( (W32GetCurrentThreadDpiAwarenessContext(v33, v32, v34, v35) & 0xF) != 0 )
      goto LABEL_20;
  }
  else if ( !IsDPIDWMSysMet(v33)
         || (W32GetCurrentThreadDpiAwarenessContext(v48, v47, v49, v50) & 0xF) != 0
         || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v51, v52, v53) + 408)
           ? (v57 = 0)
           : (v57 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                          (__int64)KeGetCurrentThread(),
                                                          v54,
                                                          v55,
                                                          v56)
                                                      + 408)
                                          + 8LL)
                              + 244LL) & 1),
             !v57) )
  {
LABEL_20:
    if ( IsDPIDWMSysMet(5uLL)
      && (W32GetCurrentThreadDpiAwarenessContext(v37, v36, v38, v39) & 0xF) == 1
      && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v40, v41, v42) + 408)
        ? (v46 = 0)
        : (v46 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                       (__int64)KeGetCurrentThread(),
                                                       v43,
                                                       v44,
                                                       v45)
                                                   + 408)
                                       + 8LL)
                           + 244LL) & 1),
          v46) )
    {
      v58 = (_DWORD *)(gpsi + 2676LL);
    }
    else
    {
      v58 = (_DWORD *)(gpsi + 1900LL);
    }
    goto LABEL_35;
  }
  v58 = (_DWORD *)(gpsi + 2288LL);
LABEL_35:
  v59 = -(WindowBorders * *v58);
  v60 = *(_DWORD *)(a1 + 112) - v59;
  v61 = -(WindowBorders * *v31);
  v62 = *(_DWORD *)(a1 + 120) + v59;
  v87[0] = v60;
  v63 = *(_DWORD *)(a1 + 116);
  v87[2] = v62;
  v64 = *(_DWORD *)(a1 + 124);
  v87[1] = v63 - v61;
  v87[3] = v61 + v64;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( *(_QWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 72LL) != a1 )
        goto LABEL_52;
      if ( (unsigned int)xxxInternalGetMessage((__int64)v88, 0LL, 0, 0, 2u, 0) )
        break;
      xxxWaitMessageEx(0x3CFFu, 0, 0LL);
    }
    if ( LODWORD(v88[1]) == 161 )
      goto LABEL_52;
    if ( LODWORD(v88[1]) == 513 )
      break;
    if ( LODWORD(v88[1]) == 516 || LODWORD(v88[1]) == 519 || LODWORD(v88[1]) == 523 )
      goto LABEL_52;
    if ( LODWORD(v88[1]) == 512 )
    {
      if ( PtInRect(v87, *(_QWORD *)((char *)&v88[4] + 4)) )
        v65 = *(_QWORD *)&gasyscur[100];
      else
        v65 = *(_QWORD *)&gasyscur[4];
      zzzSetCursor(v65);
    }
    else if ( LODWORD(v88[1]) == 256 && v88[2] == 27LL )
    {
      xxxInternalGetMessage((__int64)v88, 0LL, 0, 0, 1u, 1u);
LABEL_52:
      xxxReleaseCapture();
      zzzSetCursor(*(_QWORD *)&gasyscur[4]);
      xxxRedrawTitle((struct tagWND *)a1, 0x1000u);
      SetOrClrWF(0, (_DWORD *)a1, 0x580u, 1);
      xxxWindowEvent(0x800Au, (__int64 *)a1, -2, 4, 0);
      return xxxWindowEvent(0xDu, (__int64 *)a1, 0, 0, 0);
    }
    xxxInternalGetMessage((__int64)v88, 0LL, 0, 0, 1u, 1u);
    xxxTranslateMessage((__int64)v88, 0LL, v66, v67);
    xxxDispatchMessage(v88, v68, v69, v70);
  }
  if ( !PtInRect(v87, *(_QWORD *)((char *)&v88[4] + 4)) )
    goto LABEL_52;
  v72 = xxxWindowHitTest((struct tagWND *)a1);
  v73 = ValidateHwnd(v72);
  v92[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v92;
  v92[1] = v73;
  if ( v73 )
    ++*(_DWORD *)(v73 + 8);
  if ( (unsigned int)IsHelpParent(v73) )
  {
    v91 = *(_QWORD *)((char *)&v88[4] + 4);
    v89 = v73;
    v90 = 0LL;
    xxxInternalEnumWindow(v73, (__int64 (__fastcall *)(__int64, __int64))EnumPwndDlgChildProc, (__int64)&v89, 1u);
    v74 = (__int64 *)gptiCurrent;
    v73 = v90;
  }
  if ( v73 == a1 )
    v73 = 0LL;
  if ( !v73 )
  {
    if ( !GetProp(a1, *(unsigned __int16 *)(gpsi + 1360LL), 1LL) )
    {
      ThreadUnlock1(v76, v75);
      goto LABEL_52;
    }
    v73 = a1;
  }
  v77 = *v74;
  v93[0] = *(_QWORD *)(*v74 + 368);
  *(_QWORD *)(v77 + 368) = v93;
  ++*(_DWORD *)(v73 + 8);
  v93[1] = v73;
  zzzSetCursor(*(_QWORD *)&gasyscur[4]);
  xxxReleaseCapture();
  xxxRedrawTitle((struct tagWND *)a1, 0x1000u);
  SetOrClrWF(0, (_DWORD *)a1, 0x580u, 1);
  xxxInternalGetMessage((__int64)v88, 0LL, 0, 0, 1u, 1u);
  xxxWindowEvent(0x800Au, (__int64 *)a1, -2, 4, 0);
  xxxWindowEvent(0xDu, (__int64 *)a1, 0, 0, 0);
  if ( (*(_BYTE *)(v73 + 55) & 0xC0) != 0x40 || (v78 = *(unsigned __int16 *)(v73 + 192), v78 == 0xFFFF) )
    v78 = -1;
  if ( (*(_BYTE *)(v73 + 55) & 8) == 0 )
  {
    Parent = v73;
    goto LABEL_72;
  }
  Parent = GetParent(v73);
  if ( Parent )
  {
LABEL_72:
    v94[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v94;
    v94[1] = Parent;
    ++*(_DWORD *)(Parent + 8);
    ContextHelpId = GetContextHelpId(v73);
    xxxSendHelpMessage(Parent, 1, v78, *(_QWORD *)v73, ContextHelpId);
    ThreadUnlock1(v86, v85);
  }
  ThreadUnlock1(v80, v79);
  return ThreadUnlock1(v83, v82);
}
