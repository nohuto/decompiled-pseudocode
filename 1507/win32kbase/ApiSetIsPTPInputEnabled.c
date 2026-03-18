/*
 * XREFs of ApiSetIsPTPInputEnabled @ 0x1C00CD51C
 * Callers:
 *     rimProcessPTPDeviceInput @ 0x1C00CC708 (rimProcessPTPDeviceInput.c)
 *     RIMApplyPTPConfigRemedy @ 0x1C00CFFB4 (RIMApplyPTPConfigRemedy.c)
 * Callees:
 *     IsIsPTPInputEnabledSupported_0 @ 0x1C0002E40 (IsIsPTPInputEnabledSupported_0.c)
 */

__int64 ApiSetIsPTPInputEnabled()
{
  if ( (int)IsIsPTPInputEnabledSupported_0() < 0 )
    return 1LL;
  else
    return IsPTPInputEnabled_0();
}
