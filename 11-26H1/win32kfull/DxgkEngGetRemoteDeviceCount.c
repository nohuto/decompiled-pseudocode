/*
 * XREFs of DxgkEngGetRemoteDeviceCount @ 0x140348910
 * Callers:
 *     <none>
 * Callees:
 *     ?DrvGetRemoteDeviceCount@@YAIXZ @ 0x140266B1C (-DrvGetRemoteDeviceCount@@YAIXZ.c)
 */

__int64 __fastcall DxgkEngGetRemoteDeviceCount(__int64 a1, __int64 a2, __int64 a3)
{
  Gre::Base *v3; // rcx
  unsigned int RemoteDeviceCount; // ebx

  UserEnterUserCritSec(a1, a2, a3);
  RemoteDeviceCount = DrvGetRemoteDeviceCount(v3);
  UserLeaveUserCritSec();
  return RemoteDeviceCount;
}
