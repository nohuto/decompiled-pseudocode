/*
 * XREFs of IopCreateArcNamesCd @ 0x1407B5E18
 * Callers:
 *     IopCreateArcNames @ 0x1407B5FE8 (IopCreateArcNames.c)
 * Callees:
 *     IoBuildDeviceIoControlRequest @ 0x140006EE4 (IoBuildDeviceIoControlRequest.c)
 *     ExAllocatePoolWithTagPriority @ 0x140013F48 (ExAllocatePoolWithTagPriority.c)
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     IofCallDriver @ 0x140048540 (IofCallDriver.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     RtlInitAnsiString @ 0x1400F001C (RtlInitAnsiString.c)
 *     RtlStringCchPrintfA @ 0x14015DBB0 (RtlStringCchPrintfA.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     IoGetDeviceObjectPointer @ 0x14040D788 (IoGetDeviceObjectPointer.c)
 *     IoBuildSynchronousFsdRequest @ 0x14040DFC8 (IoBuildSynchronousFsdRequest.c)
 *     RtlFreeAnsiString @ 0x140450CB8 (RtlFreeAnsiString.c)
 *     RtlAnsiStringToUnicodeString @ 0x1404FE988 (RtlAnsiStringToUnicodeString.c)
 *     IoCreateSymbolicLink @ 0x14058107C (IoCreateSymbolicLink.c)
 *     IoGetConfigurationInformation @ 0x14058ED30 (IoGetConfigurationInformation.c)
 *     IopFetchConfigurationInformation @ 0x1407B5F40 (IopFetchConfigurationInformation.c)
 */

