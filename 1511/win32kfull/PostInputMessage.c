/*
 * XREFs of PostInputMessage @ 0x1C0064D5C
 * Callers:
 *     ?PostRawMouseInput@@YAHPEAUtagQ@@KPEAXPEAU_MOUSE_INPUT_DATA@@@Z @ 0x1C00021AC (-PostRawMouseInput@@YAHPEAUtagQ@@KPEAXPEAU_MOUSE_INPUT_DATA@@@Z.c)
 *     ?PostRawKeyboardInputToSinks@@YAXKPEAXPEAU_KEYBOARD_INPUT_DATA@@IGH@Z @ 0x1C0002560 (-PostRawKeyboardInputToSinks@@YAXKPEAXPEAU_KEYBOARD_INPUT_DATA@@IGH@Z.c)
 *     ?PostRawKeyboardInputToForeground@@YAHPEAU_RAW_INPUT_FOREGROUND_TARGET@@KPEAXPEAU_KEYBOARD_INPUT_DATA@@IG@Z @ 0x1C000276C (-PostRawKeyboardInputToForeground@@YAHPEAU_RAW_INPUT_FOREGROUND_TARGET@@KPEAXPEAU_KEYBOARD_INPUT.c)
 *     PostMoveToPwnd @ 0x1C0065C2C (PostMoveToPwnd.c)
 *     xxxKeyEvent @ 0x1C008345C (xxxKeyEvent.c)
 *     xxxButtonEvent @ 0x1C0085B2C (xxxButtonEvent.c)
 *     ?xxxDoButtonEvent@@YAXPEAUtagMOUSEEVENT@@@Z @ 0x1C00874E8 (-xxxDoButtonEvent@@YAXPEAUtagMOUSEEVENT@@@Z.c)
 *     ?PostHidNotification@@YAHPEAUtagPROCESS_HID_REQUEST@@PEAUDEVICEINFO@@I_K@Z @ 0x1C008A23C (-PostHidNotification@@YAHPEAUtagPROCESS_HID_REQUEST@@PEAUDEVICEINFO@@I_K@Z.c)
 *     PostPointerEventMessage @ 0x1C0110BB0 (PostPointerEventMessage.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0142CB0 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?PostHidInput@@YAHPEAUDEVICEINFO@@PEAUtagQ@@PEAUtagWND@@_K@Z @ 0x1C01D43F0 (-PostHidInput@@YAHPEAUDEVICEINFO@@PEAUtagQ@@PEAUtagWND@@_K@Z.c)
 *     ?FinalizeKoreanImeCompStrOnMouseClick@@YAXPEAUtagWND@@@Z @ 0x1C01D855C (-FinalizeKoreanImeCompStrOnMouseClick@@YAXPEAUtagWND@@@Z.c)
 *     ?GeneratePointerMessage@@YAHPEBUtagPOINTERINFONODE@@_KIKHHPEAUHWND__@@@Z @ 0x1C01F7CA4 (-GeneratePointerMessage@@YAHPEBUtagPOINTERINFONODE@@_KIKHHPEAUHWND__@@@Z.c)
 *     ?DelegateMoveSizeToShell@@YAXPEAUtagWND@@I@Z @ 0x1C0202548 (-DelegateMoveSizeToShell@@YAXPEAUtagWND@@I@Z.c)
 * Callees:
 *     IsAdaptiveQueueDetachExempted @ 0x1C0001CBC (IsAdaptiveQueueDetachExempted.c)
 *     ?vAdjustDelegatePriority@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C000D760 (-vAdjustDelegatePriority@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     WakeSomeone @ 0x1C0051C7C (WakeSomeone.c)
 *     LogicalQmsgCursorPos @ 0x1C0053D48 (LogicalQmsgCursorPos.c)
 *     AllocQEntry @ 0x1C0057810 (AllocQEntry.c)
 *     CalcWakeMask @ 0x1C005AAD0 (CalcWakeMask.c)
 *     StoreQMessage @ 0x1C0060180 (StoreQMessage.c)
 *     ?IsMiPMouseMessage@@YAHI@Z @ 0x1C0065214 (-IsMiPMouseMessage@@YAHI@Z.c)
 *     IsPointerInputMessageWithState @ 0x1C00652DC (IsPointerInputMessageWithState.c)
 *     GetInputDelegate @ 0x1C006531C (GetInputDelegate.c)
 *     ?IsGenuineMouseInput@@YAHPEBUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C0065430 (-IsGenuineMouseInput@@YAHPEBUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 *     DetermineInputTarget @ 0x1C0066180 (DetermineInputTarget.c)
 *     PostUpdateKeyStateEvent @ 0x1C0093FF8 (PostUpdateKeyStateEvent.c)
 *     DwmAsyncNotifyInputActivity @ 0x1C00F3DD0 (DwmAsyncNotifyInputActivity.c)
 *     ?GetCoalesceableMouseMessage@@YAPEAUtagQMSG@@IPEA_KPEAU1@PEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C00F3EA0 (-GetCoalesceableMouseMessage@@YAPEAUtagQMSG@@IPEA_KPEAU1@PEAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 *     ?OnInput@InputTransform@@YAHPEAUtagWND@@_KPEBUtagINPUT_TRANSFORM@@@Z @ 0x1C00F4384 (-OnInput@InputTransform@@YAHPEAUtagWND@@_KPEBUtagINPUT_TRANSFORM@@@Z.c)
 *     CleanInputMessage @ 0x1C01039F0 (CleanInputMessage.c)
 *     ?SetPointerInfoNodeMessagePosted@PointerFrameList@@YAH_KIH@Z @ 0x1C023047C (-SetPointerInfoNodeMessagePosted@PointerFrameList@@YAH_KIH@Z.c)
 */

