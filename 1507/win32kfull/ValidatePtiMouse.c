/*
 * XREFs of ValidatePtiMouse @ 0x1C004B980
 * Callers:
 *     ProcessQueuedMouseEvents @ 0x1C004B12C (ProcessQueuedMouseEvents.c)
 *     ?xxxDoButtonEvent@@YAXPEAUtagMOUSEEVENT@@@Z @ 0x1C004CCD8 (-xxxDoButtonEvent@@YAXPEAUtagMOUSEEVENT@@@Z.c)
 *     DestroyThreadHidObjects @ 0x1C0078200 (DestroyThreadHidObjects.c)
 *     ?AdjustLegacyDeviceFlags@@YAXPEAUtagPROCESSINFO@@@Z @ 0x1C0078960 (-AdjustLegacyDeviceFlags@@YAXPEAUtagPROCESSINFO@@@Z.c)
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
