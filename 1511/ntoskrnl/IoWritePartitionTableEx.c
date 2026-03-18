/*
 * XREFs of IoWritePartitionTableEx @ 0x14051621C
 * Callers:
 *     FstubSetPartitionInformationEFI @ 0x140515F18 (FstubSetPartitionInformationEFI.c)
 *     FstubReadPartitionTableEFI @ 0x1405167E0 (FstubReadPartitionTableEFI.c)
 *     VerifierIoWritePartitionTableEx @ 0x1406C08B4 (VerifierIoWritePartitionTableEx.c)
 * Callees:
 *     FstubFreeDiskInformation @ 0x1404E84BC (FstubFreeDiskInformation.c)
 *     FstubAllocateDiskInformation @ 0x1404E8640 (FstubAllocateDiskInformation.c)
 *     FstubWritePartitionTableEFI @ 0x14051645C (FstubWritePartitionTableEFI.c)
 *     FstubReadHeaderEFI @ 0x140516A5C (FstubReadHeaderEFI.c)
 *     FstubWritePartitionTableMBR @ 0x1405F6578 (FstubWritePartitionTableMBR.c)
 */

NTSTATUS __stdcall IoWritePartitionTableEx(
        PDEVICE_OBJECT DeviceObject,
        struct _DRIVE_LAYOUT_INFORMATION_EX *DriveLayout)
{
  NTSTATUS result; // eax
  _DWORD *v4; // rbx
  _QWORD *v5; // rbp
  DWORD v6; // r14d
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // r9
  NTSTATUS v10; // edi
  __int64 v11; // r9
  __int64 v12; // rax
  NTSTATUS v13; // eax
  DWORD PartitionCount; // [rsp+30h] [rbp-38h]
  DWORD v15; // [rsp+30h] [rbp-38h]
  __int128 v16; // [rsp+40h] [rbp-28h] BYREF
  PVOID P; // [rsp+80h] [rbp+18h] BYREF

  P = 0LL;
  result = FstubAllocateDiskInformation(DeviceObject, &P);
  if ( result < 0 )
    return result;
  v4 = P;
  if ( !DriveLayout->PartitionStyle )
  {
    v13 = FstubWritePartitionTableMBR(P, DriveLayout);
    goto LABEL_8;
  }
  if ( DriveLayout->PartitionStyle != 1 )
  {
    v10 = -1073741637;
    goto LABEL_9;
  }
  P = 0LL;
  if ( (int)FstubReadHeaderEFI(v4, 1LL, &P) >= 0
    || (v10 = FstubReadHeaderEFI(v4, *((_QWORD *)v4 + 7) - 1LL, &P), v10 >= 0) )
  {
    v5 = P;
    v6 = *((_DWORD *)P + 20);
    if ( DriveLayout->PartitionCount > v6 )
    {
      v10 = -1073741811;
      goto LABEL_9;
    }
    v7 = (v6 << 7) / v4[2];
    *((_QWORD *)P + 5) = v7 + 2;
    v8 = *((_QWORD *)v4 + 7) - v7 - 2;
    v5[6] = v8;
    v9 = v5[5];
    PartitionCount = DriveLayout->PartitionCount;
    v16 = *(_OWORD *)&DriveLayout->Mbr.Signature;
    v10 = FstubWritePartitionTableEFI(
            (_DWORD)v4,
            (unsigned int)&v16,
            v6,
            v9,
            v8,
            0,
            PartitionCount,
            (__int64)DriveLayout->PartitionEntry);
    if ( v10 >= 0 )
    {
      v11 = v5[5];
      v15 = DriveLayout->PartitionCount;
      v12 = v5[6];
      v16 = *(_OWORD *)&DriveLayout->Mbr.Signature;
      v13 = FstubWritePartitionTableEFI(
              (_DWORD)v4,
              (unsigned int)&v16,
              v6,
              v11,
              v12,
              1,
              v15,
              (__int64)DriveLayout->PartitionEntry);
LABEL_8:
      v10 = v13;
    }
  }
LABEL_9:
  if ( v4 )
    FstubFreeDiskInformation(v4);
  return v10;
}
