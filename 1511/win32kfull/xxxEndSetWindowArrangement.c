/*
 * XREFs of xxxEndSetWindowArrangement @ 0x1C020C568
 * Callers:
 *     xxxProcessEventMessage @ 0x1C0063E9C (xxxProcessEventMessage.c)
 *     xxxShowWindowEx @ 0x1C00794D0 (xxxShowWindowEx.c)
 * Callees:
 *     _GetProp @ 0x1C00540EC (_GetProp.c)
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     IntersectRect @ 0x1C006B798 (IntersectRect.c)
 *     IsWindowSubjectToShellWindowBehavior @ 0x1C006E7C4 (IsWindowSubjectToShellWindowBehavior.c)
 *     SameCoordinateSpace @ 0x1C0075498 (SameCoordinateSpace.c)
 *     xxxSetWindowPos @ 0x1C0075840 (xxxSetWindowPos.c)
 *     _MonitorFromWindow @ 0x1C0077FC0 (_MonitorFromWindow.c)
 *     _MonitorFromRect @ 0x1C00780C0 (_MonitorFromRect.c)
 *     SetOrClrWF @ 0x1C0080070 (SetOrClrWF.c)
 *     xxxActivateWindow @ 0x1C008CA64 (xxxActivateWindow.c)
 *     ?xxxNotifyIAMWindowManagementEvent@@YAHQEBU_SHELL_WINDOWMANAGEMENT_NOTIFY_INFO@@@Z @ 0x1C0092988 (-xxxNotifyIAMWindowManagementEvent@@YAHQEBU_SHELL_WINDOWMANAGEMENT_NOTIFY_INFO@@@Z.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     memset @ 0x1C0152CC0 (memset.c)
 *     xxxNotifyShellTrackedWindowPosChanged @ 0x1C01D812C (xxxNotifyShellTrackedWindowPosChanged.c)
 *     ?ArrangeActionCompatibleWithStyle@@YAHPEAUtagWND@@W4_WARR_ACTIONS@@@Z @ 0x1C0204E08 (-ArrangeActionCompatibleWithStyle@@YAHPEAUtagWND@@W4_WARR_ACTIONS@@@Z.c)
 *     ?ArrangementStyleFromOverlap@@YAKK@Z @ 0x1C0204ED8 (-ArrangementStyleFromOverlap@@YAKK@Z.c)
 *     ?GetOverlapCoordinatesForArrangement@@YAKQEBUtagRECT@@0H@Z @ 0x1C0205414 (-GetOverlapCoordinatesForArrangement@@YAKQEBUtagRECT@@0H@Z.c)
 *     ?IsEqualRectToArrangedWindow@@YAHPEAUtagWND@@QEBUtagRECT@@@Z @ 0x1C0205B60 (-IsEqualRectToArrangedWindow@@YAHPEAUtagWND@@QEBUtagRECT@@@Z.c)
 *     ?IsLeftOrRightArranged@@YAEPEAUtagWND@@@Z @ 0x1C0205BE8 (-IsLeftOrRightArranged@@YAEPEAUtagWND@@@Z.c)
 *     ?TransformShellProvidedRectangles@@YAXPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@PEAUtagRECT@@3PEAUtagWND@@33@Z @ 0x1C02062F0 (-TransformShellProvidedRectangles@@YAXPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIR.c)
 *     ?xxxApplyArrangeAction@@YAHPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPEAU_MOVESIZEDATA@@@Z @ 0x1C0206D70 (-xxxApplyArrangeAction@@YAHPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxInitializeMoveSizeDataProgrammaticArrangement@@YAXPEAUtagWND@@W4_WARR_ACTIONS@@W4_WARR_STATES@@W4_WINDOW_ARRANGEMENT_SCENARIO@@PEAU_MOVESIZEDATA@@PEAJ@Z @ 0x1C0207DE4 (-xxxInitializeMoveSizeDataProgrammaticArrangement@@YAXPEAUtagWND@@W4_WARR_ACTIONS@@W4_WARR_STATE.c)
 *     EvaluateArrangeState @ 0x1C020B46C (EvaluateArrangeState.c)
 */

