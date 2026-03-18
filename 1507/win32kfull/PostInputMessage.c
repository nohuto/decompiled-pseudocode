/*
 * XREFs of PostInputMessage @ 0x1C008C718
 * Callers:
 *     xxxKeyEvent @ 0x1C00485C0 (xxxKeyEvent.c)
 *     ?PostRawKeyboardInput@@YAHPEAUtagQ@@KPEAXPEAU_KEYBOARD_INPUT_DATA@@IG@Z @ 0x1C004A774 (-PostRawKeyboardInput@@YAHPEAUtagQ@@KPEAXPEAU_KEYBOARD_INPUT_DATA@@IG@Z.c)
 *     ?PostRawMouseInput@@YAHPEAUtagQ@@KPEAXPEAU_MOUSE_INPUT_DATA@@@Z @ 0x1C004B55C (-PostRawMouseInput@@YAHPEAUtagQ@@KPEAXPEAU_MOUSE_INPUT_DATA@@@Z.c)
 *     xxxButtonEvent @ 0x1C004BA34 (xxxButtonEvent.c)
 *     ?xxxDoButtonEvent@@YAXPEAUtagMOUSEEVENT@@@Z @ 0x1C004CCD8 (-xxxDoButtonEvent@@YAXPEAUtagMOUSEEVENT@@@Z.c)
 *     ?PostHidNotification@@YAHPEAUtagPROCESS_HID_REQUEST@@PEAUDEVICEINFO@@I_K@Z @ 0x1C0079340 (-PostHidNotification@@YAHPEAUtagPROCESS_HID_REQUEST@@PEAUDEVICEINFO@@I_K@Z.c)
 *     PostMoveToPwnd @ 0x1C008BBEC (PostMoveToPwnd.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0117CEC (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     PostPointerEventMessage @ 0x1C0155090 (PostPointerEventMessage.c)
 *     ?PostHidInput@@YAHPEAUDEVICEINFO@@PEAUtagQ@@PEAUtagWND@@_K@Z @ 0x1C01D2970 (-PostHidInput@@YAHPEAUDEVICEINFO@@PEAUtagQ@@PEAUtagWND@@_K@Z.c)
 *     ?FinalizeKoreanImeCompStrOnMouseClick@@YAXPEAUtagWND@@@Z @ 0x1C01D6AE4 (-FinalizeKoreanImeCompStrOnMouseClick@@YAXPEAUtagWND@@@Z.c)
 *     ?GeneratePointerMessage@@YAHPEBUtagPOINTERINFONODE@@_KIKHHPEAUHWND__@@@Z @ 0x1C01F77F4 (-GeneratePointerMessage@@YAHPEBUtagPOINTERINFONODE@@_KIKHHPEAUHWND__@@@Z.c)
 *     ?DelegateMoveSizeToShell@@YAXPEAUtagWND@@I@Z @ 0x1C02021A8 (-DelegateMoveSizeToShell@@YAXPEAUtagWND@@I@Z.c)
 * Callees:
 *     IsAdaptiveQueueDetachExempted @ 0x1C00034B8 (IsAdaptiveQueueDetachExempted.c)
 *     PostUpdateKeyStateEvent @ 0x1C0042520 (PostUpdateKeyStateEvent.c)
 *     LogMDAQueueOp @ 0x1C00433CC (LogMDAQueueOp.c)
 *     AllocQEntry @ 0x1C0067C50 (AllocQEntry.c)
 *     CalcWakeMask @ 0x1C006AE00 (CalcWakeMask.c)
 *     ?IsMiPMouseMessage@@YAHI@Z @ 0x1C006C090 (-IsMiPMouseMessage@@YAHI@Z.c)
 *     StoreQMessage @ 0x1C00707A0 (StoreQMessage.c)
 *     DetermineInputTarget @ 0x1C008BA5C (DetermineInputTarget.c)
 *     ?IsGenuineMouseInput@@YAHPEBUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C008BD5C (-IsGenuineMouseInput@@YAHPEBUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 *     GetInputDelegate @ 0x1C008C688 (GetInputDelegate.c)
 *     IsPointerInputMessageWithState @ 0x1C008C6AC (IsPointerInputMessageWithState.c)
 *     LogicalQmsgCursorPos @ 0x1C008E59C (LogicalQmsgCursorPos.c)
 *     WakeSomeone @ 0x1C0090208 (WakeSomeone.c)
 *     ?vAdjustDelegatePriority@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C00E7AF4 (-vAdjustDelegatePriority@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     ?GetCoalesceableMouseMessage@@YAPEAUtagQMSG@@IPEA_KPEAU1@PEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C00EE8A8 (-GetCoalesceableMouseMessage@@YAPEAUtagQMSG@@IPEA_KPEAU1@PEAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 *     ?OnInput@InputTransform@@YAHPEAUtagWND@@_KPEBUtagINPUT_TRANSFORM@@@Z @ 0x1C00F072C (-OnInput@InputTransform@@YAHPEAUtagWND@@_KPEBUtagINPUT_TRANSFORM@@@Z.c)
 *     DwmAsyncNotifyInputActivity @ 0x1C00F0890 (DwmAsyncNotifyInputActivity.c)
 *     CleanInputMessage @ 0x1C00FB5B0 (CleanInputMessage.c)
 *     ?SetPointerInfoNodeMessagePosted@PointerFrameList@@YAH_KIH@Z @ 0x1C023004C (-SetPointerInfoNodeMessagePosted@PointerFrameList@@YAH_KIH@Z.c)
 */

