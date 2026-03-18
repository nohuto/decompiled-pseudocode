/*
 * XREFs of OSNotifyCreate @ 0x1C000C8D0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0004BB0 (WPP_RECORDER_SF_D.c)
 *     OSNotifyCreateProcessor @ 0x1C000B1B0 (OSNotifyCreateProcessor.c)
 *     WPP_RECORDER_SF_qsL @ 0x1C000C9CC (WPP_RECORDER_SF_qsL.c)
 *     OSNotifyCreateDevice @ 0x1C000CC5C (OSNotifyCreateDevice.c)
 *     OSNotifyCreateOperationRegion @ 0x1C000D088 (OSNotifyCreateOperationRegion.c)
 *     OSNotifyCreateThermalZone @ 0x1C0028E8C (OSNotifyCreateThermalZone.c)
 *     OSNotifyCreatePowerResource @ 0x1C0051258 (OSNotifyCreatePowerResource.c)
 */

__int64 __fastcall OSNotifyCreate(int a1, ULONG_PTR a2)
{
  int v4; // edx
  KIRQL v5; // si
  char Device; // al
  char v7; // di
  int v8; // edx

  v5 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  switch ( a1 )
  {
    case 6:
      Device = OSNotifyCreateDevice(a2);
      break;
    case 10:
      Device = OSNotifyCreateOperationRegion(a2);
      break;
    case 11:
      Device = OSNotifyCreatePowerResource(a2);
      break;
    case 12:
      Device = OSNotifyCreateProcessor(a2, 0LL);
      break;
    case 13:
      Device = OSNotifyCreateThermalZone(a2, 0LL);
      break;
    default:
      LOBYTE(v4) = 2;
      WPP_RECORDER_SF_D(
        WPP_GLOBAL_Control->DeviceExtension,
        v4,
        21,
        10,
        (__int64)&WPP_d1586059086e37ef10da2d60ebfd83de_Traceguids,
        a1);
      v7 = 0;
      goto LABEL_4;
  }
  v7 = Device;
LABEL_4:
  KeReleaseSpinLock(&AcpiDeviceTreeLock, v5);
  dword_1C0074514 = *(_DWORD *)(*(_QWORD *)a2 + 40LL);
  byte_1C0074518 = 0;
  WPP_RECORDER_SF_qsL(
    WPP_GLOBAL_Control->DeviceExtension,
    v8,
    6,
    11,
    (__int64)&WPP_d1586059086e37ef10da2d60ebfd83de_Traceguids,
    a2,
    (__int64)&dword_1C0074514,
    v7);
  return 0LL;
}
