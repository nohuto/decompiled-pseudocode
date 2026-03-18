/*
 * XREFs of PnpGetStableSystemBootTime @ 0x14067E2EC
 * Callers:
 *     PiDevCfgResolveDriverDependencies @ 0x140588148 (PiDevCfgResolveDriverDependencies.c)
 *     PiDevCfgResolveDeviceDependencies @ 0x1406893E8 (PiDevCfgResolveDeviceDependencies.c)
 * Callees:
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x14017F6B0 (ZwQuerySystemInformation.c)
 *     PipHardwareConfigGetLastUseTime @ 0x14067A45C (PipHardwareConfigGetLastUseTime.c)
 */

__int64 __fastcall PnpGetStableSystemBootTime(_QWORD *a1)
{
  int LastUseTime; // edx
  _QWORD SystemInformation[6]; // [rsp+20h] [rbp-48h] BYREF

  LastUseTime = PipHardwareConfigGetLastUseTime((__int64)a1, (__int64)a1);
  if ( LastUseTime < 0 )
  {
    LastUseTime = ZwQuerySystemInformation(SystemTimeOfDayInformation, SystemInformation, 0x30u, 0LL);
    if ( LastUseTime >= 0 )
      *a1 = SystemInformation[0] - SystemInformation[4];
  }
  return (unsigned int)LastUseTime;
}
