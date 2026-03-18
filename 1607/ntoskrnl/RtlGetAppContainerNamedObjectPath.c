/*
 * XREFs of RtlGetAppContainerNamedObjectPath @ 0x14021091C
 * Callers:
 *     <none>
 * Callees:
 *     RtlEqualSid @ 0x14000F570 (RtlEqualSid.c)
 *     RtlInitUnicodeString @ 0x14002DC60 (RtlInitUnicodeString.c)
 *     RtlStringCchPrintfW @ 0x14007F50C (RtlStringCchPrintfW.c)
 *     RtlAppendUnicodeStringToString @ 0x140087614 (RtlAppendUnicodeStringToString.c)
 *     RtlStringCbLengthW @ 0x14009ED7C (RtlStringCbLengthW.c)
 *     RtlAppendUnicodeToString @ 0x1400C3920 (RtlAppendUnicodeToString.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     memset @ 0x1401715C0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExpAllocateStringRoutine @ 0x1403F80BC (ExpAllocateStringRoutine.c)
 *     RtlConvertSidToUnicodeString @ 0x1403F8710 (RtlConvertSidToUnicodeString.c)
 *     NtQueryInformationToken @ 0x14040F810 (NtQueryInformationToken.c)
 *     RtlFreeAnsiString @ 0x140458CF0 (RtlFreeAnsiString.c)
 *     RtlGetAppContainerSidType @ 0x14047BB60 (RtlGetAppContainerSidType.c)
 *     RtlGetAppContainerParent @ 0x140683988 (RtlGetAppContainerParent.c)
 */

__int64 __fastcall RtlGetAppContainerNamedObjectPath(__int64 TokenHandle, PSID Sid, char a3, UNICODE_STRING *a4)
{
  char v7; // r15
  char v9; // r12
  NTSTATUS AppContainerSidType; // ebx
  char v12; // r12
  PSID v13; // r14
  NTSTATUS v14; // eax
  char *v15; // rdx
  size_t v16; // rbx
  wchar_t *StringRoutine; // rax
  wchar_t *v18; // rdi
  PULONG ReturnLength; // [rsp+20h] [rbp-E0h]
  ULONG v20; // [rsp+44h] [rbp-BCh] BYREF
  int v21; // [rsp+48h] [rbp-B8h] BYREF
  int TokenInformation; // [rsp+4Ch] [rbp-B4h] BYREF
  int v23; // [rsp+50h] [rbp-B0h] BYREF
  PSID P; // [rsp+58h] [rbp-A8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-A0h] BYREF
  int v26; // [rsp+70h] [rbp-90h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+78h] [rbp-88h] BYREF
  PSID Sid1; // [rsp+88h] [rbp-78h]
  UNICODE_STRING Source; // [rsp+90h] [rbp-70h] BYREF
  PSID Sida[12]; // [rsp+A0h] [rbp-60h] BYREF
  PSID Sid2[12]; // [rsp+100h] [rbp+0h] BYREF
  void *v32; // [rsp+160h] [rbp+60h] BYREF
  wchar_t psz[264]; // [rsp+1B0h] [rbp+B0h] BYREF
  wchar_t pszDest[264]; // [rsp+3C0h] [rbp+2C0h] BYREF

  P = 0LL;
  v7 = 1;
  memset(psz, 0, 0x208uLL);
  memset(pszDest, 0, 0x208uLL);
  *(_DWORD *)&Source.Length = 262146;
  v21 = 0;
  v23 = 0;
  v9 = 0;
  Sid1 = 0LL;
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
    TokenHandle = -4LL;
    goto LABEL_10;
  }
  v9 = 1;
  if ( !TokenHandle )
  {
    TokenHandle = -6LL;
LABEL_10:
    if ( Sid )
      goto LABEL_15;
  }
  TokenInformation = 0;
  AppContainerSidType = NtQueryInformationToken((HANDLE)TokenHandle, TokenIsAppContainer, &TokenInformation, 4u, &v20);
  if ( AppContainerSidType < 0 )
    goto LABEL_59;
  if ( !TokenInformation )
    goto LABEL_58;
  AppContainerSidType = NtQueryInformationToken((HANDLE)TokenHandle, TokenAppContainerSid, &v32, 0x50u, &v20);
  if ( AppContainerSidType < 0 )
    goto LABEL_59;
  Sid = v32;
  if ( !v32 )
  {
LABEL_58:
    AppContainerSidType = 0;
    goto LABEL_59;
  }
