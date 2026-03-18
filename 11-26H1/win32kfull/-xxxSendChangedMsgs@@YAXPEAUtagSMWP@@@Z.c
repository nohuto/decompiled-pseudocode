/*
 * XREFs of ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x140260B0C
 * Callers:
 *     xxxEndDeferWindowPosEx @ 0x14002B508 (xxxEndDeferWindowPosEx.c)
 * Callees:
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z @ 0x14000F0FC (--0-$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     CalcWindowFullScreen @ 0x140010674 (CalcWindowFullScreen.c)
 *     WindowHasShadow @ 0x140011E24 (WindowHasShadow.c)
 *     ?FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z @ 0x140011E54 (-FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x140013998 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ?IsStillWindowC@@YAHPEAUHWND__@@@Z @ 0x14001AC48 (-IsStillWindowC@@YAHPEAUHWND__@@@Z.c)
 *     xxxWindowEvent @ 0x140043360 (xxxWindowEvent.c)
 *     xxxNotifyMonitorChanged @ 0x14004BDFC (xxxNotifyMonitorChanged.c)
 *     HMValidateHandleNoSecure @ 0x14004C2D0 (HMValidateHandleNoSecure.c)
 *     DwmChildRectChange @ 0x14004E990 (DwmChildRectChange.c)
 *     DirtyVisRgnTrackers @ 0x14004F51C (DirtyVisRgnTrackers.c)
 *     ?xxxImeWindowPosChanged@@YAXPEAUtagSMWP@@@Z @ 0x140050A90 (-xxxImeWindowPosChanged@@YAXPEAUtagSMWP@@@Z.c)
 *     ?zzzApplyShadow@@YAHPEAUtagWND@@0@Z @ 0x1400831B0 (-zzzApplyShadow@@YAHPEAUtagWND@@0@Z.c)
 *     xxxAddShadow @ 0x140083B00 (xxxAddShadow.c)
 *     xxxRemoveShadow @ 0x140084278 (xxxRemoveShadow.c)
 *     ?xxxSendPosMessage@@YAXPEAUtagWND@@IPEAUtagWINDOWPOS@@@Z @ 0x1401C89A4 (-xxxSendPosMessage@@YAXPEAUtagWND@@IPEAUtagWINDOWPOS@@@Z.c)
 *     ?PostIAMPosChangedNotification@@YAXPEAUtagCVR@@PEAUtagWND@@@Z @ 0x1401E8748 (-PostIAMPosChangedNotification@@YAXPEAUtagCVR@@PEAUtagWND@@@Z.c)
 *     ShouldHaveShadow @ 0x1402005A8 (ShouldHaveShadow.c)
 *     zzzMoveShadow @ 0x14024B140 (zzzMoveShadow.c)
 *     xxxUpdateShadowZorder @ 0x1402536E8 (xxxUpdateShadowZorder.c)
 *     Feature_NoMoreSwpIamNotifyPosChanged__private_IsEnabledDeviceUsageNoInline @ 0x140287538 (Feature_NoMoreSwpIamNotifyPosChanged__private_IsEnabledDeviceUsageNoInline.c)
 *     ?PositioningChanged@NotifyShell@@YAXPEAUtagWND@@AEBUtagCVR@@@Z @ 0x1402DB9D8 (-PositioningChanged@NotifyShell@@YAXPEAUtagWND@@AEBUtagCVR@@@Z.c)
 */

