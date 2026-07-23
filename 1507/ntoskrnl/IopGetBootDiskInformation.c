/*
 * XREFs of IopGetBootDiskInformation @ 0x1407F94BC
 * Callers:
 *     IoGetBootDiskInformation @ 0x14067419C (IoGetBootDiskInformation.c)
 * Callees:
 *     IoBuildDeviceIoControlRequest @ 0x140006EE4 (IoBuildDeviceIoControlRequest.c)
 *     KeResetEvent @ 0x1400484D0 (KeResetEvent.c)
 *     IofCallDriver @ 0x140048540 (IofCallDriver.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     RtlInitAnsiString @ 0x1400F001C (RtlInitAnsiString.c)
 *     RtlEqualString @ 0x1401115A0 (RtlEqualString.c)
 *     RtlStringCchPrintfA @ 0x14015DBB0 (RtlStringCchPrintfA.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     IoGetDeviceObjectPointer @ 0x14040D788 (IoGetDeviceObjectPointer.c)
 *     RtlFreeAnsiString @ 0x140450CB8 (RtlFreeAnsiString.c)
 *     RtlAnsiStringToUnicodeString @ 0x1404FE988 (RtlAnsiStringToUnicodeString.c)
 *     IoGetConfigurationInformation @ 0x14058ED30 (IoGetConfigurationInformation.c)
 *     IopVerifyDiskSignature @ 0x14058F2AC (IopVerifyDiskSignature.c)
 */

