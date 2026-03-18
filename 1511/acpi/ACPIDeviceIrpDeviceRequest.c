/*
 * XREFs of ACPIDeviceIrpDeviceRequest @ 0x1C00224F8
 * Callers:
 *     ACPIDockIrpSetDevicePower @ 0x1C00224A0 (ACPIDockIrpSetDevicePower.c)
 *     ACPIFilterIrpSetPower @ 0x1C00235F0 (ACPIFilterIrpSetPower.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001538 (ACPIInternalGetDeviceExtension.c)
 *     ACPIDeviceInitializePowerRequest @ 0x1C000AF5C (ACPIDeviceInitializePowerRequest.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024E60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ACPIDeviceIrpDeviceRequest(ULONG_PTR a1, __int64 a2, __int64 (__fastcall *a3)())
{
  __int64 DeviceExtension; // rdi
  __int64 v6; // rax
  POWER_STATE v7; // r14d
  int v8; // r15d
  int v9; // ebx
  unsigned int v10; // ecx
  KIRQL v12; // al
  __int64 *v13; // rcx
  KIRQL v14; // bl
  _QWORD *PoolWithTag; // rax

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v6 = *(_QWORD *)(a2 + 184);
  v7.SystemState = *(_SYSTEM_POWER_STATE *)(v6 + 24);
  v8 = *(_DWORD *)(v6 + 32);
  if ( *(_BYTE *)(a2 + 65) )
    *(_BYTE *)(v6 + 3) |= 1u;
  v9 = *(_DWORD *)(a2 + 48);
  if ( v9 < 0 || v7.SystemState == *(_DWORD *)(DeviceExtension + 328) )
  {
    if ( a3 )
      ((void (__fastcall *)(__int64, __int64, _QWORD))a3)(DeviceExtension, a2, (unsigned int)v9);
    return (unsigned int)v9;
  }
  else
  {
    if ( v7.SystemState == PowerSystemWorking && (*(_QWORD *)DeviceExtension & 0x102000000LL) != 0 )
    {
      if ( (*(_QWORD *)DeviceExtension & 0x2000000LL) != 0
        && (_InterlockedCompareExchange((volatile signed __int32 *)(DeviceExtension + 176), 0, 0) & 1) != 0 )
      {
        KeSetEvent((PRKEVENT)(DeviceExtension + 264), 0, 0);
      }
      else if ( (*(_QWORD *)DeviceExtension & 0x800000000010000LL) == 0x800000000010000LL )
      {
        v12 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
        v13 = (__int64 *)AcpiPowerWaitWakeList;
        v14 = v12;
        while ( v13 != &AcpiPowerWaitWakeList )
        {
          if ( v13[5] == DeviceExtension )
          {
            PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x10uLL, 0x50706341u);
            if ( PoolWithTag )
            {
              *PoolWithTag = a2;
              a2 = (__int64)PoolWithTag;
              PoolWithTag[1] = a3;
              a3 = ACPIWaitWakeEnableOnPowerUp;
            }
            break;
          }
          v13 = (__int64 *)*v13;
        }
        KeReleaseSpinLock(&AcpiPowerLock, v14);
      }
    }
    v10 = 0;
    if ( (unsigned int)(v8 - 4) <= 2 )
      v10 = 8;
    return ACPIDeviceInitializePowerRequest(DeviceExtension, v7, (_SLIST_ENTRY *)a3, a2, v8, 0, v10);
  }
}
