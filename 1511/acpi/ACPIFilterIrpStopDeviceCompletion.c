/*
 * XREFs of ACPIFilterIrpStopDeviceCompletion @ 0x1C003BC80
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001538 (ACPIInternalGetDeviceExtension.c)
 *     ACPIInternalDecrementIrpReferenceCount @ 0x1C0007C70 (ACPIInternalDecrementIrpReferenceCount.c)
 *     ACPIInitStopDevice @ 0x1C007B200 (ACPIInitStopDevice.c)
 */

__int64 __fastcall ACPIFilterIrpStopDeviceCompletion(ULONG_PTR a1, __int64 a2)
{
  int v2; // esi
  __int64 DeviceExtension; // rax
  __int64 v5; // rbx

  v2 = *(_DWORD *)(a2 + 48);
  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v5 = DeviceExtension;
  if ( *(_BYTE *)(a2 + 65) )
    *(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) |= 1u;
  if ( v2 >= 0 )
  {
    *(_DWORD *)(DeviceExtension + 312) = 0;
    ACPIInitStopDevice(DeviceExtension, 0LL);
  }
  ACPIInternalDecrementIrpReferenceCount(v5);
  return 0LL;
}
