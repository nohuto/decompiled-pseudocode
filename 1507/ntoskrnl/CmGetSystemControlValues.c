/*
 * XREFs of CmGetSystemControlValues @ 0x1407BBAF0
 * Callers:
 *     InitBootProcessor @ 0x1407D089C (InitBootProcessor.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     memset @ 0x140195A80 (memset.c)
 *     CmpFindValueByName @ 0x140429D14 (CmpFindValueByName.c)
 *     HvInitializeHive @ 0x1404AD7D4 (HvInitializeHive.c)
 *     CmpInitSecurityCache @ 0x1404ADEE4 (CmpInitSecurityCache.c)
 *     CmpFindSubKeyByName @ 0x140590DF0 (CmpFindSubKeyByName.c)
 *     CmpFindControlSet @ 0x140590E08 (CmpFindControlSet.c)
 *     CmpWalkPath @ 0x140591164 (CmpWalkPath.c)
 *     CmSelectQualifiedInstallLanguage @ 0x1407BB6E8 (CmSelectQualifiedInstallLanguage.c)
 *     CmpGetBootValueData @ 0x1407BBF00 (CmpGetBootValueData.c)
 *     CmpConvertLangId @ 0x1407BC0B8 (CmpConvertLangId.c)
 *     CmpInitializeSystemPoliciesFeatureOverrides @ 0x1407F8760 (CmpInitializeSystemPoliciesFeatureOverrides.c)
 */

