/*
 * XREFs of SetMouseTrails @ 0x1400F6DA0
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x1401CB418 (xxxSystemParametersInfoWorker.c)
 *     xxxUpdatePerUserSystemParameters @ 0x14023F980 (xxxUpdatePerUserSystemParameters.c)
 *     xxxRemoteReconnect @ 0x1402D3988 (xxxRemoteReconnect.c)
 * Callees:
 *     _PostMessage @ 0x14001F780 (_PostMessage.c)
 *     FindTimer @ 0x14001FEF4 (FindTimer.c)
 *     Feature_DesktopDWMCursor__private_IsEnabledDeviceUsageNoInline @ 0x14006B130 (Feature_DesktopDWMCursor__private_IsEnabledDeviceUsageNoInline.c)
 *     ?SetPointerInternal@@YAX_NW4CursorImageReason@Cursor@InputTraceLogging@@@Z @ 0x1400F7250 (-SetPointerInternal@@YAX_NW4CursorImageReason@Cursor@InputTraceLogging@@@Z.c)
 *     IsRemoteConnection @ 0x1400F99E0 (IsRemoteConnection.c)
 *     ?SetMouseTrails@CursorApiRouter@@QEBAXI@Z @ 0x140287D7C (-SetMouseTrails@CursorApiRouter@@QEBAXI@Z.c)
 */

void __fastcall SetMouseTrails(unsigned int a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  CursorApiRouter *v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned int v7; // ebx
  __int64 UserSessionState; // rax
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  _BOOL8 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx

  if ( (unsigned int)Feature_DesktopDWMCursor__private_IsEnabledDeviceUsageNoInline() )
  {
    W32GetUserSessionState(v3, v2);
    CursorApiRouter::SetMouseTrails(v4, a1);
  }
  else
  {
    SetPointerInternal(0LL, 6LL);
    v7 = a1 - 1;
    if ( !a1 )
      v7 = 0;
    UserSessionState = W32GetUserSessionState(v6, v5);
    LOBYTE(v9) = 1;
    *(_DWORD *)(UserSessionState + 16288) = v7;
    SetPointerInternal(v9, 6LL);
    if ( !(unsigned int)IsRemoteConnection() )
    {
      v12 = *(_QWORD *)(W32GetUserSessionState(v11, v10) + 16296);
      v16 = *(_DWORD *)(W32GetUserSessionState(v14, v13) + 16288) != 0;
      if ( v16 != (v12 != 0) )
      {
        if ( *(_DWORD *)(W32GetUserSessionState(v16, v15) + 16288) )
        {
          v19 = W32GetUserSessionState(v18, v17);
          PostMessage(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v19 + 68472) + 496LL) + 24LL), 1025, 0, 0);
        }
        else
        {
          v20 = W32GetUserSessionState(v18, v17);
          FindTimer(0LL, *(_QWORD *)(v20 + 16296), 4u, 1, 0LL);
          *(_QWORD *)(W32GetUserSessionState(v22, v21) + 16296) = 0LL;
        }
      }
    }
  }
}
