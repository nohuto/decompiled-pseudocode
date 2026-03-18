/*
 * XREFs of DxgkEngNotifyDisplayChange @ 0x1C00C3BB0
 * Callers:
 *     <none>
 * Callees:
 *     IsDwmAsyncNotifyDisplayModeChangeSupported_0 @ 0x1C0001D18 (IsDwmAsyncNotifyDisplayModeChangeSupported_0.c)
 *     DwmAsyncNotifyDisplayModeChange_0 @ 0x1C0001D20 (DwmAsyncNotifyDisplayModeChange_0.c)
 *     ReferenceDwmApiPort @ 0x1C001D7D0 (ReferenceDwmApiPort.c)
 *     GreIncrementDisplaySettingsUniqueness @ 0x1C00C3CA0 (GreIncrementDisplaySettingsUniqueness.c)
 */

__int64 DxgkEngNotifyDisplayChange()
{
  __int64 v0; // rcx
  int CurrentProcessSessionId; // [rsp+50h] [rbp+8h] BYREF

  GreIncrementDisplaySettingsUniqueness();
  if ( (int)IsDwmAsyncNotifyDisplayModeChangeSupported_0() >= 0 )
  {
    ReferenceDwmApiPort();
    DwmAsyncNotifyDisplayModeChange_0();
  }
  CurrentProcessSessionId = PsGetCurrentProcessSessionId(v0);
  return ZwUpdateWnfStateData(&WNF_DX_DISPLAY_CONFIG_CHANGE_NOTIFICATION, 0LL, 0LL, 0LL, &CurrentProcessSessionId, 0, 0);
}
