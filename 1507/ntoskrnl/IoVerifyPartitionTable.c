/*
 * XREFs of IoVerifyPartitionTable @ 0x14058E680
 * Callers:
 *     IopCreateArcName @ 0x14058ED40 (IopCreateArcName.c)
 * Callees:
 *     FstubFreeDiskInformation @ 0x14056298C (FstubFreeDiskInformation.c)
 *     FstubDetectPartitionStyle @ 0x1405631F8 (FstubDetectPartitionStyle.c)
 *     FstubAllocateDiskInformation @ 0x140563328 (FstubAllocateDiskInformation.c)
 *     FstubVerifyPartitionTableEFI @ 0x14066F990 (FstubVerifyPartitionTableEFI.c)
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
