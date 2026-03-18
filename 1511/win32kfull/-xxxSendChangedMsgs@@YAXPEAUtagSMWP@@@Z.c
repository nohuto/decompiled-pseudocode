/*
 * XREFs of ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C0054A5C
 * Callers:
 *     xxxEndDeferWindowPosEx @ 0x1C0051394 (xxxEndDeferWindowPosEx.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C0055AB4 (HMValidateHandleNoSecure.c)
 *     CalcWindowFullScreen @ 0x1C0055DBC (CalcWindowFullScreen.c)
 *     ?IsStillWindowC@@YAHPEAUHWND__@@@Z @ 0x1C00573EC (-IsStillWindowC@@YAHPEAUHWND__@@@Z.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0058D90 (xxxSendTransformableMessageTimeout.c)
 *     xxxWindowEvent @ 0x1C00608D0 (xxxWindowEvent.c)
 *     xxxRemoveShadow @ 0x1C0068D84 (xxxRemoveShadow.c)
 *     ?xxxImeWindowPosChanged@@YAXPEAUtagSMWP@@@Z @ 0x1C006D350 (-xxxImeWindowPosChanged@@YAXPEAUtagSMWP@@@Z.c)
 *     DwmChildRectChange @ 0x1C006EE8C (DwmChildRectChange.c)
 *     ?xxxNotifyShellPositioningChanged@@YAXPEAUtagWND@@QEAUtagCVR@@@Z @ 0x1C0075870 (-xxxNotifyShellPositioningChanged@@YAXPEAUtagWND@@QEAUtagCVR@@@Z.c)
 *     ?PostIAMPosChangedNotification@@YAXPEAUtagCVR@@PEAUtagWND@@@Z @ 0x1C00758E4 (-PostIAMPosChangedNotification@@YAXPEAUtagCVR@@PEAUtagWND@@@Z.c)
 *     xxxNotifyMonitorChanged @ 0x1C0091974 (xxxNotifyMonitorChanged.c)
 *     WindowHasShadow @ 0x1C00F15B4 (WindowHasShadow.c)
 *     ?FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z @ 0x1C00F15DC (-FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z.c)
 *     ShouldHaveShadow @ 0x1C00FD28C (ShouldHaveShadow.c)
 *     xxxAddShadow @ 0x1C012F41C (xxxAddShadow.c)
 *     ?zzzApplyShadow@@YAHPEAUtagWND@@0@Z @ 0x1C012F714 (-zzzApplyShadow@@YAHPEAUtagWND@@0@Z.c)
 *     xxxUpdateShadowZorder @ 0x1C02242A0 (xxxUpdateShadowZorder.c)
 *     zzzMoveShadow @ 0x1C02243D4 (zzzMoveShadow.c)
 */

void __fastcall xxxSendChangedMsgs(struct tagSMWP *a1, __int64 a2)
{
  __int64 v2; // rbx
  int v4; // ebp
  __int64 v5; // rdi
  char v6; // dl
  BOOL v7; // esi
  __int64 v8; // rdx
  __int64 v9; // rcx
  struct tagWND **Shadow; // rax
  _QWORD v11[4]; // [rsp+50h] [rbp-38h] BYREF
  char v12; // [rsp+90h] [rbp+8h] BYREF

  v2 = *((_QWORD *)a1 + 5);
  v4 = *((_DWORD *)a1 + 7);
  while ( --v4 >= 0 )
  {
    if ( !*(_QWORD *)v2 )
      goto LABEL_23;
    LOBYTE(a2) = 1;
    v5 = HMValidateHandleNoSecure(*(_QWORD *)v2, a2);
    if ( !v5 )
    {
      *(_DWORD *)(v2 + 32) = 6159;
LABEL_39:
      *(_QWORD *)v2 = 0LL;
      goto LABEL_23;
    }
    if ( !(unsigned int)IsStillWindowC(*(HWND *)(v2 + 8)) )
      goto LABEL_39;
    if ( (*(_DWORD *)(v2 + 32) & 0x40000) != 0 || (*(_DWORD *)(v2 + 32) & 0x18E7) == 0x1807 )
    {
      PostIAMPosChangedNotification((struct tagCVR *)v2, (struct tagWND *)v5);
    }
    else
    {
      v11[0] = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = v11;
      v11[1] = v5;
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
        && (*(_DWORD *)(gptiCurrent + 1072LL) & 0x40000) != 0
        && gptiCurrent != *(_QWORD *)(v5 + 16) )
      {
        if ( *(_DWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 336LL) != 1 )
          xxxSendTransformableMessageTimeout((struct tagWND *)v5, 0x47u, 0LL, v2, 2, 100, (__int64)&v12, 1, 0);
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
      xxxNotifyShellPositioningChanged((struct tagWND *)v5, (struct tagCVR *const)v2);
      CalcWindowFullScreen(v5);
      if ( v7 )
        xxxWindowEvent(32779, v5, 0, 0, 1);
      ThreadUnlock1(v9, v8);
    }
LABEL_23:
    v2 += 168LL;
  }
  if ( (*gpsi & 4) != 0 )
    xxxImeWindowPosChanged(a1);
}
