/*
 * XREFs of IoReadPartitionTable @ 0x140562AE0
 * Callers:
 *     FstubReadPartitionTableMBR @ 0x1405629C4 (FstubReadPartitionTableMBR.c)
 *     VerifierIoReadPartitionTable @ 0x140741FC0 (VerifierIoReadPartitionTable.c)
 * Callees:
 *     KeInitializeEvent @ 0x1400459F0 (KeInitializeEvent.c)
 *     IofCallDriver @ 0x140048540 (IofCallDriver.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     HalExamineMBR @ 0x1401389D8 (HalExamineMBR.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     IoBuildSynchronousFsdRequest @ 0x14040DFC8 (IoBuildSynchronousFsdRequest.c)
 *     HalpIsValidPartitionEntry @ 0x14056303C (HalpIsValidPartitionEntry.c)
 *     HalpGetFullGeometry @ 0x1405630A4 (HalpGetFullGeometry.c)
 */

NTSTATUS __stdcall IoReadPartitionTable(
        PDEVICE_OBJECT DeviceObject,
        ULONG SectorSize,
        BOOLEAN ReturnRecognizedPartitions,
        struct _DRIVE_LAYOUT_INFORMATION **PartitionBuffer)
{
  int v7; // r15d
  struct _DRIVE_LAYOUT_INFORMATION *PoolWithTag; // rax
  ULONG v9; // r12d
  LARGE_INTEGER v10; // rbx
  NTSTATUS FullGeometry; // edi
  SIZE_T v12; // rdx
  int v13; // r13d
  LARGE_INTEGER v14; // rdi
  _BYTE *v15; // r14
  ULONG v16; // r9d
  struct _DEVICE_OBJECT *v17; // r12
  PIRP v18; // rax
  int Status; // r12d
  char v20; // r8
  int v21; // edx
  int v22; // r15d
  __int64 v23; // rax
  _BYTE *v24; // r14
  __int64 v25; // r15
  unsigned __int8 v26; // r11
  struct _DRIVE_LAYOUT_INFORMATION *v27; // r9
  char v28; // al
  LARGE_INTEGER v29; // rdx
  __int64 v30; // r8
  LARGE_INTEGER v31; // rax
  char v32; // al
  _BYTE *v33; // rdx
  char v34; // al
  char v35; // cl
  NTSTATUS result; // eax
  int v37; // ecx
  int v38; // eax
  __int64 v39; // rdx
  int v40; // ecx
  struct _DRIVE_LAYOUT_INFORMATION *v41; // rax
  size_t LowPart; // rcx
  unsigned __int64 v43; // rdx
  struct _DRIVE_LAYOUT_INFORMATION *v44; // rcx
  char v45; // [rsp+40h] [rbp-99h]
  char v46; // [rsp+41h] [rbp-98h]
  char v47; // [rsp+42h] [rbp-97h]
  char v48; // [rsp+43h] [rbp-96h]
  char v49; // [rsp+45h] [rbp-94h]
  int v51; // [rsp+48h] [rbp-91h]
  LARGE_INTEGER Timeout; // [rsp+50h] [rbp-89h] BYREF
  unsigned __int64 v53; // [rsp+58h] [rbp-81h]
  __int64 v54; // [rsp+60h] [rbp-79h]
  int v55; // [rsp+68h] [rbp-71h]
  ULONG v56; // [rsp+6Ch] [rbp-6Dh]
  PVOID Buffer; // [rsp+70h] [rbp-69h] BYREF
  _BYTE *v58; // [rsp+78h] [rbp-61h]
  ULONG v59; // [rsp+80h] [rbp-59h]
  size_t Size; // [rsp+88h] [rbp-51h]
  struct _DRIVE_LAYOUT_INFORMATION *v61; // [rsp+90h] [rbp-49h]
  _BYTE *v62; // [rsp+98h] [rbp-41h]
  PDEVICE_OBJECT DeviceObjecta; // [rsp+A0h] [rbp-39h]
  __int64 v64; // [rsp+A8h] [rbp-31h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+B0h] [rbp-29h] BYREF
  struct _KEVENT Event; // [rsp+C0h] [rbp-19h] BYREF
  LARGE_INTEGER v67; // [rsp+D8h] [rbp-1h] BYREF
  int v68; // [rsp+E0h] [rbp+7h]
  unsigned int v69; // [rsp+ECh] [rbp+13h]

