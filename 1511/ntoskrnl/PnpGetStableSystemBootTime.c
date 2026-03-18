/*
 * XREFs of PnpGetStableSystemBootTime @ 0x140603480
 * Callers:
 *     PiDevCfgResolveDriverDependencies @ 0x140510598 (PiDevCfgResolveDriverDependencies.c)
 *     PiDevCfgResolveDeviceDependencies @ 0x14060A40C (PiDevCfgResolveDeviceDependencies.c)
 * Callees:
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x140150CE0 (ZwQuerySystemInformation.c)
 *     PipHardwareConfigGetLastUseTime @ 0x1405FF898 (PipHardwareConfigGetLastUseTime.c)
 */

__int64 __fastcall PnpGetStableSystemBootTime(_QWORD *a1)
{
  int LastUseTime; // edx
  _QWORD SystemInformation[6]; // [rsp+20h] [rbp-48h] BYREF

  LastUseTime = PipHardwareConfigGetLastUseTime((__int64)a1, a1);
  if ( LastUseTime < 0 )
  {
    LastUseTime = ZwQuerySystemInformation(SystemTimeOfDayInformation, SystemInformation, 0x30u, 0LL);
    if ( LastUseTime >= 0 )
      *a1 = SystemInformation[0] - SystemInformation[4];
  }
  return (unsigned int)LastUseTime;
}
