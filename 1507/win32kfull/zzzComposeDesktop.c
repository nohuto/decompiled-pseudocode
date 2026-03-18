/*
 * XREFs of zzzComposeDesktop @ 0x1C0149CB8
 * Callers:
 *     xxxCreateDesktopEx @ 0x1C00DBDE0 (xxxCreateDesktopEx.c)
 *     zzzDwmStartRedirection @ 0x1C0149B0C (zzzDwmStartRedirection.c)
 * Callees:
 *     ComposeWindow @ 0x1C000B878 (ComposeWindow.c)
 *     ?ReorderChildrenSpriteList@@YAXPEAUtagWND@@0@Z @ 0x1C000F5C0 (-ReorderChildrenSpriteList@@YAXPEAUtagWND@@0@Z.c)
 *     IsDesktopWindow @ 0x1C0012B0C (IsDesktopWindow.c)
 *     zzzEnableDwmPointerSupport @ 0x1C003E1F8 (zzzEnableDwmPointerSupport.c)
 *     IsWindowBeingDestroyed @ 0x1C0056CC4 (IsWindowBeingDestroyed.c)
 *     GreUpdateSpriteVisRgn @ 0x1C0061170 (GreUpdateSpriteVisRgn.c)
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     _GetProp @ 0x1C006524C (_GetProp.c)
 *     MapDesktop @ 0x1C007EF40 (MapDesktop.c)
 *     PostEventMessageEx @ 0x1C00E79A8 (PostEventMessageEx.c)
 *     ?NotifyDwm@CSwapChainProp@@QEAAHQEAUtagWND@@@Z @ 0x1C011ABEC (-NotifyDwm@CSwapChainProp@@QEAAHQEAUtagWND@@@Z.c)
 *     ?IsWindowComposedOnDesktop@@YAHQEAUtagWND@@QEAUtagDESKTOP@@@Z @ 0x1C012BAAC (-IsWindowComposedOnDesktop@@YAHQEAUtagWND@@QEAUtagDESKTOP@@@Z.c)
 *     GreTransferDwmStateToSpriteState @ 0x1C012BAD0 (GreTransferDwmStateToSpriteState.c)
 *     GreRemoveDisplayDriverRealizations @ 0x1C012BEDC (GreRemoveDisplayDriverRealizations.c)
 *     ?ShouldComposeWindow@@YAHQEAUtagWND@@QEAUtagDESKTOP@@@Z @ 0x1C0149EF4 (-ShouldComposeWindow@@YAHQEAUtagWND@@QEAUtagDESKTOP@@@Z.c)
 *     ?ReNotifyDwm@CHwndTargetProp@@SAXPEAUtagWND@@@Z @ 0x1C0149F40 (-ReNotifyDwm@CHwndTargetProp@@SAXPEAUtagWND@@@Z.c)
 *     DwmAsyncShellWindowChange @ 0x1C0149F90 (DwmAsyncShellWindowChange.c)
 *     ?BroadcastCompositionChange@@YAXPEBUtagDESKTOP@@@Z @ 0x1C014A01C (-BroadcastCompositionChange@@YAXPEBUtagDESKTOP@@@Z.c)
 *     MagpComposeDesktop @ 0x1C014A07C (MagpComposeDesktop.c)
 *     GreTransferSpriteStateToDwmState @ 0x1C014A1F0 (GreTransferSpriteStateToDwmState.c)
 */

