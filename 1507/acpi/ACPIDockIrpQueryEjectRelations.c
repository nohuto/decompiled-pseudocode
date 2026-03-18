/*
 * XREFs of ACPIDockIrpQueryEjectRelations @ 0x1C00786BC
 * Callers:
 *     ACPIDockIrpQueryDeviceRelations @ 0x1C0078630 (ACPIDockIrpQueryDeviceRelations.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001538 (ACPIInternalGetDeviceExtension.c)
 */

__int64 __fastcall ACPIDockIrpQueryEjectRelations(ULONG_PTR a1, __int64 a2, PVOID *a3)
{
  __int64 DeviceExtension; // rax
  __int64 v5; // rcx

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v5 = *(_QWORD *)(DeviceExtension + 176);
  if ( !v5 )
    return 3221225473LL;
  if ( *(_QWORD *)(v5 + 704) )
    return ACPIDetectEjectDevices(v5, a3, *(_QWORD **)(DeviceExtension + 176));
  return 3221225485LL;
}
