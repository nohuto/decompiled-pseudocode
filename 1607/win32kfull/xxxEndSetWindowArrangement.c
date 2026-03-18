/*
 * XREFs of xxxEndSetWindowArrangement @ 0x1C02036C0
 * Callers:
 *     xxxProcessEventMessage @ 0x1C00889B8 (xxxProcessEventMessage.c)
 *     xxxShowWindowEx @ 0x1C009E4B4 (xxxShowWindowEx.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     GetMonitorFlagsFromWindow @ 0x1C0058654 (GetMonitorFlagsFromWindow.c)
 *     IntersectRect @ 0x1C005D934 (IntersectRect.c)
 *     _GetProp @ 0x1C007AFEC (_GetProp.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0088728 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     SetOrClrWF @ 0x1C00964B4 (SetOrClrWF.c)
 *     IsWindowSubjectToShellWindowBehavior @ 0x1C009E938 (IsWindowSubjectToShellWindowBehavior.c)
 *     xxxSetWindowPos @ 0x1C00A5850 (xxxSetWindowPos.c)
 *     ?xxxNotifyIAMWindowManagementEvent@@YAHQEBU_SHELL_WINDOWMANAGEMENT_NOTIFY_INFO@@@Z @ 0x1C00A9ED8 (-xxxNotifyIAMWindowManagementEvent@@YAHQEBU_SHELL_WINDOWMANAGEMENT_NOTIFY_INFO@@@Z.c)
 *     xxxActivateWindow @ 0x1C00AB2EC (xxxActivateWindow.c)
 *     _MonitorFromWindow @ 0x1C00AFFA0 (_MonitorFromWindow.c)
 *     _MonitorFromRect @ 0x1C00B0090 (_MonitorFromRect.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     memset @ 0x1C015A380 (memset.c)
 *     xxxNotifyShellTrackedWindowPosChanged @ 0x1C01CF1A4 (xxxNotifyShellTrackedWindowPosChanged.c)
 *     ?ArrangeActionCompatibleWithStyle@@YAHPEAUtagWND@@W4_WARR_ACTIONS@@@Z @ 0x1C01FC0E8 (-ArrangeActionCompatibleWithStyle@@YAHPEAUtagWND@@W4_WARR_ACTIONS@@@Z.c)
 *     ?ArrangementStyleFromOverlap@@YAKK@Z @ 0x1C01FC1B8 (-ArrangementStyleFromOverlap@@YAKK@Z.c)
 *     ?GetOverlapCoordinatesForArrangement@@YAKQEBUtagRECT@@0H@Z @ 0x1C01FC710 (-GetOverlapCoordinatesForArrangement@@YAKQEBUtagRECT@@0H@Z.c)
 *     ?IsEqualRectToArrangedWindow@@YAHPEAUtagWND@@QEBUtagRECT@@@Z @ 0x1C01FCE5C (-IsEqualRectToArrangedWindow@@YAHPEAUtagWND@@QEBUtagRECT@@@Z.c)
 *     ?IsLeftOrRightArranged@@YAEPEAUtagWND@@@Z @ 0x1C01FCEE4 (-IsLeftOrRightArranged@@YAEPEAUtagWND@@@Z.c)
 *     ?TransformShellProvidedRectangles@@YAXPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@PEAUtagRECT@@3PEAUtagWND@@33@Z @ 0x1C01FD5F8 (-TransformShellProvidedRectangles@@YAXPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIR.c)
 *     ?xxxApplyArrangeAction@@YAHPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPEAU_MOVESIZEDATA@@@Z @ 0x1C01FE0F0 (-xxxApplyArrangeAction@@YAHPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxInitializeMoveSizeDataProgrammaticArrangement@@YAXPEAUtagWND@@W4_WARR_ACTIONS@@W4_WARR_STATES@@W4_WINDOW_ARRANGEMENT_SCENARIO@@PEAU_MOVESIZEDATA@@PEAJ@Z @ 0x1C01FF19C (-xxxInitializeMoveSizeDataProgrammaticArrangement@@YAXPEAUtagWND@@W4_WARR_ACTIONS@@W4_WARR_STATE.c)
 *     EvaluateArrangeState @ 0x1C020257C (EvaluateArrangeState.c)
 */

