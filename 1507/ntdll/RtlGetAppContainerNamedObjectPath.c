/*
 * XREFs of RtlGetAppContainerNamedObjectPath @ 0x18003EE10
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetAppContainerParent @ 0x1800030B0 (RtlGetAppContainerParent.c)
 *     RtlInitUnicodeString @ 0x18001F3D0 (RtlInitUnicodeString.c)
 *     RtlAppendUnicodeToString @ 0x18001FA60 (RtlAppendUnicodeToString.c)
 *     RtlConvertSidToUnicodeString @ 0x18001FD80 (RtlConvertSidToUnicodeString.c)
 *     NtdllpAllocateStringRoutine @ 0x180024358 (NtdllpAllocateStringRoutine.c)
 *     RtlFreeAnsiString @ 0x180027410 (RtlFreeAnsiString.c)
 *     RtlFreeHeap @ 0x18002AB90 (RtlFreeHeap.c)
 *     RtlAppendUnicodeStringToString @ 0x180040100 (RtlAppendUnicodeStringToString.c)
 *     RtlGetAppContainerSidType @ 0x18004AA20 (RtlGetAppContainerSidType.c)
 *     RtlStringCbLengthW @ 0x18006CEB4 (RtlStringCbLengthW.c)
 *     RtlStringCchPrintfW @ 0x180071740 (RtlStringCchPrintfW.c)
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     NtQueryInformationToken @ 0x180093B10 (NtQueryInformationToken.c)
 *     memset @ 0x180098540 (memset.c)
 */

