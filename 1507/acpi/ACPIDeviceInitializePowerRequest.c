/*
 * XREFs of ACPIDeviceInitializePowerRequest @ 0x1C000AE8C
 * Callers:
 *     ACPIDeviceInternalDeviceRequest @ 0x1C0008044 (ACPIDeviceInternalDeviceRequest.c)
 *     ACPIDeviceInternalSynchronizeRequest @ 0x1C000A3E8 (ACPIDeviceInternalSynchronizeRequest.c)
 *     ACPIBuildProcessDevicePhasePsc @ 0x1C000B180 (ACPIBuildProcessDevicePhasePsc.c)
 *     ACPIWakeWaitIrp @ 0x1C0021580 (ACPIWakeWaitIrp.c)
 *     ACPIDeviceIrpDeviceRequest @ 0x1C0021D78 (ACPIDeviceIrpDeviceRequest.c)
 *     ACPIDeviceIrpDeviceFilterRequest @ 0x1C00232C0 (ACPIDeviceIrpDeviceFilterRequest.c)
 *     ACPIDeviceIrpSystemRequest @ 0x1C0037D2C (ACPIDeviceIrpSystemRequest.c)
 *     ACPIDeviceIrpWarmEjectRequest @ 0x1C0037F50 (ACPIDeviceIrpWarmEjectRequest.c)
 *     AcpiDeviceResetInvokeReset @ 0x1C0039234 (AcpiDeviceResetInvokeReset.c)
 * Callees:
 *     ACPIDeviceInternalQueueRequest @ 0x1C000B0B0 (ACPIDeviceInternalQueueRequest.c)
 *     ACPIWakeEnableDisableAsync @ 0x1C0021140 (ACPIWakeEnableDisableAsync.c)
 *     _guard_dispatch_icall_nop @ 0x1C00237F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0023B40 (memset.c)
 *     ACPIWakeEmulationDisable @ 0x1C0042298 (ACPIWakeEmulationDisable.c)
 *     ACPIWakeEmulationEnable @ 0x1C00422E0 (ACPIWakeEmulationEnable.c)
 *     ACPIWakeEmulationPrepare @ 0x1C007FA20 (ACPIWakeEmulationPrepare.c)
 */

__int64 __fastcall ACPIDeviceInitializePowerRequest(
        __int64 a1,
        POWER_STATE a2,
        _SLIST_ENTRY *a3,
        __int64 a4,
        int a5,
        int a6,
        unsigned int a7)
{
  PSLIST_ENTRY v10; // rbx
  KIRQL v11; // al
  KIRQL v12; // r15
  unsigned int v13; // edi
  int SystemState; // eax
  struct _DEVICE_OBJECT *v15; // rcx
  __int64 v17; // rdx
  __int64 v18; // r8
  int v19; // edi

  ++dword_1C005A794;
  v10 = ExpInterlockedPopEntrySList(&RequestLookAsideList);
  if ( !v10 )
  {
    ++dword_1C005A798;
    v10 = (PSLIST_ENTRY)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))qword_1C005A7B0)(
                          (unsigned int)dword_1C005A7A4,
                          (unsigned int)dword_1C005A7AC,
                          (unsigned int)dword_1C005A7A8);
    if ( !v10 )
    {
      if ( !a3 )
        return 3221225494LL;
      v18 = 3221225626LL;
      goto LABEL_24;
    }
  }
  memset(v10, 0, 0x108uLL);
  LODWORD(v10[3].Next) = a6;
  LODWORD(v10[2].Next) = 1599293264;
  v10[12].Next = a3;
  *((_QWORD *)&v10[12].Next + 1) = a4;
  *((_QWORD *)&v10[2].Next + 1) = a1;
  LODWORD(v10[13].Next) = 3;
  LODWORD(v10[16].Next) = 0;
  *((_QWORD *)&v10->Next + 1) = v10;
  v10->Next = v10;
  *((_QWORD *)&v10[1].Next + 1) = v10 + 1;
  v10[1].Next = v10 + 1;
  *((_QWORD *)&v10[5].Next + 1) = v10 + 5;
  v10[5].Next = v10 + 5;
  *((_QWORD *)&v10[4].Next + 1) = v10 + 4;
  v10[4].Next = v10 + 4;
  v11 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerQueueLock);
  v12 = v11;
  switch ( a6 )
  {
    case 0:
      if ( !_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 680), 0, 0) )
      {
LABEL_5:
        v13 = a7;
        goto LABEL_6;
      }
      if ( a5 == 3 )
      {
        if ( a2.SystemState != PowerSystemSleeping3 )
          goto LABEL_5;
        v13 = a7 | 0x10;
      }
      else
      {
        if ( a2.SystemState != PowerSystemWorking )
          goto LABEL_5;
        v13 = a7 | 0x20;
      }
LABEL_6:
      *((POWER_STATE *)&v10[6].Next + 2) = a2;
      *((_DWORD *)&v10[6].Next + 3) = 0;
      *((_DWORD *)&v10[3].Next + 2) = v13;
      SystemState = a2.SystemState;
      if ( a2.SystemState > *(_DWORD *)(a1 + 328) )
      {
        v15 = *(struct _DEVICE_OBJECT **)(a1 + 712);
        if ( v15 )
        {
          PoSetPowerState(v15, DevicePowerState, a2);
          SystemState = a2.SystemState;
        }
      }
      if ( SystemState > 1 )
        *(_QWORD *)(a1 + 904) &= ~0x10000uLL;
      goto LABEL_11;
    case 1:
      v13 = a7;
      *((POWER_STATE *)&v10[6].Next + 2) = a2;
      *((_DWORD *)&v10[6].Next + 3) = a5;
      goto LABEL_11;
    case 2:
      *((POWER_STATE *)&v10[6].Next + 2) = a2;
      *((_DWORD *)&v10[3].Next + 2) = a7;
      LODWORD(v10[7].Next) = 1;
      KeReleaseSpinLock(&AcpiPowerQueueLock, v11);
      if ( (*(_QWORD *)(a1 + 904) & 0x100000000LL) == 0 )
      {
LABEL_21:
        LOBYTE(v17) = 1;
        ACPIWakeEnableDisableAsync(a1, v17, ACPIDeviceIrpWaitWakeRequestPending, v10);
        return 3221225494LL;
      }
      if ( KeGetCurrentIrql() < 2u )
      {
        v19 = ACPIWakeEmulationPrepare(v10);
        if ( v19 >= 0 )
        {
          v19 = ACPIWakeEmulationEnable(v10);
          if ( v19 >= 0 )
            goto LABEL_21;
          ACPIWakeEmulationDisable(v10);
        }
      }
      else
      {
        v19 = -1073741496;
      }
      if ( !a3 )
        return 3221225494LL;
      v18 = (unsigned int)v19;
LABEL_24:
      ((void (__fastcall *)(__int64, __int64, __int64))a3)(a1, a4, v18);
      return 3221225494LL;
    case 3:
      v13 = a7;
      *((POWER_STATE *)&v10[6].Next + 2) = a2;
      goto LABEL_19;
  }
  v13 = a7;
  if ( a6 == 4 )
LABEL_19:
    *((_DWORD *)&v10[3].Next + 2) = v13;
LABEL_11:
  if ( (v13 & 2) == 0 )
    ACPIDeviceInternalQueueRequest(a1, v10, v13);
  KeReleaseSpinLock(&AcpiPowerQueueLock, v12);
  return 3221225494LL;
}
