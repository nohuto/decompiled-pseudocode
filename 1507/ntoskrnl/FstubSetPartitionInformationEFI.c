/*
 * XREFs of FstubSetPartitionInformationEFI @ 0x14066F8AC
 * Callers:
 *     IoSetPartitionInformationEx @ 0x14055FB64 (IoSetPartitionInformationEx.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     IoReadPartitionTableEx @ 0x140562908 (IoReadPartitionTableEx.c)
 *     IoWritePartitionTableEx @ 0x14067024C (IoWritePartitionTableEx.c)
 */

NTSTATUS __fastcall FstubSetPartitionInformationEFI(PDEVICE_OBJECT *a1, int a2, __int64 a3)
{
  NTSTATUS result; // eax
  unsigned __int64 v6; // rsi
  struct _DRIVE_LAYOUT_INFORMATION_EX *v7; // rbx
  NTSTATUS v8; // edi
  unsigned __int64 v9; // rdx
  struct _DRIVE_LAYOUT_INFORMATION_EX *DriveLayout; // [rsp+48h] [rbp+20h] BYREF

  DriveLayout = 0LL;
  if ( !a2 )
    return -1073741811;
  v6 = (unsigned int)(a2 - 1);
  result = IoReadPartitionTableEx(*a1, &DriveLayout);
  if ( result >= 0 )
  {
    v7 = DriveLayout;
    if ( (unsigned int)v6 < DriveLayout->PartitionCount )
    {
      v9 = v6;
      *(_OWORD *)&DriveLayout->PartitionEntry[v9].Mbr.PartitionType = *(_OWORD *)a3;
      v7->PartitionEntry[v9].Gpt.PartitionId = *(GUID *)(a3 + 16);
      v7->PartitionEntry[v9].Gpt.Attributes = *(_QWORD *)(a3 + 32);
      *(_OWORD *)v7->PartitionEntry[v9].Gpt.Name = *(_OWORD *)(a3 + 40);
      *(_OWORD *)&v7->PartitionEntry[v9].Gpt.Name[8] = *(_OWORD *)(a3 + 56);
      *(_OWORD *)&v7->PartitionEntry[v9].Gpt.Name[16] = *(_OWORD *)(a3 + 72);
      *(_OWORD *)&v7->PartitionEntry[v9].Gpt.Name[24] = *(_OWORD *)(a3 + 88);
      *(_QWORD *)&v7->PartitionEntry[v9].Gpt.Name[32] = *(_QWORD *)(a3 + 104);
      v8 = IoWritePartitionTableEx(*a1, v7);
    }
    else
    {
      v8 = -1073741811;
    }
    ExFreePoolWithTag(v7, 0);
    return v8;
  }
  return result;
}
