/*
 * XREFs of ValidatePtiMouse @ 0x1C00E1668
 * Callers:
 *     ?xxxDoButtonEvent@@YAXPEAUtagMOUSEEVENT@@@Z @ 0x1C00DD764 (-xxxDoButtonEvent@@YAXPEAUtagMOUSEEVENT@@@Z.c)
 *     ProcessQueuedMouseEvents @ 0x1C00E11B4 (ProcessQueuedMouseEvents.c)
 *     ?AdjustLegacyDeviceFlags@@YAXPEAUtagPROCESSINFO@@@Z @ 0x1C00E1C7C (-AdjustLegacyDeviceFlags@@YAXPEAUtagPROCESSINFO@@@Z.c)
 *     DestroyThreadHidObjects @ 0x1C00E2960 (DestroyThreadHidObjects.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ValidatePtiMouse(__int64 a1)
{
  __int64 v1; // rax

  if ( !a1 )
    return 0LL;
  v1 = *(_QWORD *)(a1 + 72);
  if ( v1 )
    return *(_QWORD *)(v1 + 16);
  else
    return *(_QWORD *)(a1 + 56);
}