__int64 __fastcall IopGetBootDiskInformation(__int64 a1, unsigned int a2)
{
  int v4; // r12d
  bool v6; // cf
  __int64 v7; // rbx
  __int64 v8; // rsi
  _QWORD **v9; // r13
  const CHAR *v10; // rdx
  ULONG v11; // eax
  NTSTATUS DeviceObjectPointer; // ebx
  struct _DEVICE_OBJECT *v13; // r15
  IRP *v14; // rax
  NTSTATUS Status; // eax
  ULONG OutputBufferLength; // r14d
  SIZE_T j; // rdx
  IRP *v18; // rdi
  NTSTATUS v19; // edi
  _DWORD *PoolWithTag; // rbx
  int v21; // eax
  _QWORD *v22; // r14
  unsigned int v23; // r11d
  char v24; // al
  unsigned int v25; // r15d
  __int64 v26; // r13
  BOOLEAN v27; // al
  char v28; // [rsp+58h] [rbp-B0h]
  int v29; // [rsp+5Ch] [rbp-ACh] BYREF
  ULONG DiskCount; // [rsp+60h] [rbp-A8h]
  ULONG i; // [rsp+64h] [rbp-A4h]
  struct _KEVENT Object; // [rsp+68h] [rbp-A0h] BYREF
  PFILE_OBJECT FileObject; // [rsp+80h] [rbp-88h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+88h] [rbp-80h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+98h] [rbp-70h] BYREF
  _QWORD **v36; // [rsp+A0h] [rbp-68h]
  __int64 v37; // [rsp+A8h] [rbp-60h]
  UNICODE_STRING ObjectName; // [rsp+B0h] [rbp-58h] BYREF
  _STRING String1; // [rsp+C0h] [rbp-48h] BYREF
  _STRING DestinationString; // [rsp+D0h] [rbp-38h] BYREF
  _STRING String2; // [rsp+E0h] [rbp-28h] BYREF
  _STRING SourceString; // [rsp+F0h] [rbp-18h] BYREF
  char OutputBuffer[20]; // [rsp+100h] [rbp-8h] BYREF
  unsigned int v44; // [rsp+114h] [rbp+Ch]
  char pszDest[128]; // [rsp+118h] [rbp+10h] BYREF
  CHAR v46[128]; // [rsp+198h] [rbp+90h] BYREF

  v37 = a1;
  v4 = 0;
  v29 = 0;
  DiskCount = IoGetConfigurationInformation()->DiskCount;
  if ( (unsigned int)InitializationPhase >= 2 )
    return 3221225865LL;
  if ( a2 < 0x18 )
    return 3221225485LL;
  v6 = a2 < 0x40;
  v7 = KeLoaderBlock_0;
  v8 = a1;
  if ( v6 )
    v8 = 0LL;
  v9 = *(_QWORD ***)(KeLoaderBlock_0 + 232);
  v10 = *(const CHAR **)(KeLoaderBlock_0 + 184);
  v36 = v9;
  v28 = **v9 == (_QWORD)v9;
  RtlInitAnsiString(&DestinationString, v10);
  RtlInitAnsiString(&String2, *(PCSZ *)(v7 + 192));
  v11 = 0;
  for ( i = 0; v11 < DiskCount; i = v11 )
  {
    RtlStringCchPrintfA(pszDest, 0x80uLL, "\\Device\\Harddisk%d\\Partition0", v11);
    RtlInitAnsiString(&SourceString, pszDest);
    if ( RtlAnsiStringToUnicodeString(&ObjectName, &SourceString, 1u) < 0 )
      goto LABEL_26;
    DeviceObjectPointer = IoGetDeviceObjectPointer(&ObjectName, 0x80u, &FileObject, &DeviceObject);
    RtlFreeAnsiString(&ObjectName);
    if ( DeviceObjectPointer < 0 )
      goto LABEL_26;
    v13 = DeviceObject;
    v14 = IoBuildDeviceIoControlRequest(0x70000u, DeviceObject, 0LL, 0, OutputBuffer, 0x18u, 0, &Object, &IoStatusBlock);
    if ( !v14 )
      goto LABEL_11;
    LOWORD(Object.Header.Lock) = 0;
    Object.Header.WaitListHead.Blink = &Object.Header.WaitListHead;
    Object.Header.Size = 6;
    Object.Header.WaitListHead.Flink = &Object.Header.WaitListHead;
    Object.Header.SignalState = 0;
    Status = IofCallDriver(v13, v14);
    if ( Status == 259 )
    {
      KeWaitForSingleObject(&Object, Suspended, 0, 0, 0LL);
      Status = IoStatusBlock.Status;
    }
    if ( Status >= 0 )
    {
      OutputBufferLength = 4096;
      for ( j = 4096LL; ; j = OutputBufferLength )
      {
        PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, j, 0x6F426F49u);
        if ( !PoolWithTag )
          break;
        v18 = IoBuildDeviceIoControlRequest(
                0x70050u,
                v13,
                0LL,
                0,
                PoolWithTag,
                OutputBufferLength,
                0,
                &Object,
                &IoStatusBlock);
        if ( !v18 )
          break;
        KeResetEvent(&Object);
        v19 = IofCallDriver(v13, v18);
        if ( v19 == 259 )
        {
          KeWaitForSingleObject(&Object, Suspended, 0, 0, 0LL);
          v19 = IoStatusBlock.Status;
        }
        if ( v19 != -1073741789 )
          goto LABEL_23;
        ExFreePoolWithTag(PoolWithTag, 0);
        OutputBufferLength *= 2;
      }
      v19 = -1073741670;
LABEL_23:
      ObfDereferenceObjectWithTag(FileObject, 0x746C6644u);
      if ( v19 >= 0 )
      {
        v21 = v44;
        if ( v44 < 0x200 )
          v21 = 512;
        v44 = v21;
        v22 = *v9;
        if ( *v9 != v9 )
        {
          v23 = 0;
          do
          {
            if ( v28 != (_BYTE)v23 && DiskCount == 1 && *PoolWithTag == v23
              || (v24 = IopVerifyDiskSignature(PoolWithTag, (__int64)v22, &v29), v4 = v29, v24) )
            {
              v25 = v23;
              if ( PoolWithTag[1] > v23 )
              {
                v26 = v37;
                do
                {
                  if ( !v4 && *PoolWithTag == v23 )
                    v4 = PoolWithTag[2];
                  if ( PoolWithTag[36 * v25 + 18] )
                  {
                    RtlStringCchPrintfA(
                      v46,
                      0x80uLL,
                      "%spartition(%d)",
                      (const char *)v22[3],
                      PoolWithTag[36 * v25 + 18]);
                    RtlInitAnsiString(&String1, v46);
                    if ( RtlEqualString(&String1, &DestinationString, 1u) )
                    {
                      *(_DWORD *)(v26 + 16) = v4;
                      *(_QWORD *)v26 = *(_QWORD *)&PoolWithTag[36 * v25 + 14];
                      if ( *PoolWithTag == 1 )
                      {
                        if ( v8 )
                        {
                          *(_BYTE *)(v8 + 56) = 1;
                          *(_OWORD *)(v8 + 24) = *(_OWORD *)(PoolWithTag + 2);
                        }
                      }
                      else if ( v8 )
                      {
                        *(_BYTE *)(v8 + 56) = 0;
                      }
                    }
                    v27 = RtlEqualString(&String1, &String2, 1u);
                    v23 = 0;
                    if ( v27 )
                    {
                      *(_DWORD *)(v26 + 20) = v4;
                      *(_QWORD *)(v26 + 8) = *(_QWORD *)&PoolWithTag[36 * v25 + 14];
                      if ( *PoolWithTag == 1 )
                      {
                        if ( v8 )
                        {
                          *(_BYTE *)(v8 + 57) = 1;
                          *(_OWORD *)(v8 + 40) = *(_OWORD *)(PoolWithTag + 2);
                        }
                      }
                      else if ( v8 )
                      {
                        *(_BYTE *)(v8 + 57) = 0;
                      }
                    }
                  }
                  ++v25;
                }
                while ( v25 < PoolWithTag[1] );
                v9 = v36;
                v29 = v4;
              }
            }
            v22 = (_QWORD *)*v22;
          }
          while ( v22 != v9 );
        }
LABEL_25:
        ExFreePoolWithTag(PoolWithTag, 0);
        goto LABEL_26;
      }
      if ( PoolWithTag )
        goto LABEL_25;
    }
    else
    {
LABEL_11:
      ObfDereferenceObjectWithTag(FileObject, 0x746C6644u);
    }
LABEL_26:
    v11 = i + 1;
  }
  return 0LL;
}
