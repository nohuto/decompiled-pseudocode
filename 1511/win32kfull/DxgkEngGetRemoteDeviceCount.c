/*
 * XREFs of DxgkEngGetRemoteDeviceCount @ 0x1C02634C0
 * Callers:
 *     <none>
 * Callees:
 *     ?DrvGetRemoteDeviceCount@@YAIXZ @ 0x1C014E71C (-DrvGetRemoteDeviceCount@@YAIXZ.c)
 */

__int64 __fastcall DxgkEngGetRemoteDeviceCount(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int RemoteDeviceCount; // ebx

  UserEnterUserCritSec(a1, a2, a3);
  RemoteDeviceCount = DrvGetRemoteDeviceCount();
  UserLeaveUserCritSec();
  return RemoteDeviceCount;
}
