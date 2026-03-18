/*
 * XREFs of AcceptDeviceFirmwareLockCompletion @ 0x1C0036FE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall AcceptDeviceFirmwareLockCompletion(__int64 a1, __int64 a2, __int64 a3)
{
  *(_QWORD *)(a1 + 32) = a3;
  return GenericDeviceFirmwareLockCompletion();
}
