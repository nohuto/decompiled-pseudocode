/*
 * XREFs of rimLoadImage @ 0x1C007B310
 * Callers:
 *     RIMInitialize @ 0x1C007AFC0 (RIMInitialize.c)
 * Callees:
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 *     Win32AllocPool @ 0x1C004C2C0 (Win32AllocPool.c)
 *     __security_check_cookie @ 0x1C0085840 (__security_check_cookie.c)
 *     memset @ 0x1C0085E40 (memset.c)
 */

struct _SYSTEM_GDI_DRIVER_INFORMATION *rimLoadImage()
{
  NTSTATUS v0; // eax
  int v1; // edi
  wchar_t *v2; // rax
  const WCHAR *v3; // rax
  NTSTATUS v4; // eax
  ULONG v5; // ebx
  _DWORD *v6; // rax
  _DWORD *v7; // rsi
  int v8; // ebx
  void *v9; // rbx
  __int64 AddressOfEntryPoint; // rcx
  ULONG ReturnLength; // [rsp+28h] [rbp-E0h] BYREF
  ULONG Size; // [rsp+2Ch] [rbp-DCh] BYREF
  _STRING v14; // [rsp+30h] [rbp-D8h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-C8h] BYREF
  UNICODE_STRING v16; // [rsp+50h] [rbp-B8h] BYREF
  _DWORD SystemInformation[76]; // [rsp+68h] [rbp-A0h] BYREF

  memset(&gHidParseImageInfo, 0, sizeof(gHidParseImageInfo));
  RtlInitUnicodeString(&v16, L"\\SystemRoot\\System32\\Drivers\\hidparse.sys");
  gHidParseImageInfo.DriverName = v16;
  v0 = ZwSetSystemInformation(SystemLoadGdiDriverInSystemSpaceInformation, &gHidParseImageInfo, 0x38uLL);
  v1 = 0;
  if ( v0 >= 0 )
    return &gHidParseImageInfo;
  if ( v0 != -1073741554 )
    return 0LL;
  v2 = wcsrchr(L"\\SystemRoot\\System32\\Drivers\\hidparse.sys", 0x5Cu);
  v3 = v2 ? v2 + 1 : L"\\SystemRoot\\System32\\Drivers\\hidparse.sys";
  RtlInitUnicodeString(&DestinationString, v3);
  if ( RtlUnicodeStringToAnsiString(&v14, &DestinationString, 1u) < 0 )
    return 0LL;
  v4 = ZwQuerySystemInformation(SystemModuleInformation, SystemInformation, 0x130u, &ReturnLength);
  if ( (int)(v4 + 0x80000000) >= 0 && v4 != -1073741820 )
    return 0LL;
  v5 = 296 * SystemInformation[0] + 8;
  v6 = (_DWORD *)Win32AllocPool();
  v7 = v6;
  if ( !v6 )
    return 0LL;
  if ( ZwQuerySystemInformation(SystemModuleInformation, v6, v5, &ReturnLength) >= 0 )
  {
    v8 = 0;
    if ( *v7 )
    {
      while ( _strnicmp((const char *)&v7[74 * v8 + 12] + HIWORD(v7[74 * v8 + 11]), v14.Buffer, v14.Length) )
      {
        if ( (unsigned int)++v8 >= *v7 )
          goto LABEL_14;
      }
      v9 = *(void **)&v7[74 * v8 + 6];
      qword_1C0101820 = (__int64)RtlImageDirectoryEntryToData(v9, 1u, 0, &Size);
      AddressOfEntryPoint = RtlImageNtHeader(v9)->OptionalHeader.AddressOfEntryPoint;
      qword_1C0101810 = 0LL;
      qword_1C0101818 = (__int64)v9 + AddressOfEntryPoint;
      v1 = 1;
      qword_1C0101808 = (__int64)v9;
    }
  }
LABEL_14:
  Win32FreePool();
  if ( v1 == 1 )
    return &gHidParseImageInfo;
  else
    return 0LL;
}
