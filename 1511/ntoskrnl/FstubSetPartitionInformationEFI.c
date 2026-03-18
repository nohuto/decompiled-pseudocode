/*
 * XREFs of FstubSetPartitionInformationEFI @ 0x140515F18
 * Callers:
 *     IoSetPartitionInformationEx @ 0x1404E8378 (IoSetPartitionInformationEx.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     IoReadPartitionTableEx @ 0x1404E8424 (IoReadPartitionTableEx.c)
 *     IoWritePartitionTableEx @ 0x14051621C (IoWritePartitionTableEx.c)
 */

NTSTATUS __fastcall FstubSetPartitionInformationEFI(PDEVICE_OBJECT *a1, int a2, __int64 a3)
{
  unsigned __int64 v5; // rsi
  NTSTATUS result; // eax
  struct _DRIVE_LAYOUT_INFORMATION_EX *v7; // rbx
  unsigned __int64 v8; // rdx
  NTSTATUS v9; // edi
  struct _DRIVE_LAYOUT_INFORMATION_EX *DriveLayout; // [rsp+48h] [rbp+20h] BYREF

  DriveLayout = 0LL;
  if ( !a2 )
    return -1073741811;
  v5 = (unsigned int)(a2 - 1);
  result = IoReadPartitionTableEx(*a1, &DriveLayout);
  if ( result >= 0 )
  {
    v7 = DriveLayout;
    if ( (unsigned int)v5 >= DriveLayout->PartitionCount )
    {
      v9 = -1073741811;
    }
    else
    {
      v8 = v5;
      *(_OWORD *)&DriveLayout->PartitionEntry[v8].Mbr.PartitionType = *(_OWORD *)a3;
      v7->PartitionEntry[v8].Gpt.PartitionId = *(GUID *)(a3 + 16);
      v7->PartitionEntry[v8].Gpt.Attributes = *(_QWORD *)(a3 + 32);
      *(_OWORD *)v7->PartitionEntry[v8].Gpt.Name = *(_OWORD *)(a3 + 40);
      *(_OWORD *)&v7->PartitionEntry[v8].Gpt.Name[8] = *(_OWORD *)(a3 + 56);
      *(_OWORD *)&v7->PartitionEntry[v8].Gpt.Name[16] = *(_OWORD *)(a3 + 72);
      *(_OWORD *)&v7->PartitionEntry[v8].Gpt.Name[24] = *(_OWORD *)(a3 + 88);
      *(_QWORD *)&v7->PartitionEntry[v8].Gpt.Name[32] = *(_QWORD *)(a3 + 104);
      v9 = IoWritePartitionTableEx(*a1, v7);
    }
    ExFreePoolWithTag(v7, 0);
    return v9;
  }
  return result;
}
