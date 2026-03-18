/*
 * XREFs of ACPIRegReadAMLRegistryEntry @ 0x1C006598C
 * Callers:
 *     ACPIMapNamedTable @ 0x1C0004920 (ACPIMapNamedTable.c)
 *     ACPILoadProcessDSDT @ 0x1C0085CF0 (ACPILoadProcessDSDT.c)
 *     ACPILoadProcessRSDT @ 0x1C0085DA4 (ACPILoadProcessRSDT.c)
 * Callees:
 *     memset @ 0x1C00251C0 (memset.c)
 *     OSOpenHandle @ 0x1C006592C (OSOpenHandle.c)
 *     ACPIRegLocalCopyString @ 0x1C0065AC4 (ACPIRegLocalCopyString.c)
 *     OSReadRegValue @ 0x1C006630C (OSReadRegValue.c)
 *     ACPIRegReadEntireAcpiTable @ 0x1C007CBF8 (ACPIRegReadEntireAcpiTable.c)
 *     OSOpenLargestSubkey @ 0x1C007D104 (OSOpenLargestSubkey.c)
 */

bool __fastcall ACPIRegReadAMLRegistryEntry(__int64 *a1)
{
  bool v1; // di
  __int64 v2; // r15
  char *PoolWithTag; // rax
  char *v5; // rsi
  _BYTE *v6; // rax
  _BYTE *v7; // rax
  int v9; // [rsp+60h] [rbp+40h]
  HANDLE Handle; // [rsp+78h] [rbp+58h] BYREF

  Handle = 0LL;
  v1 = 0;
  v2 = *a1;
  if ( (AcpiOverrideAttributes & 0x10000) == 0 )
    return 0;
  PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 0x59uLL, 0x53706341u);
  v5 = PoolWithTag;
  if ( !PoolWithTag )
    return 0;
  memset(PoolWithTag, 0, 0x59uLL);
  qmemcpy(v5, "\\Registry\\Machine\\System\\CurrentControlSet\\Services\\ACPI\\Parameters\\", 68);
  v6 = (_BYTE *)ACPIRegLocalCopyString(v5 + 68, v2, 4LL);
  *v6 = 92;
  v7 = (_BYTE *)ACPIRegLocalCopyString(v6 + 1, v2 + 10, 6LL);
  *v7 = 92;
  *(_BYTE *)ACPIRegLocalCopyString(v7 + 1, v2 + 16, 8LL) = 0;
  if ( OSOpenHandle(v5, 0LL, &Handle) >= 0
    && (int)OSOpenLargestSubkey(Handle) >= 0
    && (int)OSReadRegValue("Action") >= 0
    && !v9 )
  {
    v1 = (int)ACPIRegReadEntireAcpiTable(0LL, a1) >= 0;
  }
  ExFreePoolWithTag(v5, 0);
  if ( Handle )
    ZwClose(Handle);
  return v1;
}
