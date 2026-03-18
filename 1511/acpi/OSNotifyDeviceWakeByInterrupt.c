/*
 * XREFs of OSNotifyDeviceWakeByInterrupt @ 0x1C003DE48
 * Callers:
 *     ACPIWakeEmulationInterruptServiceRoutine @ 0x1C003CEC0 (ACPIWakeEmulationInterruptServiceRoutine.c)
 * Callees:
 *     ACPIWakeRemoveDevicesAndUpdate @ 0x1C0007E9C (ACPIWakeRemoveDevicesAndUpdate.c)
 *     OSNotifyDeviceWakeCallBack @ 0x1C003DF90 (OSNotifyDeviceWakeCallBack.c)
 *     ACPIWakeDisableAsync @ 0x1C0041A5C (ACPIWakeDisableAsync.c)
 *     ACPIWakeEmulationDisable @ 0x1C0041CD8 (ACPIWakeEmulationDisable.c)
 */

void __fastcall OSNotifyDeviceWakeByInterrupt(__int64 a1)
{
  _QWORD *PoolWithTag; // rax
  _QWORD *v3; // rbx
  __int64 v4; // rax
  __int64 *v5; // rdi
  __int64 v6; // rbp
  _QWORD *v7; // rsi
  _QWORD *i; // rax
  _QWORD *v9; // rdi
  __int64 v10; // r8
  __int64 v11; // rcx
  KIRQL Irql; // [rsp+48h] [rbp+10h] BYREF

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x10uLL, 0x4D706341u);
  v3 = PoolWithTag;
  if ( PoolWithTag )
  {
    PoolWithTag[1] = PoolWithTag;
    *PoolWithTag = PoolWithTag;
    IoAcquireCancelSpinLock(&Irql);
    KeAcquireSpinLockAtDpcLevel(&AcpiPowerLock);
    v4 = v3[1];
    if ( v4 )
    {
      do
      {
        while ( 1 )
        {
          v5 = (__int64 *)AcpiPowerWaitWakeList;
          v6 = v4;
          if ( (__int64 *)AcpiPowerWaitWakeList == &AcpiPowerWaitWakeList )
            break;
          v7 = (_QWORD *)(a1 + 16);
          while ( 1 )
          {
            for ( i = (_QWORD *)*v7; i != v7; i = (_QWORD *)*i )
            {
              if ( v5 == (__int64 *)i[2] )
              {
                ACPIWakeRemoveDevicesAndUpdate(v5[5], (__int64)v3);
                break;
              }
            }
            v4 = v3[1];
            if ( v6 != v4 )
              break;
            v5 = (__int64 *)*v5;
            if ( v5 == &AcpiPowerWaitWakeList )
              goto LABEL_13;
          }
        }
LABEL_13:
        v4 = v3[1];
      }
      while ( v4 != v6 );
    }
    KeReleaseSpinLockFromDpcLevel(&AcpiPowerLock);
    IoReleaseCancelSpinLock(Irql);
    v9 = (_QWORD *)*v3;
    if ( (_QWORD *)*v3 == v3 )
    {
      ExFreePoolWithTag(v3, 0);
    }
    else
    {
      do
      {
        ACPIWakeEmulationDisable(v9);
        v11 = v9[5];
        v9 = (_QWORD *)*v9;
      }
      while ( v9 != v3 );
      if ( !v11 || (unsigned int)ACPIWakeDisableAsync(v11, v3, v10, v3) != 259 )
        OSNotifyDeviceWakeCallBack(0LL, 0LL, 0LL, v3);
    }
  }
}