__int64 __fastcall CmGetSystemControlValues(_DWORD *a1)
{
  int v2; // eax
  unsigned int v3; // ebx
  unsigned int ControlSet; // eax
  unsigned int v5; // r15d
  __int64 result; // rax
  __int64 v7; // rbx
  unsigned int SubKeyByName; // r12d
  __int64 v9; // rcx
  __int64 *i; // rbx
  unsigned int v11; // edi
  unsigned int v12; // eax
  int v13; // esi
  unsigned int ValueByName; // esi
  unsigned int v15; // r14d
  __int64 v16; // rcx
  __int64 v17; // rsi
  _DWORD *v18; // rcx
  __int64 v19; // rcx
  unsigned __int16 v20; // ax
  __int16 v21; // cx
  __int64 v22; // [rsp+68h] [rbp-A0h] BYREF
  int v23; // [rsp+70h] [rbp-98h] BYREF
  int v24; // [rsp+74h] [rbp-94h] BYREF
  UNICODE_STRING DestinationString; // [rsp+78h] [rbp-90h] BYREF
  _QWORD v26[44]; // [rsp+88h] [rbp-80h] BYREF

  v23 = -1;
  HIDWORD(v22) = -1;
  memset(&v26[1], 0, 0x158uLL);
  memset(&CmControlHive, 0, 0x17A8uLL);
  CmpInitSecurityCache((__int64)&CmControlHive);
  v26[0] = &CmControlHive;
  qword_14080E198 = (__int64)v26;
  v2 = HvInitializeHive((ULONG_PTR)&CmControlHive, 4u, 1, 0, a1, 0LL, 1, 0LL, 0LL, 0LL, &v22, 0LL);
  if ( v2 < 0 )
    KeBugCheckEx(0x74u, 1uLL, 1uLL, (ULONG_PTR)&CmControlHive, v2);
  qword_14080E198 = 0LL;
  v3 = a1[9];
  RtlInitUnicodeString(&DestinationString, L"current");
  ControlSet = CmpFindControlSet((ULONG_PTR)&CmControlHive, v3, (int)&DestinationString, &v22);
  v5 = ControlSet;
  if ( ControlSet == -1 )
    KeBugCheckEx(0x74u, 1uLL, 2uLL, (ULONG_PTR)&CmControlHive, (ULONG_PTR)&DestinationString);
  result = qword_14080E168(&CmControlHive, ControlSet, (char *)&v22 + 4);
  v7 = result;
  if ( result )
  {
    RtlInitUnicodeString(&DestinationString, L"control");
    SubKeyByName = CmpFindSubKeyByName((__int64)&CmControlHive, v7, &DestinationString.Length);
    if ( SubKeyByName == -1 )
      KeBugCheckEx(0x74u, 1uLL, 3uLL, v7, (ULONG_PTR)&DestinationString);
    qword_14080E170(&CmControlHive, (char *)&v22 + 4);
    if ( CmControlVector[0] )
    {
      for ( i = qword_140800028; *(i - 3); i += 5 )
      {
        v11 = -1;
        v12 = CmpWalkPath((__int64)&CmControlHive, SubKeyByName, (const WCHAR *)*(i - 3));
        if ( v12 != -1 )
        {
          result = qword_14080E168(&CmControlHive, v12, (char *)&v22 + 4);
          v13 = result;
          if ( !result )
            return result;
          RtlInitUnicodeString(&DestinationString, (PCWSTR)*(i - 2));
          ValueByName = CmpFindValueByName((int)&CmControlHive, v13, (int)&DestinationString);
          qword_14080E170(&CmControlHive, (char *)&v22 + 4);
          if ( ValueByName != -1 )
          {
            v15 = 4;
            if ( *i )
              v15 = *(_DWORD *)*i;
            result = qword_14080E168(&CmControlHive, ValueByName, &v23);
            v17 = result;
            if ( !result )
              return result;
            v11 = *(_DWORD *)(result + 4);
            if ( v11 >= 0x80000000 )
              v11 += 0x80000000;
            if ( v15 < v11 )
              v11 = v15;
            if ( v11 && !(unsigned __int8)CmpGetBootValueData(v16, result, *(i - 1), v11) )
              return qword_14080E170(&CmControlHive, &v23);
            v18 = (_DWORD *)i[1];
            if ( v18 )
              *v18 = *(_DWORD *)(v17 + 12);
            qword_14080E170(&CmControlHive, &v23);
          }
        }
        if ( *i )
          *(_DWORD *)*i = v11;
      }
    }
    CmpInitializeSystemPoliciesFeatureOverrides(v9, v5);
    if ( CmDefaultLanguageIdType == 1 )
      PsDefaultSystemLocaleId = (unsigned __int16)CmpConvertLangId(
                                                    CmDefaultLanguageId,
                                                    (unsigned int)CmDefaultLanguageIdLength);
    else
      PsDefaultSystemLocaleId = 1033;
    if ( CmInstallUILanguageIdType == 1 )
    {
      v20 = CmpConvertLangId(CmInstallUILanguageId, (unsigned int)CmInstallUILanguageIdLength);
      *(_WORD *)((char *)&NlsMbCodePageTag + 3) = v20;
    }
    else
    {
      v20 = *(_WORD *)((char *)&NlsMbCodePageTag + 3);
    }
    result = CmSelectQualifiedInstallLanguage(v19, SubKeyByName, &v24, v20);
    if ( (_DWORD)result )
    {
      if ( !psMUITest )
        KeBugCheckEx(0x12Au, 1uLL, (unsigned int)result, 0LL, 0LL);
      v21 = PsDefaultSystemLocaleId;
      *(_WORD *)((char *)&NlsMbCodePageTag + 3) = PsDefaultSystemLocaleId;
    }
    else
    {
      v21 = *(_WORD *)((char *)&NlsMbCodePageTag + 3);
      if ( *(unsigned __int16 *)((char *)&NlsMbCodePageTag + 3) != v24 )
      {
        v21 = v24;
        *(_WORD *)((char *)&NlsMbCodePageTag + 3) = v24;
        CmInstallUILanguageFallbackToOOBm = 1;
      }
    }
    PsDefaultThreadLocaleId = PsDefaultSystemLocaleId;
    PsDefaultUILanguageId = v21;
    if ( !PsMachineUILanguageId )
      PsMachineUILanguageId = v21;
  }
  return result;
}
