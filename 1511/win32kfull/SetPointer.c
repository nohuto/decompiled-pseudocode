/*
 * XREFs of SetPointer @ 0x1C0096E50
 * Callers:
 *     zzzUpdateCursorImage @ 0x1C0053910 (zzzUpdateCursorImage.c)
 *     xxxMakeWindowForegroundWithState @ 0x1C008F264 (xxxMakeWindowForegroundWithState.c)
 *     SetMouseTrails @ 0x1C0096C64 (SetMouseTrails.c)
 *     zzzEnableDwmPointerSupport @ 0x1C0096CD8 (zzzEnableDwmPointerSupport.c)
 *     UserResetPointer @ 0x1C0096E30 (UserResetPointer.c)
 *     xxxSystemParametersInfo @ 0x1C0126360 (xxxSystemParametersInfo.c)
 *     xxxRemoteReconnect @ 0x1C014DAC0 (xxxRemoteReconnect.c)
 *     xxxUserResetDisplayDevice @ 0x1C014F2F0 (xxxUserResetDisplayDevice.c)
 *     ChangeComposableCursor @ 0x1C01E6DA8 (ChangeComposableCursor.c)
 *     RemoteShadowCleanup @ 0x1C0202F20 (RemoteShadowCleanup.c)
 *     RemoteShadowStart @ 0x1C02030A0 (RemoteShadowStart.c)
 * Callees:
 *     GreSetPointer @ 0x1C003B8F4 (GreSetPointer.c)
 *     ?GetCurrentCursorFrame@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1C0053BE0 (-GetCurrentCursorFrame@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 *     FixupCursorForMonitor @ 0x1C0053C08 (FixupCursorForMonitor.c)
 *     HasHidTable @ 0x1C0053C70 (HasHidTable.c)
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     IsDPIDWMSysMet @ 0x1C0072254 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C007227C (IsDPIAbsoluteSysMet.c)
 *     ?FCursorShadowed@@YAHPEAU_CURSINFO@@@Z @ 0x1C0096FAC (-FCursorShadowed@@YAHPEAU_CURSINFO@@@Z.c)
 */

void __fastcall SetPointer(int a1)
{
  unsigned int v1; // r8d
  unsigned int v2; // r9d
  struct _CURSINFO *v3; // rdx
  __int64 v4; // rbx
  __int64 v5; // rbx
  unsigned __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  _DWORD *v9; // rcx
  struct tagCURSOR *v10; // rax
  struct tagCURSOR *CurrentCursorFrame; // rax
  struct _CURSINFO *v12; // r10
  __int64 v13; // rcx
  __int64 v14; // rcx
  int v16; // ecx
  unsigned int v17; // [rsp+20h] [rbp-18h]

  if ( !a1 )
  {
    v1 = 0;
    v17 = 0;
    if ( gbForceSoftwareCursor == 1 )
      v1 = 32;
    v2 = 0;
    v3 = 0LL;
LABEL_5:
    GreSetPointer((HDEV)*gpDispInfo, v3, v1, v2, v17);
    return;
  }
  if ( !gpqForeground
    || ((v4 = *(_QWORD *)(gpqForeground + 64LL)) != 0
      ? (v5 = *(_QWORD *)(v4 + 16))
      : (v5 = *(_QWORD *)(gpqForeground + 48LL)),
        *(int *)(gpqForeground + 328LL) >= 0
     || !(unsigned int)HasHidTable(v5)
     || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 376) + 784LL) + 100LL) & 0x100) == 0) )
  {
    if ( gpqCursor && *(int *)(gpqCursor + 328LL) >= 0 && *(_QWORD *)(gpqCursor + 320LL) )
    {
      if ( (unsigned int)IsDPIAbsoluteSysMet(0x13uLL) )
      {
        if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v6) + 776) & 0x2000) == 0
          && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v13) + 776) & 0x4000) == 0 )
        {
LABEL_38:
          v9 = (_DWORD *)(gpsi + 2344LL);
          goto LABEL_18;
        }
      }
      else if ( IsDPIDWMSysMet(v6)
             && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v7) + 776) & 0x2000) == 0
             && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v14) + 776) & 0x4000) == 0
             && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
             && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                          + 244LL) & 1 )
      {
        goto LABEL_38;
      }
      if ( IsDPIDWMSysMet(0x13uLL)
        && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v8) + 776) & 0x2000) != 0
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
          ? (v16 = 0)
          : (v16 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                         + 8LL)
                             + 244LL) & 1),
            v16) )
      {
        v9 = (_DWORD *)(gpsi + 2732LL);
      }
      else
      {
        v9 = (_DWORD *)(gpsi + 1956LL);
      }
LABEL_18:
      if ( *v9 )
      {
        v10 = (struct tagCURSOR *)FixupCursorForMonitor(*(_QWORD *)(gpqCursor + 320LL));
        CurrentCursorFrame = GetCurrentCursorFrame(v10);
        if ( CurrentCursorFrame )
        {
          v1 = (unsigned int)FCursorShadowed((struct tagCURSOR *)((char *)CurrentCursorFrame + 80)) != 0 ? 0x10 : 0;
          if ( gbForceSoftwareCursor == 1 )
            v1 |= 0x20u;
          v3 = v12;
          v2 = gMouseTrails;
          v17 = 50;
          if ( gProtocolType )
            v2 = 0;
          goto LABEL_5;
        }
      }
    }
  }
}
