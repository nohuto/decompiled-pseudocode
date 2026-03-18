/*
 * XREFs of PiCMUnregisterDeviceInterface @ 0x14061426C
 * Callers:
 *     PiCMHandleIoctl @ 0x140442988 (PiCMHandleIoctl.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14003F890 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14003FBB0 (ExReleaseResourceLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     _PnpGetObjectProperty @ 0x14043CBB0 (_PnpGetObjectProperty.c)
 *     PiCMReleaseObjectInputData @ 0x140443254 (PiCMReleaseObjectInputData.c)
 *     PiCMCaptureObjectInputData @ 0x140443494 (PiCMCaptureObjectInputData.c)
 *     PiCMReturnBasicResultData @ 0x14045BD10 (PiCMReturnBasicResultData.c)
 *     PiAuDoesClientHaveAccess @ 0x14045D728 (PiAuDoesClientHaveAccess.c)
 *     _CmDeleteDeviceInterface @ 0x140692EB4 (_CmDeleteDeviceInterface.c)
 */

__int64 __fastcall PiCMUnregisterDeviceInterface(
        ULONG64 a1,
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
  int v14; // [rsp+68h] [rbp+17h] BYREF
  int v15; // [rsp+6Ch] [rbp+1Bh] BYREF
  char v16[4]; // [rsp+70h] [rbp+1Fh] BYREF
  int v17; // [rsp+74h] [rbp+23h]
  int v18; // [rsp+78h] [rbp+27h]
  __int64 v19; // [rsp+80h] [rbp+2Fh]
  int v20; // [rsp+8Ch] [rbp+3Bh]
  int v21; // [rsp+90h] [rbp+3Fh]

  v6 = a6;
  v14 = 0;
  v15 = 0;
  *a6 = 0;
  LOBYTE(a6) = 0;
  v9 = PiCMCaptureObjectInputData(a1, a2, a5, v16);
  if ( v9 >= 0 )
  {
    if ( PiAuDoesClientHaveAccess(2u) )
    {
      if ( v19 && !v17 && v18 == 4 && !v20 && a3 && a4 >= 8 )
      {
        ObjectProperty = PnpGetObjectProperty(
                           *(__int64 *)&PiPnpRtlCtx,
                           v19,
                           3u,
                           0LL,
                           0LL,
                           (__int64)&DEVPKEY_DeviceInterface_Enabled,
                           (__int64)&v14,
                           (__int64)&a6,
                           1,
                           (__int64)&v15,
                           0);
        if ( ObjectProperty >= 0 )
        {
          if ( v14 == 17 && v15 == 1 )
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
            ObjectProperty = CmDeleteDeviceInterface(*(_QWORD *)&PiPnpRtlCtx, v19, 0LL);
            ExReleaseResourceLite(&PnpRegistryDeviceResource);
            KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
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
    v9 = PiCMReturnBasicResultData(ObjectProperty, v21, a3, a4, v6);
  }
  PiCMReleaseObjectInputData((__int64)v16);
  return (unsigned int)v9;
}
