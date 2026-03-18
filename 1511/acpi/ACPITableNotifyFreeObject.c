/*
 * XREFs of ACPITableNotifyFreeObject @ 0x1C0040570
 * Callers:
 *     <none>
 * Callees:
 *     ACPIBuildProcessDelayedDependencyExternalTrigger @ 0x1C0007828 (ACPIBuildProcessDelayedDependencyExternalTrigger.c)
 *     AMLIDereferenceHandleEx @ 0x1C000CE88 (AMLIDereferenceHandleEx.c)
 *     ACPIBuildProcessNotifyPepDeleteDevice @ 0x1C0035C78 (ACPIBuildProcessNotifyPepDeleteDevice.c)
 *     ACPIInitDereferenceDeviceExtensionLocked @ 0x1C003C718 (ACPIInitDereferenceDeviceExtensionLocked.c)
 *     AMLIFinalizeObject @ 0x1C0042078 (AMLIFinalizeObject.c)
 */

__int64 __fastcall ACPITableNotifyFreeObject(int a1, ULONG_PTR a2, int a3)
{
  KIRQL *v3; // rbx
  int v4; // ecx
  __int64 v5; // rdx
  volatile signed __int32 *v6; // rcx
  __int64 v7; // rdi
  volatile signed __int64 *v8; // rax
  bool v9; // di
  _BYTE *v10; // rbx
  KIRQL v11; // al

  v3 = (KIRQL *)a2;
  switch ( a1 )
  {
    case 1:
      *(_BYTE *)a2 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
      KeAcquireSpinLockAtDpcLevel(&AcpiDeviceTreeLock);
      return 0LL;
    case 3:
      KeReleaseSpinLockFromDpcLevel(&AcpiDeviceTreeLock);
      KeReleaseSpinLock(&AcpiPowerLock, *v3);
      return 0LL;
    case 6:
      if ( a3 == 6 || (unsigned int)(a3 - 12) <= 1 )
      {
        v9 = 1;
        v10 = *(_BYTE **)(*(_QWORD *)a2 + 96LL);
        v11 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
        if ( v10 )
          v9 = (*v10 & 0x60) != 0;
        KeReleaseSpinLock(&AcpiDeviceTreeLock, v11);
        if ( v10 && !v9 )
          ACPIBuildProcessNotifyPepDeleteDevice((__int64)v10, 1);
      }
      break;
    default:
      v4 = a1 - 4;
      if ( !v4 )
        KeBugCheckEx(0xA5u, 0x13uLL, a2, 0LL, 0LL);
      if ( v4 == 1 )
        KeBugCheckEx(0xA5u, 0x13uLL, a2, 1uLL, 0LL);
      if ( a3 == 11 )
      {
        LOBYTE(a2) = 1;
LABEL_8:
        AMLIFinalizeObject(v3, a2);
        return 0LL;
      }
      if ( a3 == 10 )
      {
        v5 = *(_QWORD *)a2;
        if ( *(_BYTE *)(*(_QWORD *)(v5 + 88) + 12LL) == 2 )
        {
          v6 = *(volatile signed __int32 **)(v5 + 96);
          *(_QWORD *)(v5 + 96) = 0LL;
          AMLIDereferenceHandleEx(v6);
        }
      }
      v7 = *(_QWORD *)(*(_QWORD *)v3 + 96LL);
      if ( !v7 )
      {
        a2 = 0LL;
        goto LABEL_8;
      }
      _InterlockedOr64((volatile signed __int64 *)v7, 0x80000000000uLL);
      v8 = *(volatile signed __int64 **)(v7 + 736);
      if ( v8 )
        _InterlockedOr64(v8, 0x40000000000uLL);
      ACPIBuildProcessDelayedDependencyExternalTrigger(v7);
      *(_QWORD *)(*(_QWORD *)v3 + 96LL) = 0LL;
      ACPIInitDereferenceDeviceExtensionLocked((volatile signed __int32 *)v7);
      break;
  }
  return 0LL;
}
