/*
 * XREFs of ?OpenDxBltEvent@@YAJ_KPEAPEAX@Z @ 0x1800AF06C
 * Callers:
 *     ?ProcessPostPresent@CComposition@@QEAAJ_N@Z @ 0x180095920 (-ProcessPostPresent@CComposition@@QEAAJ_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1800AF354 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 */

__int64 __fastcall OpenDxBltEvent(__int64 a1, void **a2)
{
  BOOLEAN v4; // r14
  int v5; // eax
  unsigned int v6; // ebx
  HANDLE v7; // rax
  void *v8; // rcx
  int v9; // eax
  NTSTATUS v10; // ebx
  int v11; // r9d
  unsigned int RestartScan; // [rsp+20h] [rbp-E0h]
  void *FileHandle; // [rsp+40h] [rbp-C0h] BYREF
  ULONG Context; // [rsp+48h] [rbp-B8h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE Buffer[560]; // [rsp+90h] [rbp-70h] BYREF
  WCHAR Name[264]; // [rsp+2C0h] [rbp+1C0h] BYREF

  FileHandle = 0LL;
  Context = 0;
  v4 = 1;
  v5 = StringCchPrintfW(Name, 0x104uLL, L"%s%I64x", L"DwmDxBltEvent_", a1);
  v6 = v5;
  if ( v5 >= 0 )
  {
    while ( 1 )
    {
      v7 = OpenEventW(2u, 0, Name);
      if ( v7 )
        break;
      v8 = FileHandle;
      if ( !FileHandle )
      {
        v9 = StringCchPrintfW(Name, 0x104uLL, L"\\Sessions\\%u\\AppContainerNamedObjects", NtCurrentPeb()->SessionId);
        v6 = v9;
        if ( v9 < 0 )
        {
          RestartScan = 123;
          goto LABEL_15;
        }
        RtlInitUnicodeString(&DestinationString, Name);
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.ObjectName = &DestinationString;
        ObjectAttributes.Length = 48;
        ObjectAttributes.Attributes = 64;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        v10 = NtOpenDirectoryObject(&FileHandle, 1u, &ObjectAttributes);
        if ( v10 < 0 )
        {
          RestartScan = 132;
          goto LABEL_17;
        }
        v8 = FileHandle;
      }
      v10 = NtQueryDirectoryObject(v8, Buffer, 0x228u, 1u, v4, &Context, 0LL);
      if ( v10 == -2147483622 )
        v10 = -1073741772;
      if ( v10 < 0 )
      {
        RestartScan = 151;
LABEL_17:
        v6 = v10 | 0x10000000;
        v11 = v6;
LABEL_18:
        MilInstrumentationCheckHR(0x14u, &dword_180179E30, 2u, v11, RestartScan);
        goto LABEL_20;
      }
      v4 = 0;
      v9 = StringCchPrintfW(Name, 0x104uLL, L"AppContainerNamedObjects\\%wZ\\%s%I64x", Buffer, L"DwmDxBltEvent_", a1);
      v6 = v9;
      if ( v9 < 0 )
      {
        RestartScan = 163;
LABEL_15:
        v11 = v9;
        goto LABEL_18;
      }
    }
    *a2 = v7;
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, &dword_180179E30, 2u, v5, 0x5Du);
  }
LABEL_20:
  if ( FileHandle )
    CloseHandle(FileHandle);
  return v6;
}