LABEL_15:
  AppContainerSidType = NtQueryInformationToken((HANDLE)TokenHandle, TokenPrivateNameSpace, &v21, 4u, &v20);
  if ( AppContainerSidType < 0 )
    goto LABEL_59;
  if ( v21 )
  {
    AppContainerSidType = NtQueryInformationToken((HANDLE)TokenHandle, TokenUser, Sida, 0x58u, &v20);
    if ( AppContainerSidType < 0 )
      goto LABEL_59;
    Sid1 = Sida[0];
    AppContainerSidType = RtlConvertSidToUnicodeString(&UnicodeString, Sida[0], 1u);
    if ( AppContainerSidType < 0 )
      goto LABEL_59;
  }
  if ( !v9 || !a3 )
  {
LABEL_28:
    v12 = 0;
    goto LABEL_29;
  }
  AppContainerSidType = NtQueryInformationToken((HANDLE)0xFFFFFFFFFFFFFFFCLL, TokenPrivateNameSpace, &v23, 4u, &v20);
  if ( AppContainerSidType < 0 )
    goto LABEL_59;
  if ( v23 )
  {
    AppContainerSidType = NtQueryInformationToken((HANDLE)0xFFFFFFFFFFFFFFFCLL, TokenUser, Sid2, 0x58u, &v20);
    if ( AppContainerSidType < 0 )
      goto LABEL_59;
    if ( !v21 || !RtlEqualSid(Sid1, Sid2[0]) )
    {
      AppContainerSidType = -1073741637;
      goto LABEL_59;
    }
    goto LABEL_28;
  }
  v12 = 1;
LABEL_29:
  AppContainerSidType = NtQueryInformationToken((HANDLE)TokenHandle, TokenSessionId, &v26, 4u, &v20);
  if ( AppContainerSidType >= 0 )
  {
    AppContainerSidType = RtlGetAppContainerSidType(Sid);
    if ( AppContainerSidType >= 0 )
    {
      if ( v20 == 2 )
      {
        AppContainerSidType = RtlConvertSidToUnicodeString(&DestinationString, Sid, 1u);
        if ( AppContainerSidType >= 0 )
        {
LABEL_39:
          if ( a3 )
          {
            v14 = RtlStringCchPrintfW(psz, 0x104uLL, L"AppContainerNamedObjects\\");
          }
          else
          {
            LODWORD(ReturnLength) = v26;
            v14 = RtlStringCchPrintfW(
                    psz,
                    0x104uLL,
                    L"%ws\\%ld\\AppContainerNamedObjects\\",
                    L"\\Sessions",
                    ReturnLength);
          }
          AppContainerSidType = v14;
          if ( v14 >= 0 )
          {
            AppContainerSidType = RtlStringCbLengthW(psz, 0x104uLL, (size_t *)&P);
            if ( AppContainerSidType >= 0 )
            {
              if ( v21 && (!a3 || v12) )
                v15 = (char *)P + UnicodeString.Length + 2;
              else
                v15 = (char *)P;
              v16 = (size_t)&v15[DestinationString.Length + 2];
              StringRoutine = (wchar_t *)ExpAllocateStringRoutine(v16);
              v18 = StringRoutine;
              if ( StringRoutine )
              {
                memset(StringRoutine, 0, v16);
                a4->Length = 0;
                a4->MaximumLength = v16;
                a4->Buffer = v18;
                AppContainerSidType = RtlAppendUnicodeToString(a4, psz);
                if ( AppContainerSidType >= 0 )
                {
                  if ( !v21
                    || a3 && !v12
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
        AppContainerSidType = RtlGetAppContainerParent(Sid);
        if ( AppContainerSidType >= 0 )
        {
          v13 = P;
          AppContainerSidType = RtlConvertSidToUnicodeString(&DestinationString, P, 1u);
          if ( AppContainerSidType >= 0 )
          {
            ExFreePoolWithTag(v13, 0);
            LODWORD(ReturnLength) = *((_DWORD *)Sid + 10);
            AppContainerSidType = RtlStringCchPrintfW(
                                    pszDest,
                                    0x104uLL,
                                    L"%s\\%u-%u-%u-%u",
                                    DestinationString.Buffer,
                                    ReturnLength,
                                    *((_DWORD *)Sid + 11),
                                    *((_DWORD *)Sid + 12),
                                    *((_DWORD *)Sid + 13));
            if ( AppContainerSidType >= 0 )
            {
              RtlFreeAnsiString(&DestinationString);
              RtlInitUnicodeString(&DestinationString, pszDest);
              v7 = 0;
              goto LABEL_39;
            }
          }
          else
          {
            ExFreePoolWithTag(v13, 0);
          }
        }
      }
    }
  }
LABEL_59:
  RtlFreeAnsiString(&UnicodeString);
  if ( AppContainerSidType < 0 )
    RtlFreeAnsiString(a4);
  if ( v7 )
    RtlFreeAnsiString(&DestinationString);
  return (unsigned int)AppContainerSidType;
}
