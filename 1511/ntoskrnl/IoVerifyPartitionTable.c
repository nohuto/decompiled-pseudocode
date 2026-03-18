/*
 * XREFs of IoVerifyPartitionTable @ 0x14051AB28
 * Callers:
 *     IopCreateArcName @ 0x140522480 (IopCreateArcName.c)
 * Callees:
 *     FstubFreeDiskInformation @ 0x1404E84BC (FstubFreeDiskInformation.c)
 *     FstubDetectPartitionStyle @ 0x1404E84F4 (FstubDetectPartitionStyle.c)
 *     FstubAllocateDiskInformation @ 0x1404E8640 (FstubAllocateDiskInformation.c)
 *     FstubVerifyPartitionTableEFI @ 0x1405F6308 (FstubVerifyPartitionTableEFI.c)
 */

NTSTATUS __stdcall IoVerifyPartitionTable(PDEVICE_OBJECT DeviceObject, BOOLEAN FixErrors)
{
  NTSTATUS result; // eax
  __int64 v4; // rdx
  NTSTATUS v5; // edi
  int v6; // [rsp+40h] [rbp+18h] BYREF
  PVOID P; // [rsp+48h] [rbp+20h] BYREF

  result = FstubAllocateDiskInformation(DeviceObject, &P);
  if ( result >= 0 )
  {
    v5 = FstubDetectPartitionStyle((__int64)P, &v6);
    if ( v5 < 0
      || (!v6
        ? (v5 = 0)
        : v6 == 1
        ? (LOBYTE(v4) = FixErrors, v5 = FstubVerifyPartitionTableEFI(P, v4))
        : (v5 = -1073741637),
          P) )
    {
      FstubFreeDiskInformation(P);
    }
    return v5;
  }
  return result;
}
