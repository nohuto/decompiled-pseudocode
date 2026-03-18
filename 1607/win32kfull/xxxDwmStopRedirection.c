/*
 * XREFs of xxxDwmStopRedirection @ 0x1C00EFE10
 * Callers:
 *     NtUserDwmKernelShutdown @ 0x1C0212110 (NtUserDwmKernelShutdown.c)
 * Callees:
 *     xxxRedrawWindow @ 0x1C0059F20 (xxxRedrawWindow.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C007672C (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00768C8 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     DwmNotifyChildrenAddRemove @ 0x1C00934B0 (DwmNotifyChildrenAddRemove.c)
 *     bSetDevDragRect @ 0x1C00940E0 (bSetDevDragRect.c)
 *     xxxFlushDeferredWindowEvents @ 0x1C00A7A9C (xxxFlushDeferredWindowEvents.c)
 *     DeleteOrSetRedirectionBitmap @ 0x1C00D7CB8 (DeleteOrSetRedirectionBitmap.c)
 *     _GetProcessWindowStation @ 0x1C00DAF00 (_GetProcessWindowStation.c)
 *     GreDwmShutdown @ 0x1C00EE780 (GreDwmShutdown.c)
 *     zzzDecomposeDesktop @ 0x1C00EF304 (zzzDecomposeDesktop.c)
 *     DwmAsyncDesktopFree @ 0x1C00EFD6C (DwmAsyncDesktopFree.c)
 *     StopFade @ 0x1C013FC70 (StopFade.c)
 *     GreDxDwmShutdown @ 0x1C02612B8 (GreDxDwmShutdown.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxDwmStopRedirection(int a1, __int64 a2)
{
  __int64 ProcessWindowStation; // rsi
  unsigned int v4; // ebx
  __int64 v5; // rcx
  __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  void *v11; // rax
  HSURF v12; // rdx
  __int64 v13; // rcx
  __int64 i; // rdi
  __int64 v15; // r10
  int v16; // r9d
  __int64 v17; // rdx
  __int64 v18; // rcx
  _QWORD v20[5]; // [rsp+30h] [rbp-28h] BYREF
  char v21; // [rsp+68h] [rbp+10h] BYREF

  ProcessWindowStation = GetProcessWindowStation(0LL, a2);
  v4 = 0;
  if ( (unsigned int)IsDwmApiPortRegistered() && (*(_DWORD *)(ProcessWindowStation + 32) & 0x204) == 0x200 )
  {
    ++gdwDeferWinEvent;
    UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v21);
    if ( gfade[2] )
      StopFade();
    bSetDevDragRect((HDEV)*gpDispInfo, 0LL, 0LL, 0);
    v5 = grpdeskRitInput;
    if ( grpdeskRitInput )
    {
      v6 = *(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 24LL) + 16LL);
      if ( v6 )
      {
        do
        {
          if ( (*(_DWORD *)(*(_QWORD *)(v6 + 8) + 244LL) & 1) != 0 )
          {
            zzzDecomposeDesktop((struct tagDESKTOP *)v6, a1);
            DwmNotifyChildrenAddRemove((struct tagDESKTOP *)v6, 0);
            v11 = (void *)ReferenceDwmApiPort(v8, v7, v9, v10);
            DwmAsyncDesktopFree(v11, *(_QWORD *)(v6 + 40));
          }
          v6 = *(_QWORD *)(v6 + 16);
        }
        while ( v6 );
        v5 = grpdeskRitInput;
      }
      v12 = *(HSURF *)(ProcessWindowStation + 88);
      if ( v12 )
        DeleteOrSetRedirectionBitmap(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v5 + 8LL) + 16LL), v12, 1);
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
      if ( gdwInAtomicOperation )
      {
        v13 = gdwExtraInstrumentations;
        if ( (gdwExtraInstrumentations & 1) != 0 )
          KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
      }
      UserSessionSwitchLeaveCrit(v13, gdwInAtomicOperation);
      GreDxDwmShutdown();
      EnterCrit(0LL, 1LL);
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
            v20[0] = *(_QWORD *)(gptiCurrent + 368LL);
            *(_QWORD *)(gptiCurrent + 368LL) = v20;
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
  return v4;
}
