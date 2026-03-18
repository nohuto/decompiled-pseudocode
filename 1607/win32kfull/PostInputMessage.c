/*
 * XREFs of PostInputMessage @ 0x1C005816C
 * Callers:
 *     ?PostRawMouseInput@@YAHPEAUtagQ@@KPEAXPEAU_MOUSE_INPUT_DATA@@@Z @ 0x1C00072B4 (-PostRawMouseInput@@YAHPEAUtagQ@@KPEAXPEAU_MOUSE_INPUT_DATA@@@Z.c)
 *     ?PostRawKeyboardInputToForeground@@YAHPEAU_RAW_INPUT_FOREGROUND_TARGET@@KPEAXPEAU_KEYBOARD_INPUT_DATA@@IG@Z @ 0x1C0007640 (-PostRawKeyboardInputToForeground@@YAHPEAU_RAW_INPUT_FOREGROUND_TARGET@@KPEAXPEAU_KEYBOARD_INPUT.c)
 *     ?PostRawKeyboardInputToSinks@@YAXKPEAXPEAU_KEYBOARD_INPUT_DATA@@IGH@Z @ 0x1C0007730 (-PostRawKeyboardInputToSinks@@YAXKPEAXPEAU_KEYBOARD_INPUT_DATA@@IGH@Z.c)
 *     PostMoveToPwnd @ 0x1C0056F40 (PostMoveToPwnd.c)
 *     xxxKeyEvent @ 0x1C00A2818 (xxxKeyEvent.c)
 *     ?xxxDoButtonEvent@@YAXPEAUtagMOUSEEVENT@@@Z @ 0x1C00DD764 (-xxxDoButtonEvent@@YAXPEAUtagMOUSEEVENT@@@Z.c)
 *     xxxButtonEvent @ 0x1C00DDEA4 (xxxButtonEvent.c)
 *     ?PostHidNotification@@YAHPEAUtagPROCESS_HID_REQUEST@@PEAUDEVICEINFO@@I_K@Z @ 0x1C00E275C (-PostHidNotification@@YAHPEAUtagPROCESS_HID_REQUEST@@PEAUDEVICEINFO@@I_K@Z.c)
 *     PostPointerEventMessage @ 0x1C00E4A50 (PostPointerEventMessage.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0148844 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?PostHidInput@@YAHPEAUDEVICEINFO@@PEAUtagQ@@PEAUtagWND@@_K@Z @ 0x1C01CBFDC (-PostHidInput@@YAHPEAUDEVICEINFO@@PEAUtagQ@@PEAUtagWND@@_K@Z.c)
 *     ?FinalizeKoreanImeCompStrOnMouseClick@@YAXPEAUtagWND@@@Z @ 0x1C01CF5E8 (-FinalizeKoreanImeCompStrOnMouseClick@@YAXPEAUtagWND@@@Z.c)
 *     ?GeneratePointerMessage@@YAHPEBUtagPOINTERINFONODE@@_KIKHHPEAUHWND__@@@Z @ 0x1C01EEE90 (-GeneratePointerMessage@@YAHPEBUtagPOINTERINFONODE@@_KIKHHPEAUHWND__@@@Z.c)
 *     ?DelegateMoveSizeToShell@@YAXPEAUtagWND@@I@Z @ 0x1C01F9864 (-DelegateMoveSizeToShell@@YAXPEAUtagWND@@I@Z.c)
 * Callees:
 *     IsAdaptiveQueueDetachExempted @ 0x1C0006EE0 (IsAdaptiveQueueDetachExempted.c)
 *     GetInputDelegate @ 0x1C005804C (GetInputDelegate.c)
 *     IsPointerInputMessageWithState @ 0x1C005810C (IsPointerInputMessageWithState.c)
 *     ?IsMiPMouseMessage@@YAHI@Z @ 0x1C005814C (-IsMiPMouseMessage@@YAHI@Z.c)
 *     DetermineInputTarget @ 0x1C0058B9C (DetermineInputTarget.c)
 *     ?vAdjustDelegatePriority@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C0059BA0 (-vAdjustDelegatePriority@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     WakeSomeone @ 0x1C005B3C4 (WakeSomeone.c)
 *     LogicalQmsgCursorPos @ 0x1C005C314 (LogicalQmsgCursorPos.c)
 *     AllocQEntry @ 0x1C005C498 (AllocQEntry.c)
 *     ?IsGenuineMouseInput@@YAHPEBUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C005DA08 (-IsGenuineMouseInput@@YAHPEBUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 *     StoreQMessage @ 0x1C0080C10 (StoreQMessage.c)
 *     CalcWakeMask @ 0x1C0082590 (CalcWakeMask.c)
 *     PostUpdateKeyStateEvent @ 0x1C0096168 (PostUpdateKeyStateEvent.c)
 *     ?GetCoalesceableMouseMessage@@YAPEAUtagQMSG@@IPEA_KPEAU1@PEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C0112E00 (-GetCoalesceableMouseMessage@@YAPEAUtagQMSG@@IPEA_KPEAU1@PEAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 *     ?OnInput@InputTransform@@YAHPEAUtagWND@@_KPEBUtagINPUT_TRANSFORM@@@Z @ 0x1C0113860 (-OnInput@InputTransform@@YAHPEAUtagWND@@_KPEBUtagINPUT_TRANSFORM@@@Z.c)
 *     DwmAsyncNotifyInputActivity @ 0x1C0114008 (DwmAsyncNotifyInputActivity.c)
 *     CleanInputMessage @ 0x1C0123990 (CleanInputMessage.c)
 *     ?SetPointerInfoNodeMessagePosted@PointerFrameList@@YAH_KIH@Z @ 0x1C01C185C (-SetPointerInfoNodeMessagePosted@PointerFrameList@@YAH_KIH@Z.c)
 */

