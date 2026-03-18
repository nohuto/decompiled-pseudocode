/*
 * XREFs of IoWritePartitionTable @ 0x14066ED20
 * Callers:
 *     FstubWritePartitionTableMBR @ 0x1406700C0 (FstubWritePartitionTableMBR.c)
 *     VerifierIoWritePartitionTable @ 0x1407420A0 (VerifierIoWritePartitionTable.c)
 * Callees:
 *     KeInitializeEvent @ 0x1400459F0 (KeInitializeEvent.c)
 *     IofCallDriver @ 0x140048540 (IofCallDriver.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     HalExamineMBR @ 0x1401389D8 (HalExamineMBR.c)
 *     xHalGetPartialGeometry @ 0x1401E48AC (xHalGetPartialGeometry.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     IoBuildSynchronousFsdRequest @ 0x14040DFC8 (IoBuildSynchronousFsdRequest.c)
 *     HalpCalculateChsValues @ 0x14066EC10 (HalpCalculateChsValues.c)
 */

NTSTATUS __stdcall IoWritePartitionTable(
        PDEVICE_OBJECT DeviceObject,
        ULONG SectorSize,
        ULONG SectorsPerTrack,
        ULONG NumberOfHeads,
        struct _DRIVE_LAYOUT_INFORMATION *PartitionBuffer)
{
  LARGE_INTEGER v5; // rsi
  ULONG v6; // edi
  ULONG v7; // r13d
  bool v9; // r12
  int Status; // r14d
  LARGE_INTEGER v11; // rbx
  DWORD PartitionCount; // eax
  SIZE_T v14; // rdx
  char *PoolWithTag; // rax
  char *v16; // r13
  DWORD v18; // eax
  LARGE_INTEGER v19; // rdi
  PIRP v20; // rax
  DWORD Signature; // eax
  char *v22; // r10
  __int64 v23; // r8
  PARTITION_INFORMATION *v24; // r9
  DWORD v25; // ecx
  _DWORD *v26; // r12
  int LowPart; // eax
  BYTE *p_PartitionType; // r13
  BYTE v29; // dl
  LARGE_INTEGER v30; // rcx
  char v31; // r11
  char v32; // dl
  __int64 v33; // rax
  __int64 v34; // rax
  PIRP v35; // rax
  char v36; // [rsp+48h] [rbp-61h]
  BYTE v37; // [rsp+49h] [rbp-60h]
  DWORD v38; // [rsp+4Ch] [rbp-5Dh]
  char v39; // [rsp+50h] [rbp-59h]
  DWORD v40; // [rsp+54h] [rbp-55h]
  LARGE_INTEGER StartingOffset; // [rsp+58h] [rbp-51h] BYREF
  ULONG Length; // [rsp+60h] [rbp-49h]
  int v43; // [rsp+64h] [rbp-45h]
  LARGE_INTEGER v44; // [rsp+68h] [rbp-41h]
  PVOID Buffer; // [rsp+70h] [rbp-39h] BYREF
  ULONG v46; // [rsp+78h] [rbp-31h]
  ULONG v47; // [rsp+7Ch] [rbp-2Dh] BYREF
  char *v48; // [rsp+80h] [rbp-29h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+88h] [rbp-21h] BYREF
  PARTITION_INFORMATION *v50; // [rsp+98h] [rbp-11h]
  struct _KEVENT Event; // [rsp+A0h] [rbp-9h] BYREF
  char v53; // [rsp+110h] [rbp+67h]
  bool PartitionBuffera; // [rsp+128h] [rbp+7Fh]

