/*
 * XREFs of RtlGetAppContainerNamedObjectPath @ 0x18000F010
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetAppContainerParent @ 0x180003330 (RtlGetAppContainerParent.c)
 *     RtlEqualSid @ 0x1800043F0 (RtlEqualSid.c)
 *     RtlGetAppContainerSidType @ 0x18000DD70 (RtlGetAppContainerSidType.c)
 *     RtlAppendUnicodeStringToString @ 0x180010440 (RtlAppendUnicodeStringToString.c)
 *     RtlAppendUnicodeToString @ 0x180013C90 (RtlAppendUnicodeToString.c)
 *     RtlConvertSidToUnicodeString @ 0x1800149E0 (RtlConvertSidToUnicodeString.c)
 *     NtdllpAllocateStringRoutine @ 0x180018BE8 (NtdllpAllocateStringRoutine.c)
 *     RtlFreeAnsiString @ 0x1800427E0 (RtlFreeAnsiString.c)
 *     RtlInitUnicodeString @ 0x180044150 (RtlInitUnicodeString.c)
 *     RtlFreeHeap @ 0x1800466F0 (RtlFreeHeap.c)
 *     RtlStringCbLengthW @ 0x18007054C (RtlStringCbLengthW.c)
 *     RtlStringCchPrintfW @ 0x180081278 (RtlStringCchPrintfW.c)
 *     __security_check_cookie @ 0x180096C40 (__security_check_cookie.c)
 *     NtQueryInformationToken @ 0x1800A6840 (NtQueryInformationToken.c)
 *     memset @ 0x1800ACCC0 (memset.c)
 */

__int64 __fastcall RtlGetAppContainerNamedObjectPath(__int64 a1, void *a2, char a3, UNICODE_STRING *a4)
{
  char v7; // r14
  char v9; // r12
  int InformationToken; // ebx
  char v12; // r12
  __int64 v13; // rdx
  size_t v14; // rbx
  wchar_t *StringRoutine; // rax
  wchar_t *v16; // rdi
  __int64 v17; // r8
  void *ProcessHeap; // rcx
  __int64 v19; // r8
  int v20; // [rsp+48h] [rbp-B8h] BYREF
  int v21; // [rsp+4Ch] [rbp-B4h] BYREF
  int v22; // [rsp+50h] [rbp-B0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int8 *v24; // [rsp+68h] [rbp-98h] BYREF
  PSID Sid; // [rsp+70h] [rbp-90h] BYREF
  int v26; // [rsp+78h] [rbp-88h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+80h] [rbp-80h] BYREF
  __int64 v28; // [rsp+90h] [rbp-70h] BYREF
  int v29; // [rsp+98h] [rbp-68h] BYREF
  const WCHAR *v30; // [rsp+A0h] [rbp-60h]
  PSID v31[12]; // [rsp+B0h] [rbp-50h] BYREF
  _WORD *v32; // [rsp+110h] [rbp+10h] BYREF
  void *v33; // [rsp+170h] [rbp+70h] BYREF
  wchar_t Buffer[264]; // [rsp+1C0h] [rbp+C0h] BYREF
  WCHAR SourceString[264]; // [rsp+3D0h] [rbp+2D0h] BYREF

  Sid = 0LL;
  v7 = 1;
  memset(Buffer, 0, 0x208uLL);
  memset(SourceString, 0, 0x208uLL);
  v29 = 262146;
  v20 = 0;
  v22 = 0;
  v9 = 0;
  v24 = 0LL;
  v30 = L"\\";
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
    a1 = -4LL;
LABEL_6:
    if ( a2 )
      goto LABEL_17;
    goto LABEL_7;
  }
  v9 = 1;
  if ( !a1 )
  {
    a1 = -6LL;
    goto LABEL_6;
  }
LABEL_7:
  v21 = 0;
  InformationToken = NtQueryInformationToken(a1, 29LL, &v21);
  if ( InformationToken < 0 )
    goto LABEL_10;
  if ( !v21 )
    goto LABEL_9;
  InformationToken = NtQueryInformationToken(a1, 31LL, &v33);
  if ( InformationToken < 0 )
    goto LABEL_10;
  a2 = v33;
  if ( !v33 )
  {
LABEL_9:
    InformationToken = 0;
    goto LABEL_10;
  }
LABEL_17:
  InformationToken = NtQueryInformationToken(a1, 42LL, &v20);
  if ( InformationToken < 0 )
    goto LABEL_10;
  if ( v20 )
  {
    InformationToken = NtQueryInformationToken(a1, 1LL, v31);
    if ( InformationToken < 0 )
      goto LABEL_10;
    v24 = (unsigned __int8 *)v31[0];
    InformationToken = RtlConvertSidToUnicodeString(&UnicodeString, v31[0], 1u);
    if ( InformationToken < 0 )
      goto LABEL_10;
  }
  if ( v9 )
  {
    v12 = 0;
    if ( a3 )
    {
      InformationToken = NtQueryInformationToken(-4LL, 42LL, &v22);
      if ( InformationToken < 0 )
        goto LABEL_10;
      if ( v22 )
      {
        InformationToken = NtQueryInformationToken(-4LL, 1LL, &v32);
        if ( InformationToken < 0 )
          goto LABEL_10;
        if ( !v20 || !RtlEqualSid(v24, v32) )
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
  InformationToken = NtQueryInformationToken(a1, 12LL, &v26);
  if ( InformationToken < 0 )
    goto LABEL_10;
  InformationToken = RtlGetAppContainerSidType((__int64)a2, &v24);
  if ( InformationToken < 0 )
    goto LABEL_10;
  if ( (_DWORD)v24 == 2 )
  {
    InformationToken = RtlConvertSidToUnicodeString(&DestinationString, a2, 1u);
    if ( InformationToken < 0 )
      goto LABEL_10;
LABEL_25:
    InformationToken = RtlStringCchPrintfW(Buffer);
    if ( InformationToken >= 0 )
    {
      InformationToken = RtlStringCbLengthW(Buffer, 260LL, &v28);
      if ( InformationToken >= 0 )
      {
        if ( v20 && (!a3 || v12) )
          v13 = v28 + UnicodeString.Length + 2LL;
        else
          v13 = v28;
        v14 = v13 + DestinationString.Length + 2LL;
        StringRoutine = (wchar_t *)NtdllpAllocateStringRoutine(v14);
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
            if ( !v20
              || a3 && !v12
              || (InformationToken = RtlAppendUnicodeStringToString(a4, &UnicodeString, v17), InformationToken >= 0)
              && (InformationToken = RtlAppendUnicodeStringToString(a4, &v29, v19), InformationToken >= 0) )
            {
              InformationToken = RtlAppendUnicodeStringToString(a4, &DestinationString, v17);
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
  InformationToken = RtlGetAppContainerParent((__int64)a2, (__int64 *)&Sid);
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
      v7 = 0;
      goto LABEL_25;
    }
  }
LABEL_10:
  RtlFreeAnsiString(&UnicodeString);
  if ( InformationToken < 0 )
    RtlFreeAnsiString(a4);
  if ( v7 )
    RtlFreeAnsiString(&DestinationString);
  return (unsigned int)InformationToken;
}