__int64 PostInputMessage(__int64 a1, LARGE_INTEGER *a2, unsigned int a3, ...)
{
  __int64 v3; // rdi
  int v6; // r12d
  int v7; // eax
  struct tagTHREADINFO *v8; // r9
  struct tagINPUT_MESSAGE_SOURCE *v9; // r14
  int v10; // r15d
  int v11; // r13d
  char v12; // al
  unsigned __int8 v13; // al
  bool v14; // zf
  struct tagTHREADINFO *InputDelegate; // rax
  struct tagTHREADINFO *v16; // rsi
  __int64 v17; // rsi
  char v18; // r15
  struct tagQMSG *CoalesceableMouseMessage; // rax
  __int64 v20; // rsi
  LONGLONG v21; // rax
  DWORD LowPart; // r15d
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  int v26; // r9d
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  unsigned __int64 v30; // r8
  const struct tagINPUT_TRANSFORM *v31; // r9
  InputTransform *v32; // rax
  __int64 v33; // rax
  int v34; // r15d
  __int64 QuadPart; // r14
  __int64 result; // rax
  __int64 v37; // rax
  __int64 v38; // rbx
  struct _KEVENT *v39; // rcx
  _DWORD *v40; // rcx
  void *v41; // rax
  char v42; // [rsp+48h] [rbp-60h]
  struct tagTHREADINFO *v43; // [rsp+B0h] [rbp+8h]
  unsigned __int64 v44; // [rsp+C8h] [rbp+20h] BYREF
  va_list va; // [rsp+C8h] [rbp+20h]
  LARGE_INTEGER v46; // [rsp+D0h] [rbp+28h]
  __int64 v47; // [rsp+D8h] [rbp+30h]
  __int64 v48; // [rsp+E0h] [rbp+38h]
  LARGE_INTEGER v49; // [rsp+E8h] [rbp+40h]
  __int64 v50; // [rsp+F0h] [rbp+48h]
  struct tagINPUT_MESSAGE_SOURCE *v51; // [rsp+F8h] [rbp+50h] BYREF
  va_list va1; // [rsp+F8h] [rbp+50h]
  LARGE_INTEGER v53; // [rsp+100h] [rbp+58h]
  LARGE_INTEGER *v54; // [rsp+108h] [rbp+60h]
  va_list va2; // [rsp+110h] [rbp+68h] BYREF

  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v44 = va_arg(va1, _QWORD);
  v46.QuadPart = va_arg(va1, _QWORD);
  v47 = va_arg(va1, _QWORD);
  v48 = va_arg(va1, _QWORD);
  v49.QuadPart = va_arg(va1, _QWORD);
  v50 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v51 = va_arg(va2, struct tagINPUT_MESSAGE_SOURCE *);
  v53.QuadPart = va_arg(va2, _QWORD);
  v54 = va_arg(va2, LARGE_INTEGER *);
  v3 = a3;
  v6 = 0;
  v7 = CalcWakeMask(a3, a3, 0);
  v9 = v51;
  v10 = v7;
  v43 = v8;
  if ( !v51 || (v11 = (_DWORD)v8 + 1, *((_DWORD *)v51 + 1) != 2) )
    v11 = (int)v8;
  if ( ((_DWORD)v3 == 513 || (_DWORD)v3 == 516)
    && a2
    && (a2[40].LowPart & 6) != 0
    && *(struct tagTHREADINFO **)(a2[2].QuadPart + 1104) == v8
    && v51
    && ((*(_DWORD *)v51 - 2) & 0xFFFFFFEF) == 0 )
  {
    if ( *(struct tagTHREADINFO **)(a1 + 96) == v8 )
      HMAssignmentLock(a1 + 96, a2);
    *(_BYTE *)(a1 + 104) |= ((_DWORD)v3 != 513) + 1;
    goto LABEL_23;
  }
  if ( !*(_QWORD *)(a1 + 96) )
    goto LABEL_23;
  if ( (_DWORD)v3 == 514 )
  {
    v12 = 1;
  }
  else
  {
    if ( (_DWORD)v3 != 517 )
    {
      if ( (_DWORD)v3 == 512 )
        a2 = *(LARGE_INTEGER **)(a1 + 96);
      goto LABEL_23;
    }
    v12 = 2;
  }
  v13 = ~v12;
  a2 = *(LARGE_INTEGER **)(a1 + 96);
  v14 = (v13 & *(_BYTE *)(a1 + 104)) == 0;
  *(_BYTE *)(a1 + 104) &= v13;
  if ( v14 )
    HMAssignmentUnlock(a1 + 96);
LABEL_23:
  InputDelegate = (struct tagTHREADINFO *)GetInputDelegate((__int64)a2, v10);
  v16 = InputDelegate;
  if ( InputDelegate )
  {
    vAdjustDelegatePriority(InputDelegate);
    a1 = *((_QWORD *)v16 + 49);
    v6 = 1;
    v43 = v16;
  }
  v17 = *(_QWORD *)(a1 + 8);
  if ( (*(_DWORD *)(a1 + 332) & 1) != 0 )
    PostUpdateKeyStateEvent(a1);
  v18 = v50;
  if ( (v50 & 1) != 0 || !v17 || (*(_DWORD *)(v17 + 92) & 2) != 0 )
    v17 = 0LL;
  if ( v17 && ((_DWORD)v3 == 512 || (_DWORD)v3 == 522 || (_DWORD)v3 == 526) )
  {
    CoalesceableMouseMessage = GetCoalesceableMouseMessage(v3, (unsigned __int64 *)va, (struct tagQMSG *)v17, v9);
    v20 = (__int64)CoalesceableMouseMessage;
    if ( CoalesceableMouseMessage )
    {
      CleanInputMessage((unsigned int)v3, CoalesceableMouseMessage);
      goto LABEL_37;
    }
  }
  result = (__int64)AllocQEntry(a1);
  v20 = result;
  if ( result )
  {
LABEL_37:
    *(_DWORD *)(v20 + 92) ^= (*(_DWORD *)(v20 + 92) ^ (32 * v6)) & 0x20;
    v21 = LogicalQmsgCursorPos(a2, a1);
    v42 = v18;
    LowPart = v46.LowPart;
    StoreQMessage(
      (LARGE_INTEGER *)v20,
      a2,
      v3,
      (LARGE_INTEGER)v44,
      v46,
      v47,
      v48,
      0,
      v49,
      v42,
      (DWORD *)v9,
      v21,
      v53,
      v54);
    if ( (unsigned int)IsPointerInputMessageWithState((unsigned int)v3, v23, v24, v25) )
    {
      PointerFrameList::SetPointerInfoNodeMessagePosted(
        *(PointerFrameList **)(v20 + 40),
        *(unsigned int *)(v20 + 24),
        -__CFSHR__(*(_DWORD *)(v20 + 92), 6),
        v26);
      v27 = *(_QWORD *)(v20 + 40);
      _InterlockedIncrement((volatile signed __int32 *)(v27 + 24));
      ++*(_BYTE *)(v27 + 50);
    }
    if ( IsMiPMouseMessage(v3) )
    {
      if ( v9 )
      {
        if ( (unsigned int)IsGenuineMouseInput(v9) )
        {
          *(_DWORD *)(v20 + 92) |= 0x400u;
          v32 = (InputTransform *)a2;
          if ( a2
            || (LODWORD(v51) = (__int16)LowPart,
                HIDWORD(v51) = SHIWORD(LowPart),
                (v32 = DetermineInputTarget((__int64 *)va1, v28, (((_DWORD)v3 - 522) & 0xFFFFFFFB) == 0, 0LL)) != 0LL) )
          {
            *(_DWORD *)(v20 + 92) ^= (*(_DWORD *)(v20 + 92) ^ ((unsigned int)InputTransform::OnInput(
                                                                               v32,
                                                                               *(struct tagWND **)(v20 + 120),
                                                                               v30,
                                                                               v31) << 12)) & 0x1000;
          }
        }
      }
    }
    if ( !gfShellFrameHangResilient )
      goto LABEL_74;
    if ( v11 )
      goto LABEL_74;
    if ( *(_DWORD *)(a1 + 336) <= 1u )
      goto LABEL_74;
    v29 = gptiCurrent;
    v33 = *(_QWORD *)(gptiCurrent + 424LL);
    if ( *(_QWORD *)(v33 + 40) || *(_QWORD *)(v33 + 48) )
      goto LABEL_74;
    v34 = 0;
    if ( a2 && (QuadPart = a2[2].QuadPart, a2 == *(LARGE_INTEGER **)(QuadPart + 1232)) )
    {
      v34 = 1;
    }
    else
    {
      v37 = *(_QWORD *)(a1 + 80);
      if ( !v37 )
        goto LABEL_74;
      QuadPart = *(_QWORD *)(v37 + 16);
      if ( v37 != *(_QWORD *)(QuadPart + 1232) )
        goto LABEL_74;
    }
    if ( !QuadPart || IsAdaptiveQueueDetachExempted((_QWORD *)QuadPart) )
    {
LABEL_74:
      if ( (unsigned int)(v3 - 513) <= 0xD && (v29 = 8707LL, _bittest((const int *)&v29, v3 - 513))
        || (unsigned int)(v3 - 256) <= 1 )
      {
        v41 = (void *)ReferenceDwmApiPort(v29, v28, v30, v31);
        DwmAsyncNotifyInputActivity(v41);
      }
      goto LABEL_78;
    }
    if ( (_DWORD)v3 == 260 )
      goto LABEL_67;
    if ( (unsigned int)(v3 - 513) <= 6 )
    {
      v29 = 73LL;
      if ( _bittest((const int *)&v29, v3 - 513) )
        goto LABEL_67;
    }
    if ( (unsigned int)v3 <= 0x209 )
      goto LABEL_74;
    if ( (unsigned int)v3 <= 0x20B || (_DWORD)v3 == 526 )
    {
LABEL_67:
      LogMDAQueueOp(0xBAu, v3, QuadPart, 1u);
      KeSetEvent(*(PRKEVENT *)(QuadPart + 1224), 1, 0);
      goto LABEL_74;
    }
    v28 = 581LL;
    if ( (_DWORD)v3 != 581 )
    {
      if ( (_DWORD)v3 != 582 )
        goto LABEL_74;
      goto LABEL_67;
    }
    if ( v34 )
    {
      v38 = a2[2].QuadPart;
      LogMDAQueueOp(0xBCu, 581LL, v38, 1u);
      v39 = *(struct _KEVENT **)(v38 + 1224);
    }
    else
    {
      v40 = *(_DWORD **)(QuadPart + 600);
      if ( !v40 || (v40[45] & 0x100000) == 0 )
        goto LABEL_78;
      LogMDAQueueOp(0xBEu, (unsigned int)v40[78], (unsigned int)v40[77], 1u);
      v39 = *(struct _KEVENT **)(QuadPart + 1224);
    }
    KeSetEvent(v39, 1, 0);
LABEL_78:
    WakeSomeone(a1, v43, (unsigned int)v3, v20);
    return 1LL;
  }
  return result;
}
