/*
 * XREFs of ?OpenDxBltEvent@@YAJ_KPEAPEAX@Z @ 0x180148DEC
 * Callers:
 *     ?ProcessPostPresent@CComposition@@QEAAJ_N@Z @ 0x1800691B0 (-ProcessPostPresent@CComposition@@QEAAJ_N@Z.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180061814 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 */

__int64 __fastcall OpenDxBltEvent(__int64 a1, void **a2)
{
  BOOLEAN v4; // r14
  int v5; // eax
  unsigned int v6; // ebx
  void *v7; // rcx
  int v8; // eax
  NTSTATUS v9; // ebx
  HANDLE v10; // rax
  int v12; // r9d
  unsigned int RestartScan; // [rsp+20h] [rbp-E0h]
  void *FileHandle; // [rsp+40h] [rbp-C0h] BYREF
  ULONG Context; // [rsp+48h] [rbp-B8h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE Buffer[560]; // [rsp+90h] [rbp-70h] BYREF
  WCHAR SourceString[264]; // [rsp+2C0h] [rbp+1C0h] BYREF

  FileHandle = 0LL;
  Context = 0;
  v4 = 1;
  v5 = StringCchPrintfW(SourceString, 260LL, L"%s%I64x", L"DwmDxBltEvent_", a1);
  v6 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &dword_180175A20, 2u, v5, 0x5Du);
    goto LABEL_14;
  }
  while ( 1 )
  {
    v10 = OpenEventW(2u, 0, SourceString);
    if ( v10 )
    {
      *a2 = v10;
      goto LABEL_14;
    }
    v7 = FileHandle;
    if ( FileHandle )
      goto LABEL_8;
    v8 = StringCchPrintfW(SourceString, 260LL, L"\\Sessions\\%u\\AppContainerNamedObjects", NtCurrentPeb()->SessionId);
    v6 = v8;
    if ( v8 < 0 )
    {
      RestartScan = 123;
LABEL_19:
      v12 = v8;
      goto LABEL_23;
    }
    RtlInitUnicodeString(&DestinationString, SourceString);
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 64;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v9 = NtOpenDirectoryObject(&FileHandle, 1u, &ObjectAttributes);
    if ( v9 < 0 )
      break;
    v7 = FileHandle;
LABEL_8:
    v9 = NtQueryDirectoryObject(v7, Buffer, 0x228u, 1u, v4, &Context, 0LL);
    if ( v9 == -2147483622 )
      v9 = -1073741772;
    if ( v9 < 0 )
    {
      RestartScan = 151;
      goto LABEL_22;
    }
    v4 = 0;
    v8 = StringCchPrintfW(SourceString, 260LL, L"AppContainerNamedObjects\\%wZ\\%s%I64x", Buffer, L"DwmDxBltEvent_", a1);
    v6 = v8;
    if ( v8 < 0 )
    {
      RestartScan = 163;
      goto LABEL_19;
    }
  }
  RestartScan = 132;
LABEL_22:
  v6 = v9 | 0x10000000;
  v12 = v6;
LABEL_23:
  MilInstrumentationCheckHR(0x14u, &dword_180175A20, 2u, v12, RestartScan);
LABEL_14:
  if ( FileHandle )
    CloseHandle(FileHandle);
  return v6;
}