__int64 __fastcall zzzComposeDesktop(struct tagDESKTOP *a1)
{
  __int64 v2; // rcx
  int v3; // esi
  int v4; // eax
  __int64 v5; // rax
  __int64 v6; // rbp
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned int v11; // r14d
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  void *v16; // rax
  __int64 v18; // rbp
  struct tagDESKTOP *v19; // rax
  struct tagWND *v20; // rcx
  CSwapChainProp *Prop; // rax
  int v22; // eax
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rdx
  ULONG v26; // eax
  void *v27; // rax
  __int64 v28; // rcx
  __int64 v29; // r8
  struct tagWND *v30; // r9
  int v31; // [rsp+40h] [rbp-38h] BYREF
  __int64 v32; // [rsp+48h] [rbp-30h]
  struct tagDESKTOP *v33; // [rsp+50h] [rbp-28h]
  int v34; // [rsp+58h] [rbp-20h]
  int v35; // [rsp+5Ch] [rbp-1Ch]

  v2 = *((_QWORD *)a1 + 1);
  v3 = -1073741823;
  v4 = *(_DWORD *)(v2 + 260);
  if ( (v4 & 1) != 0 )
    return 0;
  *(_DWORD *)(v2 + 260) = v4 | 1;
  v5 = ReferenceDwmProcess();
  v6 = v5;
  if ( v5 )
  {
    v31 = 1;
    v32 = v5;
    v33 = a1;
    v34 = 0;
    v35 = 1;
    v3 = MapDesktop((__int64)&v31);
    if ( v3 < 0 )
    {
      v26 = RtlNtStatusToDosError(-1073741790);
      UserSetLastError(v26);
      *(_DWORD *)(*((_QWORD *)a1 + 1) + 260LL) &= ~1u;
      DereferenceDwmProcess(v6);
      return 3221225473LL;
    }
    DereferenceDwmProcess(v6);
  }
  if ( !(unsigned int)GreTransferSpriteStateToDwmState((HDEV)*gpDispInfo, *((_QWORD *)a1 + 5)) )
  {
    v3 = -1073741823;
LABEL_40:
    *(_DWORD *)(*((_QWORD *)a1 + 1) + 260LL) &= ~1u;
LABEL_12:
    GreLockVisRgn(*gpDispInfo);
    GreUpdateSpriteVisRgn(*gpDispInfo, 0);
    GreUnlockVisRgn(*gpDispInfo);
    if ( v3 >= 0 )
    {
      v16 = (void *)ReferenceDwmApiPort(*(_QWORD *)(*((_QWORD *)a1 + 1) + 160LL), v13, v14, v15);
      DwmAsyncShellWindowChange(v16);
    }
    return (unsigned int)v3;
  }
  if ( *(_QWORD *)(*((_QWORD *)a1 + 1) + 16LL) )
  {
    v11 = 0;
    while ( 1 )
    {
      v12 = gSharedInfo[1];
      if ( *(_BYTE *)(v12 + 24LL * v11 + 16) == 1 )
      {
        v18 = *(_QWORD *)(v12 + 24LL * v11);
        if ( (unsigned int)ShouldComposeWindow((struct tagWND *const)v18, a1) )
        {
          if ( (*(_BYTE *)(v18 + 55) & 1) != 0 )
            PostEventMessageEx(
              *(_QWORD *)(v18 + 16),
              *(_QWORD *)(*(_QWORD *)(v18 + 16) + 392LL),
              0x10u,
              (LARGE_INTEGER *)v18,
              0,
              0LL,
              0LL,
              0LL);
          v22 = IsDesktopWindow(v18);
          v25 = 1LL;
          if ( v22 )
            v25 = 5LL;
          v3 = ComposeWindow((struct tagWND *)v18, v25, v23, v24);
          if ( v3 < 0 )
            break;
        }
        v19 = *(struct tagDESKTOP **)(v18 + 24);
        if ( v19 )
        {
          if ( v19 == a1 && !(unsigned int)IsWindowBeingDestroyed(v18) )
          {
            CHwndTargetProp::ReNotifyDwm(v20);
            if ( !(unsigned int)UserIsRemoteAndNotDisconnectConnection()
              || (unsigned int)UserIsRemoteAndNotDisconnectConnection() )
            {
              Prop = (CSwapChainProp *)GetProp(v18, CSwapChainProp::s_atom, 1LL);
              if ( Prop )
                CSwapChainProp::NotifyDwm(Prop, (struct tagWND *const)v18);
            }
          }
        }
        if ( v3 < 0 )
          break;
      }
      if ( ++v11 > giheLast )
      {
        if ( v3 >= 0 )
        {
          ReorderChildrenSpriteList(*(struct tagWND **)(*((_QWORD *)a1 + 1) + 16LL), 0LL);
          MagpComposeDesktop(*(_QWORD *)&gMagnContext, a1);
          BroadcastCompositionChange(a1);
          goto LABEL_12;
        }
        break;
      }
    }
    while ( v11 <= giheLast )
    {
      v28 = gSharedInfo[1];
      if ( *(_BYTE *)(v28 + 24LL * v11 + 16) == 1
        && IsWindowComposedOnDesktop(*(struct tagWND *const *)(v28 + 24LL * v11), a1) )
      {
        ComposeWindow(v30, 2LL, v29, (__int64)v30);
      }
      --v11;
    }
    GreRemoveDisplayDriverRealizations(*gpDispInfo);
    zzzEnableDwmPointerSupport(0, 0);
    GreTransferDwmStateToSpriteState((HDEV)*gpDispInfo, *((_QWORD *)a1 + 5));
    goto LABEL_40;
  }
  v27 = (void *)ReferenceDwmApiPort(v8, v7, v9, v10);
  DwmAsyncShellWindowChange(v27);
  return 0LL;
}
