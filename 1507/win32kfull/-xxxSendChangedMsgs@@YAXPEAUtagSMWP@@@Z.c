/*
 * XREFs of ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C00665FC
 * Callers:
 *     xxxEndDeferWindowPosEx @ 0x1C00634F0 (xxxEndDeferWindowPosEx.c)
 * Callees:
 *     LogMDAQueueOp @ 0x1C00433CC (LogMDAQueueOp.c)
 *     ?xxxImeWindowPosChanged@@YAXPEAUtagSMWP@@@Z @ 0x1C0062824 (-xxxImeWindowPosChanged@@YAXPEAUtagSMWP@@@Z.c)
 *     GetWindowCloakState @ 0x1C0065D00 (GetWindowCloakState.c)
 *     CalcWindowFullScreen @ 0x1C006601C (CalcWindowFullScreen.c)
 *     ?PostIAMPosChangedNotification@@YAXPEAUtagCVR@@PEAUtagWND@@@Z @ 0x1C0066904 (-PostIAMPosChangedNotification@@YAXPEAUtagCVR@@PEAUtagWND@@@Z.c)
 *     HMValidateHandleNoSecure @ 0x1C0066B04 (HMValidateHandleNoSecure.c)
 *     ?IsStillWindowC@@YAHPEAUHWND__@@@Z @ 0x1C0067710 (-IsStillWindowC@@YAHPEAUHWND__@@@Z.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0069380 (xxxSendTransformableMessageTimeout.c)
 *     xxxWindowEvent @ 0x1C0070F10 (xxxWindowEvent.c)
 *     xxxNotifyMonitorChanged @ 0x1C007E314 (xxxNotifyMonitorChanged.c)
 *     WindowHasShadow @ 0x1C0081968 (WindowHasShadow.c)
 *     ?FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z @ 0x1C0081990 (-FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z.c)
 *     IsWindowSubjectToShellWindowBehavior @ 0x1C0081EAC (IsWindowSubjectToShellWindowBehavior.c)
 *     xxxRemoveShadow @ 0x1C008B8B8 (xxxRemoveShadow.c)
 *     DwmChildRectChange @ 0x1C00916A8 (DwmChildRectChange.c)
 *     ShouldHaveShadow @ 0x1C00F63F0 (ShouldHaveShadow.c)
 *     xxxAddShadow @ 0x1C0104418 (xxxAddShadow.c)
 *     ?zzzApplyShadow@@YAHPEAUtagWND@@0@Z @ 0x1C010471C (-zzzApplyShadow@@YAHPEAUtagWND@@0@Z.c)
 *     xxxNotifyShellTrackedWindowPosChanged @ 0x1C01D65A8 (xxxNotifyShellTrackedWindowPosChanged.c)
 *     xxxUpdateShadowZorder @ 0x1C0223A60 (xxxUpdateShadowZorder.c)
 *     zzzMoveShadow @ 0x1C0223B94 (zzzMoveShadow.c)
 */

