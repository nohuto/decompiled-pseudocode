/*
 * XREFs of zzzComposeDesktop @ 0x1C0097524
 * Callers:
 *     zzzDwmStartRedirection @ 0x1C0093AE4 (zzzDwmStartRedirection.c)
 *     xxxCreateDesktopEx @ 0x1C00D9F40 (xxxCreateDesktopEx.c)
 * Callees:
 *     PostEventMessageEx @ 0x1C0059A54 (PostEventMessageEx.c)
 *     ComposeWindowIfNeeded @ 0x1C0061A28 (ComposeWindowIfNeeded.c)
 *     ?ReorderChildrenSpriteList@@YAXPEAUtagWND@@0@Z @ 0x1C0062AC0 (-ReorderChildrenSpriteList@@YAXPEAUtagWND@@0@Z.c)
 *     IsDesktopWindow @ 0x1C0063530 (IsDesktopWindow.c)
 *     IsWindowBeingDestroyed @ 0x1C0065CC0 (IsWindowBeingDestroyed.c)
 *     GreUpdateSpriteVisRgn @ 0x1C0075160 (GreUpdateSpriteVisRgn.c)
 *     _GetProp @ 0x1C007AFEC (_GetProp.c)
 *     MagpComposeDesktop @ 0x1C0093C90 (MagpComposeDesktop.c)
 *     ?BroadcastCompositionChange@@YAXPEBUtagDESKTOP@@@Z @ 0x1C0093E04 (-BroadcastCompositionChange@@YAXPEBUtagDESKTOP@@@Z.c)
 *     DwmAsyncShellWindowChange @ 0x1C0093E64 (DwmAsyncShellWindowChange.c)
 *     zzzEnableDwmPointerSupport @ 0x1C0094A9C (zzzEnableDwmPointerSupport.c)
 *     ComposeWindow @ 0x1C0096658 (ComposeWindow.c)
 *     ?ShouldComposeWindow@@YAHQEAUtagWND@@QEAUtagDESKTOP@@@Z @ 0x1C0097780 (-ShouldComposeWindow@@YAHQEAUtagWND@@QEAUtagDESKTOP@@@Z.c)
 *     ?ReNotifyDwm@CHwndTargetProp@@SAXPEAUtagWND@@@Z @ 0x1C00977CC (-ReNotifyDwm@CHwndTargetProp@@SAXPEAUtagWND@@@Z.c)
 *     MapDesktop @ 0x1C009A3E0 (MapDesktop.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     ?IsWindowComposedOnDesktop@@YAHQEAUtagWND@@QEAUtagDESKTOP@@@Z @ 0x1C00EF454 (-IsWindowComposedOnDesktop@@YAHQEAUtagWND@@QEAUtagDESKTOP@@@Z.c)
 *     GreTransferDwmStateToSpriteState @ 0x1C00EF478 (GreTransferDwmStateToSpriteState.c)
 *     GreRemoveDisplayDriverRealizations @ 0x1C00EF880 (GreRemoveDisplayDriverRealizations.c)
 *     GreTransferSpriteStateToDwmState @ 0x1C01324D8 (GreTransferSpriteStateToDwmState.c)
 *     ?NotifyDwm@CSwapChainProp@@QEAAHQEAUtagWND@@@Z @ 0x1C014B664 (-NotifyDwm@CSwapChainProp@@QEAAHQEAUtagWND@@@Z.c)
 *     ?ChangeWindowTreeProtection@@YAHPEAUtagWND@@H@Z @ 0x1C02311C4 (-ChangeWindowTreeProtection@@YAHPEAUtagWND@@H@Z.c)
 */

