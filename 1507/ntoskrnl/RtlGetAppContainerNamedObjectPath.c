/*
 * XREFs of RtlGetAppContainerNamedObjectPath @ 0x1402453EC
 * Callers:
 *     <none>
 * Callees:
 *     RtlStringCchPrintfW @ 0x140008054 (RtlStringCchPrintfW.c)
 *     RtlAppendUnicodeToString @ 0x1400151B4 (RtlAppendUnicodeToString.c)
 *     RtlStringCbLengthW @ 0x140025FE8 (RtlStringCbLengthW.c)
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     RtlAppendUnicodeStringToString @ 0x1400D1F10 (RtlAppendUnicodeStringToString.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     RtlGetAppContainerSidType @ 0x1404129AC (RtlGetAppContainerSidType.c)
 *     RtlFreeAnsiString @ 0x140450CB8 (RtlFreeAnsiString.c)
 *     NtQueryInformationToken @ 0x140482E10 (NtQueryInformationToken.c)
 *     ExpAllocateStringRoutine @ 0x1404FFFAC (ExpAllocateStringRoutine.c)
 *     RtlConvertSidToUnicodeString @ 0x1405006DC (RtlConvertSidToUnicodeString.c)
 *     RtlGetAppContainerParent @ 0x1406C9AC4 (RtlGetAppContainerParent.c)
 */

