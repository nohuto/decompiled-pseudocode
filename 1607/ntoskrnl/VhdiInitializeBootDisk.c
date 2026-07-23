/*
 * XREFs of VhdiInitializeBootDisk @ 0x1407D2AF4
 * Callers:
 *     <none>
 * Callees:
 *     RtlStringCbPrintfW @ 0x14000BD54 (RtlStringCbPrintfW.c)
 *     RtlInitUnicodeStringEx @ 0x1400C1850 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ZwDeviceIoControlFile @ 0x14015A2D0 (ZwDeviceIoControlFile.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     ZwOpenFile @ 0x14015A850 (ZwOpenFile.c)
 *     RtlCompareMemory @ 0x1401679D0 (RtlCompareMemory.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     IoGetConfigurationInformation @ 0x14054FB38 (IoGetConfigurationInformation.c)
 *     RtlCreateUnicodeStringFromAsciiz @ 0x14056022C (RtlCreateUnicodeStringFromAsciiz.c)
 *     VhdiGetPartitionNumber @ 0x1407D2914 (VhdiGetPartitionNumber.c)
 *     VhdiGetVolumeNumber @ 0x1407D29AC (VhdiGetVolumeNumber.c)
 *     VhdiQueryVolumeVhdFilePath @ 0x1407D32D0 (VhdiQueryVolumeVhdFilePath.c)
 */

__int64 __fastcall VhdiInitializeBootDisk(__int64 a1, __int64 a2, UNICODE_STRING *a3)
{
  _QWORD *v3; // r12
  _DWORD *v4; // rax
  const void *v5; // r13
  _DWORD *OutputBuffer; // rdi
  char v8; // r15
  unsigned int v9; // esi
  int inited; // ebx
  void *VolumeVhdFilePath; // rax
  ULONG OutputBufferLength; // r14d
  SIZE_T i; // rdx
  int v14; // ecx
  bool v15; // zf
  HANDLE Handle; // [rsp+50h] [rbp-B0h] BYREF
  int v17; // [rsp+58h] [rbp-A8h] BYREF
  ULONG DiskCount; // [rsp+5Ch] [rbp-A4h]
  _DWORD *v19; // [rsp+60h] [rbp-A0h]
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp-98h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+78h] [rbp-88h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+88h] [rbp-78h] BYREF
  wchar_t pszDest[64]; // [rsp+C0h] [rbp-40h] BYREF

  v17 = 0;
  if ( !a1 )
    return 3221225485LL;
  if ( !a2 )
    return 3221225485LL;
  if ( !a3 )
    return 3221225485LL;
  v3 = *(_QWORD **)a2;
  v4 = *(_DWORD **)(a2 + 24);
  v5 = *(const void **)(a2 + 8);
  v19 = v4;
  if ( !v3 || !v5 || !*(_QWORD *)(a2 + 16) || !v4 )
    return 3221225485LL;
  if ( !RtlCreateUnicodeStringFromAsciiz(a3, *(PCSZ *)(a1 + 184)) )
    return 3221225473LL;
  OutputBuffer = 0LL;
  v8 = 0;
  v9 = 0;
  DiskCount = IoGetConfigurationInformation()->DiskCount;
  Handle = 0LL;
  if ( !DiskCount )
    goto LABEL_39;
  while ( 1 )
  {
    inited = RtlStringCbPrintfW(pszDest, 0x80uLL, L"\\Device\\Harddisk%d\\Partition0", v9);
    if ( inited < 0 )
      goto LABEL_35;
    inited = RtlInitUnicodeStringEx(&DestinationString, pszDest);
    if ( inited < 0 )
      goto LABEL_35;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    ObjectAttributes.ObjectName = &DestinationString;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( Handle )
    {
      ZwClose(Handle);
      Handle = 0LL;
    }
    inited = ZwOpenFile(&Handle, 0xC0100000, &ObjectAttributes, &IoStatusBlock, 3u, 0x20u);
    if ( inited < 0 )
      goto LABEL_35;
    VolumeVhdFilePath = (void *)VhdiQueryVolumeVhdFilePath(Handle);
    if ( !VolumeVhdFilePath )
      break;
    ExFreePoolWithTag(VolumeVhdFilePath, 0x42646856u);
LABEL_35:
    if ( ++v9 >= DiskCount )
      goto LABEL_38;
  }
  if ( OutputBuffer )
    ExFreePoolWithTag(OutputBuffer, 0);
  OutputBufferLength = 4096;
  for ( i = 4096LL; ; i = OutputBufferLength )
  {
    OutputBuffer = ExAllocatePoolWithTag(NonPagedPoolNx, i, 0x42646856u);
    if ( !OutputBuffer )
      break;
    inited = ZwDeviceIoControlFile(
               Handle,
               0LL,
               0LL,
               0LL,
               &IoStatusBlock,
               0x70050u,
               0LL,
               0,
               OutputBuffer,
               OutputBufferLength);
    if ( inited != -1073741789 )
      goto LABEL_25;
    ExFreePoolWithTag(OutputBuffer, 0);
    OutputBufferLength *= 2;
  }
  inited = -1073741801;
LABEL_25:
  if ( inited < 0 )
    goto LABEL_35;
  v14 = *(_DWORD *)v3;
  if ( *OutputBuffer == *(_DWORD *)v3 )
  {
    if ( v14 )
    {
      if ( v14 != 1 )
        goto LABEL_34;
      v15 = RtlCompareMemory(OutputBuffer + 2, v5, 0x10uLL) == 16;
    }
    else
    {
      v15 = RtlCompareMemory(OutputBuffer + 2, v5, 4uLL) == 4;
    }
    if ( v15 )
    {
      inited = VhdiGetPartitionNumber(OutputBuffer, v3, &v17);
      if ( inited >= 0 )
        v8 = 1;
    }
  }
LABEL_34:
  if ( !v8 )
    goto LABEL_35;
  inited = VhdiGetVolumeNumber((__int64)Handle, v9, v17, v19);
LABEL_38:
  if ( !v8 )
LABEL_39:
    inited = -1073741810;
  if ( OutputBuffer )
    ExFreePoolWithTag(OutputBuffer, 0x42646856u);
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)inited;
}