__int64 PostInputMessage(__int64 a1, __int64 a2, unsigned int a3, ...)
{
  int v6; // r12d
  int v7; // eax
  struct tagTHREADINFO *v8; // r9
  struct tagINPUT_MESSAGE_SOURCE *v9; // r14
  int v10; // r15d
  int v11; // r13d
  char v12; // si
  char v13; // al
  unsigned __int8 v14; // al
  bool v15; // zf
  struct tagTHREADINFO *InputDelegate; // rax
  struct tagTHREADINFO *v17; // rsi
  __int64 v18; // rsi
  int v19; // r15d
  struct tagQMSG *CoalesceableMouseMessage; // rax
  __int64 v21; // rsi
  __int64 v22; // rax
  int v23; // r15d
  __int64 v24; // rdx
  int v25; // r9d
  __int64 v26; // rax
  __int64 result; // rax
  int v28; // edx
  unsigned __int64 v29; // r8
  const struct tagINPUT_TRANSFORM *v30; // r9
  int v31; // r10d
  InputTransform *v32; // rax
  int v33; // r8d
  __int64 v34; // rax
  int v35; // r15d
  __int64 v36; // r14
  __int64 v37; // rax
  int v38; // ecx
  struct _KEVENT *v39; // rcx
  __int64 v40; // rax
  int v41; // ecx
  void *v42; // rax
  int v43; // [rsp+48h] [rbp-60h]
  struct tagTHREADINFO *v44; // [rsp+B0h] [rbp+8h]
  unsigned __int64 v45; // [rsp+C8h] [rbp+20h] BYREF
  va_list va; // [rsp+C8h] [rbp+20h]
  __int64 v47; // [rsp+D0h] [rbp+28h]
  __int64 v48; // [rsp+D8h] [rbp+30h]
  __int64 v49; // [rsp+E0h] [rbp+38h]
  __int64 v50; // [rsp+E8h] [rbp+40h]
  __int64 v51; // [rsp+F0h] [rbp+48h]
  struct tagINPUT_MESSAGE_SOURCE *v52; // [rsp+F8h] [rbp+50h] BYREF
  va_list va1; // [rsp+F8h] [rbp+50h]
  __int64 v54; // [rsp+100h] [rbp+58h]
  __int64 v55; // [rsp+108h] [rbp+60h]
  va_list va2; // [rsp+110h] [rbp+68h] BYREF

  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v45 = va_arg(va1, _QWORD);
  v47 = va_arg(va1, _QWORD);
  v48 = va_arg(va1, _QWORD);
  v49 = va_arg(va1, _QWORD);
  v50 = va_arg(va1, _QWORD);
  v51 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v52 = va_arg(va2, struct tagINPUT_MESSAGE_SOURCE *);
  v54 = va_arg(va2, _QWORD);
  v55 = va_arg(va2, _QWORD);
  v6 = 0;
  v7 = CalcWakeMask(a3, a3, 0LL);
  v9 = v52;
  v44 = v8;
  v10 = v7;
  if ( !v52 || (v11 = (_DWORD)v8 + 1, *((_DWORD *)v52 + 1) != 2) )
    v11 = (int)v8;
  if ( (a3 == 513 || a3 == 516)
    && a2
    && (*(_DWORD *)(a2 + 320) & 6) != 0
    && *(struct tagTHREADINFO **)(*(_QWORD *)(a2 + 16) + 1120LL) == v8
    && v52
    && ((*(_DWORD *)v52 - 2) & 0xFFFFFFEF) == 0 )
  {
    v12 = (_BYTE)v8 + 1 + (a3 != 513);
    if ( *(struct tagTHREADINFO **)(a1 + 104) == v8 )
      HMAssignmentLock(a1 + 104, a2);
    *(_BYTE *)(a1 + 112) |= v12;
    goto LABEL_23;
  }
  if ( !*(_QWORD *)(a1 + 104) )
    goto LABEL_23;
  if ( a3 == 514 )
  {
    v13 = (_BYTE)v8 + 1;
  }
  else
  {
    if ( a3 != 517 )
    {
      if ( a3 == 512 )
        a2 = *(_QWORD *)(a1 + 104);
      goto LABEL_23;
    }
    v13 = 2;
  }
  v14 = ~v13;
  a2 = *(_QWORD *)(a1 + 104);
  v15 = (v14 & *(_BYTE *)(a1 + 112)) == 0;
  *(_BYTE *)(a1 + 112) &= v14;
  if ( v15 )
    HMAssignmentUnlock(a1 + 104);
LABEL_23:
  InputDelegate = (struct tagTHREADINFO *)GetInputDelegate(a2, v10);
  v17 = InputDelegate;
  if ( InputDelegate )
  {
    vAdjustDelegatePriority(InputDelegate);
    a1 = *((_QWORD *)v17 + 48);
    v6 = 1;
    v44 = v17;
  }
  v18 = *(_QWORD *)(a1 + 8);
  if ( (*(_DWORD *)(a1 + 340) & 1) != 0 )
    PostUpdateKeyStateEvent(a1);
  v19 = v51;
  if ( (v51 & 1) != 0 || !v18 || (*(_DWORD *)(v18 + 100) & 2) != 0 )
    v18 = 0LL;
  if ( v18 && (a3 == 512 || a3 == 522 || a3 == 526) )
  {
    CoalesceableMouseMessage = GetCoalesceableMouseMessage(a3, (unsigned __int64 *)va, (struct tagQMSG *)v18, v9);
    v21 = (__int64)CoalesceableMouseMessage;
    if ( CoalesceableMouseMessage )
    {
      CleanInputMessage(a3, CoalesceableMouseMessage);
      goto LABEL_37;
    }
  }
  result = AllocQEntry(a1);
  v21 = result;
  if ( result )
  {
LABEL_37:
    *(_DWORD *)(v21 + 100) ^= (*(_DWORD *)(v21 + 100) ^ (32 * v6)) & 0x20;
    v22 = LogicalQmsgCursorPos(a2, a1);
    v43 = v19;
    v23 = v47;
    StoreQMessage(v21, a2, a3, v45, v47, v48, v49, 0, v50, v43, v9, v22, v54, v55);
    if ( (unsigned int)IsPointerInputMessageWithState(a3, v24) )
    {
      PointerFrameList::SetPointerInfoNodeMessagePosted(
        *(PointerFrameList **)(v21 + 40),
        *(unsigned int *)(v21 + 24),
        -__CFSHR__(*(_DWORD *)(v21 + 100), 6),
        v25);
      v26 = *(_QWORD *)(v21 + 40);
      _InterlockedAdd((volatile signed __int32 *)(v26 + 24), 1u);
      ++*(_BYTE *)(v26 + 50);
    }
    if ( IsMiPMouseMessage(a3) && v9 && (unsigned int)IsGenuineMouseInput(v9) )
    {
      *(_DWORD *)(v21 + 100) |= 0x400u;
      v32 = (InputTransform *)a2;
      if ( a2 )
        goto LABEL_50;
      v33 = 0;
      if ( ((a3 - 522) & 0xFFFFFFFB) == 0 )
        v33 = v31;
      if ( a3 == 513 )
        v33 |= 2u;
      LODWORD(v52) = (__int16)v23;
      HIDWORD(v52) = SHIWORD(v23);
      v32 = (InputTransform *)DetermineInputTarget((unsigned int)va1, v28, v33, 0, *(_QWORD *)(v21 + 128));
      if ( v32 )
LABEL_50:
        *(_DWORD *)(v21 + 100) ^= (*(_DWORD *)(v21 + 100) ^ ((unsigned int)InputTransform::OnInput(
                                                                             v32,
                                                                             *(struct tagWND **)(v21 + 128),
                                                                             v29,
                                                                             v30) << 12)) & 0x1000;
    }
    if ( !gfShellFrameHangResilient )
      goto LABEL_78;
    if ( v11 )
      goto LABEL_78;
    if ( *(_DWORD *)(a1 + 344) <= 1u )
      goto LABEL_78;
    v34 = *(_QWORD *)(gptiCurrent + 416LL);
    if ( *(_QWORD *)(v34 + 40) || *(_QWORD *)(v34 + 48) )
      goto LABEL_78;
    v35 = 0;
    if ( a2 && (v36 = *(_QWORD *)(a2 + 16), a2 == *(_QWORD *)(v36 + 1248)) )
    {
      v35 = 1;
    }
    else
    {
      v37 = *(_QWORD *)(a1 + 88);
      if ( !v37 )
        goto LABEL_78;
      v36 = *(_QWORD *)(v37 + 16);
      if ( v37 != *(_QWORD *)(v36 + 1248) )
        goto LABEL_78;
    }
    if ( !v36 || IsAdaptiveQueueDetachExempted(v36) )
    {
LABEL_78:
      if ( a3 - 513 <= 0xD && (v41 = 8707, _bittest(&v41, a3 - 513)) || a3 - 256 <= 1 )
      {
        v42 = (void *)ReferenceDwmApiPort();
        DwmAsyncNotifyInputActivity(v42);
      }
      goto LABEL_82;
    }
    if ( a3 == 260 )
      goto LABEL_71;
    if ( a3 - 513 <= 6 )
    {
      v38 = 73;
      if ( _bittest(&v38, a3 - 513) )
        goto LABEL_71;
    }
    if ( a3 <= 0x209 )
      goto LABEL_78;
    if ( a3 <= 0x20B || a3 == 526 )
    {
LABEL_71:
      KeSetEvent(*(PRKEVENT *)(v36 + 1240), 1, 0);
      goto LABEL_78;
    }
    if ( a3 != 581 )
    {
      if ( a3 != 582 )
        goto LABEL_78;
      goto LABEL_71;
    }
    if ( v35 )
    {
      v39 = *(struct _KEVENT **)(*(_QWORD *)(a2 + 16) + 1240LL);
    }
    else
    {
      v40 = *(_QWORD *)(v36 + 592);
      if ( !v40 || (*(_DWORD *)(v40 + 180) & 0x100000) == 0 )
        goto LABEL_82;
      v39 = *(struct _KEVENT **)(v36 + 1240);
    }
    KeSetEvent(v39, 1, 0);
LABEL_82:
    WakeSomeone(a1, v44, a3, v21);
    return 1LL;
  }
  return result;
}
