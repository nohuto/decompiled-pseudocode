/*
 * XREFs of PiDcHandleSystemFirmwareUpdate @ 0x140606490
 * Callers:
 *     IopInitializePlugPlayServices @ 0x1407561E8 (IopInitializePlugPlayServices.c)
 * Callees:
 *     <none>
 */

__int64 PiDcHandleSystemFirmwareUpdate()
{
  return PiDcContainerRequiresConfiguration((wchar_t *)L"{00000000-0000-0000-FFFF-FFFFFFFFFFFF}");
}
