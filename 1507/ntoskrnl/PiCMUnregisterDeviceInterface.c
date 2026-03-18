/*
 * XREFs of PiCMUnregisterDeviceInterface @ 0x1406937D4
 * Callers:
 *     PiCMHandleIoctl @ 0x140440C0C (PiCMHandleIoctl.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x1400C8A30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     _PnpGetObjectProperty @ 0x140438FD0 (_PnpGetObjectProperty.c)
 *     PiCMReleaseObjectInputData @ 0x140442B00 (PiCMReleaseObjectInputData.c)
 *     PiAuDoesClientHaveAccess @ 0x14045A8FC (PiAuDoesClientHaveAccess.c)
 *     PiCMCaptureObjectInputData @ 0x1404DCF48 (PiCMCaptureObjectInputData.c)
 *     PiCMReturnBasicResultData @ 0x1404DD148 (PiCMReturnBasicResultData.c)
 *     _CmDeleteDeviceInterface @ 0x140712A50 (_CmDeleteDeviceInterface.c)
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
  struct _KTHREAD *v13; // rcx
  __int16 v14; // ax
  int v16; // [rsp+68h] [rbp+7h] BYREF
  int v17; // [rsp+6Ch] [rbp+Bh] BYREF
  char v18[4]; // [rsp+70h] [rbp+Fh] BYREF
  int v19; // [rsp+74h] [rbp+13h]
  int v20; // [rsp+78h] [rbp+17h]
  __int64 v21; // [rsp+80h] [rbp+1Fh]
  int v22; // [rsp+8Ch] [rbp+2Bh]
  int v23; // [rsp+90h] [rbp+2Fh]

  v6 = a6;
  LOBYTE(a6) = 0;
  v16 = 0;
  *v6 = 0;
  v17 = 0;
  v9 = PiCMCaptureObjectInputData(a1, a2, a5, v18);
  if ( v9 >= 0 )
  {
    if ( PiAuDoesClientHaveAccess(2u) )
    {
      if ( v21 && !v19 && v20 == 4 && !v22 && a3 && a4 >= 8 )
      {
        ObjectProperty = PnpGetObjectProperty(
                           *(__int64 *)&PiPnpRtlCtx,
                           v21,
                           3u,
                           0LL,
                           0LL,
                           (__int64)&DEVPKEY_DeviceInterface_Enabled,
                           (__int64)&v16,
                           (__int64)&a6,
                           1,
                           (__int64)&v17,
                           0);
        if ( ObjectProperty >= 0 )
        {
          if ( v16 == 17 && v17 == 1 )
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
            ObjectProperty = CmDeleteDeviceInterface(*(_QWORD *)&PiPnpRtlCtx, v21, 0LL);
            ExReleaseResourceLite(&PnpRegistryDeviceResource);
            v13 = KeGetCurrentThread();
            v14 = v13->KernelApcDisable + 1;
            v13->KernelApcDisable = v14;
            if ( !v14
              && ($CD287064E7C9F7953DE243E927CFCB99 *)v13->ApcState.ApcListHead[0].Flink != &v13->152
              && !v13->SpecialApcDisable )
            {
              KiCheckForKernelApcDelivery();
            }
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
    v9 = PiCMReturnBasicResultData(ObjectProperty, v23, a3, a4, v6);
  }
  PiCMReleaseObjectInputData((__int64)v18);
  return (unsigned int)v9;
}
