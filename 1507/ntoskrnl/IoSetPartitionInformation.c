/*
 * XREFs of IoSetPartitionInformation @ 0x14055FBF8
 * Callers:
 *     IoSetPartitionInformationEx @ 0x14055FB64 (IoSetPartitionInformationEx.c)
 *     VerifierIoSetPartitionInformation @ 0x140742050 (VerifierIoSetPartitionInformation.c)
 * Callees:
 *     KeInitializeEvent @ 0x1400459F0 (KeInitializeEvent.c)
 *     KeResetEvent @ 0x1400484D0 (KeResetEvent.c)
 *     IofCallDriver @ 0x140048540 (IofCallDriver.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     HalExamineMBR @ 0x1401389D8 (HalExamineMBR.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     IoBuildSynchronousFsdRequest @ 0x14040DFC8 (IoBuildSynchronousFsdRequest.c)
 */

NTSTATUS __stdcall IoSetPartitionInformation(
        PDEVICE_OBJECT DeviceObject,
        ULONG SectorSize,
        ULONG PartitionNumber,
        ULONG PartitionType)
{
  __int64 v4; // rbx
  ULONG v5; // r12d
  struct _DEVICE_OBJECT *v6; // rsi
  char v7; // r14
  SIZE_T v8; // rdx
  __int64 v9; // rdi
  _WORD *PoolWithTag; // r13
  PIRP v11; // rax
  int Status; // esi
  _BYTE *v13; // r14
  _WORD *v14; // rcx
  unsigned int v15; // r15d
  unsigned __int8 v16; // al
  int v17; // r8d
  unsigned int v18; // edx
  char v19; // al
  PIRP v20; // rax
  char v22; // [rsp+48h] [rbp-29h]
  char v23; // [rsp+49h] [rbp-28h]
  ULONG v24; // [rsp+4Ch] [rbp-25h]
  PVOID Buffer; // [rsp+50h] [rbp-21h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+58h] [rbp-19h] BYREF
  struct _KEVENT Event; // [rsp+68h] [rbp-9h] BYREF
  char v31; // [rsp+F0h] [rbp+7Fh]

  v31 = PartitionType;
  v4 = 512LL;
  v23 = 0;
  v5 = 512;
  v6 = DeviceObject;
  v7 = 0;
  if ( SectorSize >= 0x200 )
    v5 = SectorSize;
  HalExamineMBR(DeviceObject, v5, 0x55u, &Buffer);
  if ( Buffer )
  {
    v7 = 1;
    v23 = 1;
    ExFreePoolWithTag(Buffer, 0);
  }
  else
  {
    v4 = 0LL;
  }
  Buffer = (PVOID)v4;
  v22 = 1;
  v8 = v5;
  v24 = 0;
  if ( v5 < 0x1000 )
    v8 = 4096LL;
  v9 = 0LL;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNxCacheAligned, v8, 0x62747346u);
  if ( !PoolWithTag )
    return -1073741670;
  KeInitializeEvent(&Event, NotificationEvent, 0);
  while ( 1 )
  {
    KeResetEvent(&Event);
    v11 = IoBuildSynchronousFsdRequest(3u, v6, PoolWithTag, v5, (PLARGE_INTEGER)&Buffer, &Event, &IoStatusBlock);
    if ( !v11 )
      break;
    v11->Tail.Overlay.CurrentStackLocation[-1].Flags |= 2u;
    Status = IofCallDriver(v6, v11);
    if ( Status == 259 )
    {
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      Status = IoStatusBlock.Status;
    }
    if ( Status < 0 )
      goto LABEL_34;
    if ( v7 )
    {
      if ( v4 == 512 )
        v4 = 0LL;
      Buffer = (PVOID)v4;
    }
    if ( PoolWithTag[255] != 0xAA55 )
      goto LABEL_35;
    v13 = PoolWithTag + 223;
    v14 = PoolWithTag + 223;
    v15 = 1;
    while ( 1 )
    {
      v16 = *((_BYTE *)v14 + 4);
      if ( v16 > 0xFu || (v17 = 32801, !_bittest(&v17, v16)) )
      {
        if ( ++v24 == PartitionNumber )
          break;
      }
      ++v15;
      v14 += 8;
      if ( v15 > 4 )
        goto LABEL_20;
    }
    *((_BYTE *)v14 + 4) = v31;
    KeResetEvent(&Event);
    v20 = IoBuildSynchronousFsdRequest(
            4u,
            DeviceObject,
            PoolWithTag,
            v5,
            (PLARGE_INTEGER)&Buffer,
            &Event,
            &IoStatusBlock);
    if ( v20 )
    {
      v20->Tail.Overlay.CurrentStackLocation[-1].Flags |= 0x12u;
      Status = IofCallDriver(DeviceObject, v20);
      if ( Status == 259 )
      {
        KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
        Status = IoStatusBlock.Status;
      }
    }
    else
    {
      Status = -1073741670;
    }
LABEL_20:
    if ( v15 <= 4 )
      goto LABEL_34;
    v18 = 1;
    while ( 1 )
    {
      v19 = v13[4];
      if ( v19 == 15 || v19 == 5 )
        break;
      ++v18;
      v13 += 16;
      if ( v18 > 4 )
        goto LABEL_31;
    }
    v4 = v9
       + SectorSize
       * (unsigned __int64)((unsigned __int8)v13[8]
                          + ((unsigned __int8)v13[9] << 8)
                          + ((unsigned __int8)v13[10] << 16)
                          + ((unsigned __int8)v13[11] << 24));
    Buffer = (PVOID)v4;
    if ( v22 )
      v9 = v4;
LABEL_31:
    if ( v18 > 4 )
    {
LABEL_35:
      Status = -1073741655;
      goto LABEL_34;
    }
    v22 = 0;
    if ( v24 >= PartitionNumber )
      goto LABEL_34;
    v6 = DeviceObject;
    v7 = v23;
  }
  Status = -1073741670;
LABEL_34:
  ExFreePoolWithTag(PoolWithTag, 0);
  return Status;
}
