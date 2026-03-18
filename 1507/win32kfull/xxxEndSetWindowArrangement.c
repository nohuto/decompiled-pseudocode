/*
 * XREFs of xxxEndSetWindowArrangement @ 0x1C020BEC4
 * Callers:
 *     xxxProcessEventMessage @ 0x1C0071E4C (xxxProcessEventMessage.c)
 *     xxxShowWindow @ 0x1C0081A78 (xxxShowWindow.c)
 * Callees:
 *     xxxActivateWindow @ 0x1C0044954 (xxxActivateWindow.c)
 *     SetOrClrWF @ 0x1C005B694 (SetOrClrWF.c)
 *     IsWindowSubjectToShellWindowBehavior @ 0x1C0081EAC (IsWindowSubjectToShellWindowBehavior.c)
 *     _MonitorFromWindow @ 0x1C0082D50 (_MonitorFromWindow.c)
 *     _MonitorFromRect @ 0x1C0082E40 (_MonitorFromRect.c)
 *     xxxSetWindowPos @ 0x1C00848B8 (xxxSetWindowPos.c)
 *     IntersectRect @ 0x1C008E444 (IntersectRect.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     memset @ 0x1C015D4C0 (memset.c)
 *     ?xxxNotifyIAMWindowManagementEvent@@YAHQEBU_SHELL_WINDOWMANAGEMENT_NOTIFY_INFO@@@Z @ 0x1C01D56B0 (-xxxNotifyIAMWindowManagementEvent@@YAHQEBU_SHELL_WINDOWMANAGEMENT_NOTIFY_INFO@@@Z.c)
 *     xxxNotifyShellTrackedWindowPosChanged @ 0x1C01D65A8 (xxxNotifyShellTrackedWindowPosChanged.c)
 *     ?ArrangeActionCompatibleWithStyle@@YAHPEAUtagWND@@W4_WARR_ACTIONS@@@Z @ 0x1C0204A88 (-ArrangeActionCompatibleWithStyle@@YAHPEAUtagWND@@W4_WARR_ACTIONS@@@Z.c)
 *     ?ArrangementStyleFromOverlap@@YAKK@Z @ 0x1C0204B24 (-ArrangementStyleFromOverlap@@YAKK@Z.c)
 *     ?GetOverlapCoordinatesForArrangement@@YAKQEBUtagRECT@@0H@Z @ 0x1C020505C (-GetOverlapCoordinatesForArrangement@@YAKQEBUtagRECT@@0H@Z.c)
 *     ?IsEqualRectToArrangedWindow@@YAHPEAUtagWND@@QEBUtagRECT@@@Z @ 0x1C02057A8 (-IsEqualRectToArrangedWindow@@YAHPEAUtagWND@@QEBUtagRECT@@@Z.c)
 *     ?TransformShellProvidedRectangles@@YAXPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@PEAUtagRECT@@3PEAUtagWND@@33@Z @ 0x1C0205F20 (-TransformShellProvidedRectangles@@YAXPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIR.c)
 *     ?xxxApplyArrangeAction@@YAHPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPEAU_MOVESIZEDATA@@@Z @ 0x1C0206950 (-xxxApplyArrangeAction@@YAHPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxInitializeMoveSizeDataProgrammaticArrangement@@YAXPEAUtagWND@@W4_WARR_ACTIONS@@W4_WARR_STATES@@W4_WINDOW_ARRANGEMENT_SCENARIO@@PEAU_MOVESIZEDATA@@PEAJ@Z @ 0x1C0207AA0 (-xxxInitializeMoveSizeDataProgrammaticArrangement@@YAXPEAUtagWND@@W4_WARR_ACTIONS@@W4_WARR_STATE.c)
 *     EvaluateArrangeState @ 0x1C020AF20 (EvaluateArrangeState.c)
 */

