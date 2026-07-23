/*
 * XREFs of RtlGetAppContainerNamedObjectPath @ 0x18000F000
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetAppContainerParent @ 0x180003330 (RtlGetAppContainerParent.c)
 *     RtlEqualSid @ 0x1800043F0 (RtlEqualSid.c)
 *     RtlGetAppContainerSidType @ 0x18000DD60 (RtlGetAppContainerSidType.c)
 *     RtlAppendUnicodeStringToString @ 0x180010430 (RtlAppendUnicodeStringToString.c)
 *     RtlAppendUnicodeToString @ 0x180013C80 (RtlAppendUnicodeToString.c)
 *     RtlConvertSidToUnicodeString @ 0x1800149D0 (RtlConvertSidToUnicodeString.c)
 *     NtdllpAllocateStringRoutine @ 0x180018BD8 (NtdllpAllocateStringRoutine.c)
 *     RtlFreeAnsiString @ 0x1800427D0 (RtlFreeAnsiString.c)
 *     RtlInitUnicodeString @ 0x180044140 (RtlInitUnicodeString.c)
 *     RtlFreeHeap @ 0x1800466E0 (RtlFreeHeap.c)
 *     RtlStringCbLengthW @ 0x18007053C (RtlStringCbLengthW.c)
 *     RtlStringCchPrintfW @ 0x180081268 (RtlStringCchPrintfW.c)
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 *     NtQueryInformationToken @ 0x1800A6840 (NtQueryInformationToken.c)
 *     memset @ 0x1800ACCC0 (memset.c)
 */

NTSTATUS __cdecl RtlGetAppContainerNamedObjectPath(
        HANDLE TokenHandle,
        PSID AppContainerSid,
        BOOLEAN RelativePath,
        PUNICODE_STRING ObjectPath)
{
  char v7; // r14
  char v9; // r12
  int appended; // ebx
  char v12; // r12
  __int64 v13; // rdx
  SIZE_T v14; // rbx
  wchar_t *StringRoutine; // rax
  wchar_t *v16; // rdi
  void *ProcessHeap; // rcx
  ULONG ReturnLength; // [rsp+44h] [rbp-BCh] BYREF
  int v19; // [rsp+48h] [rbp-B8h] BYREF
  int TokenInformation; // [rsp+4Ch] [rbp-B4h] BYREF
  int v21; // [rsp+50h] [rbp-B0h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+58h] [rbp-A8h] BYREF
  _APPCONTAINER_SID_TYPE AppContainerSidType[2]; // [rsp+68h] [rbp-98h] BYREF
  PSID AppContainerSidParent; // [rsp+70h] [rbp-90h] BYREF
  int v25; // [rsp+78h] [rbp-88h] BYREF
  _UNICODE_STRING UnicodeString; // [rsp+80h] [rbp-80h] BYREF
  __int64 v27; // [rsp+90h] [rbp-70h] BYREF
  UNICODE_STRING v28; // [rsp+98h] [rbp-68h] BYREF
  PSID Sid[12]; // [rsp+B0h] [rbp-50h] BYREF
  PSID Sid2[12]; // [rsp+110h] [rbp+10h] BYREF
  void *v31; // [rsp+170h] [rbp+70h] BYREF
  WCHAR Source[264]; // [rsp+1C0h] [rbp+C0h] BYREF
  WCHAR SourceString[264]; // [rsp+3D0h] [rbp+2D0h] BYREF

  AppContainerSidParent = 0LL;
  v7 = 1;
  memset(Source, 0, 0x208uLL);
  memset(SourceString, 0, 0x208uLL);
  *(_DWORD *)&v28.Length = 262146;
  v19 = 0;
  v21 = 0;
  v9 = 0;
  *(_QWORD *)AppContainerSidType = 0LL;
  v28.Buffer = (wchar_t *)L"\\";
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
    TokenHandle = (HANDLE)-4LL;
LABEL_6:
    if ( AppContainerSid )
      goto LABEL_17;
    goto LABEL_7;
  }
  v9 = 1;
  if ( !TokenHandle )
  {
    TokenHandle = (HANDLE)-6LL;
    goto LABEL_6;
  }
