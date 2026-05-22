/*
 * XREFs of ?DeliverInput@DWMLegacyInputTarget@@WBA@EAAJPEAUInputInfo@@@Z @ 0x18001BA30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DWMLegacyInputTarget::DeliverInput(__int64 a1, __int64 a2, const struct DeviceCommandMessage *a3)
{
  return Win32kInterop::SendCommandToInputDevice((Win32kInterop *)(a1 - 16), a2, a3);
}
