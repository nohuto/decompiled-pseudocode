/*
 * XREFs of sub_1C0033602 @ 0x1C0033602
 * Callers:
 *     ACPIRootPowerCallBack @ 0x1C0023700 (ACPIRootPowerCallBack.c)
 * Callees:
 *     ACPIWakeRemoveDevicesAndUpdate @ 0x1C0007E9C (ACPIWakeRemoveDevicesAndUpdate.c)
 *     ACPISetDeviceWorker @ 0x1C001A624 (ACPISetDeviceWorker.c)
 *     OSCloseHandle @ 0x1C006665C (OSCloseHandle.c)
 *     OSCreateHandle @ 0x1C0066664 (OSCreateHandle.c)
 *     OSWriteRegValue @ 0x1C0066724 (OSWriteRegValue.c)
 */

void __fastcall sub_1C0033602(__int64 a1, __int64 a2, int a3)
{
  KIRQL v5; // al
  KIRQL v6; // al
  int v7; // ecx
  KIRQL v8; // al
  int v9; // ecx
  KIRQL Irql; // [rsp+40h] [rbp+20h] BYREF
  int Data; // [rsp+48h] [rbp+28h] BYREF
  HANDLE KeyHandle; // [rsp+50h] [rbp+30h]
  HANDLE Handle; // [rsp+58h] [rbp+38h]

  KeyHandle = 0LL;
  Handle = 0LL;
  Irql = KeAcquireSpinLockRaiseToDpc(&GpeTableLock);
  AcpiPowerLeavingS0 = a3 != 1;
  KeReleaseSpinLock(&GpeTableLock, Irql);
  IoAcquireCancelSpinLock(&Irql);
  KeAcquireSpinLockAtDpcLevel(&AcpiPowerLock);
  ACPIWakeRemoveDevicesAndUpdate(0LL, 0LL);
  KeReleaseSpinLockFromDpcLevel(&AcpiPowerLock);
  IoReleaseCancelSpinLock(Irql);
  if ( a3 == 1 )
  {
    if ( (int)OSCreateHandle("\\Registry\\Machine\\System\\CurrentControlSet\\Services\\ACPI\\Parameters") >= 0 )
    {
      v6 = KeAcquireSpinLockRaiseToDpc(&gdwGContextSpinLock);
      v7 = AMLIMaxCTObjs;
      Irql = v6;
      if ( gdwcCTObjsMax > (unsigned int)AMLIMaxCTObjs )
      {
        v7 = gdwcCTObjsMax;
        AMLIMaxCTObjs = gdwcCTObjsMax;
      }
      Data = v7;
      KeReleaseSpinLock(&gdwGContextSpinLock, v6);
      OSWriteRegValue("AMLIMaxCTObjs", KeyHandle, &Data, 4u);
      if ( (int)OSCreateHandle("WakeUp") < 0 )
      {
        Handle = 0LL;
        goto LABEL_14;
      }
      v8 = KeAcquireSpinLockRaiseToDpc(&gdwGContextSpinLock);
      v9 = AMLIMaxCTObjs;
      Irql = v8;
      if ( gdwcCTObjsMax > (unsigned int)AMLIMaxCTObjs )
      {
        v9 = gdwcCTObjsMax;
        AMLIMaxCTObjs = gdwcCTObjsMax;
      }
      Data = v9;
      KeReleaseSpinLock(&gdwGContextSpinLock, v8);
      ACPISetDeviceWorker(a1, 31);
    }
    else
    {
      KeyHandle = 0LL;
    }
  }
  else
  {
    v5 = KeAcquireSpinLockRaiseToDpc(&gdwGContextSpinLock);
    gdwcCTObjsMax = 0;
    Irql = v5;
    KeReleaseSpinLock(&gdwGContextSpinLock, v5);
  }
  if ( Handle )
    OSCloseHandle(Handle);
LABEL_14:
  if ( KeyHandle )
    OSCloseHandle(KeyHandle);
}
