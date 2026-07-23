/*
 * XREFs of IoReadPartitionTable @ 0x14061FFD8
 * Callers:
 *     <none>
 * Callees:
 *     PcReadPartitionTable @ 0x140147A5C (PcReadPartitionTable.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ?AllocatePool@PC_ENVIRONMENT@@SAPEAXKEK@Z @ 0x140575378 (-AllocatePool@PC_ENVIRONMENT@@SAPEAXKEK@Z.c)
 */

NTSTATUS __stdcall IoReadPartitionTable(
        PDEVICE_OBJECT DeviceObject,
        ULONG SectorSize,
        BOOLEAN ReturnRecognizedPartitions,
        struct _DRIVE_LAYOUT_INFORMATION **PartitionBuffer)
{
  int PartitionTable; // eax
  __int64 v7; // rdx
  DWORD *v8; // rbx
  NTSTATUS v9; // edi
  unsigned int v10; // esi
  struct _DRIVE_LAYOUT_INFORMATION *Pool; // rax
  __int64 v12; // r8
  struct _DRIVE_LAYOUT_INFORMATION *v13; // r9
  __int64 v14; // rcx
  unsigned __int8 v15; // al
  int v16; // r10d
  PVOID P; // [rsp+58h] [rbp+20h] BYREF

  P = 0LL;
  *PartitionBuffer = 0LL;
  PartitionTable = PcReadPartitionTable(DeviceObject, (struct _DRIVE_LAYOUT_INFORMATION_EX **)&P);
  v8 = (DWORD *)P;
  v9 = PartitionTable;
  if ( PartitionTable >= 0 )
  {
    if ( *(_DWORD *)P == 1 )
    {
      v9 = -1073741637;
    }
    else
    {
      v10 = 32 * *((_DWORD *)P + 1) + 8;
      Pool = (struct _DRIVE_LAYOUT_INFORMATION *)PC_ENVIRONMENT::AllocatePool(v10, v7, 0x54506F49u);
      *PartitionBuffer = Pool;
      if ( Pool )
      {
        memset(Pool, 0, v10);
        v12 = 0LL;
        (*PartitionBuffer)->PartitionCount = v8[1];
        for ( (*PartitionBuffer)->Signature = v8[2]; (unsigned int)v12 < v8[1]; v12 = (unsigned int)(v12 + 1) )
        {
          v13 = *PartitionBuffer;
          v14 = (unsigned int)v12;
          if ( ReturnRecognizedPartitions )
          {
            v15 = v8[36 * v12 + 20];
            if ( v15 <= 0xFu )
            {
              v16 = 32801;
              if ( _bittest(&v16, v15) )
                continue;
            }
          }
          v13->PartitionEntry[v14].StartingOffset.QuadPart = *(_QWORD *)&v8[36 * v12 + 14];
          v13->PartitionEntry[v14].PartitionLength.QuadPart = *(_QWORD *)&v8[36 * v12 + 16];
          v13->PartitionEntry[v14].HiddenSectors = v8[36 * v12 + 21];
          v13->PartitionEntry[v14].PartitionNumber = v8[36 * v12 + 18];
          v13->PartitionEntry[v14].PartitionType = v8[36 * v12 + 20];
          v13->PartitionEntry[v14].BootIndicator = BYTE1(v8[36 * v12 + 20]);
          v13->PartitionEntry[v14].RecognizedPartition = BYTE2(v8[36 * v12 + 20]);
          v13->PartitionEntry[v14].RewritePartition = v8[36 * v12 + 19];
        }
      }
      else
      {
        v9 = -1073741670;
      }
    }
  }
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
  return v9;
}
