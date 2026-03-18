/*
 * XREFs of ACPIDeviceIrpDeviceRequest @ 0x1C0028D38
 * Callers:
 *     ACPIDockIrpSetDevicePower @ 0x1C0028CE0 (ACPIDockIrpSetDevicePower.c)
 *     ACPIFilterIrpSetPower @ 0x1C002A600 (ACPIFilterIrpSetPower.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0004B60 (ACPIInternalGetDeviceExtension.c)
 *     ACPIDeviceInitializePowerRequest @ 0x1C000E7E0 (ACPIDeviceInitializePowerRequest.c)
 *     WPP_RECORDER_SF_qdqss @ 0x1C000FCF0 (WPP_RECORDER_SF_qdqss.c)
 *     _guard_dispatch_icall_nop @ 0x1C002BE40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ACPIDeviceIrpDeviceRequest(ULONG_PTR a1, __int64 a2, __int64 (__fastcall *a3)())
{
  __int64 DeviceExtension; // rax
  __int64 v6; // rcx
  __int64 v7; // rbx
  char v8; // r8
  POWER_STATE v9; // r14d
  int v10; // r15d
  const char *v11; // rcx
  const char *v12; // rdx
  __int64 v13; // rax
  int v14; // edi
  unsigned int v15; // ecx
  __int64 v17; // rax
  KIRQL v18; // al
  __int64 *v19; // rcx
  KIRQL v20; // di
  _QWORD *PoolWithTag; // rax

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v6 = *(_QWORD *)(a2 + 184);
  v7 = DeviceExtension;
  v8 = 0;
  v9.SystemState = *(_SYSTEM_POWER_STATE *)(v6 + 24);
  v10 = *(_DWORD *)(v6 + 32);
  v11 = (const char *)qword_1C002C340;
  v12 = (const char *)qword_1C002C340;
  if ( DeviceExtension )
  {
    v8 = DeviceExtension;
    v13 = *(_QWORD *)(DeviceExtension + 8);
    if ( (v13 & 0x200000000000LL) != 0 )
    {
      v11 = *(const char **)(v7 + 560);
      if ( (v13 & 0x400000000000LL) != 0 )
        v12 = *(const char **)(v7 + 568);
    }
  }
  WPP_RECORDER_SF_qdqss(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    (__int64)v12,
    0xAu,
    0x1Eu,
    (__int64)&WPP_1563d0135a0a38916c89783620a3f0f9_Traceguids,
    a2,
    LOBYTE(v9.SystemState) - 1,
    v8,
    v11,
    v12);
  if ( *(_BYTE *)(a2 + 65) )
    *(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) |= 1u;
  v14 = *(_DWORD *)(a2 + 48);
  if ( v14 < 0 || v9.SystemState == *(_DWORD *)(v7 + 336) )
  {
    if ( a3 )
      ((void (__fastcall *)(__int64, __int64, _QWORD))a3)(v7, a2, (unsigned int)v14);
    return (unsigned int)v14;
  }
  else
  {
    if ( v9.SystemState == PowerSystemWorking )
    {
      v17 = *(_QWORD *)(v7 + 8);
      if ( (v17 & 0x102000000LL) != 0 )
      {
        if ( (v17 & 0x2000000) != 0
          && (_InterlockedCompareExchange((volatile signed __int32 *)(v7 + 184), 0, 0) & 1) != 0 )
        {
          KeSetEvent((PRKEVENT)(v7 + 272), 0, 0);
        }
        else if ( (*(_QWORD *)(v7 + 8) & 0x800000000010000LL) == 0x800000000010000LL )
        {
          v18 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
          v19 = (__int64 *)AcpiPowerWaitWakeList;
          v20 = v18;
          while ( v19 != &AcpiPowerWaitWakeList )
          {
            if ( v19[5] == v7 )
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
            v19 = (__int64 *)*v19;
          }
          KeReleaseSpinLock(&AcpiPowerLock, v20);
        }
      }
    }
    v15 = 0;
    if ( (unsigned int)(v10 - 4) <= 2 )
      v15 = 8;
    return ACPIDeviceInitializePowerRequest(v7, v9, (_SLIST_ENTRY *)a3, a2, v10, 0, v15);
  }
}