__int64 __fastcall xxxEndSetWindowArrangement(struct tagWND *a1, struct tagRECT *a2, __int64 a3, char a4)
{
  unsigned int v5; // ebx
  int v6; // r13d
  __int64 v9; // rcx
  __int64 v10; // rsi
  unsigned __int8 v11; // r9
  int v12; // r15d
  unsigned int MonitorFlagsFromWindow; // eax
  __int64 v15; // r13
  __int64 v16; // rax
  struct tagRECT *v17; // r15
  __int64 v18; // rax
  char OverlapCoordinatesForArrangement; // al
  int v20; // eax
  int v21; // r14d
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rdx
  __int64 v32; // rcx
  char v33; // dl
  __int64 v34; // rsi
  _OWORD *Prop; // rax
  int v36; // [rsp+44h] [rbp-BCh]
  int v37; // [rsp+48h] [rbp-B8h]
  int v38; // [rsp+4Ch] [rbp-B4h] BYREF
  int v39; // [rsp+50h] [rbp-B0h]
  struct tagRECT *v40; // [rsp+58h] [rbp-A8h]
  __int64 v41; // [rsp+60h] [rbp-A0h]
  _QWORD v42[3]; // [rsp+68h] [rbp-98h] BYREF
  _QWORD v43[3]; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v44[5]; // [rsp+98h] [rbp-68h] BYREF
  _OWORD v45[20]; // [rsp+C0h] [rbp-40h] BYREF
  struct tagRECT v46; // [rsp+200h] [rbp+100h] BYREF
  _QWORD v47[2]; // [rsp+210h] [rbp+110h] BYREF
  _QWORD v48[2]; // [rsp+220h] [rbp+120h] BYREF

  v5 = 0;
  v40 = a2;
  v6 = 2;
  v9 = gptiCurrent;
  v41 = gptiCurrent;
  v10 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 408LL) + 320LL);
  v11 = ~a4;
  v12 = v11 & 1;
  v36 = v12;
  v39 = (v11 >> 1) & 1;
  if ( !v10 )
    return 0LL;
  v42[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v42;
  v42[1] = v10;
  ++*(_DWORD *)(v10 + 8);
  if ( !*(_QWORD *)(gptiCurrent + 592LL) )
  {
    MonitorFlagsFromWindow = GetMonitorFlagsFromWindow(v10);
    v15 = MonitorFromRect(&a2->left, MonitorFlagsFromWindow);
    if ( !v15 )
      goto LABEL_54;
    if ( (*(_DWORD *)(v10 + 352) & 0xF) == 0
      && (v16 = *(_QWORD *)(*(_QWORD *)(v10 + 16) + 408LL)) != 0
      && (*(_DWORD *)(*(_QWORD *)(v16 + 8) + 244LL) & 1) != 0 )
    {
      v17 = (struct tagRECT *)(v15 + 92);
    }
    else if ( (*(_DWORD *)(v10 + 352) & 0xF) != 1
           || (v18 = *(_QWORD *)(*(_QWORD *)(v10 + 16) + 408LL)) == 0
           || (v17 = (struct tagRECT *)(v15 + 108), (*(_DWORD *)(*(_QWORD *)(v18 + 8) + 244LL) & 1) == 0) )
    {
      v17 = (struct tagRECT *)(v15 + 76);
    }
    if ( !(unsigned int)IntersectRect(v47, &a2->left, &v17->left) )
      goto LABEL_53;
    v9 = v47[0] - *(_QWORD *)&a2->left;
    if ( v47[0] == *(_QWORD *)&a2->left )
      v9 = v47[1] - *(_QWORD *)&a2->right;
    if ( v9 )
      goto LABEL_53;
    OverlapCoordinatesForArrangement = GetOverlapCoordinatesForArrangement(v17, a2, 1);
    v20 = ArrangementStyleFromOverlap(OverlapCoordinatesForArrangement);
    if ( !v20 )
      goto LABEL_53;
    if ( v20 == 63747 )
      goto LABEL_53;
    v21 = (v20 != 63745) + 4;
    if ( !(unsigned int)ArrangeActionCompatibleWithStyle((__int64)a1, v21) )
      goto LABEL_53;
    v37 = EvaluateArrangeState((__int64)a1);
    if ( v37 == 6 || (*((_BYTE *)a1 + 55) & 0x10) == 0 )
      goto LABEL_53;
    if ( a3 )
    {
      if ( !(unsigned int)IntersectRect(v48, (int *)a3, &v17->left) )
        goto LABEL_53;
      v9 = v48[0] - *(_QWORD *)a3;
      if ( v48[0] == *(_QWORD *)a3 )
        v9 = v48[1] - *(_QWORD *)(a3 + 8);
      if ( v9
        || (*(_BYTE *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), (__int64)a2, v22, v23) + 432)
                     + 224LL) & 1) == 0
        && (v28 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v24, v25, v26) + 432),
            (*(_BYTE *)(v28 + 224) & 0x20) == 0)
        && (W32GetCurrentThreadDpiAwarenessContext(v28, v27, v29, v30) & 0xF) != (*((_DWORD *)a1 + 88) & 0xF)
        && !(unsigned int)TransformRectBetweenCoordinateSpaces(a3, a3, a1, v10) )
      {
LABEL_53:
        v12 = v36;
        goto LABEL_54;
      }
    }
    v43[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v43;
    v43[1] = v15;
    ++*(_DWORD *)(v15 + 8);
    memset(v45, 0, sizeof(v45));
    xxxInitializeMoveSizeDataProgrammaticArrangement((__int64)a1, v21, v37, 1, (__int64)v45, &v38);
    v46 = *v40;
    TransformShellProvidedRectangles((__int64 *)v45, v15, (v21 != 4) + 1, &v46, 0LL, v10, &v46.left, 0LL);
    if ( v15 == MonitorFromWindow((__int64)a1, 2u) )
    {
      if ( v37 == 2 && v21 == 4 || v37 == 3 && v21 == 5 )
      {
        v12 = v36;
        if ( !(unsigned int)IsEqualRectToArrangedWindow(a1, &v46) )
        {
          v33 = 4;
          if ( !v36 )
            v33 = 20;
          xxxSetWindowPos(
            a1,
            0LL,
            (unsigned int)v46.left,
            (unsigned int)v46.top,
            v46.right - v46.left,
            v46.bottom - v46.top,
            v33);
        }
LABEL_36:
        ThreadUnlock1(v32, v31);
        if ( *((char *)a1 + 44) >= 0 && (*((_BYTE *)a1 + 289) & 3) != 0 && (*((_BYTE *)a1 + 289) & 3) != 3 )
        {
          if ( v12 && (!gpqForeground || *(struct tagWND **)(gpqForeground + 88LL) != a1) )
          {
            *(_DWORD *)(v41 + 440) |= 0x20u;
            xxxActivateWindow(a1, 1LL);
          }
          if ( IsLeftOrRightArranged(a1) )
          {
            SetOrClrWF(1, a1, 0xFB01u, 1);
            v6 = 0;
            goto LABEL_55;
          }
        }
LABEL_54:
        v6 = 2;
        goto LABEL_55;
      }
    }
    else
    {
      *(_QWORD *)&v45[13] = v15;
    }
    v45[14] = v46;
    if ( !v36 )
      HIDWORD(v45[19]) |= 0x20u;
    xxxApplyArrangeAction((__int64)a1, v37, v21, v38, (struct _MOVESIZEDATA *)v45);
    v12 = v36;
    goto LABEL_36;
  }
LABEL_55:
  v34 = ThreadUnlock1(v9, a2);
  if ( v34 )
  {
    if ( v39 )
    {
      memset(v44, 0, sizeof(v44));
      v44[0] = *(_QWORD *)a1;
      v44[2] = v6;
      LODWORD(v44[1]) = 2;
      v44[3] = 0LL;
      xxxNotifyIAMWindowManagementEvent((const struct _SHELL_WINDOWMANAGEMENT_NOTIFY_INFO *const)v44);
    }
    if ( v12 )
      SetLastInputWoken(*(_QWORD *)(v34 + 16), 0LL);
    if ( !v6 )
    {
      if ( a3 )
      {
        Prop = (_OWORD *)GetProp((__int64)a1, (unsigned __int16)atomCheckpointProp, 1LL);
        if ( Prop )
          *Prop = *(_OWORD *)a3;
      }
    }
    if ( (unsigned int)IsWindowSubjectToShellWindowBehavior((__int64)a1, 16LL) )
      xxxNotifyShellTrackedWindowPosChanged((__int64)a1, 1);
  }
  LOBYTE(v5) = v6 == 0;
  return v5;
}
