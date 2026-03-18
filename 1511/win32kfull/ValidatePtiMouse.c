/*
 * XREFs of ValidatePtiMouse @ 0x1C008591C
 * Callers:
 *     ProcessQueuedMouseEvents @ 0x1C00852E0 (ProcessQueuedMouseEvents.c)
 *     ?xxxDoButtonEvent@@YAXPEAUtagMOUSEEVENT@@@Z @ 0x1C00874E8 (-xxxDoButtonEvent@@YAXPEAUtagMOUSEEVENT@@@Z.c)
 *     ?AdjustLegacyDeviceFlags@@YAXPEAUtagPROCESSINFO@@@Z @ 0x1C0089760 (-AdjustLegacyDeviceFlags@@YAXPEAUtagPROCESSINFO@@@Z.c)
 *     DestroyThreadHidObjects @ 0x1C00F1690 (DestroyThreadHidObjects.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ValidatePtiMouse(__int64 a1)
{
  __int64 v1; // rax

  if ( !a1 )
    return 0LL;
  v1 = *(_QWORD *)(a1 + 64);
  if ( v1 )
    return *(_QWORD *)(v1 + 16);
  else
    return *(_QWORD *)(a1 + 48);
}
