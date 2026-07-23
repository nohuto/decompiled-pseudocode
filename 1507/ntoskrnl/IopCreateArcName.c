/*
 * XREFs of IopCreateArcName @ 0x14058ED40
 * Callers:
 *     IoCreateArcName @ 0x14058ED38 (IoCreateArcName.c)
 *     IopCreateArcNamesDisk @ 0x1407B6124 (IopCreateArcNamesDisk.c)
 * Callees:
 *     IoBuildDeviceIoControlRequest @ 0x140006EE4 (IoBuildDeviceIoControlRequest.c)
 *     RtlStringCchPrintfW @ 0x140008054 (RtlStringCchPrintfW.c)
 *     ExAllocatePoolWithTagPriority @ 0x140013F48 (ExAllocatePoolWithTagPriority.c)
 *     KeInitializeEvent @ 0x1400459F0 (KeInitializeEvent.c)
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     KeResetEvent @ 0x1400484D0 (KeResetEvent.c)
 *     IofCallDriver @ 0x140048540 (IofCallDriver.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     RtlInitAnsiString @ 0x1400F001C (RtlInitAnsiString.c)
 *     HalExamineMBR @ 0x1401389D8 (HalExamineMBR.c)
 *     RtlStringCchPrintfA @ 0x14015DBB0 (RtlStringCchPrintfA.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     IoBuildSynchronousFsdRequest @ 0x14040DFC8 (IoBuildSynchronousFsdRequest.c)
 *     RtlFreeAnsiString @ 0x140450CB8 (RtlFreeAnsiString.c)
 *     RtlAnsiStringToUnicodeString @ 0x1404FE988 (RtlAnsiStringToUnicodeString.c)
 *     IoCreateSymbolicLink @ 0x14058107C (IoCreateSymbolicLink.c)
 *     IoVerifyPartitionTable @ 0x14058E680 (IoVerifyPartitionTable.c)
 *     IopVerifyDiskSignature @ 0x14058F2AC (IopVerifyDiskSignature.c)
 *     VhdiVerifyBootDisk @ 0x14071EF58 (VhdiVerifyBootDisk.c)
 */

