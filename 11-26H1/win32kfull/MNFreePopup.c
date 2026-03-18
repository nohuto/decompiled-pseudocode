/*
 * XREFs of MNFreePopup @ 0x14017579C
 * Callers:
 *     xxxMNEndMenuState @ 0x140177ED0 (xxxMNEndMenuState.c)
 *     MNFlushDestroyedPopups @ 0x1402D0840 (MNFlushDestroyedPopups.c)
 *     xxxMNStartMenuState @ 0x1402D09E8 (xxxMNStartMenuState.c)
 *     ?xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z @ 0x1402D8F04 (-xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x14000EBC4 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x14000EC74 (safe_cast_fnid_to_PMENUWND.c)
 *     UnlockPopupMenu @ 0x1401758E0 (UnlockPopupMenu.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

_QWORD *__fastcall MNFreePopup(__int64 **a1)
{
  __int64 v2; // rcx
  __int64 v3; // rsi
  __int64 v4; // rbx

  v3 = safe_cast_fnid_to_PMENUWND(*(_QWORD *)(**a1 + 16));
  if ( v3 )
  {
    v4 = **a1;
    if ( v4 != W32GetUserSessionState(v2, *a1) + 65784 )
    {
      *(_QWORD *)(v3 + 8) = 0LL;
      if ( *(_QWORD *)(v3 + 16) && *(_QWORD *)(v3 + 16) != **a1 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 255LL);
      *(_QWORD *)(v3 + 16) = **a1;
    }
  }
  HMAssignmentUnlock(**a1 + 24);
  HMAssignmentUnlock(**a1 + 32);
  UnlockPopupMenu(a1, **a1 + 40);
  UnlockPopupMenu(a1, **a1 + 48);
  HMAssignmentUnlock(**a1 + 8);
  HMAssignmentUnlock(**a1 + 56);
  HMAssignmentUnlock(**a1 + 16);
  return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>((__int64)a1);
}