void __fastcall xxxSendChangedMsgs(struct tagSMWP *a1, __int64 a2)
{
  __int64 v2; // rbx
  struct tagSMWP *v3; // r14
  int v4; // ebp
  struct tagWND *v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rdx
  int v9; // ecx
  struct tagWND **Shadow; // rax
  int v11; // esi
  struct tagRECT v12; // xmm0
  __int64 v13; // rcx
  __int64 v14; // rax
  unsigned __int16 v15; // r9
  const struct tagCVR *v16; // r8
  __int64 v17; // rdx
  struct tagRECT v18; // [rsp+30h] [rbp-28h] BYREF
  ULONG_PTR BugCheckParameter3[3]; // [rsp+40h] [rbp-18h] BYREF

  v2 = *((_QWORD *)a1 + 5);
  v3 = a1;
  v4 = *((_DWORD *)a1 + 7);
  while ( --v4 >= 0 )
  {
    a1 = *(struct tagSMWP **)v2;
    if ( *(_QWORD *)v2 )
    {
      v5 = (struct tagWND *)HMValidateHandleNoSecure((__int64)a1, 1);
      if ( v5 )
      {
        if ( (unsigned int)IsStillWindowC(*(HWND *)(v2 + 8)) )
        {
          if ( (*(_DWORD *)(v2 + 32) & 0x40000) != 0 || (*(_DWORD *)(v2 + 32) & 0x18E7) == 0x1807 )
          {
            if ( !(unsigned int)Feature_NoMoreSwpIamNotifyPosChanged__private_IsEnabledDeviceUsageNoInline() )
              PostIAMPosChangedNotification((struct tagCVR *)v2, v5);
          }
          else
          {
            Win32HMThreadLockBase<tagWND,0,0>::Win32HMThreadLockBase<tagWND,0,0>(BugCheckParameter3, (__int64)v5);
            if ( (*(_DWORD *)(v2 + 32) & 0x80u) != 0 )
              xxxRemoveShadow((__int64)v5, v6);
            if ( (*(_DWORD *)(v2 + 32) & 0x40) != 0 )
            {
              if ( (unsigned int)ShouldHaveShadow(v5) )
                xxxAddShadow(v5, v7);
            }
            else if ( (unsigned int)WindowHasShadow(v5) )
            {
              v9 = *(_DWORD *)(v2 + 32);
              if ( (v9 & 0x21) == 1 )
              {
                if ( (v9 & 2) == 0 )
                  zzzMoveShadow(v5, v8);
              }
              else
              {
                Shadow = (struct tagWND **)FindShadow(v5, v8);
                if ( Shadow )
                  zzzApplyShadow(*Shadow, Shadow[1]);
              }
              if ( (*(_DWORD *)(v2 + 32) & 4) == 0 )
                xxxUpdateShadowZorder(v5, v8);
            }
            v11 = *(_DWORD *)(v2 + 32) & 0x9820;
            if ( (unsigned int)IsWindowDesktopComposed(v5) && v11 != 6144 )
            {
              DwmChildRectChange(v5);
              DirtyVisRgnTrackers(v5);
            }
            xxxSendPosMessage((struct tagTHREADINFO **)v5, 0x47u, (struct tagWINDOWPOS *)v2);
            if ( (*(_DWORD *)(v2 + 156) & 0x40) != 0 )
            {
              if ( (*(_DWORD *)(v2 + 32) & 0x80000) != 0 )
                v12 = *(struct tagRECT *)(*((_QWORD *)v5 + 5) + 88LL);
              else
                v12 = *(struct tagRECT *)(v2 + 136);
              v13 = *(_QWORD *)(v2 + 128);
              v18 = v12;
              v14 = ValidateHmonitorNoRip(v13);
              if ( v14 )
                v15 = *(_WORD *)(*(_QWORD *)(v14 + 40) + 60LL);
              else
                v15 = 0;
              xxxNotifyMonitorChanged(v5, &v18, *(struct tagBWL **)(v2 + 160), v15);
            }
            if ( !(unsigned int)Feature_NoMoreSwpIamNotifyPosChanged__private_IsEnabledDeviceUsageNoInline() )
              PostIAMPosChangedNotification((struct tagCVR *)v2, v5);
            NotifyShell::PositioningChanged(v5, (struct tagWND *)v2, v16);
            CalcWindowFullScreen(v5, v17);
            if ( v11 != 6144 )
              xxxWindowEvent(0x800Bu, v5, 0, 0, 1);
            Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(BugCheckParameter3);
          }
        }
      }
      else
      {
        *(_DWORD *)(v2 + 32) = 6159;
        *(_QWORD *)v2 = 0LL;
      }
    }
    v2 += 168LL;
  }
  if ( (**(_DWORD **)(W32GetUserSessionState(a1, a2) + 19904) & 4) != 0 )
    xxxImeWindowPosChanged(v3);
}
