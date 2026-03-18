/*
 * XREFs of ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C0079418
 * Callers:
 *     xxxEndDeferWindowPosEx @ 0x1C0078230 (xxxEndDeferWindowPosEx.c)
 * Callees:
 *     xxxRemoveShadow @ 0x1C0056E60 (xxxRemoveShadow.c)
 *     DwmChildRectChange @ 0x1C006C824 (DwmChildRectChange.c)
 *     CalcWindowFullScreen @ 0x1C00723E0 (CalcWindowFullScreen.c)
 *     ?xxxImeWindowPosChanged@@YAXPEAUtagSMWP@@@Z @ 0x1C00775CC (-xxxImeWindowPosChanged@@YAXPEAUtagSMWP@@@Z.c)
 *     ?IsStillWindowC@@YAHPEAUHWND__@@@Z @ 0x1C007A248 (-IsStillWindowC@@YAHPEAUHWND__@@@Z.c)
 *     HMValidateHandleNoSecure @ 0x1C007A3E8 (HMValidateHandleNoSecure.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0087910 (xxxSendTransformableMessageTimeout.c)
 *     xxxWindowEvent @ 0x1C0087F70 (xxxWindowEvent.c)
 *     ?xxxNotifyShellPositioningChanged@@YAXPEAUtagWND@@QEAUtagCVR@@@Z @ 0x1C009E30C (-xxxNotifyShellPositioningChanged@@YAXPEAUtagWND@@QEAUtagCVR@@@Z.c)
 *     ?PostIAMPosChangedNotification@@YAXPEAUtagCVR@@PEAUtagWND@@@Z @ 0x1C009E380 (-PostIAMPosChangedNotification@@YAXPEAUtagCVR@@PEAUtagWND@@@Z.c)
 *     WindowHasShadow @ 0x1C00A73EC (WindowHasShadow.c)
 *     ?FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z @ 0x1C00A7414 (-FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z.c)
 *     xxxNotifyMonitorChanged @ 0x1C00AEA64 (xxxNotifyMonitorChanged.c)
 *     ShouldHaveShadow @ 0x1C011E238 (ShouldHaveShadow.c)
 *     xxxAddShadow @ 0x1C0138D4C (xxxAddShadow.c)
 *     ?zzzApplyShadow@@YAHPEAUtagWND@@0@Z @ 0x1C0139054 (-zzzApplyShadow@@YAHPEAUtagWND@@0@Z.c)
 *     xxxUpdateShadowZorder @ 0x1C0224E68 (xxxUpdateShadowZorder.c)
 *     zzzMoveShadow @ 0x1C0224F9C (zzzMoveShadow.c)
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
        && (*(_DWORD *)(gptiCurrent + 1096LL) & 0x40000) != 0
        && gptiCurrent != *(_QWORD *)(v5 + 16) )
      {
        if ( *(_DWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 344LL) != 1 )
          xxxSendTransformableMessageTimeout((struct tagWND *)v5, 0x47u, 0LL, v2, 2, 100, (ULONG_PTR)&v12, 1, 0);
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
