/*
 * XREFs of ACPIEjectPartitionUnitInterface @ 0x1C007B7A8
 * Callers:
 *     ACPIBusIrpQueryInterface @ 0x1C001D4E0 (ACPIBusIrpQueryInterface.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001538 (ACPIInternalGetDeviceExtension.c)
 *     memset @ 0x1C00251C0 (memset.c)
 */

__int64 __fastcall ACPIEjectPartitionUnitInterface(ULONG_PTR a1, __int64 a2)
{
  _QWORD *DeviceExtension; // rax
  __int64 v4; // rbx
  _DWORD *v5; // rdi
  _QWORD *v6; // rbx

  DeviceExtension = (_QWORD *)ACPIInternalGetDeviceExtension(a1);
  v4 = *(_QWORD *)(a2 + 184);
  v5 = DeviceExtension;
  if ( *(_WORD *)(v4 + 16) < 0x38u || *(_WORD *)(v4 + 18) != 1 || (*DeviceExtension & 0x2000000000LL) == 0 )
    return 3221225485LL;
  v6 = *(_QWORD **)(v4 + 24);
  memset(v6, 0, 0x38uLL);
  v6[1] = v5;
  v6[3] = PciConfigPinToLine;
  v6[2] = PciConfigPinToLine;
  v6[4] = &ACPIGetUniqueId;
  *(_DWORD *)v6 = 65592;
  if ( (*v5 & 0x4000LL) != 0 )
  {
    v6[6] = ACPIModuleIsValidSpare;
    v6[5] = ACPIModuleGetSpareProperties;
  }
  return 0LL;
}