__int64 __fastcall RtlGetAppContainerNamedObjectPath(__int64 TokenHandle, _DWORD *Sid, char a3, UNICODE_STRING *a4)
{
  _DWORD *v5; // rdi
  __int64 v6; // r14
  unsigned __int16 Length; // r12
  char v9; // r15
  NTSTATUS AppContainerSidType; // ebx
  PSID v12; // r14
  NTSTATUS v13; // eax
  char *v14; // rdx
  size_t v15; // rbx
  wchar_t *StringRoutine; // rax
  wchar_t *v17; // rdi
  PULONG ReturnLength; // [rsp+20h] [rbp-E0h]
  ULONG v19; // [rsp+40h] [rbp-C0h] BYREF
  int v20; // [rsp+44h] [rbp-BCh] BYREF
  int TokenInformation; // [rsp+48h] [rbp-B8h] BYREF
  PSID P; // [rsp+50h] [rbp-B0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-A8h] BYREF
  int v24; // [rsp+68h] [rbp-98h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+70h] [rbp-90h] BYREF
  UNICODE_STRING Source; // [rsp+80h] [rbp-80h] BYREF
  PSID Sida[12]; // [rsp+90h] [rbp-70h] BYREF
  _DWORD *v28; // [rsp+F0h] [rbp-10h] BYREF
  wchar_t psz[264]; // [rsp+140h] [rbp+40h] BYREF
  wchar_t pszDest[264]; // [rsp+350h] [rbp+250h] BYREF

  v5 = Sid;
  v6 = TokenHandle;
  Length = 0;
  P = 0LL;
  memset(psz, 0, 520);
  v9 = 1;
  memset(pszDest, 0, 520);
  *(_DWORD *)&Source.Length = 262146;
  v20 = 0;
  Source.Buffer = (wchar_t *)L"\\";
  if ( !a4 )
    return 3221225485LL;
  if ( TokenHandle && Sid )
    return 3221225520LL;
  *(_DWORD *)&a4->Length = 0;
  a4->Buffer = 0LL;
  *(_DWORD *)&DestinationString.Length = 0;
  DestinationString.Buffer = 0LL;
  *(_DWORD *)&UnicodeString.Length = 0;
  UnicodeString.Buffer = 0LL;
  if ( Sid )
  {
    v6 = -4LL;
    goto LABEL_10;
  }
  if ( !TokenHandle )
  {
    v6 = -6LL;
LABEL_10:
    if ( Sid )
      goto LABEL_15;
  }
  TokenInformation = 0;
  AppContainerSidType = NtQueryInformationToken((HANDLE)v6, TokenIsAppContainer, &TokenInformation, 4u, &v19);
  if ( AppContainerSidType < 0 )
    goto LABEL_48;
  if ( !TokenInformation )
    goto LABEL_47;
  AppContainerSidType = NtQueryInformationToken((HANDLE)v6, TokenAppContainerSid, &v28, 0x50u, &v19);
  if ( AppContainerSidType < 0 )
    goto LABEL_48;
  v5 = v28;
  if ( !v28 )
  {
LABEL_47:
    AppContainerSidType = 0;
    goto LABEL_48;
  }
LABEL_15:
  AppContainerSidType = NtQueryInformationToken((HANDLE)v6, TokenPrivateNameSpace, &v20, 4u, &v19);
  if ( AppContainerSidType >= 0 )
  {
    if ( v20 )
    {
      AppContainerSidType = NtQueryInformationToken((HANDLE)v6, TokenUser, Sida, 0x58u, &v19);
      if ( AppContainerSidType < 0 )
        goto LABEL_48;
      AppContainerSidType = RtlConvertSidToUnicodeString(&UnicodeString, Sida[0], 1u);
      if ( AppContainerSidType < 0 )
        goto LABEL_48;
      Length = UnicodeString.Length;
    }
    AppContainerSidType = NtQueryInformationToken((HANDLE)v6, TokenSessionId, &v24, 4u, &v19);
    if ( AppContainerSidType >= 0 )
    {
      AppContainerSidType = RtlGetAppContainerSidType(v5);
      if ( AppContainerSidType >= 0 )
      {
        if ( v19 == 2 )
        {
          AppContainerSidType = RtlConvertSidToUnicodeString(&DestinationString, v5, 1u);
          if ( AppContainerSidType >= 0 )
          {
LABEL_30:
            if ( a3 )
            {
              v13 = RtlStringCchPrintfW(psz, 0x104uLL, L"AppContainerNamedObjects\\");
            }
            else
            {
              LODWORD(ReturnLength) = v24;
              v13 = RtlStringCchPrintfW(
                      psz,
                      0x104uLL,
                      L"%ws\\%ld\\AppContainerNamedObjects\\",
                      L"\\Sessions",
                      ReturnLength);
            }
            AppContainerSidType = v13;
            if ( v13 >= 0 )
            {
              AppContainerSidType = RtlStringCbLengthW(psz, 0x104uLL, (size_t *)&P);
              if ( AppContainerSidType >= 0 )
              {
                if ( !v20 || a3 )
                  v14 = (char *)P;
                else
                  v14 = (char *)P + Length + 2;
                v15 = (size_t)&v14[DestinationString.Length + 2];
                StringRoutine = (wchar_t *)ExpAllocateStringRoutine(v15);
                v17 = StringRoutine;
                if ( StringRoutine )
                {
                  memset(StringRoutine, 0, v15);
                  a4->Length = 0;
                  a4->MaximumLength = v15;
                  a4->Buffer = v17;
                  AppContainerSidType = RtlAppendUnicodeToString(a4, psz);
                  if ( AppContainerSidType >= 0 )
                  {
                    if ( !v20
                      || a3
                      || (AppContainerSidType = RtlAppendUnicodeStringToString(a4, &UnicodeString),
                          AppContainerSidType >= 0)
                      && (AppContainerSidType = RtlAppendUnicodeStringToString(a4, &Source), AppContainerSidType >= 0) )
                    {
                      AppContainerSidType = RtlAppendUnicodeStringToString(a4, &DestinationString);
                    }
                  }
                }
                else
                {
                  AppContainerSidType = -1073741670;
                }
              }
            }
          }
        }
        else
        {
          AppContainerSidType = RtlGetAppContainerParent(v5);
          if ( AppContainerSidType >= 0 )
          {
            v12 = P;
            AppContainerSidType = RtlConvertSidToUnicodeString(&DestinationString, P, 1u);
            if ( AppContainerSidType >= 0 )
            {
              ExFreePoolWithTag(v12, 0);
              LODWORD(ReturnLength) = v5[10];
              AppContainerSidType = RtlStringCchPrintfW(
                                      pszDest,
                                      0x104uLL,
                                      L"%s\\%u-%u-%u-%u",
                                      DestinationString.Buffer,
                                      ReturnLength,
                                      v5[11],
                                      v5[12],
                                      v5[13]);
              if ( AppContainerSidType >= 0 )
              {
                RtlFreeAnsiString(&DestinationString);
                RtlInitUnicodeString(&DestinationString, pszDest);
                v9 = 0;
                goto LABEL_30;
              }
            }
            else
            {
              ExFreePoolWithTag(v12, 0);
            }
          }
        }
      }
    }
  }
LABEL_48:
  RtlFreeAnsiString(&UnicodeString);
  if ( AppContainerSidType < 0 )
    RtlFreeAnsiString(a4);
  if ( v9 )
    RtlFreeAnsiString(&DestinationString);
  return (unsigned int)AppContainerSidType;
}