__int64 PostInputMessage(__int64 a1, __int64 a2, unsigned int a3, ...)
{
  int v6; // r12d
  unsigned int v7; // eax
  __int64 v8; // r9
  struct tagINPUT_MESSAGE_SOURCE *v9; // r14
  unsigned int v10; // r15d
  int v11; // r13d
  char v12; // al
  unsigned __int8 v13; // al
  bool v14; // zf
  PETHREAD *InputDelegate; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  PETHREAD *v19; // rsi
  __int64 v20; // rsi
  char v21; // r15
  struct tagQMSG *CoalesceableMouseMessage; // rax
  __int64 v23; // rsi
  LONGLONG v24; // rax
  DWORD LowPart; // r15d
  int v26; // r9d
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  unsigned __int64 v30; // r8
  const struct tagINPUT_TRANSFORM *v31; // r9
  InputTransform *v32; // rax
  __int64 v33; // rax
  int v34; // r15d
  __int64 v35; // r14
  __int64 result; // rax
  __int64 v37; // rax
  struct _KEVENT *v38; // rcx
  __int64 v39; // rax
  void *v40; // rax
  char v41; // [rsp+48h] [rbp-60h]
  __int64 v42; // [rsp+B0h] [rbp+8h]
  unsigned __int64 v43; // [rsp+C8h] [rbp+20h] BYREF
  va_list va; // [rsp+C8h] [rbp+20h]
  LARGE_INTEGER v45; // [rsp+D0h] [rbp+28h]
  __int64 v46; // [rsp+D8h] [rbp+30h]
  __int64 v47; // [rsp+E0h] [rbp+38h]
  LARGE_INTEGER v48; // [rsp+E8h] [rbp+40h]
  __int64 v49; // [rsp+F0h] [rbp+48h]
  struct tagINPUT_MESSAGE_SOURCE *v50; // [rsp+F8h] [rbp+50h] BYREF
  va_list va1; // [rsp+F8h] [rbp+50h]
  LARGE_INTEGER v52; // [rsp+100h] [rbp+58h]
  LARGE_INTEGER *v53; // [rsp+108h] [rbp+60h]
  va_list va2; // [rsp+110h] [rbp+68h] BYREF

  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v43 = va_arg(va1, _QWORD);
  v45.QuadPart = va_arg(va1, _QWORD);
  v46 = va_arg(va1, _QWORD);
  v47 = va_arg(va1, _QWORD);
  v48.QuadPart = va_arg(va1, _QWORD);
  v49 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v50 = va_arg(va2, struct tagINPUT_MESSAGE_SOURCE *);
  v52.QuadPart = va_arg(va2, _QWORD);
  v53 = va_arg(va2, LARGE_INTEGER *);
  v6 = 0;
  v7 = CalcWakeMask(a3, a3, 0);
  v9 = v50;
  v10 = v7;
  v42 = v8;
  if ( !v50 || (v11 = v8 + 1, *((_DWORD *)v50 + 1) != 2) )
    v11 = v8;
  if ( (a3 == 513 || a3 == 516)
    && a2
    && (*(_DWORD *)(a2 + 320) & 6) != 0
    && *(_QWORD *)(*(_QWORD *)(a2 + 16) + 1096LL) == v8
    && v50
    && ((*(_DWORD *)v50 - 2) & 0xFFFFFFEF) == 0 )
  {
    if ( *(_QWORD *)(a1 + 96) == v8 )
      HMAssignmentLock(a1 + 96, a2);
    *(_BYTE *)(a1 + 104) |= (a3 != 513) + 1;
    goto LABEL_23;
  }
  if ( !*(_QWORD *)(a1 + 96) )
    goto LABEL_23;
  if ( a3 == 514 )
  {
    v12 = 1;
  }
  else
  {
    if ( a3 != 517 )
    {
      if ( a3 == 512 )
        a2 = *(_QWORD *)(a1 + 96);
      goto LABEL_23;
    }
    v12 = 2;
  }
  v13 = ~v12;
  a2 = *(_QWORD *)(a1 + 96);
  v14 = (v13 & *(_BYTE *)(a1 + 104)) == 0;
  *(_BYTE *)(a1 + 104) &= v13;
  if ( v14 )
    HMAssignmentUnlock(a1 + 96);
LABEL_23:
  InputDelegate = (PETHREAD *)GetInputDelegate(a2, v10);
  v19 = InputDelegate;
  if ( InputDelegate )
  {
    vAdjustDelegatePriority(InputDelegate);
    a1 = (__int64)v19[48];
    v6 = 1;
    v42 = (__int64)v19;
  }
  v20 = *(_QWORD *)(a1 + 8);
  if ( (*(_DWORD *)(a1 + 332) & 1) != 0 )
    PostUpdateKeyStateEvent(a1, v16, v17, v18);
  v21 = v49;
  if ( (v49 & 1) != 0 || !v20 || (*(_DWORD *)(v20 + 92) & 2) != 0 )
    v20 = 0LL;
  if ( v20 && (a3 == 512 || a3 == 522 || a3 == 526) )
  {
    CoalesceableMouseMessage = GetCoalesceableMouseMessage(a3, (unsigned __int64 *)va, (struct tagQMSG *)v20, v9);
    v23 = (__int64)CoalesceableMouseMessage;
    if ( CoalesceableMouseMessage )
    {
      CleanInputMessage(a3, CoalesceableMouseMessage);
      goto LABEL_37;
    }
  }
  result = (__int64)AllocQEntry(a1);
  v23 = result;
  if ( result )
  {
LABEL_37:
    *(_DWORD *)(v23 + 92) ^= (*(_DWORD *)(v23 + 92) ^ (32 * v6)) & 0x20;
    v24 = LogicalQmsgCursorPos(a2, a1);
    v41 = v21;
    LowPart = v45.LowPart;
    StoreQMessage(
      (LARGE_INTEGER *)v23,
      (InputTransform *)a2,
      a3,
      (LARGE_INTEGER)v43,
      v45,
      v46,
      v47,
      0,
      v48,
      v41,
      (DWORD *)v9,
      v24,
      v52,
      v53);
    if ( (unsigned int)IsPointerInputMessageWithState(a3) )
    {
      PointerFrameList::SetPointerInfoNodeMessagePosted(
        *(PointerFrameList **)(v23 + 40),
        *(unsigned int *)(v23 + 24),
        -__CFSHR__(*(_DWORD *)(v23 + 92), 6),
        v26);
      v27 = *(_QWORD *)(v23 + 40);
      _InterlockedIncrement((volatile signed __int32 *)(v27 + 24));
      ++*(_BYTE *)(v27 + 50);
    }
    if ( (unsigned int)IsMiPMouseMessage(a3) )
    {
      if ( v9 )
      {
        if ( (unsigned int)IsGenuineMouseInput(v9) )
        {
          *(_DWORD *)(v23 + 92) |= 0x400u;
          v32 = (InputTransform *)a2;
          if ( a2
            || (LODWORD(v50) = (__int16)LowPart,
                HIDWORD(v50) = SHIWORD(LowPart),
                (v32 = (InputTransform *)DetermineInputTarget(
                                           (unsigned int)va1,
                                           v28,
                                           ((a3 - 522) & 0xFFFFFFFB) == 0,
                                           0,
                                           *(_QWORD *)(v23 + 120))) != 0LL) )
          {
            *(_DWORD *)(v23 + 92) ^= (*(_DWORD *)(v23 + 92) ^ ((unsigned int)InputTransform::OnInput(
                                                                               v32,
                                                                               *(struct tagWND **)(v23 + 120),
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
    v33 = *(_QWORD *)(gptiCurrent + 416LL);
    if ( *(_QWORD *)(v33 + 40) || *(_QWORD *)(v33 + 48) )
      goto LABEL_74;
    v34 = 0;
    if ( a2 && (v35 = *(_QWORD *)(a2 + 16), a2 == *(_QWORD *)(v35 + 1224)) )
    {
      v34 = 1;
    }
    else
    {
      v37 = *(_QWORD *)(a1 + 80);
      if ( !v37 )
        goto LABEL_74;
      v35 = *(_QWORD *)(v37 + 16);
      if ( v37 != *(_QWORD *)(v35 + 1224) )
        goto LABEL_74;
    }
    if ( !v35 || IsAdaptiveQueueDetachExempted(v35) )
    {
LABEL_74:
      if ( a3 - 513 <= 0xD && (v29 = 8707LL, _bittest((const int *)&v29, a3 - 513)) || a3 - 256 <= 1 )
      {
        v40 = (void *)ReferenceDwmApiPort(v29, v28, v30, v31);
        DwmAsyncNotifyInputActivity(v40);
      }
      goto LABEL_78;
    }
    if ( a3 == 260 )
      goto LABEL_67;
    if ( a3 - 513 <= 6 )
    {
      v29 = 73LL;
      if ( _bittest((const int *)&v29, a3 - 513) )
        goto LABEL_67;
    }
    if ( a3 <= 0x209 )
      goto LABEL_74;
    if ( a3 <= 0x20B || a3 == 526 )
    {
LABEL_67:
      KeSetEvent(*(PRKEVENT *)(v35 + 1216), 1, 0);
      goto LABEL_74;
    }
    if ( a3 != 581 )
    {
      if ( a3 != 582 )
        goto LABEL_74;
      goto LABEL_67;
    }
    if ( v34 )
    {
      v38 = *(struct _KEVENT **)(*(_QWORD *)(a2 + 16) + 1216LL);
    }
    else
    {
      v39 = *(_QWORD *)(v35 + 592);
      if ( !v39 || (*(_DWORD *)(v39 + 180) & 0x100000) == 0 )
        goto LABEL_78;
      v38 = *(struct _KEVENT **)(v35 + 1216);
    }
    KeSetEvent(v38, 1, 0);
LABEL_78:
    WakeSomeone((_QWORD *)a1, v42, a3, v23);
    return 1LL;
  }
  return result;
}
