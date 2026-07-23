/*
 * XREFs of RtlGetAppContainerNamedObjectPath @ 0x1401F66E8
 * Callers:
 *     <none>
 * Callees:
 *     RtlAppendUnicodeStringToString @ 0x1400030E4 (RtlAppendUnicodeStringToString.c)
 *     RtlStringCchPrintfW @ 0x140003C28 (RtlStringCchPrintfW.c)
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     RtlAppendUnicodeToString @ 0x14008FA78 (RtlAppendUnicodeToString.c)
 *     RtlEqualSid @ 0x14009DE80 (RtlEqualSid.c)
 *     RtlStringCbLengthW @ 0x140103D90 (RtlStringCbLengthW.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     RtlConvertSidToUnicodeString @ 0x1403BD6A8 (RtlConvertSidToUnicodeString.c)
 *     RtlGetAppContainerSidType @ 0x1403C09F4 (RtlGetAppContainerSidType.c)
 *     NtQueryInformationToken @ 0x140431390 (NtQueryInformationToken.c)
 *     RtlFreeAnsiString @ 0x140445624 (RtlFreeAnsiString.c)
 *     ExpAllocateStringRoutine @ 0x140447224 (ExpAllocateStringRoutine.c)
 *     RtlGetAppContainerParent @ 0x140646A50 (RtlGetAppContainerParent.c)
 */

NTSTATUS __cdecl RtlGetAppContainerNamedObjectPath(
        HANDLE TokenHandle,
        PSID AppContainerSid,
        BOOLEAN RelativePath,
        PUNICODE_STRING ObjectPath)
{
  _DWORD *v5; // rdi
  __int64 v6; // r15
  char v7; // r12
  char v9; // r14
  int AppContainerSidType; // ebx
  char v12; // r12
  PSID v13; // r15
  NTSTATUS v14; // eax
  char *v15; // rdx
  size_t v16; // rbx
  wchar_t *StringRoutine; // rax
  wchar_t *v18; // rdi
  PULONG ReturnLength; // [rsp+20h] [rbp-E0h]
  ULONG v20; // [rsp+44h] [rbp-BCh] BYREF
  int v21; // [rsp+48h] [rbp-B8h] BYREF
  PSID AppContainerSidParent; // [rsp+50h] [rbp-B0h] BYREF
  int v23; // [rsp+58h] [rbp-A8h] BYREF
  int TokenInformation; // [rsp+5Ch] [rbp-A4h] BYREF
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-A0h] BYREF
  int v26; // [rsp+70h] [rbp-90h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+78h] [rbp-88h] BYREF
  PSID Sid1; // [rsp+88h] [rbp-78h]
  UNICODE_STRING Source; // [rsp+90h] [rbp-70h] BYREF
  PSID Sid[12]; // [rsp+A0h] [rbp-60h] BYREF
  PSID Sid2[12]; // [rsp+100h] [rbp+0h] BYREF
  _DWORD *v32; // [rsp+160h] [rbp+60h] BYREF
  wchar_t psz[264]; // [rsp+1B0h] [rbp+B0h] BYREF
  wchar_t pszDest[264]; // [rsp+3C0h] [rbp+2C0h] BYREF

  v5 = AppContainerSid;
  v6 = (__int64)TokenHandle;
  v7 = 0;
  AppContainerSidParent = 0LL;
  memset(psz, 0, 520);
  v9 = 1;
  memset(pszDest, 0, 520);
  *(_DWORD *)&Source.Length = 262146;
  v21 = 0;
  v23 = 0;
  Sid1 = 0LL;
  Source.Buffer = (wchar_t *)L"\\";
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
    goto LABEL_10;
  }
  v7 = 1;
  if ( !TokenHandle )
  {
    v6 = -6LL;
LABEL_10:
    if ( AppContainerSid )
      goto LABEL_15;
  }
  TokenInformation = 0;
  AppContainerSidType = NtQueryInformationToken((HANDLE)v6, TokenIsAppContainer, &TokenInformation, 4u, &v20);
  if ( AppContainerSidType < 0 )
    goto LABEL_59;
  if ( !TokenInformation )
    goto LABEL_58;
  AppContainerSidType = NtQueryInformationToken((HANDLE)v6, TokenAppContainerSid, &v32, 0x50u, &v20);
  if ( AppContainerSidType < 0 )
    goto LABEL_59;
  v5 = v32;
  if ( !v32 )
  {
LABEL_58:
    AppContainerSidType = 0;
    goto LABEL_59;
  }
