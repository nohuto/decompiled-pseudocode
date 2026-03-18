/*
 * XREFs of HasHidTable @ 0x1C0090A50
 * Callers:
 *     SetPointer @ 0x1C003E370 (SetPointer.c)
 *     UpdateCursorImageForMonitorDpi @ 0x1C0040B44 (UpdateCursorImageForMonitorDpi.c)
 *     SetNewForegroundQueue @ 0x1C0047320 (SetNewForegroundQueue.c)
 *     xxxKeyEvent @ 0x1C00485C0 (xxxKeyEvent.c)
 *     xxxDoHotKeyStuff @ 0x1C0049418 (xxxDoHotKeyStuff.c)
 *     ?RawInputRequestedForKeyboard@@YAHPEAUtagTHREADINFO@@@Z @ 0x1C004A73C (-RawInputRequestedForKeyboard@@YAHPEAUtagTHREADINFO@@@Z.c)
 *     ProcessQueuedMouseEvents @ 0x1C004B12C (ProcessQueuedMouseEvents.c)
 *     xxxButtonEvent @ 0x1C004BA34 (xxxButtonEvent.c)
 *     ?xxxDoButtonEvent@@YAXPEAUtagMOUSEEVENT@@@Z @ 0x1C004CCD8 (-xxxDoButtonEvent@@YAXPEAUtagMOUSEEVENT@@@Z.c)
 *     ?AdjustLegacyDeviceFlags@@YAXPEAUtagPROCESSINFO@@@Z @ 0x1C0078960 (-AdjustLegacyDeviceFlags@@YAXPEAUtagPROCESSINFO@@@Z.c)
 *     PostMoveToPwnd @ 0x1C008BBEC (PostMoveToPwnd.c)
 *     UpdateRawMouseMode @ 0x1C0090674 (UpdateRawMouseMode.c)
 *     zzzUpdateCursorImage @ 0x1C00906F0 (zzzUpdateCursorImage.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall HasHidTable(__int64 a1)
{
  _BOOL8 result; // rax
  __int64 v2; // rcx

  result = 0LL;
  if ( a1 )
  {
    v2 = *(_QWORD *)(a1 + 384);
    if ( v2 )
      return *(_QWORD *)(v2 + 784) != 0LL;
  }
  return result;
}
