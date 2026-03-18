/*
 * XREFs of IopCreateArcName @ 0x140522480
 * Callers:
 *     IoCreateArcName @ 0x140522478 (IoCreateArcName.c)
 *     IopCreateArcNamesDisk @ 0x140750D8C (IopCreateArcNamesDisk.c)
 * Callees:
 *     RtlStringCchPrintfW @ 0x140003C28 (RtlStringCchPrintfW.c)
 *     ExAllocatePoolWithTagPriority @ 0x140041DC0 (ExAllocatePoolWithTagPriority.c)
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     IoBuildDeviceIoControlRequest @ 0x140073DD0 (IoBuildDeviceIoControlRequest.c)
 *     IofCallDriver @ 0x14007E4C0 (IofCallDriver.c)
 *     KeInitializeEvent @ 0x14007E540 (KeInitializeEvent.c)
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 *     KeResetEvent @ 0x14008E310 (KeResetEvent.c)
 *     HalExamineMBR @ 0x140105C4C (HalExamineMBR.c)
 *     IopCreateUnicodeFromAnsiBuffer @ 0x140133CE4 (IopCreateUnicodeFromAnsiBuffer.c)
 *     RtlStringCchPrintfA @ 0x140133D10 (RtlStringCchPrintfA.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     RtlFreeAnsiString @ 0x140445624 (RtlFreeAnsiString.c)
 *     IoBuildSynchronousFsdRequest @ 0x1404A9D3C (IoBuildSynchronousFsdRequest.c)
 *     IoCreateSymbolicLink @ 0x1404C1FE0 (IoCreateSymbolicLink.c)
 *     IoVerifyPartitionTable @ 0x14051AB28 (IoVerifyPartitionTable.c)
 *     IopVerifyDiskSignature @ 0x1405229E8 (IopVerifyDiskSignature.c)
 *     VhdiVerifyBootDisk @ 0x14069E8FC (VhdiVerifyBootDisk.c)
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
  __m128i *v10; // rax
  __m128i *v11; // r14
  IRP *v12; // rbx
  __int32 v13; // r13d
  SIZE_T OutputBufferLength; // rdi
  SIZE_T j; // rdx
  IRP *v16; // rbx
  __int64 v17; // rcx
  const __m128i *v18; // rax
  __m128i v19; // xmm1
  __m128i v20; // xmm0
  __m128i v21; // xmm0
  int v22; // eax
  __m128i v23; // xmm1
  int v24; // r12d
  bool v25; // bl
  PVOID *v26; // rdi
  PVOID *v27; // r11
  char v28; // dl
  const wchar_t *v29; // r8
  const char *v30; // r12
  int v31; // edi
  unsigned __int64 v33; // rcx
  unsigned __int64 i; // rax
  unsigned __int8 *v35; // rcx
  __int64 v36; // r8
  int v37; // edx
  int v38; // eax
  PVOID OutputBuffer; // [rsp+20h] [rbp-E0h]
  PVOID Buffer; // [rsp+50h] [rbp-B0h] BYREF
  LARGE_INTEGER StartingOffset; // [rsp+58h] [rbp-A8h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+60h] [rbp-A0h] BYREF
  struct _KEVENT Object; // [rsp+70h] [rbp-90h] BYREF
  UNICODE_STRING SymbolicLinkName; // [rsp+88h] [rbp-78h] BYREF
  UNICODE_STRING DestinationString; // [rsp+98h] [rbp-68h] BYREF
  char v46[20]; // [rsp+A8h] [rbp-58h] BYREF
  ULONG NumberOfBytes; // [rsp+BCh] [rbp-44h]
  SIZE_T NumberOfBytes_4; // [rsp+C0h] [rbp-40h] BYREF
  char v49[64]; // [rsp+D0h] [rbp-30h] BYREF
  wchar_t pszDest[64]; // [rsp+110h] [rbp+10h] BYREF

  v2 = (PDEVICE_OBJECT)IoArcTableListHead;
  PoolWithTag = 0LL;
  while ( 1 )
  {
    if ( v2 == (PDEVICE_OBJECT)&IoArcTableListHead )
    {
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
      v7 = IoBuildDeviceIoControlRequest(0x70000u, DeviceObject, 0LL, 0, v46, 0x18u, 0, &Object, &IoStatusBlock);
      if ( v7 )
      {
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
          HalExamineMBR(DeviceObject, v8, 0x55u, &Buffer);
          if ( Buffer )
          {
            StartingOffset.QuadPart = NumberOfBytes;
            ExFreePoolWithTag(Buffer, 0);
          }
          v8 = NumberOfBytes;
        }
        v10 = (__m128i *)(ViVerifierDriverAddedThunkListHead
                        ? ExAllocatePoolWithTagPriority(
                            NonPagedPoolNxCacheAligned,
                            v8,
                            0x20206F49u,
                            (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1))
                        : ExAllocatePoolWithTag(NonPagedPoolNxCacheAligned, v8, 0x20206F49u));
        Buffer = v10;
        v11 = v10;
        if ( v10 )
        {
          v12 = IoBuildSynchronousFsdRequest(
                  3u,
                  DeviceObject,
                  v10,
                  NumberOfBytes,
                  &StartingOffset,
                  &Object,
                  &IoStatusBlock);
          if ( !v12 )
          {
            Status = -1073741670;
            goto LABEL_68;
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
              v24 = 0;
              v33 = (unsigned __int64)NumberOfBytes >> 2;
              for ( i = 0LL; i < v33; ++i )
                v24 += *((_DWORD *)Buffer + i);
            }
            else
            {
              v13 = v11[27].m128i_i32[2];
              LODWORD(OutputBufferLength) = 4096;
              for ( j = 4096LL; ; j = OutputBufferLength )
              {
                PoolWithTag = (int *)ExAllocatePoolWithTag(NonPagedPoolNx, j, 0x6F426F49u);
                if ( !PoolWithTag )
                {
                  Status = -1073741670;
                  goto LABEL_66;
                }
                v16 = IoBuildDeviceIoControlRequest(
                        0x70050u,
                        DeviceObject,
                        0LL,
                        0,
                        PoolWithTag,
                        OutputBufferLength,
                        0,
                        &Object,
                        &IoStatusBlock);
                if ( !v16 )
                  break;
                KeResetEvent(&Object);
                Status = IofCallDriver(DeviceObject, v16);
                if ( Status == 259 )
                {
                  KeWaitForSingleObject(&Object, Suspended, 0, 0, 0LL);
                  Status = IoStatusBlock.Status;
                }
                if ( Status != -1073741789 )
                  goto LABEL_34;
                ExFreePoolWithTag(PoolWithTag, 0);
                OutputBufferLength = (unsigned int)(2 * OutputBufferLength);
              }
              Status = -1073741670;
LABEL_34:
              if ( Status < 0 )
                goto LABEL_66;
              v17 = 32LL;
              v18 = v11;
              v19 = 0LL;
              do
              {
                v20 = _mm_loadu_si128(v18++);
                v21 = _mm_add_epi32(v20, v19);
                v19 = v21;
                --v17;
              }
              while ( v17 );
              v22 = *PoolWithTag;
              v23 = _mm_add_epi32(v21, _mm_srli_si128(v21, 8));
              v24 = _mm_cvtsi128_si32(_mm_add_epi32(v23, _mm_srli_si128(v23, 4)));
              if ( !*PoolWithTag && !v13 )
                PoolWithTag[2] = 0;
              v25 = 0;
              if ( v22 != 2 )
              {
                if ( !v22 && !PoolWithTag[1] && !PoolWithTag[2] )
                  v25 = IoVerifyPartitionTable(DeviceObject, 0) == -1073741637;
                goto LABEL_43;
              }
            }
            v25 = 1;
LABEL_43:
            v26 = (PVOID *)IoArcTableListHead;
            v27 = &IoArcTableListHead;
            while ( 1 )
            {
              if ( v26 == v27 )
              {
                Status = -1073741637;
                goto LABEL_65;
              }
              if ( !*((_BYTE *)v26 + 72) )
              {
                if ( v25 )
                {
                  if ( *((_BYTE *)v26 + 36) || v24 + *((_DWORD *)v26 + 8) )
                    goto LABEL_48;
                }
                else
                {
                  v28 = IopVerifyDiskSignature(PoolWithTag, v26, &StartingOffset);
                  if ( !v28 )
                    goto LABEL_48;
                  if ( v26[7] )
                  {
                    v28 = VhdiVerifyBootDisk(DeviceObject);
                    v27 = &IoArcTableListHead;
                  }
                  if ( !v28 || v24 + *((_DWORD *)v26 + 8) )
                    goto LABEL_48;
                }
                if ( !v26[8] )
                {
                  v26[8] = DeviceObject;
                  v29 = L"\\Device\\CdRom%d";
                  if ( DeviceObject->DeviceType != 2 )
                    v29 = L"\\Device\\Harddisk%d\\Partition0";
                  RtlStringCchPrintfW(pszDest, 0x40uLL, v29, HIDWORD(NumberOfBytes_4));
                  RtlInitUnicodeString(&DestinationString, pszDest);
                  v30 = (const char *)v26[3];
                  RtlStringCchPrintfA(v49, 0x40uLL, "\\ArcName\\%s", v30);
                  Status = IopCreateUnicodeFromAnsiBuffer(&SymbolicLinkName, v49);
                  if ( Status < 0 )
                    goto LABEL_65;
                  IoCreateSymbolicLink(&SymbolicLinkName, &DestinationString);
                  RtlFreeAnsiString(&SymbolicLinkName);
                  if ( DeviceObject->DeviceType != 2 )
                  {
                    if ( PoolWithTag[1] )
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
                        RtlStringCchPrintfA(v49, 0x40uLL, "\\ArcName\\%spartition(%d)", v30, v31);
                        if ( IopCreateUnicodeFromAnsiBuffer(&SymbolicLinkName, v49) >= 0 )
                        {
                          IoCreateSymbolicLink(&SymbolicLinkName, &DestinationString);
                          RtlFreeAnsiString(&SymbolicLinkName);
                        }
                        ++v31;
                      }
                      while ( v31 - 1 < (unsigned int)PoolWithTag[1] );
                    }
                    goto LABEL_65;
                  }
                  if ( (unsigned int)InitializationPhase < 2 )
                  {
                    v35 = (unsigned __int8 *)v26[3];
                    v36 = *(_QWORD *)(KeLoaderBlock_0 + 184) - (_QWORD)v35;
                    do
                    {
                      v37 = v35[v36];
                      v38 = *v35 - v37;
                      if ( v38 )
                        break;
                      ++v35;
                    }
                    while ( v37 );
                    v11 = (__m128i *)Buffer;
                    if ( !v38 )
                      DeviceObject->Flags |= 0x100u;
LABEL_66:
                    if ( PoolWithTag )
                      ExFreePoolWithTag(PoolWithTag, 0);
                    break;
                  }
LABEL_65:
                  v11 = (__m128i *)Buffer;
                  goto LABEL_66;
                }
              }
LABEL_48:
              v26 = (PVOID *)*v26;
            }
          }
LABEL_68:
          ExFreePoolWithTag(v11, 0);
          return (unsigned int)Status;
        }
      }
      return (unsigned int)-1073741670;
    }
    if ( v2->DeviceExtension == DeviceObject )
      return 0LL;
    v2 = *(PDEVICE_OBJECT *)&v2->Type;
  }
}
