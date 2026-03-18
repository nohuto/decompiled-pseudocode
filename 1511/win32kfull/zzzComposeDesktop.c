/*
 * XREFs of zzzComposeDesktop @ 0x1C00D1AFC
 * Callers:
 *     zzzDwmStartRedirection @ 0x1C00D24EC (zzzDwmStartRedirection.c)
 *     xxxCreateDesktopEx @ 0x1C0121340 (xxxCreateDesktopEx.c)
 * Callees:
 *     PostEventMessageEx @ 0x1C000D614 (PostEventMessageEx.c)
 *     GreUpdateSpriteVisRgn @ 0x1C004EF40 (GreUpdateSpriteVisRgn.c)
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     _GetProp @ 0x1C00540EC (_GetProp.c)
 *     ?ReorderChildrenSpriteList@@YAXPEAUtagWND@@0@Z @ 0x1C007A4D8 (-ReorderChildrenSpriteList@@YAXPEAUtagWND@@0@Z.c)
 *     IsDesktopWindow @ 0x1C007AA1C (IsDesktopWindow.c)
 *     IsWindowBeingDestroyed @ 0x1C007E090 (IsWindowBeingDestroyed.c)
 *     ComposeWindow @ 0x1C0080214 (ComposeWindow.c)
 *     zzzEnableDwmPointerSupport @ 0x1C0096CD8 (zzzEnableDwmPointerSupport.c)
 *     MapDesktop @ 0x1C00CF780 (MapDesktop.c)
 *     ?ShouldComposeWindow@@YAHQEAUtagWND@@QEAUtagDESKTOP@@@Z @ 0x1C00D1D3C (-ShouldComposeWindow@@YAHQEAUtagWND@@QEAUtagDESKTOP@@@Z.c)
 *     ?ReNotifyDwm@CHwndTargetProp@@SAXPEAUtagWND@@@Z @ 0x1C00D1D88 (-ReNotifyDwm@CHwndTargetProp@@SAXPEAUtagWND@@@Z.c)
 *     DwmAsyncShellWindowChange @ 0x1C00D21C8 (DwmAsyncShellWindowChange.c)
 *     ?BroadcastCompositionChange@@YAXPEBUtagDESKTOP@@@Z @ 0x1C00D2254 (-BroadcastCompositionChange@@YAXPEBUtagDESKTOP@@@Z.c)
 *     MagpComposeDesktop @ 0x1C00D22B4 (MagpComposeDesktop.c)
 *     GreTransferSpriteStateToDwmState @ 0x1C00D2428 (GreTransferSpriteStateToDwmState.c)
 *     ?IsWindowComposedOnDesktop@@YAHQEAUtagWND@@QEAUtagDESKTOP@@@Z @ 0x1C00D353C (-IsWindowComposedOnDesktop@@YAHQEAUtagWND@@QEAUtagDESKTOP@@@Z.c)
 *     GreTransferDwmStateToSpriteState @ 0x1C00D3560 (GreTransferDwmStateToSpriteState.c)
 *     GreRemoveDisplayDriverRealizations @ 0x1C00D396C (GreRemoveDisplayDriverRealizations.c)
 *     ?NotifyDwm@CSwapChainProp@@QEAAHQEAUtagWND@@@Z @ 0x1C0145554 (-NotifyDwm@CSwapChainProp@@QEAAHQEAUtagWND@@@Z.c)
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
  __m128i *v18; // rbp
  struct tagDESKTOP *v19; // rax
  struct tagWND *v20; // rcx
  CSwapChainProp *Prop; // rax
  int v22; // eax
  char v23; // dl
  ULONG v24; // eax
  void *v25; // rax
  __int64 v26; // rcx
  __m128i *v27; // r9
  int v28; // [rsp+40h] [rbp-38h] BYREF
  __int64 v29; // [rsp+48h] [rbp-30h]
  struct tagDESKTOP *v30; // [rsp+50h] [rbp-28h]
  int v31; // [rsp+58h] [rbp-20h]
  int v32; // [rsp+5Ch] [rbp-1Ch]

  v2 = *((_QWORD *)a1 + 1);
  v3 = -1073741823;
  v4 = *(_DWORD *)(v2 + 244);
  if ( (v4 & 1) != 0 )
    return 0;
  *(_DWORD *)(v2 + 244) = v4 | 1;
  v5 = ReferenceDwmProcess();
  v6 = v5;
  if ( v5 )
  {
    v28 = 1;
    v29 = v5;
    v30 = a1;
    v31 = 0;
    v32 = 1;
    v3 = MapDesktop((__int64)&v28);
    if ( v3 < 0 )
    {
      v24 = RtlNtStatusToDosError(-1073741790);
      UserSetLastError(v24);
      *(_DWORD *)(*((_QWORD *)a1 + 1) + 244LL) &= ~1u;
      DereferenceDwmProcess(v6);
      return 3221225473LL;
    }
    DereferenceDwmProcess(v6);
  }
  if ( !(unsigned int)GreTransferSpriteStateToDwmState((HDEV)*gpDispInfo, *((_QWORD *)a1 + 5)) )
  {
    v3 = -1073741823;
LABEL_41:
    *(_DWORD *)(*((_QWORD *)a1 + 1) + 244LL) &= ~1u;
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
        v18 = *(__m128i **)(v12 + 24LL * v11);
        if ( (unsigned int)ShouldComposeWindow((struct tagWND *const)v18, a1) )
        {
          if ( (v18[3].m128i_i8[7] & 1) != 0 )
            PostEventMessageEx(
              v18[1].m128i_i64[0],
              *(_QWORD *)(v18[1].m128i_i64[0] + 384),
              0x10u,
              (__int64)v18,
              0,
              0LL,
              0LL,
              0LL);
          v22 = IsDesktopWindow((__int64)v18);
          v23 = 1;
          if ( v22 )
            v23 = 5;
          v3 = ComposeWindow(v18, v23);
          if ( v3 < 0 )
            break;
        }
        v19 = (struct tagDESKTOP *)v18[1].m128i_i64[1];
        if ( v19 )
        {
          if ( v19 == a1 && !(unsigned int)IsWindowBeingDestroyed((__int64)v18) )
          {
            CHwndTargetProp::ReNotifyDwm(v20);
            if ( !(unsigned int)UserIsRemoteAndNotDisconnectConnection()
              || (unsigned int)UserIsRemoteAndNotDisconnectConnection() )
            {
              Prop = (CSwapChainProp *)GetProp((__int64)v18, CSwapChainProp::s_atom, 1LL);
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
      v26 = gSharedInfo[1];
      if ( *(_BYTE *)(v26 + 24LL * v11 + 16) == 1
        && (unsigned int)IsWindowComposedOnDesktop(*(struct tagWND *const *)(v26 + 24LL * v11), a1) )
      {
        ComposeWindow(v27, 2);
      }
      --v11;
    }
    GreRemoveDisplayDriverRealizations(*gpDispInfo);
    zzzEnableDwmPointerSupport(0, 0);
    GreTransferDwmStateToSpriteState((HDEV)*gpDispInfo);
    goto LABEL_41;
  }
  v25 = (void *)ReferenceDwmApiPort(v8, v7, v9, v10);
  DwmAsyncShellWindowChange(v25);
  return 0LL;
}