  v5.QuadPart = 0LL;
  v44.QuadPart = 0LL;
  v6 = SectorSize;
  v53 = 0;
  v7 = 512;
  v36 = 0;
  if ( SectorSize >= 0x200 )
    v7 = SectorSize;
  Length = v7;
  v9 = 0;
  Status = 0;
  xHalGetPartialGeometry(DeviceObject, &v47);
  HalExamineMBR(DeviceObject, v7, 0x55u, &Buffer);
  if ( Buffer )
  {
    v53 = 1;
    ExFreePoolWithTag(Buffer, 0);
    v11.QuadPart = 512LL;
  }
  else
  {
    v11.QuadPart = 0LL;
  }
  _BitScanReverse(&v6, v6);
  PartitionCount = PartitionBuffer->PartitionCount;
  v46 = v6;
  StartingOffset = v11;
  v40 = PartitionCount;
  if ( PartitionCount == 1
    && !PartitionBuffer->PartitionEntry[0].StartingOffset.QuadPart
    && !PartitionBuffer->PartitionEntry[0].HiddenSectors )
  {
    v36 = 1;
    if ( PartitionBuffer->PartitionEntry[0].PartitionNumber
      || PartitionBuffer->PartitionEntry[0].PartitionType != 4
      || PartitionBuffer->PartitionEntry[0].BootIndicator == 1 )
    {
      return -1073741811;
    }
    v9 = PartitionBuffer->PartitionEntry[0].RewritePartition == 1;
    v53 = 0;
  }
  v14 = v7;
  PartitionBuffer->PartitionCount = (PartitionCount + 3) >> 2;
  if ( v7 < 0x1000 )
    v14 = 4096LL;
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNxCacheAligned, v14, 0x62747346u);
  Buffer = PoolWithTag;
  v16 = PoolWithTag;
  if ( !PoolWithTag )
    return -1073741670;
  v48 = PoolWithTag + 446;
  v18 = 0;
  v38 = 0;
  if ( PartitionBuffer->PartitionCount )
  {
    v19 = v44;
    while ( 1 )
    {
      PartitionBuffera = v18 == 0;
      KeInitializeEvent(&Event, NotificationEvent, 0);
      v20 = IoBuildSynchronousFsdRequest(3u, DeviceObject, v16, Length, &StartingOffset, &Event, &IoStatusBlock);
      if ( !v20 )
        break;
      v20->Tail.Overlay.CurrentStackLocation[-1].Flags |= 2u;
      Status = IofCallDriver(DeviceObject, v20);
      if ( Status == 259 )
      {
        KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
        Status = IoStatusBlock.Status;
      }
      if ( Status < 0 )
        goto LABEL_69;
      if ( v53 )
      {
        if ( v11.QuadPart == 512 )
          v11.QuadPart = 0LL;
        StartingOffset = v11;
      }
      if ( !v36 )
      {
        *((_WORD *)v16 + 255) = -21931;
        v39 = 0;
        if ( !v11.QuadPart )
        {
          Signature = PartitionBuffer->Signature;
          if ( *((_DWORD *)v16 + 110) != Signature )
          {
            *((_DWORD *)v16 + 110) = Signature;
            v39 = 1;
          }
        }
        v22 = v16 + 446;
        v23 = 0LL;
        v24 = &PartitionBuffer->PartitionEntry[4 * (unsigned __int64)v38];
        v43 = 0;
        v50 = v24;
        v25 = v40;
        v26 = v16 + 454;
        LowPart = 4 * v38;
        p_PartitionType = &v24->PartitionType;
        v44.LowPart = 4 * v38;
        while ( (_DWORD)v23 + LowPart != v25 )
        {
          v29 = *p_PartitionType;
          v37 = *p_PartitionType;
          if ( p_PartitionType[3] )
          {
            *((_BYTE *)v26 - 4) = v29;
            v39 = 1;
            *((_BYTE *)v26 - 8) = p_PartitionType[1] != 0 ? 0x80 : 0;
            if ( v29 )
            {
              if ( !PartitionBuffera && (v29 == 5 || v29 == 15) )
                v30 = v19;
              else
                v30 = v11;
              v31 = v46;
              v32 = v46;
              v33 = (*((_QWORD *)p_PartitionType - 3) - v30.QuadPart) >> v46;
              if ( HIDWORD(v33) )
              {
                Status = -1073741811;
                goto LABEL_69;
              }
              *v26 = v33;
              v34 = *((__int64 *)p_PartitionType - 2) >> v32;
              if ( HIDWORD(v34) )
              {
                Status = -1073741811;
                break;
              }
              v26[1] = v34;
              HalpCalculateChsValues(
                (__int64 *)&v24[v23],
                (__int64 *)&v24[v23].PartitionLength,
                v31,
                SectorsPerTrack,
                NumberOfHeads,
                v47,
                &v22[16 * v23]);
              v29 = v37;
              LODWORD(v23) = v43;
              v24 = v50;
              v22 = v48;
            }
            else
            {
              *(_QWORD *)v26 = 0LL;
              *((_BYTE *)v26 - 7) = 0;
              *((_BYTE *)v26 - 3) = 0;
              *((_WORD *)v26 - 3) = 0;
              *((_WORD *)v26 - 1) = 0;
            }
            v25 = v40;
          }
          if ( v29 == 5 || v29 == 15 )
            v5 = *(LARGE_INTEGER *)(p_PartitionType - 24);
          v23 = (unsigned int)(v23 + 1);
          v26 += 4;
          p_PartitionType += 32;
          v43 = v23;
          if ( (unsigned int)v23 >= 4 )
            break;
          LowPart = v44.LowPart;
        }
        if ( Status < 0 )
          goto LABEL_69;
        v9 = v39;
        v16 = (char *)Buffer;
      }
      if ( v9 )
      {
        v9 = 0;
        KeInitializeEvent(&Event, NotificationEvent, 0);
        if ( v53 )
        {
          if ( !v11.QuadPart )
            v11.QuadPart = 512LL;
          StartingOffset = v11;
        }
        v35 = IoBuildSynchronousFsdRequest(4u, DeviceObject, v16, Length, &StartingOffset, &Event, &IoStatusBlock);
        if ( !v35 )
          break;
        v35->Tail.Overlay.CurrentStackLocation[-1].Flags |= 0x12u;
        Status = IofCallDriver(DeviceObject, v35);
        if ( Status == 259 )
        {
          KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
          Status = IoStatusBlock.Status;
        }
        if ( Status < 0 )
          goto LABEL_69;
      }
      v11 = v5;
      if ( PartitionBuffera )
        v19 = v5;
      StartingOffset = v5;
      v18 = v38 + 1;
      v38 = v18;
      if ( v18 >= PartitionBuffer->PartitionCount )
        goto LABEL_69;
    }
    Status = -1073741670;
  }
LABEL_69:
  ExFreePoolWithTag(Buffer, 0);
  return Status;
}
