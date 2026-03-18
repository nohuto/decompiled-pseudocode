/*
 * XREFs of xxxGetTitleBarInfoEx @ 0x14014C0C0
 * Callers:
 *     xxxRealDefWindowProc @ 0x14012F36C (xxxRealDefWindowProc.c)
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     IsToplevelWindowDesktopComposed @ 0x14012D424 (IsToplevelWindowDesktopComposed.c)
 *     xxxCalcCaptionButton @ 0x14014AFF8 (xxxCalcCaptionButton.c)
 *     DwmSyncGetTitleBarInfo @ 0x14014C2D4 (DwmSyncGetTitleBarInfo.c)
 *     ?xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z @ 0x14014DE9C (-xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

__int64 __fastcall xxxGetTitleBarInfoEx(struct tagWND *a1, struct tagTITLEBARINFO *a2)
{
  unsigned int v3; // esi
  __int64 v5; // rdx
  __int64 v6; // rcx
  void *v7; // rbp
  char v8; // bl
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 UserSessionState; // rax
  __int64 v12; // rcx
  NTSTATUS TitleBarInfo; // ebp
  __int64 v14; // rcx
  unsigned int CurrentThreadDpiAwarenessContext; // r15d
  char *v16; // rbx
  __int64 v17; // rbp
  int v18; // eax
  _DWORD *v20; // rsi
  int v21; // ebx
  _DWORD *v22; // rdi
  ULONG v23; // eax
  int v24; // [rsp+70h] [rbp+18h] BYREF
  __int64 v25; // [rsp+78h] [rbp+20h] BYREF

  v3 = 0;
  v24 = 0;
  if ( !(unsigned int)IsToplevelWindowDesktopComposed((__int64)a1) )
    goto LABEL_12;
  v7 = (void *)ReferenceDwmApiPort(v6, v5);
  v8 = 0;
  UserSessionState = W32GetUserSessionState(v10, v9);
  if ( (unsigned __int8)ExIsFastResourceHeldExclusive(*(_QWORD *)(UserSessionState + 16)) == 1 )
  {
    v8 = 1;
    LeaveMitRitHazardCrit();
  }
  UserSessionSwitchLeaveCrit(v12);
  TitleBarInfo = DwmSyncGetTitleBarInfo(v7);
  EnterCrit(1LL, 0LL);
  if ( v8 )
    EnterMitRitHazardCrit();
  if ( TitleBarInfo < 0 )
  {
    v23 = RtlNtStatusToDosError(TitleBarInfo);
    UserSetLastError(v23);
    v18 = 1;
  }
  else
  {
    v3 = 1;
    v25 = ValidateHmonitorNoRip(*(_QWORD *)(*((_QWORD *)a1 + 5) + 256LL));
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v14);
    PhysicalToLogicalDPIRect((char *)a2 + 4, (char *)a2 + 4, CurrentThreadDpiAwarenessContext, &v25);
    v16 = (char *)a2 + 44;
    v17 = 6LL;
    do
    {
      PhysicalToLogicalDPIRect(v16, v16, CurrentThreadDpiAwarenessContext, &v25);
      v16 += 16;
      --v17;
    }
    while ( v17 );
    v18 = v24;
  }
  if ( !v18 )
  {
LABEL_12:
    *(_OWORD *)((char *)a2 + 20) = 0LL;
    *(_QWORD *)((char *)a2 + 36) = 0LL;
    memset_0((char *)a2 + 44, 0, 0x60uLL);
    xxxCommonGetTitleBarInfo(a1, a2);
    v20 = (_DWORD *)((char *)a2 + 28);
    v21 = 2;
    v22 = (_DWORD *)((char *)a2 + 76);
    do
    {
      if ( (*v20 & 0x8000) == 0 )
      {
        LOWORD(v24) = 0;
        LODWORD(v25) = 0;
        xxxCalcCaptionButton(a1, v21, &v24, v22, (int *)&v25, 1);
      }
      ++v21;
      v22 += 4;
      ++v20;
    }
    while ( v21 <= 5 );
    return 1;
  }
  return v3;
}
