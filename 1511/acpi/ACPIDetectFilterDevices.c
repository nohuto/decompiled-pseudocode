/*
 * XREFs of ACPIDetectFilterDevices @ 0x1C0017ECC
 * Callers:
 *     ACPIFilterIrpQueryDeviceRelations @ 0x1C0065000 (ACPIFilterIrpQueryDeviceRelations.c)
 *     ACPIBusIrpQueryBusRelations @ 0x1C0072D48 (ACPIBusIrpQueryBusRelations.c)
 *     ACPIRootIrpQueryDeviceRelations @ 0x1C0072DC0 (ACPIRootIrpQueryDeviceRelations.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001538 (ACPIInternalGetDeviceExtension.c)
 *     ACPIGet @ 0x1C0001B00 (ACPIGet.c)
 *     ACPIDevicePowerFlushQueue @ 0x1C000A32C (ACPIDevicePowerFlushQueue.c)
 *     ACPIInitReferenceDeviceExtension @ 0x1C0016A14 (ACPIInitReferenceDeviceExtension.c)
 *     ACPIInitDereferenceDeviceExtensionUnlocked @ 0x1C0017E60 (ACPIInitDereferenceDeviceExtensionUnlocked.c)
 *     ACPIBuildFilter @ 0x1C00198DC (ACPIBuildFilter.c)
 *     ACPIBuildMissingChildren @ 0x1C0035788 (ACPIBuildMissingChildren.c)
 *     EnableDisableRegions @ 0x1C0066F60 (EnableDisableRegions.c)
 *     ACPIBuildFlushQueue @ 0x1C006725C (ACPIBuildFlushQueue.c)
 *     ACPIDetectFilterMatch @ 0x1C0067DF8 (ACPIDetectFilterMatch.c)
 *     AcpiQueryPciBusInterface @ 0x1C006E828 (AcpiQueryPciBusInterface.c)
 *     ACPIFilterQueryBusD3ColdSupport @ 0x1C006E9E4 (ACPIFilterQueryBusD3ColdSupport.c)
 *     ACPIInternalIsPci @ 0x1C00730E0 (ACPIInternalIsPci.c)
 */

__int64 __fastcall ACPIDetectFilterDevices(ULONG_PTR a1, __int64 a2)
{
  __int64 DeviceExtension; // rax
  __int64 v5; // rsi
  KIRQL v6; // bl
  __int64 result; // rax
  _QWORD *v8; // r14
  KIRQL v9; // dl
  volatile signed __int32 *v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // r8
  KIRQL v13; // al
  _QWORD *v14; // rbx
  __int64 v15; // rbx
  KIRQL v16; // dl
  ULONG_PTR v17; // rbx
  __int64 v18; // [rsp+90h] [rbp+18h] BYREF
  __int64 v19; // [rsp+98h] [rbp+20h] BYREF

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v18 = 0LL;
  v5 = DeviceExtension;
  v6 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  if ( (*(_QWORD *)v5 & 0x20000000000LL) != 0 )
  {
    _InterlockedAnd64((volatile signed __int64 *)v5, 0xFFFFFDFFFFFFFFFFuLL);
    ACPIBuildMissingChildren(v5);
  }
  KeReleaseSpinLock(&AcpiDeviceTreeLock, v6);
  result = ACPIBuildFlushQueue(v5);
  if ( (int)result >= 0 )
  {
    result = ACPIDevicePowerFlushQueue(v5);
    if ( (int)result >= 0 )
    {
      v8 = (_QWORD *)(v5 + 744);
      v9 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
      if ( (_QWORD *)*v8 == v8 )
      {
        v10 = 0LL;
      }
      else
      {
        v10 = (volatile signed __int32 *)(*v8 - 760LL);
        ACPIInitReferenceDeviceExtension((__int64)v10);
      }
      KeReleaseSpinLock(&AcpiDeviceTreeLock, v9);
      if ( v10 )
      {
        while ( 1 )
        {
          v19 = 0LL;
          if ( (int)ACPIGet(v10, 1096045407, -1878783998, 0LL, 0, 0LL, 0LL, (__int64)&v19, 0LL) >= 0
            && (*(_QWORD *)v10 & 0x2000000000002LL) == 0
            && (int)ACPIDetectFilterMatch(v10, a2, &v18) >= 0
            && v18
            && (int)ACPIBuildFilter(*(_QWORD *)(a1 + 8), v10) >= 0 )
          {
            v17 = *((_QWORD *)v10 + 89);
            if ( (int)AcpiQueryPciBusInterface(v17) >= 0 )
              ACPIInternalIsPci(v17);
            ACPIFilterQueryBusD3ColdSupport(v17);
          }
          v13 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
          v14 = (_QWORD *)*((_QWORD *)v10 + 95);
          if ( v14 == v8 )
            break;
          v15 = (__int64)(v14 - 95);
          ACPIInitReferenceDeviceExtension(v15);
          KeReleaseSpinLock(&AcpiDeviceTreeLock, v16);
          ACPIInitDereferenceDeviceExtensionUnlocked(v10);
          v10 = (volatile signed __int32 *)v15;
          if ( !v15 )
            goto LABEL_16;
        }
        KeReleaseSpinLock(&AcpiDeviceTreeLock, v13);
        ACPIInitDereferenceDeviceExtensionUnlocked(v10);
      }
LABEL_16:
      LOBYTE(v11) = 1;
      if ( (*(_DWORD *)v5 & 0x2000000) != 0 || (*(_DWORD *)(v5 + 904) & 0x8000LL) != 0 )
      {
        LOBYTE(v12) = (*(_DWORD *)(v5 + 904) & 0x8000LL) != 0;
        EnableDisableRegions(*(_QWORD *)(v5 + 704), v11, v12);
      }
      return 0LL;
    }
  }
  return result;
}
