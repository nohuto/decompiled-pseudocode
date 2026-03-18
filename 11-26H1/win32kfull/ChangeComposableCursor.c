/*
 * XREFs of ChangeComposableCursor @ 0x14024CDC4
 * Callers:
 *     MagpDestroyLensContext @ 0x1401E7AA4 (MagpDestroyLensContext.c)
 *     MagSetLensContextInformation @ 0x1401EB08C (MagSetLensContextInformation.c)
 *     NtUserEnableSoftwareCursorForScreenCapture @ 0x140259DE0 (NtUserEnableSoftwareCursorForScreenCapture.c)
 *     ?DisableDwmSwCursorMoveSize@@YAHH@Z @ 0x140296F88 (-DisableDwmSwCursorMoveSize@@YAHH@Z.c)
 *     MagContextThreadCallout @ 0x1402984B0 (MagContextThreadCallout.c)
 *     ?EnableDwmSwCursorMoveSize@@YAXPEAH@Z @ 0x1402C4114 (-EnableDwmSwCursorMoveSize@@YAXPEAH@Z.c)
 *     xxxDwmStopRedirection @ 0x1402CFD60 (xxxDwmStopRedirection.c)
 * Callees:
 *     SetPointer @ 0x1400F7230 (SetPointer.c)
 */

__int64 __fastcall ChangeComposableCursor(__int64 a1, __int64 a2)
{
  int v2; // edi
  int v3; // ebx
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 result; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx

  v2 = a1;
  v3 = *(_DWORD *)(W32GetUserSessionState(a1, a2) + 36320) + ((_DWORD)a1 != 0 ? 1 : -1);
  if ( !*(_DWORD *)(W32GetUserSessionState(v4, (unsigned int)-v2) + 36320) && v2 )
  {
    SetPointer(0LL);
    *(_DWORD *)(W32GetUserSessionState(v11, v10) + 36324) = 1;
LABEL_8:
    SetPointer(1LL);
    goto LABEL_3;
  }
  if ( *(_DWORD *)(W32GetUserSessionState(v6, v5) + 36320) == 1 && !v2 )
  {
    SetPointer(0LL);
    *(_DWORD *)(W32GetUserSessionState(v13, v12) + 36324) = 0;
    goto LABEL_8;
  }
LABEL_3:
  result = W32GetUserSessionState(v8, v7);
  *(_DWORD *)(result + 36320) = v3;
  return result;
}
