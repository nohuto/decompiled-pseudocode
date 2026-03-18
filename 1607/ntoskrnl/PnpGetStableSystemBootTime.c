/*
 * XREFs of PnpGetStableSystemBootTime @ 0x14062D818
 * Callers:
 *     PiDevCfgResolveDeviceDependencies @ 0x14063DACC (PiDevCfgResolveDeviceDependencies.c)
 *     PiDevCfgResolveDriverDependencies @ 0x14063DD70 (PiDevCfgResolveDriverDependencies.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x14015A340 (ZwQuerySystemInformation.c)
 *     PipHardwareConfigGetLastUseTime @ 0x1406298E8 (PipHardwareConfigGetLastUseTime.c)
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