void __fastcall xxxSendChangedMsgs(struct tagSMWP *a1, __int64 a2)
{
  __int64 v2; // rdi
  int v4; // ebp
  __int64 v5; // rbx
  char v6; // dl
  BOOL v7; // esi
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  struct tagWND **Shadow; // rax
  unsigned int v12; // r9d
  _QWORD v13[4]; // [rsp+50h] [rbp-38h] BYREF
  char v14; // [rsp+90h] [rbp+8h] BYREF

  v2 = *((_QWORD *)a1 + 5);
  v4 = *((_DWORD *)a1 + 7);
  while ( --v4 >= 0 )
  {
    if ( !*(_QWORD *)v2 )
      goto LABEL_29;
    LOBYTE(a2) = 1;
    v5 = HMValidateHandleNoSecure(*(_QWORD *)v2, a2);
    if ( !v5 )
    {
      *(_DWORD *)(v2 + 32) = 6159;
LABEL_48:
      *(_QWORD *)v2 = 0LL;
      goto LABEL_29;
    }
    if ( !(unsigned int)IsStillWindowC(*(HWND *)(v2 + 8)) )
      goto LABEL_48;
    if ( (*(_DWORD *)(v2 + 32) & 0x40000) != 0 || (*(_DWORD *)(v2 + 32) & 0x18E7) == 0x1807 )
    {
      PostIAMPosChangedNotification((struct tagCVR *)v2, (struct tagWND *)v5);
      goto LABEL_29;
    }
    v13[0] = *(_QWORD *)(gptiCurrent + 376LL);
    *(_QWORD *)(gptiCurrent + 376LL) = v13;
    v13[1] = v5;
    ++*(_DWORD *)(v5 + 8);
    if ( (*(_DWORD *)(v2 + 32) & 0x80u) != 0 )
      xxxRemoveShadow(v5);
    if ( (*(_DWORD *)(v2 + 32) & 0x40) != 0 )
    {
      if ( (unsigned int)ShouldHaveShadow(v5) )
        xxxAddShadow((struct tagWND *)v5);
    }
    else if ( (unsigned int)WindowHasShadow(v5) )
    {
      if ( (v6 & 0x21) == 1 )
      {
        if ( (v6 & 2) == 0 )
          zzzMoveShadow(v5);
      }
      else
      {
        Shadow = (struct tagWND **)FindShadow((struct tagWND *)v5);
        if ( Shadow )
          zzzApplyShadow(*Shadow, Shadow[1]);
      }
      if ( (*(_DWORD *)(v2 + 32) & 4) == 0 )
        xxxUpdateShadowZorder(v5);
    }
    v7 = (*(_DWORD *)(v2 + 32) & 0x9820) != 6144;
    if ( (unsigned int)IsWindowDesktopComposed(v5) && v7 )
      DwmChildRectChange(v5);
    if ( gfShellFrameHangResilient
      && (*(_DWORD *)(gptiCurrent + 1080LL) & 0x40000) != 0
      && gptiCurrent != *(_QWORD *)(v5 + 16) )
    {
      if ( *(_DWORD *)(*(_QWORD *)(gptiCurrent + 392LL) + 336LL) == 1 )
      {
        v12 = 1;
        goto LABEL_41;
      }
      if ( !xxxSendTransformableMessageTimeout((struct tagWND *)v5, 0x47u, 0LL, v2, 2, 100, (__int64)&v14, 1, 0) )
      {
        v12 = 3;
LABEL_41:
        LogMDAQueueOp(0xCEu, v5, 0LL, v12);
      }
    }
    else
    {
      _InterlockedAdd(&glSendMessage, 1u);
      xxxSendTransformableMessageTimeout((struct tagWND *)v5, 0x47u, 0LL, v2, 0, 0, 0LL, 1, 0);
    }
    if ( (*(_DWORD *)(v2 + 156) & 0x40) != 0 )
    {
      ValidateHmonitorNoRip(*(_QWORD *)(v2 + 128));
      xxxNotifyMonitorChanged((struct tagWND *)v5);
    }
    PostIAMPosChangedNotification((struct tagCVR *)v2, (struct tagWND *)v5);
    if ( (*(_DWORD *)(v2 + 32) & 0x2100C0) == 0 && (*(_DWORD *)(v2 + 32) & 3) != 3 )
    {
      v8 = *(_QWORD *)(*(_QWORD *)(v5 + 16) + 600LL);
      if ( (!v8 || (*(_DWORD *)(v8 + 180) & 0x100000) != 0)
        && (*(_BYTE *)(v5 + 55) & 0x10) != 0
        && !(unsigned int)GetWindowCloakState(v5)
        && (unsigned int)IsWindowSubjectToShellWindowBehavior(v5, 16LL) )
      {
        xxxNotifyShellTrackedWindowPosChanged(v5, 0LL);
      }
    }
    CalcWindowFullScreen(v5);
    if ( v7 )
      xxxWindowEvent(32779, v5, 0, 0, 1);
    ThreadUnlock1(v10, v9);
LABEL_29:
    v2 += 168LL;
  }
  if ( (*gpsi & 4) != 0 )
    xxxImeWindowPosChanged(a1);
}
