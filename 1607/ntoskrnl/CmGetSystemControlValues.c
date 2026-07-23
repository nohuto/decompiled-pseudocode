/*
 * XREFs of CmGetSystemControlValues @ 0x1407B0AC0
 * Callers:
 *     InitBootProcessor @ 0x1407937C4 (InitBootProcessor.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     CmpFindValueByName @ 0x1404018E8 (CmpFindValueByName.c)
 *     HvInitializeHive @ 0x14047E8F8 (HvInitializeHive.c)
 *     CmpInitSecurityCache @ 0x14047EFEC (CmpInitSecurityCache.c)
 *     CmpFindSubKeyByName @ 0x1405603A4 (CmpFindSubKeyByName.c)
 *     CmpFindControlSet @ 0x1405603BC (CmpFindControlSet.c)
 *     CmpWalkPath @ 0x140560738 (CmpWalkPath.c)
 *     CmSelectQualifiedInstallLanguage @ 0x1407B06B0 (CmSelectQualifiedInstallLanguage.c)
 *     CmpGetBootValueData @ 0x1407B0EDC (CmpGetBootValueData.c)
 *     CmpConvertLangId @ 0x1407B10A8 (CmpConvertLangId.c)
 *     CmpInitializeSystemPoliciesFeatureOverrides @ 0x1407CD9B4 (CmpInitializeSystemPoliciesFeatureOverrides.c)
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
  unsigned __int16 v19; // ax
  __int16 v20; // cx
  __int64 v21; // [rsp+68h] [rbp-A0h] BYREF
  _DWORD v22[2]; // [rsp+70h] [rbp-98h] BYREF
  int v23; // [rsp+78h] [rbp-90h] BYREF
  _DWORD v24[2]; // [rsp+80h] [rbp-88h] BYREF
  UNICODE_STRING DestinationString; // [rsp+88h] [rbp-80h] BYREF
  _QWORD v26[44]; // [rsp+98h] [rbp-70h] BYREF

  v24[0] = -1;
  v24[1] = 0;
  v22[0] = -1;
  v22[1] = 0;
  memset(&v26[1], 0, 0x158uLL);
  memset(&CmControlHive, 0, 0x17A8uLL);
  CmpInitSecurityCache((__int64)&CmControlHive);
  qword_140763F28 = (__int64)v26;
  v26[0] = &CmControlHive;
  v2 = HvInitializeHive((ULONG_PTR)&CmControlHive, 4u, 1, 0, a1, 0LL, 1, 0LL, 0LL, 0LL, &v21, 0LL);
  if ( v2 < 0 )
    KeBugCheckEx(0x74u, 1uLL, 1uLL, (ULONG_PTR)&CmControlHive, v2);
  qword_140763F28 = 0LL;
  v3 = a1[9];
  RtlInitUnicodeString(&DestinationString, L"current");
  ControlSet = CmpFindControlSet((ULONG_PTR)&CmControlHive, v3, (int)&DestinationString, &v21);
  v5 = ControlSet;
  if ( ControlSet == -1 )
    KeBugCheckEx(0x74u, 1uLL, 2uLL, (ULONG_PTR)&CmControlHive, (ULONG_PTR)&DestinationString);
  result = qword_140763EF8(&CmControlHive, ControlSet, v22);
  v7 = result;
  if ( result )
  {
    RtlInitUnicodeString(&DestinationString, L"control");
    SubKeyByName = CmpFindSubKeyByName((__int64)&CmControlHive, v7, (__m128i *)&DestinationString);
    if ( SubKeyByName == -1 )
      KeBugCheckEx(0x74u, 1uLL, 3uLL, v7, (ULONG_PTR)&DestinationString);
    qword_140763F00(&CmControlHive, v22);
    if ( CmControlVector[0] )
    {
      for ( i = qword_1407D6908; *(i - 3); i += 5 )
      {
        v11 = -1;
        v12 = CmpWalkPath((__int64)&CmControlHive, SubKeyByName, (const WCHAR *)*(i - 3));
        if ( v12 != -1 )
        {
          result = qword_140763EF8(&CmControlHive, v12, v22);
          v13 = result;
          if ( !result )
            return result;
          RtlInitUnicodeString(&DestinationString, (PCWSTR)*(i - 2));
          ValueByName = CmpFindValueByName((int)&CmControlHive, v13, (int)&DestinationString);
          qword_140763F00(&CmControlHive, v22);
          if ( ValueByName != -1 )
          {
            v15 = 4;
            if ( *i )
              v15 = *(_DWORD *)*i;
            result = qword_140763EF8(&CmControlHive, ValueByName, v24);
            v17 = result;
            if ( !result )
              return result;
            v11 = *(_DWORD *)(result + 4);
            if ( v11 >= 0x80000000 )
              v11 += 0x80000000;
            if ( v15 < v11 )
              v11 = v15;
            if ( v11 && !(unsigned __int8)CmpGetBootValueData(v16, result, *(i - 1), v11) )
              return qword_140763F00(&CmControlHive, v24);
            v18 = (_DWORD *)i[1];
            if ( v18 )
              *v18 = *(_DWORD *)(v17 + 12);
            qword_140763F00(&CmControlHive, v24);
          }
        }
        if ( *i )
          *(_DWORD *)*i = v11;
      }
    }
    if ( !CmpDisableFeatureOverridesInitialization )
      CmpInitializeSystemPoliciesFeatureOverrides(v9, v5);
    if ( CmDefaultLanguageIdType == 1 )
      PsDefaultSystemLocaleId = (unsigned __int16)CmpConvertLangId(
                                                    CmDefaultLanguageId,
                                                    (unsigned int)CmDefaultLanguageIdLength);
    else
      PsDefaultSystemLocaleId = 1033;
    if ( CmInstallUILanguageIdType == 1 )
    {
      v19 = CmpConvertLangId(CmInstallUILanguageId, (unsigned int)CmInstallUILanguageIdLength);
      *(_WORD *)((char *)&NlsMbCodePageTag + 3) = v19;
    }
    else
    {
      v19 = *(_WORD *)((char *)&NlsMbCodePageTag + 3);
    }
    result = CmSelectQualifiedInstallLanguage(v9, SubKeyByName, &v23, v19);
    if ( (_DWORD)result )
    {
      if ( !psMUITest )
        KeBugCheckEx(0x12Au, 1uLL, (unsigned int)result, 0LL, 0LL);
      v20 = PsDefaultSystemLocaleId;
      *(_WORD *)((char *)&NlsMbCodePageTag + 3) = PsDefaultSystemLocaleId;
    }
    else
    {
      v20 = *(_WORD *)((char *)&NlsMbCodePageTag + 3);
      if ( *(unsigned __int16 *)((char *)&NlsMbCodePageTag + 3) != v23 )
      {
        v20 = v23;
        *(_WORD *)((char *)&NlsMbCodePageTag + 3) = v23;
        CmInstallUILanguageFallbackToOOBm = 1;
      }
    }
    PsDefaultThreadLocaleId = PsDefaultSystemLocaleId;
    PsDefaultUILanguageId = v20;
    if ( !PsMachineUILanguageId )
      PsMachineUILanguageId = v20;
  }
  return result;
}
