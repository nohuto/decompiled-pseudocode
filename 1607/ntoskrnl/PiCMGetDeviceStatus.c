/*
 * XREFs of PiCMGetDeviceStatus @ 0x1404DA320
 * Callers:
 *     PiCMHandleIoctl @ 0x1404DF70C (PiCMHandleIoctl.c)
 * Callees:
 *     PiCMReturnStatusResultData @ 0x1404DA414 (PiCMReturnStatusResultData.c)
 *     _CmGetDeviceStatus @ 0x1404DA838 (_CmGetDeviceStatus.c)
 *     PiCMCaptureObjectInputData @ 0x1404DBDA8 (PiCMCaptureObjectInputData.c)
 *     PiCMReleaseObjectInputData @ 0x1404DC1A8 (PiCMReleaseObjectInputData.c)
 */

__int64 __fastcall PiCMGetDeviceStatus(
        __int64 a1,
        __int64 a2,
        volatile void *a3,
        unsigned int a4,
        unsigned int a5,
        __int64 a6)
{
  __int64 v6; // r14
  int v9; // ebx
  int DeviceStatus; // ecx
  SIZE_T Length; // [rsp+30h] [rbp-40h]
  int v13; // [rsp+40h] [rbp-30h] BYREF
  int v14; // [rsp+44h] [rbp-2Ch] BYREF
  _BYTE v15[4]; // [rsp+48h] [rbp-28h] BYREF
  int v16; // [rsp+4Ch] [rbp-24h]
  int v17; // [rsp+50h] [rbp-20h]
  __int64 v18; // [rsp+58h] [rbp-18h]
  int v19; // [rsp+64h] [rbp-Ch]
  int v20; // [rsp+68h] [rbp-8h]

  v6 = a6;
  v14 = 0;
  v13 = 0;
  *(_DWORD *)a6 = 0;
  LODWORD(a6) = 0;
  v9 = PiCMCaptureObjectInputData(a1, a2, a5, v15);
  if ( v9 >= 0 )
  {
    if ( v18 && !v16 && v17 == 1 && !v19 && a3 && a4 >= 0x14 )
      DeviceStatus = CmGetDeviceStatus(PiPnpRtlCtx, v18, 0, (unsigned int)&v14, (__int64)&v13, (__int64)&a6);
    else
      DeviceStatus = -1073741811;
    LODWORD(Length) = a4;
    v9 = PiCMReturnStatusResultData(DeviceStatus, v14, v13, a6, v20, a3, Length, v6);
  }
  PiCMReleaseObjectInputData(v15);
  return (unsigned int)v9;
}
