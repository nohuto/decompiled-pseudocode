/*
 * XREFs of GetActiveTrackPwnd @ 0x1C01E23E0
 * Callers:
 *     xxxSystemTimerProc @ 0x1C00C6990 (xxxSystemTimerProc.c)
 *     xxxTrackMouseMove @ 0x1C00C6FC4 (xxxTrackMouseMove.c)
 *     xxxActiveWindowTracking @ 0x1C01E2C7C (xxxActiveWindowTracking.c)
 *     zzzActiveCursorTracking @ 0x1C01E2DC0 (zzzActiveCursorTracking.c)
 * Callees:
 *     DWP_GetEnabledPopup @ 0x1C0009690 (DWP_GetEnabledPopup.c)
 *     IsModelessMenuNotificationWindow @ 0x1C00CAF94 (IsModelessMenuNotificationWindow.c)
 */

__int64 __fastcall GetActiveTrackPwnd(__int64 a1, _QWORD *a2)
{
  char v2; // al
  __int64 EnabledPopup; // r8
  __int64 v5; // r9

  v2 = *(_BYTE *)(a1 + 55);
  EnabledPopup = a1;
  while ( (v2 & 0xC0) == 0x40 )
  {
    EnabledPopup = *(_QWORD *)(EnabledPopup + 88);
    v2 = *(_BYTE *)(EnabledPopup + 55);
  }
  if ( (*(_BYTE *)(EnabledPopup + 55) & 8) != 0 )
    EnabledPopup = DWP_GetEnabledPopup((_QWORD *)EnabledPopup);
  if ( !EnabledPopup )
    return 0LL;
  if ( (*(_BYTE *)(EnabledPopup + 55) & 0x10) == 0 )
    return 0LL;
  v5 = *(_QWORD *)(*(_QWORD *)(EnabledPopup + 16) + 384LL);
  if ( v5 == gpqForeground
    && (EnabledPopup == *(_QWORD *)(v5 + 80)
     || (unsigned int)IsModelessMenuNotificationWindow(EnabledPopup, (__int64)a2, EnabledPopup)) )
  {
    return 0LL;
  }
  if ( EnabledPopup == *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(EnabledPopup + 24) + 8LL) + 160LL) )
    return 0LL;
  if ( a2 )
    *a2 = v5;
  return EnabledPopup;
}