__int64 __fastcall IopCreateArcNamesCd(__int64 a1)
{
  _QWORD *v1; // rdi
  int v2; // r12d
  ULONG CdRomCount; // r14d
  int ConfigurationInformation; // eax
  PVOID v6; // rbx
  bool v7; // sf
  _QWORD *v8; // rax
  const WCHAR *v9; // r13
  bool v10; // r15
  __int64 v11; // r10
  unsigned __int8 *v12; // rcx
  __int64 v13; // r9
  _QWORD *v14; // r11
  int v15; // r8d
  int v16; // edx
  __m128i *v18; // rax
  __m128i *v19; // rsi
  int v20; // edi
  __int64 v21; // rax
  NTSTATUS DeviceObjectPointer; // edi
  struct _DEVICE_OBJECT *v23; // r15
  IRP *v24; // rax
  IRP *v25; // rax
  int v26; // edi
  NTSTATUS Status; // eax
  __m128i v28; // xmm1
  const __m128i *v29; // rax
  __int64 v30; // rcx
  __m128i v31; // xmm0
  __m128i v32; // xmm0
  __m128i v33; // xmm1
  int v34; // [rsp+58h] [rbp-B0h]
  PVOID P; // [rsp+60h] [rbp-A8h] BYREF
  struct _KEVENT Object; // [rsp+68h] [rbp-A0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+80h] [rbp-88h] BYREF
  _STRING SourceString; // [rsp+98h] [rbp-70h] BYREF
  _QWORD *v39; // [rsp+A8h] [rbp-60h]
  PFILE_OBJECT FileObject; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v41; // [rsp+B8h] [rbp-50h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+C0h] [rbp-48h] BYREF
  LARGE_INTEGER StartingOffset; // [rsp+D0h] [rbp-38h] BYREF
  UNICODE_STRING SymbolicLinkName; // [rsp+D8h] [rbp-30h] BYREF
  LARGE_INTEGER Timeout; // [rsp+E8h] [rbp-20h] BYREF
  char pszDest[128]; // [rsp+F8h] [rbp-10h] BYREF
  CHAR v47[128]; // [rsp+178h] [rbp+70h] BYREF

  v1 = *(_QWORD **)(a1 + 232);
  v2 = 0;
  v41 = a1;
  P = 0LL;
  CdRomCount = IoGetConfigurationInformation()->CdRomCount;
  SourceString = (_STRING)GUID_DEVINTERFACE_CDROM;
  ConfigurationInformation = IopFetchConfigurationInformation((PZZWSTR *)&P, (GUID *)&SourceString);
  v6 = P;
  v7 = ConfigurationInformation < 0;
  v8 = (_QWORD *)*v1;
  v9 = (const WCHAR *)P;
  v10 = v7;
  if ( (_QWORD *)*v1 == v1 )
    goto LABEL_9;
  v11 = *(_QWORD *)(a1 + 184);
  do
  {
    v12 = (unsigned __int8 *)v8[3];
    v13 = v11 - (_QWORD)v12;
    v39 = v8;
    v14 = v8;
    do
    {
      v15 = v12[v13];
      v16 = *v12 - v15;
      if ( v16 )
        break;
      ++v12;
    }
    while ( v15 );
    if ( !v16 )
      break;
    v8 = (_QWORD *)*v8;
    v14 = 0LL;
    v39 = 0LL;
  }
  while ( v8 != v1 );
  if ( !v14 )
    goto LABEL_9;
  v18 = (__m128i *)(ViVerifierDriverAddedThunkListHead
                  ? ExAllocatePoolWithTagPriority(
                      NonPagedPoolNxCacheAligned,
                      0x800uLL,
                      0x20206F49u,
                      (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1))
                  : ExAllocatePoolWithTag(NonPagedPoolNxCacheAligned, 0x800uLL, 0x20206F49u));
  v19 = v18;
  if ( !v18 )
    goto LABEL_9;
  v20 = 0;
  v34 = 0;
  if ( v10 )
    CdRomCount += 5;
  if ( !CdRomCount )
  {
LABEL_47:
    ExFreePoolWithTag(v19, 0);
LABEL_9:
    if ( v6 )
      ExFreePoolWithTag(v6, 0);
    return 0LL;
  }
  while ( 1 )
  {
    if ( v9 && *v9 )
    {
      RtlInitUnicodeString(&DestinationString, v9);
      v21 = -1LL;
      do
        ++v21;
      while ( v9[v21] );
      v9 += v21 + 1;
      DeviceObjectPointer = IoGetDeviceObjectPointer(&DestinationString, 0x80u, &FileObject, (PDEVICE_OBJECT *)&P);
      if ( DeviceObjectPointer < 0 )
        goto LABEL_29;
      v23 = (struct _DEVICE_OBJECT *)P;
      v24 = IoBuildDeviceIoControlRequest(
              0x2D1080u,
              (PDEVICE_OBJECT)P,
              0LL,
              0,
              &Timeout,
              0xCu,
              0,
              &Object,
              &IoStatusBlock);
      if ( !v24 )
        goto LABEL_51;
      LOWORD(Object.Header.Lock) = 0;
      Object.Header.SignalState = 0;
      Object.Header.WaitListHead.Blink = &Object.Header.WaitListHead;
      Object.Header.WaitListHead.Flink = &Object.Header.WaitListHead;
      Object.Header.Size = 6;
      DeviceObjectPointer = IofCallDriver(v23, v24);
      if ( DeviceObjectPointer == 259 )
      {
        KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
        DeviceObjectPointer = IoStatusBlock.Status;
      }
      if ( DeviceObjectPointer < 0
        || (RtlStringCchPrintfA(pszDest, 0x80uLL, "\\Device\\CdRom%d", Timeout.HighPart),
            RtlInitAnsiString(&SourceString, pszDest),
            DeviceObjectPointer = RtlAnsiStringToUnicodeString(&DestinationString, &SourceString, 1u),
            DeviceObjectPointer < 0) )
      {
LABEL_29:
        if ( v6 )
          ExFreePoolWithTag(v6, 0);
LABEL_54:
        ExFreePoolWithTag(v19, 0);
        return (unsigned int)DeviceObjectPointer;
      }
    }
    else
    {
      RtlStringCchPrintfA(pszDest, 0x80uLL, "\\Device\\CdRom%d", v20);
      v34 = v20 + 1;
      RtlInitAnsiString(&SourceString, pszDest);
      if ( RtlAnsiStringToUnicodeString(&DestinationString, &SourceString, 1u) < 0 )
      {
LABEL_51:
        if ( v6 )
          ExFreePoolWithTag(v6, 0);
        DeviceObjectPointer = -1073741670;
        goto LABEL_54;
      }
      if ( IoGetDeviceObjectPointer(&DestinationString, 0x80u, &FileObject, (PDEVICE_OBJECT *)&P) < 0 )
        goto LABEL_46;
      v23 = (struct _DEVICE_OBJECT *)P;
    }
    StartingOffset.QuadPart = 0x8000LL;
    v25 = IoBuildSynchronousFsdRequest(3u, v23, v19, 0x800u, &StartingOffset, &Object, &IoStatusBlock);
    v26 = 0;
    if ( v25 )
    {
      LOWORD(Object.Header.Lock) = 0;
      Object.Header.SignalState = 0;
      Object.Header.WaitListHead.Blink = &Object.Header.WaitListHead;
      Object.Header.WaitListHead.Flink = &Object.Header.WaitListHead;
      Object.Header.Size = 6;
      Status = IofCallDriver(v23, v25);
      if ( Status == 259 )
      {
        KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
        Status = IoStatusBlock.Status;
      }
      if ( Status >= 0 )
      {
        v28 = 0LL;
        v29 = v19;
        v30 = 128LL;
        do
        {
          v31 = _mm_loadu_si128(v29++);
          v32 = _mm_add_epi32(v31, v28);
          v28 = v32;
          --v30;
        }
        while ( v30 );
        v33 = _mm_add_epi32(v32, _mm_srli_si128(v32, 8));
        v26 = _mm_cvtsi128_si32(_mm_add_epi32(v33, _mm_srli_si128(v33, 4)));
      }
    }
    ObfDereferenceObjectWithTag(FileObject, 0x746C6644u);
    if ( !(v26 + *((_DWORD *)v39 + 8)) )
      break;
    RtlFreeAnsiString(&DestinationString);
    if ( ++v2 >= CdRomCount )
      goto LABEL_47;
    v20 = v34;
  }
  RtlStringCchPrintfA(v47, 0x80uLL, "\\ArcName\\%s", *(const char **)(v41 + 184));
  RtlInitAnsiString(&SourceString, v47);
  DeviceObjectPointer = RtlAnsiStringToUnicodeString(&SymbolicLinkName, &SourceString, 1u);
  if ( DeviceObjectPointer >= 0 )
  {
    IoCreateSymbolicLink(&SymbolicLinkName, &DestinationString);
    RtlFreeAnsiString(&SymbolicLinkName);
LABEL_46:
    RtlFreeAnsiString(&DestinationString);
    goto LABEL_47;
  }
  ExFreePoolWithTag(v19, 0);
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  RtlFreeAnsiString(&DestinationString);
  return (unsigned int)DeviceObjectPointer;
}
