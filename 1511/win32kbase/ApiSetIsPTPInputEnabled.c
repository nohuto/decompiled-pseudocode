/*
 * XREFs of ApiSetIsPTPInputEnabled @ 0x1C00CE858
 * Callers:
 *     rimProcessPTPDeviceInput @ 0x1C00CD9FC (rimProcessPTPDeviceInput.c)
 *     RIMApplyPTPConfigRemedy @ 0x1C00D1390 (RIMApplyPTPConfigRemedy.c)
 * Callees:
 *     IsIsPTPInputEnabledSupported_0 @ 0x1C0002E70 (IsIsPTPInputEnabledSupported_0.c)
 */

__int64 ApiSetIsPTPInputEnabled()
{
  if ( (int)IsIsPTPInputEnabledSupported_0() < 0 )
    return 1LL;
  else
    return IsPTPInputEnabled_0();
}
