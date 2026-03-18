/*
 * XREFs of ApiSetIsPTPInputEnabled @ 0x1C00DE860
 * Callers:
 *     RIMApplyPTPConfigRemedy @ 0x1C0010ED8 (RIMApplyPTPConfigRemedy.c)
 *     RIMProcessAnyPointerDeviceInput @ 0x1C00DB5A8 (RIMProcessAnyPointerDeviceInput.c)
 * Callees:
 *     IsIsPTPInputEnabledSupported_0 @ 0x1C0002E50 (IsIsPTPInputEnabledSupported_0.c)
 */

__int64 ApiSetIsPTPInputEnabled()
{
  if ( (int)IsIsPTPInputEnabledSupported_0() < 0 )
    return 1LL;
  else
    return IsPTPInputEnabled_0();
}
