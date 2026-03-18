/*
 * XREFs of ACPIFilterIrpDeviceUsageNotificationCompletion @ 0x1C0007B50
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001538 (ACPIInternalGetDeviceExtension.c)
 *     ACPIInternalDecrementIrpReferenceCount @ 0x1C0007C70 (ACPIInternalDecrementIrpReferenceCount.c)
 */

__int64 __fastcall ACPIFilterIrpDeviceUsageNotificationCompletion(ULONG_PTR a1, __int64 a2)
{
  __int64 DeviceExtension; // rbx
  __int64 v5; // rax

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v5 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)(a2 + 65) )
    *(_BYTE *)(v5 + 3) |= 1u;
  if ( *(int *)(a2 + 48) >= 0 )
  {
    if ( *(_DWORD *)(v5 + 16) == 2 )
    {
      if ( *(_BYTE *)(v5 + 8) )
        _InterlockedAdd((volatile signed __int32 *)(DeviceExtension + 680), 1u);
      else
        _InterlockedDecrement((volatile signed __int32 *)(DeviceExtension + 680));
    }
    if ( *(_DWORD *)(v5 + 16) == 1 )
    {
      if ( *(_BYTE *)(v5 + 8) )
        _InterlockedAdd((volatile signed __int32 *)(DeviceExtension + 684), 1u);
      else
        _InterlockedDecrement((volatile signed __int32 *)(DeviceExtension + 684));
    }
    if ( *(_DWORD *)(v5 + 16) == 3 )
    {
      if ( *(_BYTE *)(v5 + 8) )
        _InterlockedAdd((volatile signed __int32 *)(DeviceExtension + 688), 1u);
      else
        _InterlockedDecrement((volatile signed __int32 *)(DeviceExtension + 688));
    }
    if ( *(_BYTE *)(v5 + 8) == 1 )
      *(_DWORD *)(a1 + 48) &= ~0x2000u;
    if ( !*(_BYTE *)(v5 + 8) && (*(_BYTE *)DeviceExtension & 0x40) != 0 )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(DeviceExtension + 720) + 48LL) & 0x2000) != 0 )
        *(_DWORD *)(a1 + 48) |= 0x2000u;
      else
        *(_DWORD *)(a1 + 48) &= ~0x2000u;
    }
    IoInvalidateDeviceState(*(PDEVICE_OBJECT *)(DeviceExtension + 728));
  }
  ACPIInternalDecrementIrpReferenceCount(DeviceExtension);
  return 0LL;
}