__int64 __fastcall IopCreateArcName(PDEVICE_OBJECT DeviceObject, int a2)
{
  PDEVICE_OBJECT v2; // rax
  int *PoolWithTag; // r15
  IRP *v5; // rbx
  NTSTATUS Status; // ebx
  IRP *v7; // rbx
  ULONG v8; // eax
  bool v9; // zf
  ULONG *v10; // rax
  ULONG *v11; // r13
  IRP *v12; // rbx
  SIZE_T OutputBufferLength; // rsi
  SIZE_T v14; // rdx
  IRP *v15; // rbx
  __int64 v16; // rcx
  __m128i v17; // xmm1
  const __m128i *v18; // rax
  __m128i v19; // xmm0
  __m128i v20; // xmm0
  int v21; // eax
  __m128i v22; // xmm1
  int v23; // r12d
  bool v24; // bl
  PVOID *v25; // rsi
  PVOID *v26; // r11
  char v28; // dl
  const wchar_t *v29; // r8
  const char *v30; // r12
  int v31; // edi
  unsigned __int64 v32; // rcx
  unsigned __int64 i; // rax
  unsigned __int8 *v34; // rcx
  __int64 v35; // r8
  int v36; // edx
  int v37; // eax
  PVOID OutputBuffer; // [rsp+20h] [rbp-E0h]
  LARGE_INTEGER StartingOffset; // [rsp+50h] [rbp-B0h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+58h] [rbp-A8h] BYREF
  struct _KEVENT Object; // [rsp+68h] [rbp-98h] BYREF
  UNICODE_STRING SymbolicLinkName; // [rsp+80h] [rbp-80h] BYREF
  _STRING Buffer; // [rsp+90h] [rbp-70h] BYREF
  UNICODE_STRING DestinationString; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v45[20]; // [rsp+B0h] [rbp-50h] BYREF
  ULONG NumberOfBytes; // [rsp+C4h] [rbp-3Ch]
  SIZE_T NumberOfBytes_4; // [rsp+C8h] [rbp-38h] BYREF
  CHAR SourceString[64]; // [rsp+E0h] [rbp-20h] BYREF
  wchar_t pszDest[64]; // [rsp+120h] [rbp+20h] BYREF

  v2 = (PDEVICE_OBJECT)IoArcTableListHead;
  PoolWithTag = 0LL;
  while ( v2 != (PDEVICE_OBJECT)&IoArcTableListHead )
  {
    if ( v2->DeviceExtension == DeviceObject )
      return 0LL;
    v2 = *(PDEVICE_OBJECT *)&v2->Type;
  }
  if ( a2 == -1 )
  {
    v5 = IoBuildDeviceIoControlRequest(
           0x2D1080u,
           DeviceObject,
           0LL,
           0,
           &NumberOfBytes_4,
           0xCu,
           0,
           &Object,
           &IoStatusBlock);
    if ( !v5 )
      return (unsigned int)-1073741670;
    KeInitializeEvent(&Object, NotificationEvent, 0);
    Status = IofCallDriver(DeviceObject, v5);
    if ( Status == 259 )
    {
      KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
      Status = IoStatusBlock.Status;
    }
    if ( Status < 0 )
      return (unsigned int)Status;
  }
  else
  {
    HIDWORD(NumberOfBytes_4) = a2;
  }
  v7 = IoBuildDeviceIoControlRequest(0x70000u, DeviceObject, 0LL, 0, v45, 0x18u, 0, &Object, &IoStatusBlock);
  if ( !v7 )
    return (unsigned int)-1073741670;
  KeInitializeEvent(&Object, NotificationEvent, 0);
  Status = IofCallDriver(DeviceObject, v7);
  if ( Status == 259 )
  {
    KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
    Status = IoStatusBlock.Status;
  }
  if ( Status < 0 )
    return (unsigned int)Status;
  v8 = NumberOfBytes;
  if ( NumberOfBytes < 0x200 )
    v8 = 512;
  v9 = DeviceObject->DeviceType == 2;
  NumberOfBytes = v8;
  if ( v9 )
  {
    StartingOffset.QuadPart = 0x8000LL;
  }
  else
  {
    StartingOffset.QuadPart = 0LL;
    HalExamineMBR(DeviceObject, v8, 0x55u, (PVOID *)&Buffer);
    if ( *(_QWORD *)&Buffer.Length )
    {
      StartingOffset.QuadPart = NumberOfBytes;
      ExFreePoolWithTag(*(PVOID *)&Buffer.Length, 0);
    }
    v8 = NumberOfBytes;
  }
  v10 = (ULONG *)(ViVerifierDriverAddedThunkListHead
                ? ExAllocatePoolWithTagPriority(
                    NonPagedPoolNxCacheAligned,
                    v8,
                    0x20206F49u,
                    (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1))
                : ExAllocatePoolWithTag(NonPagedPoolNxCacheAligned, v8, 0x20206F49u));
  v11 = v10;
  if ( !v10 )
    return (unsigned int)-1073741670;
  v12 = IoBuildSynchronousFsdRequest(3u, DeviceObject, v10, NumberOfBytes, &StartingOffset, &Object, &IoStatusBlock);
  if ( !v12 )
  {
    Status = -1073741670;
    goto LABEL_67;
  }
  KeInitializeEvent(&Object, NotificationEvent, 0);
  Status = IofCallDriver(DeviceObject, v12);
  if ( Status == 259 )
  {
    KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
    Status = IoStatusBlock.Status;
  }
  if ( Status >= 0 )
  {
    if ( DeviceObject->DeviceType == 2 )
    {
      v23 = 0;
      v32 = (unsigned __int64)NumberOfBytes >> 2;
      for ( i = 0LL; i < v32; ++i )
        v23 += v11[i];
    }
    else
    {
      LODWORD(OutputBufferLength) = 4096;
      v14 = 4096LL;
      StartingOffset.LowPart = v11[110];
      while ( 1 )
      {
        PoolWithTag = (int *)ExAllocatePoolWithTag(NonPagedPoolNx, v14, 0x6F426F49u);
        if ( !PoolWithTag )
        {
          Status = -1073741670;
          goto LABEL_65;
        }
        v15 = IoBuildDeviceIoControlRequest(
                0x70050u,
                DeviceObject,
                0LL,
                0,
                PoolWithTag,
                OutputBufferLength,
                0,
                &Object,
                &IoStatusBlock);
        if ( !v15 )
          break;
        KeResetEvent(&Object);
        Status = IofCallDriver(DeviceObject, v15);
        if ( Status == 259 )
        {
          KeWaitForSingleObject(&Object, Suspended, 0, 0, 0LL);
          Status = IoStatusBlock.Status;
        }
        if ( Status != -1073741789 )
          goto LABEL_34;
        ExFreePoolWithTag(PoolWithTag, 0);
        OutputBufferLength = (unsigned int)(2 * OutputBufferLength);
        v14 = OutputBufferLength;
      }
      Status = -1073741670;
LABEL_34:
      if ( Status < 0 )
        goto LABEL_65;
      v16 = 32LL;
      v17 = 0LL;
      v18 = (const __m128i *)v11;
      do
      {
        v19 = _mm_loadu_si128(v18++);
        v20 = _mm_add_epi32(v19, v17);
        v17 = v20;
        --v16;
      }
      while ( v16 );
      v21 = *PoolWithTag;
      v22 = _mm_add_epi32(v20, _mm_srli_si128(v20, 8));
      v23 = _mm_cvtsi128_si32(_mm_add_epi32(v22, _mm_srli_si128(v22, 4)));
      if ( !*PoolWithTag && !StartingOffset.LowPart )
        PoolWithTag[2] = 0;
      v24 = 0;
      if ( v21 != 2 )
      {
        if ( !v21 && !PoolWithTag[1] && !PoolWithTag[2] )
          v24 = IoVerifyPartitionTable(DeviceObject, 0) == -1073741637;
        goto LABEL_45;
      }
    }
    v24 = 1;
LABEL_45:
    v25 = (PVOID *)IoArcTableListHead;
    v26 = &IoArcTableListHead;
    while ( 1 )
    {
      if ( v25 == v26 )
      {
        Status = -1073741637;
        goto LABEL_65;
      }
      if ( !*((_BYTE *)v25 + 72) )
      {
        if ( v24 )
        {
          if ( *((_BYTE *)v25 + 36) || v23 + *((_DWORD *)v25 + 8) )
            goto LABEL_47;
        }
        else
        {
          v28 = IopVerifyDiskSignature(PoolWithTag, v25, &StartingOffset);
          if ( !v28 )
            goto LABEL_47;
          if ( v25[7] )
          {
            v28 = VhdiVerifyBootDisk(DeviceObject);
            v26 = &IoArcTableListHead;
          }
          if ( !v28 || v23 + *((_DWORD *)v25 + 8) )
            goto LABEL_47;
        }
        if ( !v25[8] )
        {
          v25[8] = DeviceObject;
          v29 = L"\\Device\\CdRom%d";
          if ( DeviceObject->DeviceType != 2 )
            v29 = L"\\Device\\Harddisk%d\\Partition0";
          RtlStringCchPrintfW(pszDest, 0x40uLL, v29, HIDWORD(NumberOfBytes_4));
          RtlInitUnicodeString(&DestinationString, pszDest);
          v30 = (const char *)v25[3];
          RtlStringCchPrintfA(SourceString, 0x40uLL, "\\ArcName\\%s", v30);
          RtlInitAnsiString(&Buffer, SourceString);
          Status = RtlAnsiStringToUnicodeString(&SymbolicLinkName, &Buffer, 1u);
          if ( Status >= 0 )
          {
            IoCreateSymbolicLink(&SymbolicLinkName, &DestinationString);
            RtlFreeAnsiString(&SymbolicLinkName);
            if ( DeviceObject->DeviceType == 2 )
            {
              if ( (unsigned int)InitializationPhase < 2 )
              {
                v34 = (unsigned __int8 *)v25[3];
                v35 = *(_QWORD *)(KeLoaderBlock_0 + 184) - (_QWORD)v34;
                do
                {
                  v36 = v34[v35];
                  v37 = *v34 - v36;
                  if ( v37 )
                    break;
                  ++v34;
                }
                while ( v36 );
                if ( !v37 )
                  DeviceObject->Flags |= 0x100u;
              }
            }
            else if ( PoolWithTag[1] )
            {
              Status = 0;
              v31 = 1;
              do
              {
                LODWORD(OutputBuffer) = v31;
                RtlStringCchPrintfW(
                  pszDest,
                  0x40uLL,
                  L"\\Device\\Harddisk%d\\Partition%d",
                  HIDWORD(NumberOfBytes_4),
                  OutputBuffer);
                RtlInitUnicodeString(&DestinationString, pszDest);
                RtlStringCchPrintfA(SourceString, 0x40uLL, "\\ArcName\\%spartition(%d)", v30, v31);
                RtlInitAnsiString(&Buffer, SourceString);
                if ( RtlAnsiStringToUnicodeString(&SymbolicLinkName, &Buffer, 1u) >= 0 )
                {
                  IoCreateSymbolicLink(&SymbolicLinkName, &DestinationString);
                  RtlFreeAnsiString(&SymbolicLinkName);
                }
                ++v31;
              }
              while ( v31 - 1 < (unsigned int)PoolWithTag[1] );
            }
          }
LABEL_65:
          if ( PoolWithTag )
            ExFreePoolWithTag(PoolWithTag, 0);
          break;
        }
      }
LABEL_47:
      v25 = (PVOID *)*v25;
    }
  }
LABEL_67:
  ExFreePoolWithTag(v11, 0);
  return (unsigned int)Status;
}