__int64 __fastcall zzzComposeDesktop(struct tagDESKTOP *a1)
{
  __int64 v2; // rcx
  int v3; // ebp
  int v4; // eax
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned int v12; // r14d
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 *v19; // rcx
  void *v20; // rax
  __m128i *v22; // rsi
  struct tagDESKTOP *v23; // rax
  struct tagWND *v24; // rcx
  CSwapChainProp *Prop; // rax
  int v26; // eax
  char v27; // dl
  ULONG v28; // eax
  void *v29; // rax
  __int64 v30; // rcx
  __m128i *v31; // r9
  int v32; // [rsp+40h] [rbp-38h] BYREF
  __int64 v33; // [rsp+48h] [rbp-30h]
  struct tagDESKTOP *v34; // [rsp+50h] [rbp-28h]
  int v35; // [rsp+58h] [rbp-20h]
  int v36; // [rsp+5Ch] [rbp-1Ch]

  v2 = *((_QWORD *)a1 + 1);
  v3 = -1073741823;
  v4 = *(_DWORD *)(v2 + 244);
  if ( (v4 & 1) != 0 )
    return 0;
  *(_DWORD *)(v2 + 244) = v4 | 1;
  v5 = ReferenceDwmProcess();
  v6 = 0LL;
  v7 = v5;
  if ( v5 )
  {
    v32 = 1;
    v33 = v5;
    v34 = a1;
    v35 = 0;
    v36 = 1;
    v3 = MapDesktop(&v32);
    if ( v3 < 0 )
    {
      v28 = RtlNtStatusToDosError(-1073741790);
      UserSetLastError(v28);
      *(_DWORD *)(*((_QWORD *)a1 + 1) + 244LL) &= ~1u;
      DereferenceDwmProcess(v7);
      return 3221225473LL;
    }
    DereferenceDwmProcess(v7);
  }
  if ( !(unsigned int)GreTransferSpriteStateToDwmState((HDEV)*gpDispInfo, *((_QWORD *)a1 + 5)) )
  {
    v3 = -1073741823;
LABEL_47:
    *(_DWORD *)(*((_QWORD *)a1 + 1) + 244LL) &= ~1u;
LABEL_12:
    GreLockVisRgn(*gpDispInfo);
    GreUpdateSpriteVisRgn(*gpDispInfo, 0);
    GreUnlockVisRgn(*gpDispInfo);
    if ( v3 >= 0 )
    {
      v19 = *(__int64 **)(*((_QWORD *)a1 + 1) + 160LL);
      if ( v19 )
        v6 = *v19;
      v20 = (void *)ReferenceDwmApiPort(v19, v16, v17, v18);
      DwmAsyncShellWindowChange(v20, v6, *((_QWORD *)a1 + 5));
    }
    return (unsigned int)v3;
  }
  if ( *(_QWORD *)(*((_QWORD *)a1 + 1) + 16LL) )
  {
    v12 = 0;
    while ( 1 )
    {
      v13 = gSharedInfo[1];
      if ( *(_BYTE *)(v13 + 24LL * v12 + 16) == 1 )
      {
        v22 = *(__m128i **)(v13 + 24LL * v12);
        if ( (unsigned int)ShouldComposeWindow((struct tagWND *const)v22, a1) )
        {
          if ( (v22[3].m128i_i8[7] & 1) != 0 )
            PostEventMessageEx(
              v22[1].m128i_i64[0],
              *(_QWORD *)(v22[1].m128i_i64[0] + 384),
              0x10u,
              (__int64)v22,
              0,
              0LL,
              0LL,
              0LL);
          v26 = IsDesktopWindow((__int64)v22);
          v27 = 1;
          if ( v26 )
            v27 = 5;
          v3 = ComposeWindow(v22, v27);
          if ( v3 < 0 )
            break;
        }
        if ( (GetProp((__int64)v22, (unsigned __int16)atomDispAffinity, 1LL) & 1) != 0 )
        {
          if ( (v22[3].m128i_i8[3] & 0x20) == 0 )
            ComposeWindowIfNeeded((struct tagWND *)v22);
          ChangeWindowTreeProtection((struct tagWND *)v22, 1);
        }
        v23 = (struct tagDESKTOP *)v22[1].m128i_i64[1];
        if ( v23 )
        {
          if ( v23 == a1 && !(unsigned int)IsWindowBeingDestroyed((__int64)v22) )
          {
            CHwndTargetProp::ReNotifyDwm(v24);
            if ( !(unsigned int)UserIsRemoteAndNotDisconnectConnection()
              || (unsigned int)UserIsRemoteAndNotDisconnectConnection() )
            {
              Prop = (CSwapChainProp *)GetProp((__int64)v22, CSwapChainProp::s_atom, 1LL);
              if ( Prop )
                CSwapChainProp::NotifyDwm(Prop, (struct tagWND *const)v22);
            }
          }
        }
        if ( v3 < 0 )
          break;
      }
      if ( ++v12 > giheLast )
      {
        if ( v3 >= 0 )
        {
          ReorderChildrenSpriteList(*(struct tagWND **)(*((_QWORD *)a1 + 1) + 16LL), 0LL);
          MagpComposeDesktop(*(_QWORD **)&gMagnContext, (__int64)a1, v14, v15);
          BroadcastCompositionChange(a1);
          goto LABEL_12;
        }
        break;
      }
    }
    while ( v12 <= giheLast )
    {
      v30 = gSharedInfo[1];
      if ( *(_BYTE *)(v30 + 24LL * v12 + 16) == 1
        && (unsigned int)IsWindowComposedOnDesktop(*(struct tagWND *const *)(v30 + 24LL * v12), a1) )
      {
        ComposeWindow(v31, 2);
      }
      --v12;
    }
    GreRemoveDisplayDriverRealizations(*gpDispInfo);
    zzzEnableDwmPointerSupport(0, 0);
    GreTransferDwmStateToSpriteState((HDEV)*gpDispInfo);
    goto LABEL_47;
  }
  v29 = (void *)ReferenceDwmApiPort(v9, v8, v10, v11);
  DwmAsyncShellWindowChange(v29, 0LL, *((_QWORD *)a1 + 5));
  return 0LL;
}
