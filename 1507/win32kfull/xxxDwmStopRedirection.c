/*
 * XREFs of xxxDwmStopRedirection @ 0x1C012B6A0
 * Callers:
 *     NtUserDwmKernelShutdown @ 0x1C0219680 (NtUserDwmKernelShutdown.c)
 * Callees:
 *     DeleteOrSetRedirectionBitmap @ 0x1C000BF8C (DeleteOrSetRedirectionBitmap.c)
 *     xxxFlushDeferredWindowEvents @ 0x1C004FB28 (xxxFlushDeferredWindowEvents.c)
 *     xxxRedrawWindow @ 0x1C008E8E0 (xxxRedrawWindow.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00954C8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0095664 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     _GetProcessWindowStation @ 0x1C00DD080 (_GetProcessWindowStation.c)
 *     bSetDevDragRect @ 0x1C00FA430 (bSetDevDragRect.c)
 *     StopFade @ 0x1C010E080 (StopFade.c)
 *     DwmAsyncDesktopFree @ 0x1C012B8C4 (DwmAsyncDesktopFree.c)
 *     zzzDecomposeDesktop @ 0x1C012B95C (zzzDecomposeDesktop.c)
 *     GreDwmShutdown @ 0x1C012C414 (GreDwmShutdown.c)
 *     DwmNotifyChildrenAddRemove @ 0x1C014A8B4 (DwmNotifyChildrenAddRemove.c)
 *     GreDxDwmShutdown @ 0x1C0264F18 (GreDxDwmShutdown.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxDwmStopRedirection(int a1)
{
  __int64 ProcessWindowStation; // rsi
  unsigned int v3; // ebx
  __int64 v4; // rcx
  __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  void *v10; // rax
  HSURF v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 i; // rdi
  __int64 v15; // r10
  int v16; // r9d
  __int64 v17; // rdx
  __int64 v18; // rcx
  _QWORD v20[5]; // [rsp+20h] [rbp-28h] BYREF
  char v21; // [rsp+58h] [rbp+10h] BYREF

  ProcessWindowStation = GetProcessWindowStation(0LL);
  v3 = 0;
  if ( (unsigned int)IsDwmApiPortRegistered() && (*(_DWORD *)(ProcessWindowStation + 32) & 0x204) == 0x200 )
  {
    ++gdwDeferWinEvent;
    UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v21);
    if ( *(_QWORD *)&gfade[4] )
      StopFade();
    bSetDevDragRect((HDEV)*gpDispInfo, 0LL, 0LL, 0);
    v4 = grpdeskRitInput;
    if ( grpdeskRitInput )
    {
      v5 = *(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 24LL) + 16LL);
      if ( v5 )
      {
        do
        {
          if ( (*(_DWORD *)(*(_QWORD *)(v5 + 8) + 260LL) & 1) != 0 )
          {
            zzzDecomposeDesktop((struct tagDESKTOP *)v5);
            DwmNotifyChildrenAddRemove((struct tagDESKTOP *)v5);
            v10 = (void *)ReferenceDwmApiPort(v7, v6, v8, v9);
            DwmAsyncDesktopFree(v10);
          }
          v5 = *(_QWORD *)(v5 + 16);
        }
        while ( v5 );
        v4 = grpdeskRitInput;
      }
      v11 = *(HSURF *)(ProcessWindowStation + 88);
      if ( v11 )
        DeleteOrSetRedirectionBitmap(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v4 + 8LL) + 16LL), v11, 1);
    }
    GreDwmShutdown(*gpDispInfo);
    *(_DWORD *)(ProcessWindowStation + 32) &= ~0x200u;
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v21);
    if ( --gdwDeferWinEvent == 1 && gpPendingNotifies )
      xxxFlushDeferredWindowEvents();
    if ( !a1 )
      NotifyTokenManagerOfRedirectionStop();
    if ( (unsigned int)UserIsConsoleConnection() )
    {
      UserSessionSwitchLeaveCrit(v13, v12);
      GreDxDwmShutdown();
      EnterCrit(1LL);
    }
    if ( grpdeskRitInput )
    {
      for ( i = *(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 24LL) + 16LL); i; i = *(_QWORD *)(i + 16) )
      {
        if ( (*(_DWORD *)(i + 32) & 8) == 0 )
        {
          v15 = *(_QWORD *)(*(_QWORD *)(i + 8) + 16LL);
          if ( v15 )
          {
            v16 = 645;
            v20[0] = *(_QWORD *)(gptiCurrent + 376LL);
            *(_QWORD *)(gptiCurrent + 376LL) = v20;
            ++*(_DWORD *)(v15 + 8);
            v20[1] = v15;
            if ( !g_pDwmState || !gfDwmDeviceBitmapsEnabled )
              v16 = 66181;
            xxxRedrawWindow((struct tagWND *)v15, 0LL, 0LL, v16);
            ThreadUnlock1(v18, v17);
          }
        }
      }
    }
  }
  else
  {
    return (unsigned int)-1073741790;
  }
  return v3;
}
