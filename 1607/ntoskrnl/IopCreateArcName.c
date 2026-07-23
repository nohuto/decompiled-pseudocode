/*
 * XREFs of IopCreateArcName @ 0x1405501C4
 * Callers:
 *     IoCreateArcName @ 0x14054FB40 (IoCreateArcName.c)
 *     IopCreateArcNamesDisk @ 0x1407985F0 (IopCreateArcNamesDisk.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     KeInitializeEvent @ 0x14002DA20 (KeInitializeEvent.c)
 *     IofCallDriver @ 0x14002DBE0 (IofCallDriver.c)
 *     KeResetEvent @ 0x14002E1B0 (KeResetEvent.c)
 *     KeWaitForSingleObject @ 0x14005C400 (KeWaitForSingleObject.c)
 *     ExAllocatePoolWithTagPriority @ 0x14007E290 (ExAllocatePoolWithTagPriority.c)
 *     RtlStringCchPrintfW @ 0x14007F58C (RtlStringCchPrintfW.c)
 *     IoBuildDeviceIoControlRequest @ 0x1400EAF4C (IoBuildDeviceIoControlRequest.c)
 *     IopCreateUnicodeFromAnsiBuffer @ 0x14013C354 (IopCreateUnicodeFromAnsiBuffer.c)
 *     RtlStringCchPrintfA @ 0x14013C380 (RtlStringCchPrintfA.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     PcVerifyPartitionTable @ 0x14023B670 (PcVerifyPartitionTable.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     RtlFreeAnsiString @ 0x140457BC0 (RtlFreeAnsiString.c)
 *     IoCreateSymbolicLink @ 0x1404D107C (IoCreateSymbolicLink.c)
 *     IoBuildSynchronousFsdRequest @ 0x14050E5A8 (IoBuildSynchronousFsdRequest.c)
 *     IopVerifyDiskSignature @ 0x14054FB48 (IopVerifyDiskSignature.c)
 *     VhdiVerifyBootDisk @ 0x1406E55F4 (VhdiVerifyBootDisk.c)
 */