__int64 __fastcall xxxEndSetWindowArrangement(struct tagWND *a1, struct tagRECT *a2, char a3)
{
  unsigned int v4; // ebx
  int v5; // r13d
  __int64 v7; // rcx
  __int64 v8; // rsi
  int v9; // r15d
  BOOL v10; // r14d
  unsigned int v12; // eax
  __int64 v13; // r8
  __int64 v14; // r15
  int v15; // edx
  struct tagRECT *v16; // r14
  char OverlapCoordinatesForArrangement; // al
  int v18; // eax
  int v19; // r14d
  int v20; // r13d
  __int64 v21; // r8
  __int64 v22; // rdx
  __int64 v23; // rcx
  char v24; // dl
  __int64 v25; // rsi
  int v26; // [rsp+40h] [rbp-C0h]
  BOOL v27; // [rsp+44h] [rbp-BCh]
  int v28; // [rsp+4Ch] [rbp-B4h] BYREF
  __int64 v29; // [rsp+50h] [rbp-B0h]
  _QWORD v30[3]; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v31[3]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v32[5]; // [rsp+88h] [rbp-78h] BYREF
  _OWORD v33[20]; // [rsp+B0h] [rbp-50h] BYREF
  struct tagRECT v34; // [rsp+1F0h] [rbp+F0h] BYREF

  v4 = 0;
  v5 = 2;
  v7 = gptiCurrent;
  v29 = gptiCurrent;
  v8 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 312LL);
  v9 = ((unsigned __int8)~a3 >> 1) & 1;
  v10 = (a3 & 1) == 0;
  v26 = v9;
  v27 = v10;
  if ( !v8 )
    return 0LL;
  v31[0] = *(_QWORD *)(gptiCurrent + 376LL);
  *(_QWORD *)(gptiCurrent + 376LL) = v31;
  v31[1] = v8;
  ++*(_DWORD *)(v8 + 8);
  if ( !*(_QWORD *)(gptiCurrent + 600LL) )
  {
    v12 = MonitorFlagsFromDpiAwareness(*(unsigned int *)(v8 + 344));
    v14 = MonitorFromRect(&a2->left, v12, v13);
    if ( !v14 )
    {
LABEL_46:
      v9 = v26;
      goto LABEL_47;
    }
    v15 = *(_DWORD *)(v8 + 344);
    if ( v15 || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 16) + 416LL) + 8LL) + 260LL) & 1) == 0 )
    {
      if ( v15 != 1
        || (v16 = (struct tagRECT *)(v14 + 108),
            (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 16) + 416LL) + 8LL) + 260LL) & 1) == 0) )
      {
        v16 = (struct tagRECT *)(v14 + 76);
      }
    }
    else
    {
      v16 = (struct tagRECT *)(v14 + 92);
    }
    if ( !(unsigned int)IntersectRect(&v34, &a2->left, &v16->left) )
      goto LABEL_43;
    v7 = *(_QWORD *)&v34.left - *(_QWORD *)&a2->left;
    if ( *(_QWORD *)&v34.left == *(_QWORD *)&a2->left )
      v7 = *(_QWORD *)&v34.right - *(_QWORD *)&a2->right;
    if ( v7
      || (OverlapCoordinatesForArrangement = GetOverlapCoordinatesForArrangement(v16, a2, 1),
          (v18 = ArrangementStyleFromOverlap(OverlapCoordinatesForArrangement)) == 0)
      || v18 == 63747
      || (v19 = (v18 != 63745) + 4, !(unsigned int)ArrangeActionCompatibleWithStyle((__int64)a1, v19)) )
    {
LABEL_43:
      v10 = v27;
      goto LABEL_46;
    }
    v20 = EvaluateArrangeState((__int64)a1);
    if ( v20 == 6 || (*((_BYTE *)a1 + 55) & 0x10) == 0 )
    {
      v10 = v27;
      goto LABEL_45;
    }
    v30[0] = *(_QWORD *)(gptiCurrent + 376LL);
    *(_QWORD *)(gptiCurrent + 376LL) = v30;
    v30[1] = v14;
    ++*(_DWORD *)(v14 + 8);
    memset(v33, 0, sizeof(v33));
    xxxInitializeMoveSizeDataProgrammaticArrangement((__int64)a1, v19, v20, 1, (__int64)v33, &v28);
    v34 = *a2;
    TransformShellProvidedRectangles(v33, v14, (v19 != 4) + 1, &v34, 0LL, v8, &v34.left, 0LL);
    if ( v14 == MonitorFromWindow((__int64)a1, 2LL, v21) )
    {
      if ( v20 == 2 && v19 == 4 || v20 == 3 && v19 == 5 )
      {
        v10 = v27;
        if ( !(unsigned int)IsEqualRectToArrangedWindow(a1, &v34) )
        {
          v24 = 4;
          if ( !v27 )
            v24 = 20;
          xxxSetWindowPos(
            a1,
            0LL,
            (unsigned int)v34.left,
            (unsigned int)v34.top,
            v34.right - v34.left,
            v34.bottom - v34.top,
            v24);
        }
LABEL_25:
        ThreadUnlock1(v23, v22);
        if ( *((char *)a1 + 44) >= 0 && (*((_BYTE *)a1 + 289) & 3) != 0 && (*((_BYTE *)a1 + 289) & 3) != 3 )
        {
          if ( v10 )
          {
            v7 = gpqForeground;
            if ( !gpqForeground || *(struct tagWND **)(gpqForeground + 80LL) != a1 )
            {
              *(_DWORD *)(v29 + 448) |= 0x20u;
              xxxActivateWindow(a1, 1LL);
            }
          }
          if ( (*((_BYTE *)a1 + 289) & 3) != 0 && (*((_BYTE *)a1 + 289) & 3) != 3 )
          {
            SetOrClrWF(1, a1, 0xFB01u, 0);
            v5 = 0;
            goto LABEL_46;
          }
        }
LABEL_45:
        v5 = 2;
        goto LABEL_46;
      }
    }
    else
    {
      *(_QWORD *)&v33[13] = v14;
    }
    v33[14] = v34;
    if ( !v27 )
      HIDWORD(v33[19]) |= 0x20u;
    xxxApplyArrangeAction((__int64)a1, v20, v19, v28, (struct _MOVESIZEDATA *)v33);
    v10 = v27;
    goto LABEL_25;
  }
LABEL_47:
  v25 = ThreadUnlock1(v7, a2);
  if ( v25 )
  {
    if ( v9 )
    {
      memset(v32, 0, sizeof(v32));
      v32[0] = *(_QWORD *)a1;
      v32[2] = v5;
      LODWORD(v32[1]) = 2;
      v32[3] = 0LL;
      xxxNotifyIAMWindowManagementEvent((const struct _SHELL_WINDOWMANAGEMENT_NOTIFY_INFO *const)v32);
    }
    if ( v10 )
      SetLastInputWoken(*(_QWORD *)(v25 + 16), 0LL);
    if ( (unsigned int)IsWindowSubjectToShellWindowBehavior((__int64)a1, 16) )
      xxxNotifyShellTrackedWindowPosChanged((__int64)a1, 1u);
  }
  LOBYTE(v4) = v5 == 0;
  return v4;
}