LABEL_15:
  AppContainerSidType = NtQueryInformationToken((HANDLE)v6, TokenPrivateNameSpace, &v21, 4u, &v20);
  if ( AppContainerSidType < 0 )
    goto LABEL_59;
  if ( v21 )
  {
    AppContainerSidType = NtQueryInformationToken((HANDLE)v6, TokenUser, Sid, 0x58u, &v20);
    if ( AppContainerSidType < 0 )
      goto LABEL_59;
    Sid1 = Sid[0];
    AppContainerSidType = RtlConvertSidToUnicodeString(&UnicodeString, Sid[0], 1u);
    if ( AppContainerSidType < 0 )
      goto LABEL_59;
  }
  if ( !v7 || !RelativePath )
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
  AppContainerSidType = NtQueryInformationToken((HANDLE)v6, TokenSessionId, &v26, 4u, &v20);
  if ( AppContainerSidType >= 0 )
  {
    AppContainerSidType = RtlGetAppContainerSidType(v5, (PAPPCONTAINER_SID_TYPE)&v20);
    if ( AppContainerSidType >= 0 )
    {
      if ( v20 == 2 )
      {
        AppContainerSidType = RtlConvertSidToUnicodeString(&DestinationString, v5, 1u);
        if ( AppContainerSidType >= 0 )
        {
LABEL_39:
          if ( RelativePath )
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
            AppContainerSidType = RtlStringCbLengthW(psz, 0x104uLL, (size_t *)&AppContainerSidParent);
            if ( AppContainerSidType >= 0 )
            {
              if ( v21 && (!RelativePath || v12) )
                v15 = (char *)AppContainerSidParent + UnicodeString.Length + 2;
              else
                v15 = (char *)AppContainerSidParent;
              v16 = (size_t)&v15[DestinationString.Length + 2];
              StringRoutine = (wchar_t *)ExpAllocateStringRoutine(v16);
              v18 = StringRoutine;
              if ( StringRoutine )
              {
                memset(StringRoutine, 0, v16);
                ObjectPath->Length = 0;
                ObjectPath->MaximumLength = v16;
                ObjectPath->Buffer = v18;
                AppContainerSidType = RtlAppendUnicodeToString(ObjectPath, psz);
                if ( AppContainerSidType >= 0 )
                {
                  if ( !v21
                    || RelativePath && !v12
                    || (AppContainerSidType = RtlAppendUnicodeStringToString(ObjectPath, &UnicodeString),
                        AppContainerSidType >= 0)
                    && (AppContainerSidType = RtlAppendUnicodeStringToString(ObjectPath, &Source),
                        AppContainerSidType >= 0) )
                  {
                    AppContainerSidType = RtlAppendUnicodeStringToString(ObjectPath, &DestinationString);
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
        AppContainerSidType = RtlGetAppContainerParent(v5, &AppContainerSidParent);
        if ( AppContainerSidType >= 0 )
        {
          v13 = AppContainerSidParent;
          AppContainerSidType = RtlConvertSidToUnicodeString(&DestinationString, AppContainerSidParent, 1u);
          if ( AppContainerSidType >= 0 )
          {
            ExFreePoolWithTag(v13, 0);
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
    RtlFreeAnsiString(ObjectPath);
  if ( v9 )
    RtlFreeAnsiString(&DestinationString);
  return AppContainerSidType;
}
