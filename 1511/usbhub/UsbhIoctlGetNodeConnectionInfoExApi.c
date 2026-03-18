/*
 * XREFs of UsbhIoctlGetNodeConnectionInfoExApi @ 0x1C0049154
 * Callers:
 *     UsbhIoctlGetNodeConnectionInfo @ 0x1C0049054 (UsbhIoctlGetNodeConnectionInfo.c)
 *     UsbhIoctlGetNodeConnectionInfoEx @ 0x1C00490D4 (UsbhIoctlGetNodeConnectionInfoEx.c)
 * Callees:
 *     UsbhDecHubBusy @ 0x1C000C010 (UsbhDecHubBusy.c)
 *     UsbhGetPortData @ 0x1C000C150 (UsbhGetPortData.c)
 *     UsbhLatchPdo @ 0x1C000C288 (UsbhLatchPdo.c)
 *     Log @ 0x1C0013250 (Log.c)
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 *     UsbhIncHubBusy @ 0x1C0014020 (UsbhIncHubBusy.c)
 *     UsbhUnlatchPdo @ 0x1C0022600 (UsbhUnlatchPdo.c)
 *     Usb_Disconnected @ 0x1C002765C (Usb_Disconnected.c)
 *     memset @ 0x1C0029180 (memset.c)
 *     WPP_RECORDER_SF_ @ 0x1C003CFE0 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040704 (WPP_RECORDER_SF_d.c)
 *     UsbhAcquireApiLock @ 0x1C00473E4 (UsbhAcquireApiLock.c)
 *     UsbhGetNodeConnectionInfoForPdo @ 0x1C0047618 (UsbhGetNodeConnectionInfoForPdo.c)
 *     UsbhIoctlTraceOutput @ 0x1C004A198 (UsbhIoctlTraceOutput.c)
 *     UsbhIoctlValidateParameters @ 0x1C004A368 (UsbhIoctlValidateParameters.c)
 *     UsbhReleaseApiLock @ 0x1C004A6C0 (UsbhReleaseApiLock.c)
 *     UsbhException @ 0x1C004EC30 (UsbhException.c)
 */

__int64 __fastcall UsbhIoctlGetNodeConnectionInfoExApi(__int64 a1, IRP *a2, __int64 a3, char a4)
{
  __int64 MasterIrp; // r14
  size_t v9; // r12
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  _DWORD *v13; // rax
  _QWORD *v14; // r13
  int v15; // ebx
  __int64 PortData; // rbx
  __int64 v17; // rbp
  int NodeConnectionInfoForPdo; // eax
  int v19; // r8d
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rdx
  __int64 v24; // r9
  __int64 v26; // [rsp+28h] [rbp-60h]
  int v27; // [rsp+48h] [rbp-40h]
  __int64 v28; // [rsp+98h] [rbp+10h] BYREF
  int v29; // [rsp+A0h] [rbp+18h] BYREF
  char v30; // [rsp+A8h] [rbp+20h] BYREF

  v30 = 0;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      2u,
      0x2Cu,
      (__int64)&WPP_3ea9b81ba734f165b64302e7a733234f_Traceguids);
  MasterIrp = (__int64)a2->AssociatedIrp.MasterIrp;
  v9 = *(unsigned int *)(a3 + 8);
  LODWORD(v28) = *(_DWORD *)(a3 + 8);
  v29 = a4 != 0 ? 274 : 259;
  Log(a1, 32, 1735284785, (__int64)a2, MasterIrp);
  v13 = FdoExt(a1, v10, v11, v12);
  v14 = (_QWORD *)UsbhIncHubBusy(a1, (__int64)(v13 + 434), (__int64)a2, 1430414185LL, 1);
  if ( v14 )
  {
    v15 = UsbhAcquireApiLock(a1, 0xF00D0004, &v30);
    if ( (v15 & 0xC0000000) != 0xC0000000 )
    {
      v15 = UsbhIoctlValidateParameters(a1, 4, 35);
      if ( (v15 & 0xC0000000) != 0xC0000000 )
      {
        PortData = UsbhGetPortData(a1, *(_WORD *)MasterIrp);
        if ( PortData )
        {
          v17 = UsbhLatchPdo(a1, *(_WORD *)MasterIrp, (__int64)a2, 0x496F3034u);
          if ( v17 )
          {
            NodeConnectionInfoForPdo = UsbhGetNodeConnectionInfoForPdo(
                                         a1,
                                         (__int64)a2,
                                         PortData,
                                         v17,
                                         (_DWORD *)MasterIrp,
                                         (unsigned int *)&v28,
                                         a4);
            a2->IoStatus.Information = (unsigned int)v28;
            v15 = NodeConnectionInfoForPdo;
            UsbhUnlatchPdo(a1, v17, (__int64)a2, 0x496F3034u);
          }
          else
          {
            Log(a1, 32, 1733848688, *(unsigned __int16 *)(PortData + 4), MasterIrp);
            memset((void *)MasterIrp, 0, v9);
            *(_DWORD *)MasterIrp = *(unsigned __int16 *)(PortData + 4);
            v15 = 0;
            *(_DWORD *)(MasterIrp + 31) = 0;
            a2->IoStatus.Information = 35LL;
          }
        }
        else
        {
          v15 = -1073741811;
        }
      }
    }
  }
  else
  {
    v15 = -1073741670;
  }
  if ( (v15 & 0xC0000000) == 0xC0000000 && !Usb_Disconnected(v15) )
  {
    LOBYTE(v27) = v19;
    UsbhException(a1, 0, 91, (int)&v29, 4, v15, v19, usbfile_ioctl_c, 2190, v27);
  }
  if ( v30 )
    UsbhReleaseApiLock(a1, 4027383812LL);
  Log(a1, 32, 1735284786, (__int64)a2, v15);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LODWORD(v26) = v15;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      2u,
      0x2Du,
      (__int64)&WPP_3ea9b81ba734f165b64302e7a733234f_Traceguids,
      v26);
  }
  UsbhIoctlTraceOutput(a1, a2);
  FdoExt(a1, v20, v21, v22);
  UsbhDecHubBusy(a1, v23, v14, v24);
  a2->IoStatus.Status = v15;
  IofCompleteRequest(a2, 0);
  return (unsigned int)v15;
}
