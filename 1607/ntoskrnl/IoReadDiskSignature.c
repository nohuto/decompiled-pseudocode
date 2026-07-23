/*
 * XREFs of IoReadDiskSignature @ 0x1405751DC
 * Callers:
 *     <none>
 * Callees:
 *     PcReadPartitionTable @ 0x140147A5C (PcReadPartitionTable.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall IoReadDiskSignature(PDEVICE_OBJECT DeviceObject, ULONG BytesPerSector, PDISK_SIGNATURE Signature)
{
  int PartitionTable; // eax
  char *v5; // r9
  NTSTATUS v6; // edi
  PVOID P; // [rsp+48h] [rbp+20h] BYREF

  P = 0LL;
  PartitionTable = PcReadPartitionTable(DeviceObject, (struct _DRIVE_LAYOUT_INFORMATION_EX **)&P);
  v5 = (char *)P;
  v6 = PartitionTable;
  if ( PartitionTable >= 0 )
  {
    Signature->PartitionStyle = *(_DWORD *)P;
    if ( *(_DWORD *)v5 )
    {
      if ( *(_DWORD *)v5 == 1 )
        Signature->4 = *(union _DISK_SIGNATURE::$9D353A9A2948DD7B98BCBBCC4F8D6995 *)(v5 + 8);
      else
        v6 = -1073741637;
    }
    else
    {
      Signature->Mbr.Signature = *((_DWORD *)v5 + 2);
      Signature->Mbr.CheckSum = *((_DWORD *)v5 + 3);
    }
  }
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  return v6;
}