  DeviceObjecta = DeviceObject;
  v56 = SectorSize;
  Size = 2048LL;
  v45 = 1;
  v48 = 0;
  v47 = 0;
  v7 = -1;
  PoolWithTag = (struct _DRIVE_LAYOUT_INFORMATION *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x800uLL, 0x62747346u);
  *PartitionBuffer = PoolWithTag;
  if ( !PoolWithTag )
    return -1073741670;
  v9 = 512;
  if ( SectorSize >= 0x200 )
    v9 = SectorSize;
  v59 = v9;
  HalExamineMBR(DeviceObject, v9, 0x55u, &Buffer);
  if ( Buffer )
  {
    v48 = 1;
    ExFreePoolWithTag(Buffer, 0);
    v10.QuadPart = 512LL;
  }
  else
  {
    v10.QuadPart = 0LL;
  }
  Timeout = v10;
  FullGeometry = HalpGetFullGeometry(DeviceObject, &v67);
  if ( FullGeometry < 0 )
  {
    ExFreePoolWithTag(*PartitionBuffer, 0);
    result = FullGeometry;
    *PartitionBuffer = 0LL;
    return result;
  }
  v12 = v9;
  v13 = -1;
  Buffer = (PVOID)(v53 + (v53 >> 1));
  v46 = 1;
  if ( v9 < 0x1000 )
    v12 = 4096LL;
  v14.QuadPart = 0LL;
  v58 = ExAllocatePoolWithTag(NonPagedPoolNxCacheAligned, v12, 0x62747346u);
  v15 = v58;
  if ( !v58 )
  {
    ExFreePoolWithTag(*PartitionBuffer, 0);
    return -1073741670;
  }
  v54 = -1LL;
  while ( 1 )
  {
    KeInitializeEvent(&Event, NotificationEvent, 0);
    memset(v15, 0, v9);
    v16 = v9;
    v17 = DeviceObjecta;
    v18 = IoBuildSynchronousFsdRequest(3u, DeviceObjecta, v15, v16, &Timeout, &Event, &IoStatusBlock);
    if ( !v18 )
    {
      Status = -1073741670;
      goto LABEL_45;
    }
    v18->Tail.Overlay.CurrentStackLocation[-1].Flags |= 2u;
    Status = IofCallDriver(v17, v18);
    if ( Status == 259 )
    {
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      Status = IoStatusBlock.Status;
    }
    if ( Status == -2147483614 )
      Status = 0;
    if ( Status < 0 )
      goto LABEL_45;
    if ( v48 && v10.QuadPart == 512 )
      v10.QuadPart = 0LL;
    if ( *((_WORD *)v15 + 255) != 0xAA55 )
      goto LABEL_45;
    v20 = 1;
    v47 = 1;
    if ( v46 == 1 )
    {
      v21 = v68;
      if ( v68 == 11 && ((*v15 + 23) & 0xFD) == 0 && *(_QWORD *)(v15 + 3) == *(_QWORD *)"NTFS    " )
        goto LABEL_92;
    }
    if ( !v10.QuadPart )
      (*PartitionBuffer)->Signature = *((_DWORD *)v15 + 110);
    v22 = v7 + 1;
    v49 = 1;
    v23 = v22;
    v24 = v15 + 446;
    v51 = v22;
    v25 = v54;
    v62 = v24;
    v55 = 0;
    v64 = v23;
    while ( 1 )
    {
      if ( v24[4] == 0xEE )
      {
        v39 = *((unsigned int *)v24 + 2);
        if ( v39 + (unsigned __int64)*((unsigned int *)v24 + 3) > v53 )
          *((_DWORD *)v24 + 3) = v53 - v39;
      }
      if ( !(unsigned __int8)HalpIsValidPartitionEntry(v24, v53, Buffer) && !v64 )
        break;
      if ( (v26 == 5 || v26 == 15) && ++v55 != 1 )
        break;
      if ( v45
        && ((unsigned __int8)v24[8]
          + ((unsigned __int8)v24[9] << 8)
          + ((unsigned __int8)v24[10] << 16)
          + ((unsigned __int8)v24[11] << 24)
         || (unsigned __int8)v24[12]
          + ((unsigned __int8)v24[13] << 8)
          + ((unsigned __int8)v24[14] << 16)
          + ((unsigned __int8)v24[15] << 24)) )
      {
        v45 = 0;
      }
      if ( !ReturnRecognizedPartitions || v26 > 0xFu || (v40 = 32801, !_bittest(&v40, v26)) )
      {
        ++v13;
        ++v54;
        ++v25;
        if ( 32LL * v13 + 40 > (unsigned __int64)(unsigned int)Size )
        {
          Timeout.LowPart = 2 * Size;
          v41 = (struct _DRIVE_LAYOUT_INFORMATION *)ExAllocatePoolWithTag(
                                                      NonPagedPoolNx,
                                                      (unsigned int)(2 * Size),
                                                      0x62747346u);
          v61 = v41;
          if ( !v41 )
          {
            --v13;
            Status = -1073741670;
            --v54;
LABEL_37:
            v32 = 1;
            goto LABEL_38;
          }
          memmove(v41, *PartitionBuffer, (unsigned int)Size);
          ExFreePoolWithTag(*PartitionBuffer, 0);
          LowPart = Timeout.LowPart;
          *PartitionBuffer = v61;
          Size = LowPart;
        }
        v27 = *PartitionBuffer;
        v27->PartitionEntry[v25].PartitionType = v24[4];
        v27->PartitionEntry[v25].RewritePartition = 0;
        if ( v24[4] )
        {
          v27->PartitionEntry[v25].BootIndicator = *v24 >> 7;
          v28 = v24[4];
          if ( v28 == 5 || v28 == 15 )
          {
            v27->PartitionEntry[v25].RecognizedPartition = 0;
            v29 = v14;
          }
          else
          {
            v27->PartitionEntry[v25].RecognizedPartition = 1;
            v29 = v10;
          }
          v30 = v56;
          v31.QuadPart = v29.QuadPart
                       + v56
                       * (unsigned __int64)(((unsigned __int8)v24[9] << 8)
                                          + ((unsigned __int8)v24[10] << 16)
                                          + ((unsigned __int8)v24[11] << 24)
                                          + (unsigned int)(unsigned __int8)v24[8]);
          v27->PartitionEntry[v25].StartingOffset = v31;
          v27->PartitionEntry[v25].HiddenSectors = (v31.QuadPart - v29.QuadPart) / v30;
          v27->PartitionEntry[v25].PartitionLength.QuadPart = v30
                                                            * ((unsigned __int8)v24[12]
                                                             + ((unsigned __int8)v24[13] << 8)
                                                             + ((unsigned __int8)v24[14] << 16)
                                                             + ((unsigned __int8)v24[15] << 24));
        }
        else
        {
          *(_WORD *)&v27->PartitionEntry[v25].BootIndicator = 0;
          v27->PartitionEntry[v25].StartingOffset.QuadPart = 0LL;
          v27->PartitionEntry[v25].PartitionLength.QuadPart = 0LL;
          v27->PartitionEntry[v25].HiddenSectors = 0;
        }
      }
      v24 += 16;
      if ( ++v49 > 4 )
        goto LABEL_37;
    }
    v32 = 0;
LABEL_38:
    if ( Status < 0 )
      break;
    if ( !v32 )
    {
      v7 = v51 - 1;
      goto LABEL_90;
    }
    v33 = v62;
    v10.QuadPart = 0LL;
    Timeout.QuadPart = 0LL;
    v34 = 1;
    while ( 1 )
    {
      v35 = v33[4];
      if ( v35 == 5 || v35 == 15 )
        break;
      ++v34;
      v33 += 16;
      if ( v34 > 4 )
        goto LABEL_44;
    }
    v37 = (unsigned __int8)v33[15];
    v38 = (unsigned __int8)v33[14];
    v10.QuadPart = v14.QuadPart
                 + v56
                 * (unsigned __int64)((unsigned __int8)v33[8]
                                    + ((unsigned __int8)v33[9] << 8)
                                    + ((unsigned __int8)v33[10] << 16)
                                    + ((unsigned __int8)v33[11] << 24));
    Timeout = v10;
    if ( v46 )
      v14 = v10;
    Buffer = (PVOID)(((unsigned __int8)v33[13] << 8) + (v38 << 16) + (v37 << 24) + (unsigned int)(unsigned __int8)v33[12]);
LABEL_44:
    v15 = v58;
    v7 = v51;
    v46 = 0;
    if ( !v10.QuadPart )
      goto LABEL_45;
    v9 = v59;
  }
  v7 = v51;
LABEL_90:
  v15 = v58;
LABEL_45:
  v21 = v68;
  if ( v68 != 11 )
    goto LABEL_46;
  v20 = v47;
LABEL_92:
  if ( !v7 )
  {
    if ( v20 != 1 || v45 != 1 || ((*v15 + 23) & 0xFD) != 0 )
      goto LABEL_47;
    v7 = -1;
  }
LABEL_46:
  if ( v7 == -1 )
  {
    if ( v47 == 1 || v21 == 11 )
    {
      v43 = v53;
      if ( v53 )
      {
        v44 = *PartitionBuffer;
        v13 = 0;
        *(_DWORD *)&v44->PartitionEntry[0].PartitionType = 65540;
        v44->PartitionEntry[0].HiddenSectors = 0;
        v44->PartitionEntry[0].StartingOffset.QuadPart = 0LL;
        v44->PartitionEntry[0].PartitionLength.QuadPart = v43 * v69;
        (*PartitionBuffer)->Signature = 1;
      }
    }
    else
    {
      v13 = -1;
    }
  }
LABEL_47:
  (*PartitionBuffer)->PartitionCount = v13 + 1;
  if ( v13 == -1 )
    (*PartitionBuffer)->Signature = 0;
  ExFreePoolWithTag(v15, 0);
  if ( Status < 0 )
  {
    ExFreePoolWithTag(*PartitionBuffer, 0);
    *PartitionBuffer = 0LL;
  }
  return Status;
}
