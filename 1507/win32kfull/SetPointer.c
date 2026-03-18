/*
 * XREFs of SetPointer @ 0x1C003E370
 * Callers:
 *     xxxSystemParametersInfo @ 0x1C003A8E0 (xxxSystemParametersInfo.c)
 *     zzzEnableDwmPointerSupport @ 0x1C003E1F8 (zzzEnableDwmPointerSupport.c)
 *     UserResetPointer @ 0x1C003E350 (UserResetPointer.c)
 *     xxxMakeWindowForegroundWithState @ 0x1C007FBFC (xxxMakeWindowForegroundWithState.c)
 *     zzzUpdateCursorImage @ 0x1C00906F0 (zzzUpdateCursorImage.c)
 *     xxxRemoteReconnect @ 0x1C012DFA0 (xxxRemoteReconnect.c)
 *     xxxUserResetDisplayDevice @ 0x1C01302D0 (xxxUserResetDisplayDevice.c)
 *     SetMouseTrails @ 0x1C01359E4 (SetMouseTrails.c)
 *     ChangeComposableCursor @ 0x1C01E6918 (ChangeComposableCursor.c)
 *     RemoteShadowCleanup @ 0x1C0202B80 (RemoteShadowCleanup.c)
 *     RemoteShadowStart @ 0x1C0202D00 (RemoteShadowStart.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     ?GetCurrentCursorFrame@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1C00909C0 (-GetCurrentCursorFrame@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 *     FixupCursorForMonitor @ 0x1C00909E8 (FixupCursorForMonitor.c)
 *     HasHidTable @ 0x1C0090A50 (HasHidTable.c)
 *     GreSetPointer @ 0x1C00913EC (GreSetPointer.c)
 *     ?FCursorShadowed@@YAHPEAU_CURSINFO@@@Z @ 0x1C0091670 (-FCursorShadowed@@YAHPEAU_CURSINFO@@@Z.c)
 *     IsDPIDWMSysMet @ 0x1C0095430 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C0095458 (IsDPIAbsoluteSysMet.c)
 */

struct tagCURSOR *__fastcall SetPointer(int a1)
{
  unsigned int v1; // r8d
  unsigned int v2; // r9d
  struct _CURSINFO *v3; // rdx
  struct tagCURSOR *result; // rax
  __int64 v5; // rbx
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  _DWORD *v10; // rcx
  struct tagCURSOR *v11; // rax
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
    return (struct tagCURSOR *)GreSetPointer((HDEV)*gpDispInfo, v3, v1, v2, v17);
  }
  if ( !gpqForeground
    || ((v5 = *(_QWORD *)(gpqForeground + 64LL)) != 0
      ? (v6 = *(_QWORD *)(v5 + 16))
      : (v6 = *(_QWORD *)(gpqForeground + 48LL)),
        *(int *)(gpqForeground + 328LL) >= 0
     || !(unsigned int)HasHidTable(v6)
     || (result = *(struct tagCURSOR **)(v6 + 384), (*(_DWORD *)(*((_QWORD *)result + 98) + 100LL) & 0x100) == 0)) )
  {
    result = (struct tagCURSOR *)gpqCursor;
    if ( gpqCursor )
    {
      if ( *(int *)(gpqCursor + 328LL) >= 0 && *(_QWORD *)(gpqCursor + 320LL) )
      {
        if ( (unsigned int)IsDPIAbsoluteSysMet(19LL) )
        {
          if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v7) + 776) & 0x2000) == 0
            && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v13) + 776) & 0x4000) == 0 )
          {
LABEL_38:
            result = (struct tagCURSOR *)gpsi;
            v10 = (_DWORD *)(gpsi + 2344LL);
            goto LABEL_18;
          }
        }
        else if ( (unsigned int)IsDPIDWMSysMet(v7)
               && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v8) + 776) & 0x2000) == 0
               && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v14) + 776) & 0x4000) == 0
               && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
               && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                            + 260LL) & 1 )
        {
          goto LABEL_38;
        }
        if ( (unsigned int)IsDPIDWMSysMet(19LL)
          && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v9) + 776) & 0x2000) != 0
          && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
            ? (v16 = 0)
            : (v16 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                           + 8LL)
                               + 260LL) & 1),
              v16) )
        {
          result = (struct tagCURSOR *)gpsi;
          v10 = (_DWORD *)(gpsi + 2732LL);
        }
        else
        {
          result = (struct tagCURSOR *)gpsi;
          v10 = (_DWORD *)(gpsi + 1956LL);
        }
LABEL_18:
        if ( *v10 )
        {
          v11 = (struct tagCURSOR *)FixupCursorForMonitor(*(_QWORD *)(gpqCursor + 320LL));
          result = GetCurrentCursorFrame(v11);
          if ( result )
          {
            v1 = (unsigned int)FCursorShadowed((struct tagCURSOR *)((char *)result + 80)) != 0 ? 0x10 : 0;
            if ( gbForceSoftwareCursor == 1 )
              v1 |= 0x20u;
            v3 = v12;
            v2 = gMouseTrails;
            v17 = 50;
            if ( gProtocolType )
              v2 = 0;
            return (struct tagCURSOR *)GreSetPointer((HDEV)*gpDispInfo, v3, v1, v2, v17);
          }
        }
      }
    }
  }
  return result;
}
