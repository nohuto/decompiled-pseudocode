/*
 * XREFs of ACPIRegGetTableFromSimulatorRegistryEntry @ 0x1C009DEA4
 * Callers:
 *     ACPIMapNamedTable @ 0x1C0004DA0 (ACPIMapNamedTable.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0004BB0 (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_s @ 0x1C0004C64 (WPP_RECORDER_SF_s.c)
 *     memset @ 0x1C002C1C0 (memset.c)
 *     OSOpenHandle @ 0x1C0080C4C (OSOpenHandle.c)
 *     ACPIRegLocalCopyString @ 0x1C0080E48 (ACPIRegLocalCopyString.c)
 *     ACPIRegReadEntireSimulatorAcpiTable @ 0x1C009E2CC (ACPIRegReadEntireSimulatorAcpiTable.c)
 *     OSOpenLargestSubkey @ 0x1C009E5EC (OSOpenLargestSubkey.c)
 */

bool __fastcall ACPIRegGetTableFromSimulatorRegistryEntry(char **a1)
{
  char *v1; // rbp
  bool v2; // di
  PVOID PoolWithTag; // rax
  void *v6; // rsi
  _BYTE *v7; // rax
  _BYTE *v8; // rax
  int v9; // edx
  int v10; // eax
  int v11; // edx
  int v12; // eax
  int v13; // edx
  HANDLE Handle; // [rsp+68h] [rbp+10h] BYREF

  v1 = *a1;
  Handle = 0LL;
  v2 = 0;
  if ( (AcpiOverrideAttributes & 0x10000) == 0 )
    return 0;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x6AuLL, 0x42706341u);
  v6 = PoolWithTag;
  if ( !PoolWithTag )
    return 0;
  memset(PoolWithTag, 0, 0x6AuLL);
  qmemcpy(v6, "\\Registry\\Machine\\System\\CurrentControlSet\\Services\\ACPI\\Parameters\\Simulator\\Tables\\", 85);
  v7 = ACPIRegLocalCopyString((__int64)v6 + 85, v1, 4u);
  *v7 = 92;
  v8 = ACPIRegLocalCopyString((__int64)(v7 + 1), v1 + 10, 6u);
  *v8 = 92;
  *ACPIRegLocalCopyString((__int64)(v8 + 1), v1 + 16, 8u) = 0;
  LOBYTE(v9) = 4;
  WPP_RECORDER_SF_s(
    WPP_GLOBAL_Control->DeviceExtension,
    v9,
    11,
    37,
    (__int64)&WPP_b2e6fc51b6d13b437f43e726d6037dce_Traceguids,
    (__int64)v6);
  v10 = OSOpenHandle((PCSZ)v6, 0LL, &Handle);
  if ( v10 >= 0 )
  {
    v12 = OSOpenLargestSubkey(Handle);
    if ( v12 >= 0 )
    {
      v2 = (int)ACPIRegReadEntireSimulatorAcpiTable(0LL, a1) >= 0;
    }
    else
    {
      LOBYTE(v13) = 2;
      WPP_RECORDER_SF_D(
        WPP_GLOBAL_Control->DeviceExtension,
        v13,
        11,
        39,
        (__int64)&WPP_b2e6fc51b6d13b437f43e726d6037dce_Traceguids,
        v12);
    }
  }
  else
  {
    LOBYTE(v11) = 2;
    WPP_RECORDER_SF_D(
      WPP_GLOBAL_Control->DeviceExtension,
      v11,
      11,
      38,
      (__int64)&WPP_b2e6fc51b6d13b437f43e726d6037dce_Traceguids,
      v10);
  }
  ExFreePoolWithTag(v6, 0);
  if ( Handle )
    ZwClose(Handle);
  return v2;
}
