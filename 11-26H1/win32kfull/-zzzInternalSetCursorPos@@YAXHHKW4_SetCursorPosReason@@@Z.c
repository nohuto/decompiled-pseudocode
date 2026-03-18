/*
 * XREFs of ?zzzInternalSetCursorPos@@YAXHHKW4_SetCursorPosReason@@@Z @ 0x14002A488
 * Callers:
 *     EditionInternalSetCursorPos @ 0x14002A470 (EditionInternalSetCursorPos.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z @ 0x14005DE80 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z.c)
 *     ?xxxInitializeMoveSizeData@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@IK@Z @ 0x14005EF30 (-xxxInitializeMoveSizeData@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@IK@Z.c)
 *     zzzEnableDwmPointerSupport @ 0x1400F8118 (zzzEnableDwmPointerSupport.c)
 *     ?zzzSetCursorPos@@YA_NHH@Z @ 0x1401DDAB0 (-zzzSetCursorPos@@YA_NHH@Z.c)
 *     zzzResetSharedDesktops @ 0x1401ED3F0 (zzzResetSharedDesktops.c)
 *     xxxUserResetDisplayDevice @ 0x140248210 (xxxUserResetDisplayDevice.c)
 *     zzzActiveCursorTracking @ 0x1402A0BB8 (zzzActiveCursorTracking.c)
 * Callees:
 *     ?MovePointerImpl@CursorApiRouter@@AEAAXPEAUHDEV__@@HHKW4CursorMoveMode@1@PEAX_K@Z @ 0x14002A724 (-MovePointerImpl@CursorApiRouter@@AEAAXPEAUHDEV__@@HHKW4CursorMoveMode@1@PEAX_K@Z.c)
 *     ?MovePointerAsync@Api@Cursor@InputTraceLogging@@SAXHHK@Z @ 0x14002AA18 (-MovePointerAsync@Api@Cursor@InputTraceLogging@@SAXHHK@Z.c)
 *     ?zzzUpdateGlobalCursorSize@CCursorSizes@@QEAAXPEBUtagPOINT@@_N@Z @ 0x14002ABE8 (-zzzUpdateGlobalCursorSize@CCursorSizes@@QEAAXPEBUtagPOINT@@_N@Z.c)
 *     IsCurrentDesktopComposed @ 0x1401B8B20 (IsCurrentDesktopComposed.c)
 */

__int64 __fastcall zzzInternalSetCursorPos(__int64 a1, __int64 a2, int a3, char a4)
{
  int v4; // r14d
  unsigned __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 UserSessionState; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rbp
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rcx
  unsigned int v26; // esi
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rbx
  __int64 v31; // rdx
  __int64 v32; // rcx
  CCursorSizes *v33; // rbx
  __int64 v34; // rdx
  __int64 v35; // rcx
  const struct tagPOINT *v36; // rax
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  unsigned __int64 v39; // [rsp+40h] [rbp-18h] BYREF
  _BYTE v40[16]; // [rsp+48h] [rbp-10h] BYREF

  v39 = __PAIR64__(a2, a1);
  v4 = a4 & 1;
  if ( a3 == 1 && (unsigned int)IsCurrentDesktopComposed() )
  {
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
    LogicalToPhysicalDPIPoint(&v39, &v39, CurrentThreadDpiAwarenessContext, 0LL);
  }
  v5 = v39;
  *(_QWORD *)(W32GetUserSessionState(a1, a2) + 19216) = v5;
  v8 = *(_QWORD *)(W32GetUserSessionState(v7, v6) + 36272);
  v11 = W32GetUserSessionState(v10, v9) + 19216;
  UserSessionState = W32GetUserSessionState(v13, v12);
  CCursorClip::BoundPoint(v8, v40, *(_QWORD *)(UserSessionState + 19216), 0LL, 1, v11);
  v17 = *(_QWORD *)(W32GetUserSessionState(v16, v15) + 19216);
  v20 = *(_QWORD *)(W32GetUserSessionState(v19, v18) + 19904);
  *(_QWORD *)(v20 + 4960) = v17;
  v22 = *(_QWORD *)(W32GetUserSessionState(v20, v21) + 36336);
  v25 = *(_QWORD *)(W32GetUserSessionState(v24, v23) + 19904);
  v26 = *(_DWORD *)(v25 + 4964);
  v28 = *(_QWORD *)(W32GetUserSessionState(v25, v27) + 19904);
  LODWORD(v8) = *(_DWORD *)(v28 + 4960);
  v30 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v28, v29) + 56968) + 40LL);
  InputTraceLogging::Cursor::Api::MovePointerAsync(v8, v26, 1u);
  CursorApiRouter::MovePointerImpl(v22, v30, (unsigned int)v8, v26, 1, 1, 0LL, 0LL);
  v33 = *(CCursorSizes **)(W32GetUserSessionState(v32, v31) + 36376);
  v36 = (const struct tagPOINT *)W32GetUserSessionState(v35, v34);
  CCursorSizes::zzzUpdateGlobalCursorSize(v33, v36 + 2402, 0);
  return GenerateMouseMove((unsigned int)(2 * v4 + 1));
}
