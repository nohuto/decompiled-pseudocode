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

__int64 __fastcall RtlGetAppContainerNamedObjectPath(__int64 a1, void *a2, char a3, UNICODE_STRING *a4)
{
  void *v5; // rdi
  __int64 v6; // r14
  char v8; // r15
  int InformationToken; // ebx
  __int64 v11; // rdx
  size_t v12; // rbx
  unsigned __int16 *StringRoutine; // rax
  unsigned __int16 *v14; // rdi
  void *ProcessHeap; // rcx
  int v16; // [rsp+44h] [rbp-BCh] BYREF
  int v17; // [rsp+48h] [rbp-B8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  PSID Sid; // [rsp+60h] [rbp-A0h] BYREF
  int v20; // [rsp+68h] [rbp-98h] BYREF
  int v21; // [rsp+6Ch] [rbp-94h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+70h] [rbp-90h] BYREF
  __int64 v23; // [rsp+80h] [rbp-80h] BYREF
  int v24; // [rsp+88h] [rbp-78h] BYREF
  const WCHAR *v25; // [rsp+90h] [rbp-70h]
  PSID v26[12]; // [rsp+A0h] [rbp-60h] BYREF
  void *v27; // [rsp+100h] [rbp+0h] BYREF
  wchar_t Buffer[264]; // [rsp+150h] [rbp+50h] BYREF
  WCHAR SourceString[264]; // [rsp+360h] [rbp+260h] BYREF

  v5 = a2;
  v6 = a1;
  Sid = 0LL;
  memset(Buffer, 0, 520);
  v8 = 1;
  memset(SourceString, 0, 520);
  v16 = 0;
  v25 = L"\\";
  v24 = 262146;
  if ( !a4 )
    return 3221225485LL;
  if ( a1 && a2 )
    return 3221225520LL;
  *(_DWORD *)&a4->Length = 0;
  a4->Buffer = 0LL;
  *(_DWORD *)&DestinationString.Length = 0;
  DestinationString.Buffer = 0LL;
  *(_DWORD *)&UnicodeString.Length = 0;
  UnicodeString.Buffer = 0LL;
  if ( a2 )
  {
    v6 = -4LL;
LABEL_6:
    if ( a2 )
      goto LABEL_17;
    goto LABEL_7;
  }
  if ( !a1 )
  {
    v6 = -6LL;
    goto LABEL_6;
  }
LABEL_7:
  v17 = 0;
  InformationToken = NtQueryInformationToken(v6, 29LL, &v17);
  if ( InformationToken < 0 )
    goto LABEL_10;
  if ( !v17 )
    goto LABEL_9;
  InformationToken = NtQueryInformationToken(v6, 31LL, &v27);
  if ( InformationToken < 0 )
    goto LABEL_10;
  v5 = v27;
  if ( !v27 )
  {
LABEL_9:
    InformationToken = 0;
    goto LABEL_10;
  }
LABEL_17:
  InformationToken = NtQueryInformationToken(v6, 42LL, &v16);
  if ( InformationToken < 0 )
    goto LABEL_10;
  if ( v16 )
  {
    InformationToken = NtQueryInformationToken(v6, 1LL, v26);
    if ( InformationToken < 0 )
      goto LABEL_10;
    InformationToken = RtlConvertSidToUnicodeString(&UnicodeString, v26[0], 1u);
    if ( InformationToken < 0 )
      goto LABEL_10;
  }
  InformationToken = NtQueryInformationToken(v6, 12LL, &v21);
  if ( InformationToken < 0 )
    goto LABEL_10;
  InformationToken = RtlGetAppContainerSidType(v5, &v20);
  if ( InformationToken < 0 )
    goto LABEL_10;
  if ( v20 == 2 )
  {
    InformationToken = RtlConvertSidToUnicodeString(&DestinationString, v5, 1u);
    if ( InformationToken < 0 )
      goto LABEL_10;
LABEL_23:
    InformationToken = RtlStringCchPrintfW(Buffer);
    if ( InformationToken >= 0 )
    {
      InformationToken = RtlStringCbLengthW(Buffer, 260LL, &v23);
      if ( InformationToken >= 0 )
      {
        if ( !v16 || a3 )
          v11 = v23;
        else
          v11 = v23 + UnicodeString.Length + 2LL;
        v12 = v11 + DestinationString.Length + 2LL;
        StringRoutine = (unsigned __int16 *)NtdllpAllocateStringRoutine(v12);
        v14 = StringRoutine;
        if ( StringRoutine )
        {
          memset(StringRoutine, 0, v12);
          a4->Length = 0;
          a4->MaximumLength = v12;
          a4->Buffer = v14;
          InformationToken = RtlAppendUnicodeToString(&a4->Length, Buffer);
          if ( InformationToken >= 0 )
          {
            if ( !v16
              || a3
              || (InformationToken = RtlAppendUnicodeStringToString(a4, &UnicodeString), InformationToken >= 0)
              && (InformationToken = RtlAppendUnicodeStringToString(a4, &v24), InformationToken >= 0) )
            {
              InformationToken = RtlAppendUnicodeStringToString(a4, &DestinationString);
            }
          }
        }
        else
        {
          InformationToken = -1073741670;
        }
      }
    }
    goto LABEL_10;
  }
  InformationToken = RtlGetAppContainerParent((__int64)v5, (__int64 *)&Sid);
  if ( InformationToken >= 0 )
  {
    InformationToken = RtlConvertSidToUnicodeString(&DestinationString, Sid, 1u);
    ProcessHeap = NtCurrentPeb()->ProcessHeap;
    if ( InformationToken < 0 )
    {
      RtlFreeHeap((__int64)ProcessHeap, 0, (unsigned __int64)Sid);
      goto LABEL_10;
    }
    RtlFreeHeap((__int64)ProcessHeap, 0, (unsigned __int64)Sid);
    InformationToken = RtlStringCchPrintfW(SourceString);
    if ( InformationToken >= 0 )
    {
      RtlFreeAnsiString(&DestinationString);
      RtlInitUnicodeString(&DestinationString, SourceString);
      v8 = 0;
      goto LABEL_23;
    }
  }
LABEL_10:
  RtlFreeAnsiString(&UnicodeString);
  if ( InformationToken < 0 )
    RtlFreeAnsiString(a4);
  if ( v8 )
    RtlFreeAnsiString(&DestinationString);
  return (unsigned int)InformationToken;
}