__int64 __fastcall IopCreateArcName(struct _DEVICE_OBJECT *a1, unsigned int a2)
{
  PVOID *v2; // rax
  int *PoolWithTag; // r15
  IRP *v6; // rbx
  NTSTATUS Status; // ebx
  IRP *v8; // rbx
  ULONG v9; // ecx
  bool v10; // zf
  LARGE_INTEGER v11; // rax
  __m128i *v12; // rax
  __m128i *v13; // r14
  PIRP v14; // rax
  IRP *v15; // rbx
  __int32 v16; // r13d
  SIZE_T OutputBufferLength; // rdi
  SIZE_T j; // rdx
  IRP *v19; // rbx
  __int64 v20; // r8
  unsigned int v21; // r9d
  __int64 v22; // rcx
  const __m128i *v23; // rax
  __m128i v24; // xmm1
  __m128i v25; // xmm0
  __m128i v26; // xmm0
  int v27; // eax
  __m128i v28; // xmm1
  int v29; // r12d
  bool v30; // bl
  PVOID *v31; // rdi
  PVOID *v32; // r11
  char v33; // dl
  const wchar_t *v34; // r8
  const char *v35; // r12
  int v36; // edi
  unsigned __int64 v37; // rcx
  unsigned __int64 i; // rax
  unsigned __int8 *v39; // rcx
  __int64 v40; // r8
  int v41; // edx
  int v42; // eax
  PVOID OutputBuffer; // [rsp+20h] [rbp-E0h]
  __m128i *v44; // [rsp+50h] [rbp-B0h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+58h] [rbp-A8h] BYREF
  struct _KEVENT Object; // [rsp+68h] [rbp-98h] BYREF
  LARGE_INTEGER StartingOffset; // [rsp+80h] [rbp-80h] BYREF
  UNICODE_STRING SymbolicLinkName; // [rsp+88h] [rbp-78h] BYREF
  UNICODE_STRING DestinationString; // [rsp+98h] [rbp-68h] BYREF
  char v50[20]; // [rsp+A8h] [rbp-58h] BYREF
  ULONG Length; // [rsp+BCh] [rbp-44h]
  char v52[4]; // [rsp+C0h] [rbp-40h] BYREF
  unsigned int v53; // [rsp+C4h] [rbp-3Ch]
  char v54[64]; // [rsp+D0h] [rbp-30h] BYREF
  wchar_t pszDest[64]; // [rsp+110h] [rbp+10h] BYREF

  v2 = (PVOID *)IoArcTableListHead;
  PoolWithTag = 0LL;
  while ( v2 != &IoArcTableListHead )
  {
    if ( v2[8] == a1 )
      return 0LL;
    v2 = (PVOID *)*v2;
  }
  if ( a2 == -1 )
  {
    v6 = IoBuildDeviceIoControlRequest(0x2D1080u, a1, 0LL, 0, v52, 0xCu, 0, &Object, &IoStatusBlock);
    if ( !v6 )
      return (unsigned int)-1073741670;
    KeInitializeEvent(&Object, NotificationEvent, 0);
    Status = IofCallDriver(a1, v6);
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
    v53 = a2;
  }
  v8 = IoBuildDeviceIoControlRequest(0x70000u, a1, 0LL, 0, v50, 0x18u, 0, &Object, &IoStatusBlock);
  if ( !v8 )
    return (unsigned int)-1073741670;
  KeInitializeEvent(&Object, NotificationEvent, 0);
  Status = IofCallDriver(a1, v8);
  if ( Status == 259 )
  {
    KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
    Status = IoStatusBlock.Status;
  }
  if ( Status < 0 )
    return (unsigned int)Status;
  v9 = Length;
  if ( Length < 0x200 )
    v9 = 512;
  v10 = a1->DeviceType == 2;
  v11.QuadPart = 0LL;
  Length = v9;
  if ( v10 )
    v11.QuadPart = 0x8000LL;
  StartingOffset = v11;
  v12 = (__m128i *)(ViVerifierDriverAddedThunkListHead
                  ? ExAllocatePoolWithTagPriority(
                      NonPagedPoolNxCacheAligned,
                      v9,
                      0x20206F49u,
                      (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1))
                  : ExAllocatePoolWithTag(NonPagedPoolNxCacheAligned, v9, 0x20206F49u));
  v44 = v12;
  v13 = v12;
  if ( !v12 )
    return (unsigned int)-1073741670;
  v14 = IoBuildSynchronousFsdRequest(3u, a1, v12, Length, &StartingOffset, &Object, &IoStatusBlock);
  v15 = v14;
  if ( !v14 )
  {
    Status = -1073741670;
    goto LABEL_63;
  }
  v14->Tail.Overlay.CurrentStackLocation[-1].Flags |= 2u;
  KeInitializeEvent(&Object, NotificationEvent, 0);
  Status = IofCallDriver(a1, v15);
  if ( Status == 259 )
  {
    KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
    Status = IoStatusBlock.Status;
  }
  if ( Status >= 0 )
  {
    if ( a1->DeviceType == 2 )
    {
      v29 = 0;
      v37 = (unsigned __int64)Length >> 2;
      for ( i = 0LL; i < v37; ++i )
        v29 += v44->m128i_i32[i];
    }
    else
    {
      v16 = v13[27].m128i_i32[2];
      LODWORD(OutputBufferLength) = 4096;
      for ( j = 4096LL; ; j = OutputBufferLength )
      {
        PoolWithTag = (int *)ExAllocatePoolWithTag(NonPagedPoolNx, j, 0x6F426F49u);
        if ( !PoolWithTag )
        {
          Status = -1073741670;
          goto LABEL_61;
        }
        v19 = IoBuildDeviceIoControlRequest(
                0x70050u,
                a1,
                0LL,
                0,
                PoolWithTag,
                OutputBufferLength,
                0,
                &Object,
                &IoStatusBlock);
        if ( !v19 )
          break;
        KeResetEvent(&Object);
        Status = IofCallDriver(a1, v19);
        if ( Status == 259 )
        {
          KeWaitForSingleObject(&Object, Suspended, 0, 0, 0LL);
          Status = IoStatusBlock.Status;
        }
        if ( Status != -1073741789 )
          goto LABEL_32;
        ExFreePoolWithTag(PoolWithTag, 0);
        OutputBufferLength = (unsigned int)(2 * OutputBufferLength);
      }
      Status = -1073741670;
LABEL_32:
      if ( Status < 0 )
        goto LABEL_61;
      v22 = 32LL;
      v23 = v13;
      v24 = 0LL;
      do
      {
        v25 = _mm_loadu_si128(v23++);
        v26 = _mm_add_epi32(v25, v24);
        v24 = v26;
        --v22;
      }
      while ( v22 );
      v27 = *PoolWithTag;
      v28 = _mm_add_epi32(v26, _mm_srli_si128(v26, 8));
      v29 = _mm_cvtsi128_si32(_mm_add_epi32(v28, _mm_srli_si128(v28, 4)));
      if ( !*PoolWithTag && !v16 )
        PoolWithTag[2] = 0;
      v30 = 0;
      if ( v27 != 2 )
      {
        if ( !v27 && !PoolWithTag[1] && !PoolWithTag[2] )
          v30 = (unsigned int)PcVerifyPartitionTable(a1, 0, v20, v21) == -1073741637;
        goto LABEL_41;
      }
    }
    v30 = 1;
LABEL_41:
    v31 = (PVOID *)IoArcTableListHead;
    v32 = &IoArcTableListHead;
    while ( 1 )
    {
      if ( v31 == v32 )
      {
        Status = -1073741637;
        goto LABEL_60;
      }
      if ( !*((_BYTE *)v31 + 72) )
      {
        if ( v30 )
        {
          if ( *((_BYTE *)v31 + 36) || v29 + *((_DWORD *)v31 + 8) )
            goto LABEL_79;
        }
        else
        {
          v33 = IopVerifyDiskSignature(PoolWithTag, (__int64)v31, &StartingOffset);
          if ( !v33 )
            goto LABEL_79;
          if ( v31[7] )
          {
            v33 = VhdiVerifyBootDisk(a1);
            v32 = &IoArcTableListHead;
          }
          if ( !v33 || v29 + *((_DWORD *)v31 + 8) )
            goto LABEL_79;
        }
        if ( !v31[8] )
        {
          v31[8] = a1;
          v34 = L"\\Device\\CdRom%d";
          if ( a1->DeviceType != 2 )
            v34 = L"\\Device\\Harddisk%d\\Partition0";
          RtlStringCchPrintfW(pszDest, 0x40uLL, v34, v53);
          RtlInitUnicodeString(&DestinationString, pszDest);
          v35 = (const char *)v31[3];
          RtlStringCchPrintfA(v54, 0x40uLL, "\\ArcName\\%s", v35);
          Status = IopCreateUnicodeFromAnsiBuffer(&SymbolicLinkName, v54);
          if ( Status < 0 )
            goto LABEL_60;
          IoCreateSymbolicLink(&SymbolicLinkName, &DestinationString);
          RtlFreeAnsiString(&SymbolicLinkName);
          if ( a1->DeviceType != 2 )
          {
            if ( PoolWithTag[1] )
            {
              Status = 0;
              v36 = 1;
              do
              {
                LODWORD(OutputBuffer) = v36;
                RtlStringCchPrintfW(pszDest, 0x40uLL, L"\\Device\\Harddisk%d\\Partition%d", v53, OutputBuffer);
                RtlInitUnicodeString(&DestinationString, pszDest);
                RtlStringCchPrintfA(v54, 0x40uLL, "\\ArcName\\%spartition(%d)", v35, v36);
                if ( IopCreateUnicodeFromAnsiBuffer(&SymbolicLinkName, v54) >= 0 )
                {
                  IoCreateSymbolicLink(&SymbolicLinkName, &DestinationString);
                  RtlFreeAnsiString(&SymbolicLinkName);
                }
                ++v36;
              }
              while ( v36 - 1 < (unsigned int)PoolWithTag[1] );
            }
            goto LABEL_60;
          }
          if ( (unsigned int)InitializationPhase < 2 )
          {
            v39 = (unsigned __int8 *)v31[3];
            v40 = *(_QWORD *)(KeLoaderBlock_0 + 184) - (_QWORD)v39;
            do
            {
              v41 = v39[v40];
              v42 = *v39 - v41;
              if ( v42 )
                break;
              ++v39;
            }
            while ( v41 );
            v13 = v44;
            if ( !v42 )
              a1->Flags |= 0x100u;
LABEL_61:
            if ( PoolWithTag )
              ExFreePoolWithTag(PoolWithTag, 0);
            break;
          }
LABEL_60:
          v13 = v44;
          goto LABEL_61;
        }
      }
LABEL_79:
      v31 = (PVOID *)*v31;
    }
  }
LABEL_63:
  ExFreePoolWithTag(v13, 0);
  return (unsigned int)Status;
}
