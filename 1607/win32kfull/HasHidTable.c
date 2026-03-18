/*
 * XREFs of HasHidTable @ 0x1C005C980
 * Callers:
 *     PostMoveToPwnd @ 0x1C0056F40 (PostMoveToPwnd.c)
 *     UpdateRawMouseMode @ 0x1C005B7C4 (UpdateRawMouseMode.c)
 *     zzzUpdateCursorImage @ 0x1C005C620 (zzzUpdateCursorImage.c)
 *     SetPointer @ 0x1C0094C10 (SetPointer.c)
 *     xxxKeyEvent @ 0x1C00A2818 (xxxKeyEvent.c)
 *     ?HandleRawInput@@YA?AW4RAW_INPUT_PROCESSING_RESULT@@PEAXPEAU_KEYBOARD_INPUT_DATA@@PEBURAW_INPUT_SUPPLEMENTAL_INFO@@@Z @ 0x1C00A420C (-HandleRawInput@@YA-AW4RAW_INPUT_PROCESSING_RESULT@@PEAXPEAU_KEYBOARD_INPUT_DATA@@PEBURAW_INPUT_.c)
 *     HasRawInputForegroundTarget @ 0x1C00A431C (HasRawInputForegroundTarget.c)
 *     UpdateCursorImageForMonitorDpi @ 0x1C00DB460 (UpdateCursorImageForMonitorDpi.c)
 *     SetNewForegroundQueue @ 0x1C00DC330 (SetNewForegroundQueue.c)
 *     ?xxxDoButtonEvent@@YAXPEAUtagMOUSEEVENT@@@Z @ 0x1C00DD764 (-xxxDoButtonEvent@@YAXPEAUtagMOUSEEVENT@@@Z.c)
 *     xxxButtonEvent @ 0x1C00DDEA4 (xxxButtonEvent.c)
 *     ProcessQueuedMouseEvents @ 0x1C00E11B4 (ProcessQueuedMouseEvents.c)
 *     ?AdjustLegacyDeviceFlags@@YAXPEAUtagPROCESSINFO@@@Z @ 0x1C00E1C7C (-AdjustLegacyDeviceFlags@@YAXPEAUtagPROCESSINFO@@@Z.c)
 *     RegisterModernAppThreadForRawKeyboard @ 0x1C01CC74C (RegisterModernAppThreadForRawKeyboard.c)
 *     UnregisterModernAppThreadForRawKeyboard @ 0x1C01CC7F0 (UnregisterModernAppThreadForRawKeyboard.c)
 *     ?RawInputRequestedForKeyboard@@YAHPEAUtagTHREADINFO@@@Z @ 0x1C01D0910 (-RawInputRequestedForKeyboard@@YAHPEAUtagTHREADINFO@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HasHidTable(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rcx

  result = 0LL;
  if ( a1 )
  {
    v2 = *(_QWORD *)(a1 + 376);
    if ( v2 )
    {
      if ( *(_QWORD *)(v2 + 776) )
        return 1LL;
    }
  }
  return result;
}