NTSTATUS __cdecl RtlGetAppContainerNamedObjectPath(
        HANDLE TokenHandle,
        PSID AppContainerSid,
        BOOLEAN RelativePath,
        PUNICODE_STRING ObjectPath)
{
  PSID v5; // rdi
  __int64 v6; // r14
  char v8; // r15
  int appended; // ebx
  __int64 v11; // rdx
  SIZE_T v12; // rbx
  unsigned __int16 *StringRoutine; // rax
  unsigned __int16 *v14; // rdi
  void *ProcessHeap; // rcx
  ULONG ReturnLength; // [rsp+40h] [rbp-C0h] BYREF
  int v17; // [rsp+44h] [rbp-BCh] BYREF
  int TokenInformation; // [rsp+48h] [rbp-B8h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  PSID AppContainerSidParent; // [rsp+60h] [rbp-A0h] BYREF
  _APPCONTAINER_SID_TYPE AppContainerSidType; // [rsp+68h] [rbp-98h] BYREF
  int v22; // [rsp+6Ch] [rbp-94h] BYREF
  _UNICODE_STRING UnicodeString; // [rsp+70h] [rbp-90h] BYREF
  __int64 v24; // [rsp+80h] [rbp-80h] BYREF
  UNICODE_STRING v25; // [rsp+88h] [rbp-78h] BYREF
  PSID Sid[12]; // [rsp+A0h] [rbp-60h] BYREF
  void *v27; // [rsp+100h] [rbp+0h] BYREF
  WCHAR Source[264]; // [rsp+150h] [rbp+50h] BYREF
  WCHAR SourceString[264]; // [rsp+360h] [rbp+260h] BYREF

  v5 = AppContainerSid;
  v6 = (__int64)TokenHandle;
  AppContainerSidParent = 0LL;
  memset(Source, 0, 520);
  v8 = 1;
  memset(SourceString, 0, 520);
  v17 = 0;
  v25.Buffer = L"\\";
  *(_DWORD *)&v25.Length = 262146;
  if ( !ObjectPath )
    return -1073741811;
  if ( TokenHandle && AppContainerSid )
    return -1073741776;
  *(_DWORD *)&ObjectPath->Length = 0;
  ObjectPath->Buffer = 0LL;
  *(_DWORD *)&DestinationString.Length = 0;
  DestinationString.Buffer = 0LL;
  *(_DWORD *)&UnicodeString.Length = 0;
  UnicodeString.Buffer = 0LL;
  if ( AppContainerSid )
  {
    v6 = -4LL;
LABEL_6:
    if ( AppContainerSid )
      goto LABEL_17;
    goto LABEL_7;
  }
  if ( !TokenHandle )
  {
    v6 = -6LL;
    goto LABEL_6;
  }
LABEL_7:
  TokenInformation = 0;
  appended = NtQueryInformationToken((HANDLE)v6, 0x1Du, &TokenInformation, 4u, &ReturnLength);
  if ( appended < 0 )
    goto LABEL_10;
  if ( !TokenInformation )
    goto LABEL_9;
  appended = NtQueryInformationToken((HANDLE)v6, 0x1Fu, &v27, 0x50u, &ReturnLength);
  if ( appended < 0 )
    goto LABEL_10;
  v5 = v27;
  if ( !v27 )
  {
LABEL_9:
    appended = 0;
    goto LABEL_10;
  }
LABEL_17:
  appended = NtQueryInformationToken((HANDLE)v6, 0x2Au, &v17, 4u, &ReturnLength);
  if ( appended < 0 )
    goto LABEL_10;
  if ( v17 )
  {
    appended = NtQueryInformationToken((HANDLE)v6, 1u, Sid, 0x58u, &ReturnLength);
    if ( appended < 0 )
      goto LABEL_10;
    appended = RtlConvertSidToUnicodeString(&UnicodeString, Sid[0], 1u);
    if ( appended < 0 )
      goto LABEL_10;
  }
  appended = NtQueryInformationToken((HANDLE)v6, 0xCu, &v22, 4u, &ReturnLength);
  if ( appended < 0 )
    goto LABEL_10;
  appended = RtlGetAppContainerSidType(v5, &AppContainerSidType);
  if ( appended < 0 )
    goto LABEL_10;
  if ( AppContainerSidType == ParentAppContainerSidType )
  {
    appended = RtlConvertSidToUnicodeString(&DestinationString, v5, 1u);
    if ( appended < 0 )
      goto LABEL_10;
LABEL_23:
    appended = RtlStringCchPrintfW(Source);
    if ( appended >= 0 )
    {
      appended = RtlStringCbLengthW(Source, 260LL, &v24);
      if ( appended >= 0 )
      {
        if ( !v17 || RelativePath )
          v11 = v24;
        else
          v11 = v24 + UnicodeString.Length + 2LL;
        v12 = v11 + DestinationString.Length + 2LL;
        StringRoutine = (unsigned __int16 *)NtdllpAllocateStringRoutine(v12);
        v14 = StringRoutine;
        if ( StringRoutine )
        {
          memset(StringRoutine, 0, v12);
          ObjectPath->Length = 0;
          ObjectPath->MaximumLength = v12;
          ObjectPath->Buffer = v14;
          appended = RtlAppendUnicodeToString(ObjectPath, Source);
          if ( appended >= 0 )
          {
            if ( !v17
              || RelativePath
              || (appended = RtlAppendUnicodeStringToString(ObjectPath, &UnicodeString), appended >= 0)
              && (appended = RtlAppendUnicodeStringToString(ObjectPath, &v25), appended >= 0) )
            {
              appended = RtlAppendUnicodeStringToString(ObjectPath, &DestinationString);
            }
          }
        }
        else
        {
          appended = -1073741670;
        }
      }
    }
    goto LABEL_10;
  }
  appended = RtlGetAppContainerParent(v5, &AppContainerSidParent);
  if ( appended >= 0 )
  {
    appended = RtlConvertSidToUnicodeString(&DestinationString, AppContainerSidParent, 1u);
    ProcessHeap = NtCurrentPeb()->ProcessHeap;
    if ( appended < 0 )
    {
      RtlFreeHeap(ProcessHeap, 0, AppContainerSidParent);
      goto LABEL_10;
    }
    RtlFreeHeap(ProcessHeap, 0, AppContainerSidParent);
    appended = RtlStringCchPrintfW(SourceString);
    if ( appended >= 0 )
    {
      RtlFreeAnsiString(&DestinationString);
      RtlInitUnicodeString(&DestinationString, SourceString);
      v8 = 0;
      goto LABEL_23;
    }
  }
LABEL_10:
  RtlFreeAnsiString(&UnicodeString);
  if ( appended < 0 )
    RtlFreeAnsiString(ObjectPath);
  if ( v8 )
    RtlFreeAnsiString(&DestinationString);
  return appended;
}
