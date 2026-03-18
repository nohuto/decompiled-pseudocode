/*
 * XREFs of IoWritePartitionTableEx @ 0x14067024C
 * Callers:
 *     FstubReadPartitionTableEFI @ 0x14066F604 (FstubReadPartitionTableEFI.c)
 *     FstubSetPartitionInformationEFI @ 0x14066F8AC (FstubSetPartitionInformationEFI.c)
 *     VerifierIoWritePartitionTableEx @ 0x1407420A8 (VerifierIoWritePartitionTableEx.c)
 * Callees:
 *     FstubFreeDiskInformation @ 0x14056298C (FstubFreeDiskInformation.c)
 *     FstubAllocateDiskInformation @ 0x140563328 (FstubAllocateDiskInformation.c)
 *     FstubReadHeaderEFI @ 0x14066F550 (FstubReadHeaderEFI.c)
 *     FstubWritePartitionTableEFI @ 0x14066FEB4 (FstubWritePartitionTableEFI.c)
 *     FstubWritePartitionTableMBR @ 0x1406700C0 (FstubWritePartitionTableMBR.c)
 */

NTSTATUS __stdcall IoWritePartitionTableEx(
        PDEVICE_OBJECT DeviceObject,
        struct _DRIVE_LAYOUT_INFORMATION_EX *DriveLayout)
{
  NTSTATUS result; // eax
  _DWORD *v4; // rbx
  NTSTATUS v5; // edi
  _QWORD *v6; // rbp
  DWORD v7; // r14d
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // r9
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
    v13 = FstubWritePartitionTableMBR((__int64)P, DriveLayout);
    goto LABEL_12;
  }
  if ( DriveLayout->PartitionStyle != 1 )
  {
    v5 = -1073741637;
    goto LABEL_13;
  }
  P = 0LL;
  if ( FstubReadHeaderEFI((__int64)v4, 1LL, &P) >= 0
    || (v5 = FstubReadHeaderEFI((__int64)v4, *((_QWORD *)v4 + 7) - 1LL, &P), v5 >= 0) )
  {
    v6 = P;
    v7 = *((_DWORD *)P + 20);
    if ( DriveLayout->PartitionCount > v7 )
    {
      v5 = -1073741811;
      goto LABEL_13;
    }
    v8 = (v7 << 7) / v4[2];
    *((_QWORD *)P + 5) = v8 + 2;
    v9 = *((_QWORD *)v4 + 7) - v8 - 2;
    v6[6] = v9;
    v10 = v6[5];
    PartitionCount = DriveLayout->PartitionCount;
    v16 = *(_OWORD *)&DriveLayout->Mbr.Signature;
    v5 = FstubWritePartitionTableEFI(
           (__int64)v4,
           (__int64)&v16,
           v7,
           v10,
           v9,
           0,
           PartitionCount,
           (__int64)DriveLayout->PartitionEntry);
    if ( v5 < 0 )
      goto LABEL_13;
    v11 = v6[5];
    v15 = DriveLayout->PartitionCount;
    v12 = v6[6];
    v16 = *(_OWORD *)&DriveLayout->Mbr.Signature;
    v13 = FstubWritePartitionTableEFI(
            (__int64)v4,
            (__int64)&v16,
            v7,
            v11,
            v12,
            1,
            v15,
            (__int64)DriveLayout->PartitionEntry);
LABEL_12:
    v5 = v13;
  }
LABEL_13:
  if ( v4 )
    FstubFreeDiskInformation(v4);
  return v5;
}
