/*
 * XREFs of PiCMDeleteDeviceInterfaceKey @ 0x140646F54
 * Callers:
 *     PiCMHandleIoctl @ 0x1404DF70C (PiCMHandleIoctl.c)
 * Callees:
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     PiAuDoesClientHaveAccess @ 0x1404D908C (PiAuDoesClientHaveAccess.c)
 *     PiCMReturnBasicResultData @ 0x1404DA01C (PiCMReturnBasicResultData.c)
 *     _CmOpenDeviceInterfaceRegKey @ 0x1404DBA84 (_CmOpenDeviceInterfaceRegKey.c)
 *     PiCMCaptureObjectInputData @ 0x1404DBDA8 (PiCMCaptureObjectInputData.c)
 *     PiCMReleaseObjectInputData @ 0x1404DC1A8 (PiCMReleaseObjectInputData.c)
 *     _CmDeleteDeviceInterfaceRegKey @ 0x1406D8034 (_CmDeleteDeviceInterfaceRegKey.c)
 */

__int64 __fastcall PiCMDeleteDeviceInterfaceKey(
        unsigned __int64 a1,
        unsigned int a2,
        _QWORD *a3,
        unsigned int a4,
        int a5,
        _DWORD *Handle)
{
  _DWORD *v6; // r14
  int v9; // ebx
  __int64 v10; // r9
  int v11; // ebx
  int v12; // r9d
  char v14[4]; // [rsp+40h] [rbp-38h] BYREF
  int v15; // [rsp+44h] [rbp-34h]
  int v16; // [rsp+48h] [rbp-30h]
  __int64 v17; // [rsp+50h] [rbp-28h]
  int v18; // [rsp+5Ch] [rbp-1Ch]
  int v19; // [rsp+60h] [rbp-18h]

  v6 = Handle;
  Handle = 0LL;
  *v6 = 0;
  v9 = PiCMCaptureObjectInputData(a1, a2, a5, v14);
  if ( v9 >= 0 )
  {
    if ( PiAuDoesClientHaveAccess(2u) )
    {
      if ( v17 && !v15 && v16 == 4 && !v18 && a3 && a4 >= 8 )
      {
        v11 = CmOpenDeviceInterfaceRegKey(*(__int64 *)&PiPnpRtlCtx, v17, 0x30u, v10, 1, 0, (__int64)&Handle, 0LL);
        if ( v11 == -1073741772 )
          v11 = -1073741127;
        if ( v11 >= 0 )
          v11 = CmDeleteDeviceInterfaceRegKey(PiPnpRtlCtx, v17, 50, v12, 1);
      }
      else
      {
        v11 = -1073741811;
      }
    }
    else
    {
      v11 = -1073741790;
    }
    if ( Handle )
      ZwClose(Handle);
    v9 = PiCMReturnBasicResultData(v11, v19, a3, a4, v6);
  }
  PiCMReleaseObjectInputData((__int64)v14);
  return (unsigned int)v9;
}
