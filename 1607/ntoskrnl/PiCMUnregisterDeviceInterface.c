/*
 * XREFs of PiCMUnregisterDeviceInterface @ 0x140648AF8
 * Callers:
 *     PiCMHandleIoctl @ 0x1404DF70C (PiCMHandleIoctl.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireResourceExclusiveLite @ 0x140067CE0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400684C0 (ExReleaseResourceLite.c)
 *     PiAuDoesClientHaveAccess @ 0x1404D908C (PiAuDoesClientHaveAccess.c)
 *     PiCMReturnBasicResultData @ 0x1404DA01C (PiCMReturnBasicResultData.c)
 *     PiCMCaptureObjectInputData @ 0x1404DBDA8 (PiCMCaptureObjectInputData.c)
 *     PiCMReleaseObjectInputData @ 0x1404DC1A8 (PiCMReleaseObjectInputData.c)
 *     _PnpGetObjectProperty @ 0x1404E1740 (_PnpGetObjectProperty.c)
 *     _CmDeleteDeviceInterface @ 0x1406D7F18 (_CmDeleteDeviceInterface.c)
 */

__int64 __fastcall PiCMUnregisterDeviceInterface(
        unsigned __int64 a1,
        unsigned int a2,
        _QWORD *a3,
        unsigned int a4,
        int a5,
        _DWORD *a6)
{
  _DWORD *v6; // r14
  int v9; // ebx
  int ObjectProperty; // ebx
  char v11; // al
  struct _KTHREAD *CurrentThread; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  int v17; // [rsp+68h] [rbp+17h] BYREF
  int v18; // [rsp+6Ch] [rbp+1Bh] BYREF
  char v19[4]; // [rsp+70h] [rbp+1Fh] BYREF
  int v20; // [rsp+74h] [rbp+23h]
  int v21; // [rsp+78h] [rbp+27h]
  __int64 v22; // [rsp+80h] [rbp+2Fh]
  int v23; // [rsp+8Ch] [rbp+3Bh]
  int v24; // [rsp+90h] [rbp+3Fh]

  v6 = a6;
  v17 = 0;
  v18 = 0;
  *a6 = 0;
  LOBYTE(a6) = 0;
  v9 = PiCMCaptureObjectInputData(a1, a2, a5, v19);
  if ( v9 >= 0 )
  {
    if ( PiAuDoesClientHaveAccess(2u) )
    {
      if ( v22 && !v20 && v21 == 4 && !v23 && a3 && a4 >= 8 )
      {
        ObjectProperty = PnpGetObjectProperty(
                           *(__int64 *)&PiPnpRtlCtx,
                           v22,
                           3u,
                           0LL,
                           0LL,
                           (__int64)&DEVPKEY_DeviceInterface_Enabled,
                           (__int64)&v17,
                           (__int64)&a6,
                           1,
                           (__int64)&v18,
                           0);
        if ( ObjectProperty >= 0 )
        {
          if ( v17 == 17 && v18 == 1 )
          {
            v11 = (char)a6;
          }
          else
          {
            v11 = 0;
            LOBYTE(a6) = 0;
          }
          if ( v11 == -1 )
            ObjectProperty = -1073740024;
          if ( ObjectProperty >= 0 )
          {
            CurrentThread = KeGetCurrentThread();
            --CurrentThread->KernelApcDisable;
            ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
            ObjectProperty = CmDeleteDeviceInterface(*(_QWORD *)&PiPnpRtlCtx, v22, 0LL);
            ExReleaseResourceLite(&PnpRegistryDeviceResource);
            KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v13, v14, v15);
          }
        }
      }
      else
      {
        ObjectProperty = -1073741811;
      }
    }
    else
    {
      ObjectProperty = -1073741790;
    }
    v9 = PiCMReturnBasicResultData(ObjectProperty, v24, a3, a4, v6);
  }
  PiCMReleaseObjectInputData((__int64)v19);
  return (unsigned int)v9;
}
