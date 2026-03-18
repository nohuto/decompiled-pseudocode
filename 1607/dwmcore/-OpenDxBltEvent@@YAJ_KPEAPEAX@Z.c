/*
 * XREFs of ?OpenDxBltEvent@@YAJ_KPEAPEAX@Z @ 0x1800A8F40
 * Callers:
 *     ?ProcessPostPresent@CComposition@@QEAAJ_N@Z @ 0x18003C134 (-ProcessPostPresent@CComposition@@QEAAJ_N@Z.c)
 *     ?ProcessComposition@CComposition@@IEAAJPEA_N@Z @ 0x18003C450 (-ProcessComposition@CComposition@@IEAAJPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1800A6FC0 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 */

__int64 __fastcall OpenDxBltEvent(__int64 a1, void **a2)
{
  BOOLEAN v4; // r14
  int v5; // eax
  unsigned int v6; // ebx
  HANDLE v7; // rax
  int v8; // r9d
  HANDLE v10; // rcx
  NTSTATUS v11; // ebx
  unsigned int RestartScan; // [rsp+20h] [rbp-E0h]
  HANDLE hObject; // [rsp+40h] [rbp-C0h] BYREF
  ULONG Context; // [rsp+48h] [rbp-B8h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE Buffer[560]; // [rsp+90h] [rbp-70h] BYREF
  WCHAR Name[264]; // [rsp+2C0h] [rbp+1C0h] BYREF

  hObject = 0LL;
  Context = 0;
  v4 = 1;
  v5 = StringCchPrintfW(Name, 0x104uLL, (size_t *)L"%s%I64x", L"DwmDxBltEvent_", a1);
  v6 = v5;
  if ( v5 >= 0 )
  {
    while ( 1 )
    {
      v7 = OpenEventW(2u, 0, Name);
      if ( v7 )
      {
        *a2 = v7;
        goto LABEL_7;
      }
      v10 = hObject;
      if ( !hObject )
      {
        v5 = StringCchPrintfW(
               Name,
               0x104uLL,
               (size_t *)L"\\Sessions\\%u\\AppContainerNamedObjects",
               NtCurrentPeb()->SessionId);
        v6 = v5;
        if ( v5 < 0 )
        {
          RestartScan = 123;
          goto LABEL_5;
        }
        RtlInitUnicodeString(&DestinationString, Name);
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.ObjectName = &DestinationString;
        ObjectAttributes.Length = 48;
        ObjectAttributes.Attributes = 64;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        v11 = NtOpenDirectoryObject(&hObject, 1u, &ObjectAttributes);
        if ( v11 < 0 )
        {
          RestartScan = 132;
LABEL_16:
          v6 = v11 | 0x10000000;
          v8 = v6;
          goto LABEL_6;
        }
        v10 = hObject;
      }
      v11 = NtQueryDirectoryObject(v10, Buffer, 0x228u, 1u, v4, &Context, 0LL);
      if ( v11 == -2147483622 )
        v11 = -1073741772;
      if ( v11 < 0 )
      {
        RestartScan = 151;
        goto LABEL_16;
      }
      v4 = 0;
      v5 = StringCchPrintfW(
             Name,
             0x104uLL,
             (size_t *)L"AppContainerNamedObjects\\%wZ\\%s%I64x",
             Buffer,
             L"DwmDxBltEvent_",
             a1);
      v6 = v5;
      if ( v5 < 0 )
      {
        RestartScan = 163;
        goto LABEL_5;
      }
    }
  }
  RestartScan = 93;
LABEL_5:
  v8 = v5;
LABEL_6:
  MilInstrumentationCheckHR(0x14u, &dword_1801ACD30, 2u, v8, RestartScan);
LABEL_7:
  if ( hObject )
    CloseHandle(hObject);
  return v6;
}
