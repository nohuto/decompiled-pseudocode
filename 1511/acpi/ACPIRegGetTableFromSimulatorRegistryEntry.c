/*
 * XREFs of ACPIRegGetTableFromSimulatorRegistryEntry @ 0x1C007CA94
 * Callers:
 *     ACPIMapNamedTable @ 0x1C0004920 (ACPIMapNamedTable.c)
 * Callees:
 *     memset @ 0x1C00251C0 (memset.c)
 *     OSOpenHandle @ 0x1C006592C (OSOpenHandle.c)
 *     ACPIRegLocalCopyString @ 0x1C0065AC4 (ACPIRegLocalCopyString.c)
 *     ACPIRegReadEntireSimulatorAcpiTable @ 0x1C007CE08 (ACPIRegReadEntireSimulatorAcpiTable.c)
 *     OSOpenLargestSubkey @ 0x1C007D104 (OSOpenLargestSubkey.c)
 */

bool __fastcall ACPIRegGetTableFromSimulatorRegistryEntry(char **a1)
{
  bool v1; // di
  char *v2; // rbp
  PVOID PoolWithTag; // rax
  void *v6; // rsi
  _BYTE *v7; // rax
  _BYTE *v8; // rax
  HANDLE Handle; // [rsp+58h] [rbp+10h] BYREF

  Handle = 0LL;
  v1 = 0;
  v2 = *a1;
  if ( (AcpiOverrideAttributes & 0x10000) == 0 )
    return 0;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x6AuLL, 0x42706341u);
  v6 = PoolWithTag;
  if ( !PoolWithTag )
    return 0;
  memset(PoolWithTag, 0, 0x6AuLL);
  qmemcpy(v6, "\\Registry\\Machine\\System\\CurrentControlSet\\Services\\ACPI\\Parameters\\Simulator\\Tables\\", 85);
  v7 = ACPIRegLocalCopyString((__int64)v6 + 85, v2, 4u);
  *v7 = 92;
  v8 = ACPIRegLocalCopyString((__int64)(v7 + 1), v2 + 10, 6u);
  *v8 = 92;
  *ACPIRegLocalCopyString((__int64)(v8 + 1), v2 + 16, 8u) = 0;
  if ( OSOpenHandle((PCSZ)v6, 0LL, &Handle) >= 0 && (int)OSOpenLargestSubkey(Handle) >= 0 )
    v1 = (int)ACPIRegReadEntireSimulatorAcpiTable(0LL, a1) >= 0;
  ExFreePoolWithTag(v6, 0);
  if ( Handle )
    ZwClose(Handle);
  return v1;
}
