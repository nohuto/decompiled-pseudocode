/*
 * XREFs of ACPIDeviceIrpDeviceFilterRequest @ 0x1C0023990
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001538 (ACPIInternalGetDeviceExtension.c)
 *     ACPIInternalDecrementIrpReferenceCount @ 0x1C0007C70 (ACPIInternalDecrementIrpReferenceCount.c)
 *     ACPIDeviceInitializePowerRequest @ 0x1C000AF5C (ACPIDeviceInitializePowerRequest.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024E60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ACPIDeviceIrpDeviceFilterRequest(ULONG_PTR a1, __int64 a2, _SLIST_ENTRY *a3)
{
  __int64 DeviceExtension; // r10
  __int64 v6; // rax
  POWER_STATE v7; // edx
  int v8; // r8d
  int v9; // ebx
  unsigned int v10; // ecx

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v6 = *(_QWORD *)(a2 + 184);
  v7.SystemState = *(_SYSTEM_POWER_STATE *)(v6 + 24);
  v8 = *(_DWORD *)(v6 + 32);
  if ( *(_BYTE *)(a2 + 65) )
    *(_BYTE *)(v6 + 3) |= 1u;
  v9 = *(_DWORD *)(a2 + 48);
  if ( v9 < 0 )
  {
    ACPIInternalDecrementIrpReferenceCount(DeviceExtension);
    return (unsigned int)v9;
  }
  else if ( v7.SystemState != PowerSystemWorking && (*(_QWORD *)(DeviceExtension + 904) & 0x1000000000LL) != 0 )
  {
    if ( a3 )
      ((void (__fastcall *)(__int64, __int64, _QWORD))a3)(DeviceExtension, a2, (unsigned int)v9);
    return 3221225494LL;
  }
  else
  {
    v10 = 0;
    if ( (unsigned int)(v8 - 4) <= 2 )
      v10 = 8;
    return ACPIDeviceInitializePowerRequest(DeviceExtension, v7, a3, a2, v8, 0, v10);
  }
}