LABEL_7:
  TokenInformation = 0;
  appended = NtQueryInformationToken(TokenHandle, 0x1Du, &TokenInformation, 4u, &ReturnLength);
  if ( appended < 0 )
    goto LABEL_10;
  if ( !TokenInformation )
    goto LABEL_9;
  appended = NtQueryInformationToken(TokenHandle, 0x1Fu, &v31, 0x50u, &ReturnLength);
  if ( appended < 0 )
    goto LABEL_10;
  AppContainerSid = v31;
  if ( !v31 )
  {
LABEL_9:
    appended = 0;
    goto LABEL_10;
  }
LABEL_17:
  appended = NtQueryInformationToken(TokenHandle, 0x2Au, &v19, 4u, &ReturnLength);
  if ( appended < 0 )
    goto LABEL_10;
  if ( v19 )
  {
    appended = NtQueryInformationToken(TokenHandle, 1u, Sid, 0x58u, &ReturnLength);
    if ( appended < 0 )
      goto LABEL_10;
    *(PSID *)AppContainerSidType = Sid[0];
    appended = RtlConvertSidToUnicodeString(&UnicodeString, Sid[0], 1u);
    if ( appended < 0 )
      goto LABEL_10;
  }
  if ( v9 )
  {
    v12 = 0;
    if ( RelativePath )
    {
      appended = NtQueryInformationToken((HANDLE)0xFFFFFFFFFFFFFFFCLL, 0x2Au, &v21, 4u, &ReturnLength);
      if ( appended < 0 )
        goto LABEL_10;
      if ( v21 )
      {
        appended = NtQueryInformationToken((HANDLE)0xFFFFFFFFFFFFFFFCLL, 1u, Sid2, 0x58u, &ReturnLength);
        if ( appended < 0 )
          goto LABEL_10;
        if ( !v19 || !RtlEqualSid(*(PSID *)AppContainerSidType, Sid2[0]) )
        {
          appended = -1073741637;
          goto LABEL_10;
        }
      }
      else
      {
        v12 = 1;
      }
    }
  }
  else
  {
    v12 = 0;
  }
  appended = NtQueryInformationToken(TokenHandle, 0xCu, &v25, 4u, &ReturnLength);
  if ( appended < 0 )
    goto LABEL_10;
  appended = RtlGetAppContainerSidType(AppContainerSid, AppContainerSidType);
  if ( appended < 0 )
    goto LABEL_10;
  if ( AppContainerSidType[0] == ParentAppContainerSidType )
  {
    appended = RtlConvertSidToUnicodeString(&DestinationString, AppContainerSid, 1u);
    if ( appended < 0 )
      goto LABEL_10;
LABEL_25:
    appended = RtlStringCchPrintfW(Source);
    if ( appended >= 0 )
    {
      appended = RtlStringCbLengthW(Source, 260LL, &v27);
      if ( appended >= 0 )
      {
        if ( v19 && (!RelativePath || v12) )
          v13 = v27 + UnicodeString.Length + 2LL;
        else
          v13 = v27;
        v14 = v13 + DestinationString.Length + 2LL;
        StringRoutine = (wchar_t *)NtdllpAllocateStringRoutine(v14);
        v16 = StringRoutine;
        if ( StringRoutine )
        {
          memset(StringRoutine, 0, v14);
          ObjectPath->Length = 0;
          ObjectPath->MaximumLength = v14;
          ObjectPath->Buffer = v16;
          appended = RtlAppendUnicodeToString(ObjectPath, Source);
          if ( appended >= 0 )
          {
            if ( !v19
              || RelativePath && !v12
              || (appended = RtlAppendUnicodeStringToString(ObjectPath, &UnicodeString), appended >= 0)
              && (appended = RtlAppendUnicodeStringToString(ObjectPath, &v28), appended >= 0) )
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
  appended = RtlGetAppContainerParent(AppContainerSid, &AppContainerSidParent);
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
      v7 = 0;
      goto LABEL_25;
    }
  }
LABEL_10:
  RtlFreeAnsiString(&UnicodeString);
  if ( appended < 0 )
    RtlFreeAnsiString(ObjectPath);
  if ( v7 )
    RtlFreeAnsiString(&DestinationString);
  return appended;
}
