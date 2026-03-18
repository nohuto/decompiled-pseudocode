/*
 * XREFs of ACPIBuildFilter @ 0x1C00196C8
 * Callers:
 *     ACPIDetectFilterDevices @ 0x1C000830C (ACPIDetectFilterDevices.c)
 * Callees:
 *     ACPIAddInitializationDependencies @ 0x1C0018C80 (ACPIAddInitializationDependencies.c)
 *     ACPIIsFilterDebuggingDevice @ 0x1C006D088 (ACPIIsFilterDebuggingDevice.c)
 */

NTSTATUS __fastcall ACPIBuildFilter(struct _DRIVER_OBJECT *a1, _BYTE *a2, struct _DEVICE_OBJECT *a3)
{
  NTSTATUS result; // eax
  PDEVICE_OBJECT v6; // rdi
  KIRQL v7; // dl
  int v8; // eax
  _BYTE *v9; // rcx
  PDEVICE_OBJECT SourceDevice; // [rsp+68h] [rbp+28h] BYREF

  SourceDevice = 0LL;
  result = IoCreateDevice(a1, 0, 0LL, 0x32u, 0x100u, 0, &SourceDevice);
  if ( result >= 0 )
  {
    v6 = IoAttachDeviceToDeviceStack(SourceDevice, a3);
    if ( v6 )
    {
      v7 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
      SourceDevice->DeviceExtension = a2;
      *((_QWORD *)a2 + 89) = SourceDevice;
      *((_QWORD *)a2 + 91) = a3;
      *((_QWORD *)a2 + 90) = v6;
      _InterlockedIncrement((volatile signed __int32 *)a2 + 169);
      _InterlockedAnd64((volatile signed __int64 *)a2, 0xFFFFFFFFFFFFFC00uLL);
      _InterlockedOr64((volatile signed __int64 *)a2, 0x40uLL);
      v8 = *((_DWORD *)a2 + 78);
      *((_DWORD *)a2 + 78) = 0;
      *((_DWORD *)a2 + 79) = v8;
      *((_QWORD *)a2 + 2) = AcpiFilterIrpDispatch;
      _InterlockedOr64((volatile signed __int64 *)a2, 0x800uLL);
      SourceDevice->StackSize = v6->StackSize + 1;
      SourceDevice->AlignmentRequirement = v6->AlignmentRequirement;
      if ( (v6->Flags & 0x2000) != 0 )
        SourceDevice->Flags |= 0x2000u;
      if ( (v6->Flags & 0x10) != 0 )
        SourceDevice->Flags |= 0x10u;
      if ( (v6->Flags & 4) != 0 )
        SourceDevice->Flags |= 4u;
      KeReleaseSpinLock(&AcpiDeviceTreeLock, v7);
      ACPIAddInitializationDependencies((__int64)a2);
      if ( (a2[904] & 0x40) != 0 )
        *((_QWORD *)a2 + 2) = AcpiDepFilterIrpDispatch;
      if ( (unsigned __int8)ACPIIsFilterDebuggingDevice(a2) && AcpiRetainDebugDeviceInD0 )
      {
        do
        {
          v9 = (_BYTE *)*((_QWORD *)a2 + 92);
          _InterlockedOr64((volatile signed __int64 *)a2, 0x680000uLL);
          _InterlockedOr64((volatile signed __int64 *)a2 + 113, 0x1000000000uLL);
          if ( (*a2 & 0x20) != 0 )
            break;
          a2 = v9;
        }
        while ( v9 );
      }
      SourceDevice->Flags &= ~0x80u;
      return 0;
    }
    else
    {
      IoDeleteDevice(SourceDevice);
      return -1073741583;
    }
  }
  return result;
}
