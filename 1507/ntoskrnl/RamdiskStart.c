/*
 * XREFs of RamdiskStart @ 0x1407FD3A8
 * Callers:
 *     IopInitializeBootDrivers @ 0x1407B872C (IopInitializeBootDrivers.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     RtlStringCbPrintfW @ 0x1400CEF64 (RtlStringCbPrintfW.c)
 *     RtlInitAnsiString @ 0x1400F001C (RtlInitAnsiString.c)
 *     RtlStringCbPrintfA @ 0x14016326C (RtlStringCbPrintfA.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     strstr @ 0x140171998 (strstr.c)
 *     _strupr @ 0x1401719F4 (_strupr.c)
 *     _atoi64 @ 0x140171BEC (_atoi64.c)
 *     atol @ 0x140171C20 (atol.c)
 *     ZwDeviceIoControlFile @ 0x14017F0D0 (ZwDeviceIoControlFile.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     ZwOpenFile @ 0x14017F650 (ZwOpenFile.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     memset @ 0x140195A80 (memset.c)
 *     RtlFreeAnsiString @ 0x140450CB8 (RtlFreeAnsiString.c)
 *     RtlAnsiStringToUnicodeString @ 0x1404FE988 (RtlAnsiStringToUnicodeString.c)
 *     RtlStringFromGUID @ 0x140557AF4 (RtlStringFromGUID.c)
 *     IoCreateSymbolicLink @ 0x14058107C (IoCreateSymbolicLink.c)
 */

__int64 __fastcall RamdiskStart(__int64 a1)
{
  __int64 **v2; // rcx
  __int64 *v3; // rbx
  __int64 *i; // rax
  unsigned int v5; // edi
  NTSTATUS Status; // ebx
  __int64 v7; // rax
  char *v8; // rbx
  char *v9; // rax
  char *v10; // rax
  unsigned int v11; // eax
  char *v12; // rax
  char *v13; // rax
  HANDLE FileHandle; // [rsp+50h] [rbp-B0h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+58h] [rbp-A8h] BYREF
  int v17; // [rsp+68h] [rbp-98h] BYREF
  const wchar_t *v18; // [rsp+70h] [rbp-90h]
  UNICODE_STRING GuidString; // [rsp+78h] [rbp-88h] BYREF
  UNICODE_STRING SymbolicLinkName; // [rsp+88h] [rbp-78h] BYREF
  _STRING DestinationString; // [rsp+98h] [rbp-68h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A8h] [rbp-58h] BYREF
  UNICODE_STRING DeviceName; // [rsp+D8h] [rbp-28h] BYREF
  _QWORD InputBuffer[8]; // [rsp+F0h] [rbp-10h] BYREF
  char pszDest[32]; // [rsp+130h] [rbp+30h] BYREF
  wchar_t SourceString[56]; // [rsp+150h] [rbp+50h] BYREF

  v2 = (__int64 **)(a1 + 32);
  FileHandle = 0LL;
  v3 = 0LL;
  for ( i = *v2; i != (__int64 *)v2; i = (__int64 *)*i )
  {
    v3 = i;
    if ( *((_DWORD *)i + 4) == 25 )
      break;
  }
  if ( i == (__int64 *)v2 )
  {
    v5 = 1;
    Status = -1073741811;
    goto LABEL_27;
  }
  memset(InputBuffer, 0, sizeof(InputBuffer));
  LODWORD(InputBuffer[0]) = 64;
  v5 = 3;
  HIDWORD(InputBuffer[2]) = 3;
  InputBuffer[6] = v3[3];
  LOWORD(InputBuffer[7]) = 0;
  LODWORD(InputBuffer[5]) = 0;
  LODWORD(InputBuffer[3]) = InputBuffer[3] & 0xFFFFFFE0 | 2;
  *(_OWORD *)((char *)InputBuffer + 4) = RamdiskBootDiskGuid;
  v7 = v3[4];
  v8 = *(char **)(a1 + 216);
  InputBuffer[4] = v7 << 12;
  if ( v8 )
  {
    strupr(v8);
    v9 = strstr(v8, "RDIMAGEOFFSET");
    if ( v9 && (v10 = strstr(v9, "=")) != 0LL )
    {
      v11 = atol(v10 + 1);
      LODWORD(InputBuffer[5]) = v11;
    }
    else
    {
      v11 = InputBuffer[5];
    }
    InputBuffer[4] -= v11;
    v12 = strstr(v8, "RDIMAGELENGTH");
    if ( v12 )
    {
      v13 = strstr(v12, "=");
      if ( v13 )
        InputBuffer[4] = atoi64(v13 + 1);
    }
  }
  v17 = 2097182;
  v18 = L"\\Device\\Ramdisk";
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v17;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  Status = ZwOpenFile(&FileHandle, 0xC0000000, &ObjectAttributes, &IoStatusBlock, 3u, 0x20u);
  if ( Status < 0 || (Status = IoStatusBlock.Status, IoStatusBlock.Status < 0) )
  {
    v5 = 2;
    goto LABEL_27;
  }
  Status = ZwDeviceIoControlFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, 0x240000u, InputBuffer, 0x40u, 0LL, 0);
  ZwClose(FileHandle);
  if ( Status < 0 || (Status = IoStatusBlock.Status, IoStatusBlock.Status < 0) )
LABEL_27:
    KeBugCheckEx(0xF8u, v5, Status, 0LL, 0LL);
  Status = RtlStringFromGUID((const GUID *const)((char *)InputBuffer + 4), &GuidString);
  if ( Status < 0 )
  {
    v5 = 4;
    goto LABEL_27;
  }
  RtlStringCbPrintfA(pszDest, 0x14uLL, "\\ArcName\\%s", *(const char **)(a1 + 184));
  RtlInitAnsiString(&DestinationString, pszDest);
  Status = RtlAnsiStringToUnicodeString(&SymbolicLinkName, &DestinationString, 1u);
  if ( Status < 0 )
  {
    v5 = 5;
    goto LABEL_27;
  }
  RtlStringCbPrintfW(SourceString, 0x6CuLL, L"\\Device\\Ramdisk%wZ", &GuidString);
  RtlInitUnicodeString(&DeviceName, SourceString);
  Status = IoCreateSymbolicLink(&SymbolicLinkName, &DeviceName);
  RtlFreeAnsiString(&GuidString);
  RtlFreeAnsiString(&SymbolicLinkName);
  if ( Status < 0 )
  {
    v5 = 6;
    goto LABEL_27;
  }
  return 0LL;
}