__int64 __fastcall xxxEndSetWindowArrangement(struct tagWND *a1, struct tagRECT *a2, __int64 a3, char a4)
{
  unsigned int v5; // ebx
  int v6; // r13d
  __int64 v9; // rcx
  __int64 v10; // rsi
  unsigned __int8 v11; // r9
  int v12; // r12d
  unsigned int v14; // eax
  __int64 v15; // r13
  int v16; // edx
  struct tagRECT *v17; // r12
  char OverlapCoordinatesForArrangement; // al
  int v19; // eax
  int v20; // r14d
  __int64 v21; // r12
  __int64 CurrentProcessWin32Process; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  int v25; // edx
  __int64 v26; // rsi
  __int64 v27; // r8
  _OWORD *Prop; // rax
  __int64 v29; // r8
  int v30; // [rsp+44h] [rbp-BCh]
  int v31; // [rsp+48h] [rbp-B8h]
  int v32; // [rsp+4Ch] [rbp-B4h] BYREF
  int v33; // [rsp+50h] [rbp-B0h]
  __int64 v34; // [rsp+58h] [rbp-A8h]
  struct tagRECT *v35; // [rsp+60h] [rbp-A0h]
  _QWORD v36[3]; // [rsp+68h] [rbp-98h] BYREF
  _QWORD v37[3]; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v38[5]; // [rsp+98h] [rbp-68h] BYREF
  _OWORD v39[20]; // [rsp+C0h] [rbp-40h] BYREF
  struct tagRECT v40; // [rsp+200h] [rbp+100h] BYREF
  _QWORD v41[2]; // [rsp+210h] [rbp+110h] BYREF
  _QWORD v42[2]; // [rsp+220h] [rbp+120h] BYREF

  v5 = 0;
  v35 = a2;
  v6 = 2;
  v9 = gptiCurrent;
  v34 = gptiCurrent;
  v10 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 408LL) + 320LL);
  v11 = ~a4;
  v12 = v11 & 1;
  v30 = v12;
  v33 = (v11 >> 1) & 1;
  if ( !v10 )
    return 0LL;
  v36[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v36;
  v36[1] = v10;
  ++*(_DWORD *)(v10 + 8);
  if ( !*(_QWORD *)(gptiCurrent + 592LL) )
  {
    v14 = MonitorFlagsFromDpiAwareness(*(unsigned int *)(v10 + 344));
    v15 = MonitorFromRect(&a2->left, v14);
    if ( !v15 )
      goto LABEL_52;
    v16 = *(_DWORD *)(v10 + 344);
    if ( v16 || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v10 + 16) + 408LL) + 8LL) + 244LL) & 1) == 0 )
    {
      if ( v16 != 1
        || (v17 = (struct tagRECT *)(v15 + 108),
            (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v10 + 16) + 408LL) + 8LL) + 244LL) & 1) == 0) )
      {
        v17 = (struct tagRECT *)(v15 + 76);
      }
    }
    else
    {
      v17 = (struct tagRECT *)(v15 + 92);
    }
    if ( !(unsigned int)IntersectRect(v42, &a2->left, &v17->left) )
      goto LABEL_51;
    v9 = v42[0] - *(_QWORD *)&a2->left;
    if ( v42[0] == *(_QWORD *)&a2->left )
      v9 = v42[1] - *(_QWORD *)&a2->right;
    if ( v9 )
      goto LABEL_51;
    OverlapCoordinatesForArrangement = GetOverlapCoordinatesForArrangement(v17, a2, 1);
    v19 = ArrangementStyleFromOverlap(OverlapCoordinatesForArrangement);
    if ( !v19 )
      goto LABEL_51;
    if ( v19 == 63747 )
      goto LABEL_51;
    v20 = (v19 != 63745) + 4;
    if ( !(unsigned int)ArrangeActionCompatibleWithStyle((__int64)a1, v20) )
      goto LABEL_51;
    v31 = EvaluateArrangeState((__int64)a1);
    if ( v31 == 6 || (*((_BYTE *)a1 + 55) & 0x10) == 0 )
      goto LABEL_51;
    if ( a3 )
    {
      if ( !(unsigned int)IntersectRect(v41, (int *)a3, &v17->left) )
        goto LABEL_51;
      v9 = v41[0] - *(_QWORD *)a3;
      if ( v41[0] == *(_QWORD *)a3 )
        v9 = v41[1] - *(_QWORD *)(a3 + 8);
      if ( v9
        || (*(_BYTE *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 432) + 224LL) & 1) == 0
        && (v21 = *((_QWORD *)a1 + 2),
            (CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(0x100000000000000LL),
             !(unsigned int)SameCoordinateSpace(CurrentProcessWin32Process, *(_QWORD *)(v21 + 376)))
         && !(unsigned int)TransformRectBetweenCoordinateSpaces(a3, a3, a1, v10)) )
      {
LABEL_51:
        v12 = v30;
        goto LABEL_52;
      }
    }
    v37[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v37;
    v37[1] = v15;
    ++*(_DWORD *)(v15 + 8);
    memset(v39, 0, sizeof(v39));
    xxxInitializeMoveSizeDataProgrammaticArrangement((__int64)a1, v20, v31, 1, (__int64)v39, &v32);
    v40 = *v35;
    TransformShellProvidedRectangles((__int64 *)v39, v15, (v20 != 4) + 1, &v40, 0LL, v10, &v40.left, 0LL);
    if ( v15 == MonitorFromWindow((__int64)a1, 2u) )
    {
      if ( v31 == 2 && v20 == 4 || v31 == 3 && v20 == 5 )
      {
        v12 = v30;
        if ( !(unsigned int)IsEqualRectToArrangedWindow(a1, &v40) )
        {
          v25 = 3146244;
          if ( !v30 )
            v25 = 3146260;
          xxxSetWindowPos(a1, 0, v40.left, v40.top, v40.right - v40.left, v40.bottom - v40.top, v25);
        }
LABEL_34:
        ThreadUnlock1(v24, v23);
        if ( *((char *)a1 + 44) >= 0 && (*((_BYTE *)a1 + 289) & 3) != 0 && (*((_BYTE *)a1 + 289) & 3) != 3 )
        {
          if ( v12 && (!gpqForeground || *(struct tagWND **)(gpqForeground + 80LL) != a1) )
          {
            *(_DWORD *)(v34 + 440) |= 0x20u;
            xxxActivateWindow(a1, 1LL);
          }
          if ( IsLeftOrRightArranged(a1) )
          {
            SetOrClrWF(1, a1, 0xFB01u, 1);
            v6 = 0;
            goto LABEL_53;
          }
        }
LABEL_52:
        v6 = 2;
        goto LABEL_53;
      }
    }
    else
    {
      *(_QWORD *)&v39[13] = v15;
    }
    v39[14] = v40;
    if ( !v30 )
      HIDWORD(v39[19]) |= 0x20u;
    xxxApplyArrangeAction((__int64)a1, v31, v20, v32, (struct _MOVESIZEDATA *)v39);
    v12 = v30;
    goto LABEL_34;
  }
LABEL_53:
  v26 = ThreadUnlock1(v9, a2);
  if ( v26 )
  {
    if ( v33 )
    {
      memset(v38, 0, sizeof(v38));
      v38[0] = *(_QWORD *)a1;
      v38[2] = v6;
      LODWORD(v38[1]) = 2;
      v38[3] = 0LL;
      xxxNotifyIAMWindowManagementEvent((const struct _SHELL_WINDOWMANAGEMENT_NOTIFY_INFO *const)v38);
    }
    if ( v12 )
      SetLastInputWoken(*(_QWORD *)(v26 + 16), 0LL);
    if ( !v6 )
    {
      if ( a3 )
      {
        Prop = (_OWORD *)GetProp((__int64)a1, (unsigned __int16)atomCheckpointProp, 1LL);
        if ( Prop )
          *Prop = *(_OWORD *)a3;
      }
    }
    if ( (unsigned int)IsWindowSubjectToShellWindowBehavior((__int64)a1, 16LL, v27) )
      xxxNotifyShellTrackedWindowPosChanged((__int64)a1, 1, v29);
  }
  LOBYTE(v5) = v6 == 0;
  return v5;
}
