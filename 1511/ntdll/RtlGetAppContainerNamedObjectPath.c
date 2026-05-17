/*
 * XREFs of RtlGetAppContainerNamedObjectPath @ 0x18000C5D0
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetAppContainerParent @ 0x180003C10 (RtlGetAppContainerParent.c)
 *     RtlAppendUnicodeStringToString @ 0x18000E310 (RtlAppendUnicodeStringToString.c)
 *     NtdllpAllocateStringRoutine @ 0x180018174 (NtdllpAllocateStringRoutine.c)
 *     RtlConvertSidToUnicodeString @ 0x180019220 (RtlConvertSidToUnicodeString.c)
 *     RtlAppendUnicodeToString @ 0x180019AF0 (RtlAppendUnicodeToString.c)
 *     RtlFreeAnsiString @ 0x18001C980 (RtlFreeAnsiString.c)
 *     RtlInitUnicodeString @ 0x18001D1D0 (RtlInitUnicodeString.c)
 *     RtlFreeHeap @ 0x1800207C0 (RtlFreeHeap.c)
 *     RtlEqualSid @ 0x18005DDF0 (RtlEqualSid.c)
 *     RtlGetAppContainerSidType @ 0x1800622C0 (RtlGetAppContainerSidType.c)
 *     RtlStringCbLengthW @ 0x1800773BC (RtlStringCbLengthW.c)
 *     RtlStringCchPrintfW @ 0x18007C41C (RtlStringCchPrintfW.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     NtQueryInformationToken @ 0x1800A54E0 (NtQueryInformationToken.c)
 *     memset @ 0x1800AB900 (memset.c)
 */

__int64 __fastcall RtlGetAppContainerNamedObjectPath(__int64 a1, void *a2, char a3, UNICODE_STRING *a4)
{
  void *v5; // rdi
  __int64 v6; // r15
  char v7; // r12
  char v9; // r14
  int InformationToken; // ebx
  char v12; // r12
  __int64 v13; // rdx
  size_t v14; // rbx
  unsigned __int16 *StringRoutine; // rax
  unsigned __int16 *v16; // rdi
  void *ProcessHeap; // rcx
  int v18; // [rsp+48h] [rbp-B8h] BYREF
  int v19; // [rsp+4Ch] [rbp-B4h] BYREF
  int v20; // [rsp+50h] [rbp-B0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-A8h] BYREF
  PSID v22; // [rsp+68h] [rbp-98h] BYREF
  PSID Sid; // [rsp+70h] [rbp-90h] BYREF
  int v24; // [rsp+78h] [rbp-88h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+80h] [rbp-80h] BYREF
  __int64 v26; // [rsp+90h] [rbp-70h] BYREF
  int v27; // [rsp+98h] [rbp-68h] BYREF
  const WCHAR *v28; // [rsp+A0h] [rbp-60h]
  PSID v29[12]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v30[12]; // [rsp+110h] [rbp+10h] BYREF
  void *v31; // [rsp+170h] [rbp+70h] BYREF
  wchar_t Buffer[264]; // [rsp+1C0h] [rbp+C0h] BYREF
  WCHAR SourceString[264]; // [rsp+3D0h] [rbp+2D0h] BYREF

  v5 = a2;
  v6 = a1;
  v7 = 0;
  Sid = 0LL;
  memset(Buffer, 0, 520);
  v9 = 1;
  memset(SourceString, 0, 520);
  v27 = 262146;
  v18 = 0;
  v19 = 0;
  v22 = 0LL;
  v28 = L"\\";
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
  v7 = 1;
  if ( !a1 )
  {
    v6 = -6LL;
    goto LABEL_6;
  }
LABEL_7:
  v20 = 0;
  InformationToken = NtQueryInformationToken(v6, 29LL, &v20);
  if ( InformationToken < 0 )
    goto LABEL_10;
  if ( !v20 )
    goto LABEL_9;
  InformationToken = NtQueryInformationToken(v6, 31LL, &v31);
  if ( InformationToken < 0 )
    goto LABEL_10;
  v5 = v31;
  if ( !v31 )
  {
LABEL_9:
    InformationToken = 0;
    goto LABEL_10;
  }
LABEL_17:
  InformationToken = NtQueryInformationToken(v6, 42LL, &v18);
  if ( InformationToken < 0 )
    goto LABEL_10;
  if ( v18 )
  {
    InformationToken = NtQueryInformationToken(v6, 1LL, v29);
    if ( InformationToken < 0 )
      goto LABEL_10;
    v22 = v29[0];
    InformationToken = RtlConvertSidToUnicodeString(&UnicodeString, v29[0], 1u);
    if ( InformationToken < 0 )
      goto LABEL_10;
  }
  if ( v7 )
  {
    v12 = 0;
    if ( a3 )
    {
      InformationToken = NtQueryInformationToken(-4LL, 42LL, &v19);
      if ( InformationToken < 0 )
        goto LABEL_10;
      if ( v19 )
      {
        InformationToken = NtQueryInformationToken(-4LL, 1LL, v30);
        if ( InformationToken < 0 )
          goto LABEL_10;
        if ( !v18 || !(unsigned __int8)RtlEqualSid(v22, v30[0]) )
        {
          InformationToken = -1073741637;
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
  InformationToken = NtQueryInformationToken(v6, 12LL, &v24);
  if ( InformationToken < 0 )
    goto LABEL_10;
  InformationToken = RtlGetAppContainerSidType(v5, &v22);
  if ( InformationToken < 0 )
    goto LABEL_10;
  if ( (_DWORD)v22 == 2 )
  {
    InformationToken = RtlConvertSidToUnicodeString(&DestinationString, v5, 1u);
    if ( InformationToken < 0 )
      goto LABEL_10;
LABEL_25:
    InformationToken = RtlStringCchPrintfW(Buffer);
    if ( InformationToken >= 0 )
    {
      InformationToken = RtlStringCbLengthW(Buffer, 260LL, &v26);
      if ( InformationToken >= 0 )
      {
        if ( v18 && (!a3 || v12) )
          v13 = v26 + UnicodeString.Length + 2LL;
        else
          v13 = v26;
        v14 = v13 + DestinationString.Length + 2LL;
        StringRoutine = (unsigned __int16 *)NtdllpAllocateStringRoutine(v14);
        v16 = StringRoutine;
        if ( StringRoutine )
        {
          memset(StringRoutine, 0, v14);
          a4->Length = 0;
          a4->MaximumLength = v14;
          a4->Buffer = v16;
          InformationToken = RtlAppendUnicodeToString(a4, Buffer);
          if ( InformationToken >= 0 )
          {
            if ( !v18
              || a3 && !v12
              || (InformationToken = RtlAppendUnicodeStringToString(a4, &UnicodeString), InformationToken >= 0)
              && (InformationToken = RtlAppendUnicodeStringToString(a4, &v27), InformationToken >= 0) )
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
      RtlFreeHeap(ProcessHeap, 0LL, Sid);
      goto LABEL_10;
    }
    RtlFreeHeap(ProcessHeap, 0LL, Sid);
    InformationToken = RtlStringCchPrintfW(SourceString);
    if ( InformationToken >= 0 )
    {
      RtlFreeAnsiString(&DestinationString);
      RtlInitUnicodeString(&DestinationString, SourceString);
      v9 = 0;
      goto LABEL_25;
    }
  }
LABEL_10:
  RtlFreeAnsiString(&UnicodeString);
  if ( InformationToken < 0 )
    RtlFreeAnsiString(a4);
  if ( v9 )
    RtlFreeAnsiString(&DestinationString);
  return (unsigned int)InformationToken;
}
