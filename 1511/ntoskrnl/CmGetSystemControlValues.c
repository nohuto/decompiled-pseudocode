/*
 * XREFs of CmGetSystemControlValues @ 0x140754FCC
 * Callers:
 *     InitBootProcessor @ 0x140763EA0 (InitBootProcessor.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     HvInitializeHive @ 0x1403D0F54 (HvInitializeHive.c)
 *     CmpInitSecurityCache @ 0x1403D1664 (CmpInitSecurityCache.c)
 *     CmpFindValueByName @ 0x1404A8CEC (CmpFindValueByName.c)
 *     CmpFindSubKeyByName @ 0x1405239F8 (CmpFindSubKeyByName.c)
 *     CmpFindControlSet @ 0x140523A10 (CmpFindControlSet.c)
 *     CmpWalkPath @ 0x140523E0C (CmpWalkPath.c)
 *     CmSelectQualifiedInstallLanguage @ 0x14075424C (CmSelectQualifiedInstallLanguage.c)
 *     CmpGetBootValueData @ 0x140755320 (CmpGetBootValueData.c)
 *     CmpConvertLangId @ 0x1407554D8 (CmpConvertLangId.c)
 */

__int64 __fastcall CmGetSystemControlValues(_DWORD *a1)
{
  int v2; // eax
  unsigned int v3; // ebx
  unsigned int ControlSet; // eax
  __int64 result; // rax
  ULONG_PTR v6; // rbx
  unsigned int SubKeyByName; // r15d
  __int64 v8; // rcx
  __int64 *i; // rbx
  unsigned int v10; // edi
  unsigned int v11; // eax
  __int64 v12; // rsi
  unsigned int ValueByName; // esi
  unsigned __int16 v14; // ax
  __int16 v15; // cx
  unsigned int v16; // r14d
  __int64 v17; // rcx
  __int64 v18; // rsi
  _DWORD *v19; // rcx
  int v20; // [rsp+68h] [rbp-A0h] BYREF
  int v21; // [rsp+6Ch] [rbp-9Ch] BYREF
  int v22; // [rsp+70h] [rbp-98h] BYREF
  int v23; // [rsp+74h] [rbp-94h] BYREF
  UNICODE_STRING DestinationString; // [rsp+78h] [rbp-90h] BYREF
  _QWORD v25[44]; // [rsp+88h] [rbp-80h] BYREF

  v22 = -1;
  v21 = -1;
  memset(&v25[1], 0, 0x158uLL);
  memset(&CmControlHive, 0, 0x17A8uLL);
  CmpInitSecurityCache((__int64)&CmControlHive);
  v25[0] = &CmControlHive;
  qword_14071A168 = (__int64)v25;
  v2 = HvInitializeHive((ULONG_PTR)&CmControlHive, 4u, 1, 0, a1, 0LL, 1, 0LL, 0LL, 0LL, &v20, 0LL);
  if ( v2 < 0 )
    KeBugCheckEx(0x74u, 1uLL, 1uLL, (ULONG_PTR)&CmControlHive, v2);
  qword_14071A168 = 0LL;
  v3 = a1[9];
  RtlInitUnicodeString(&DestinationString, L"current");
  ControlSet = CmpFindControlSet((ULONG_PTR)&CmControlHive, v3, (__int64)&DestinationString, &v20);
  if ( ControlSet == -1 )
    KeBugCheckEx(0x74u, 1uLL, 2uLL, (ULONG_PTR)&CmControlHive, (ULONG_PTR)&DestinationString);
  result = qword_14071A138(&CmControlHive, ControlSet, &v21);
  v6 = result;
  if ( result )
  {
    RtlInitUnicodeString(&DestinationString, L"control");
    SubKeyByName = CmpFindSubKeyByName((__int64)&CmControlHive, v6, &DestinationString);
    if ( SubKeyByName == -1 )
      KeBugCheckEx(0x74u, 1uLL, 3uLL, v6, (ULONG_PTR)&DestinationString);
    qword_14071A140(&CmControlHive, &v21);
    if ( CmControlVector[0] )
    {
      for ( i = qword_14078A708; *(i - 3); i += 5 )
      {
        v10 = -1;
        v11 = CmpWalkPath((__int64)&CmControlHive, SubKeyByName, (const WCHAR *)*(i - 3));
        if ( v11 != -1 )
        {
          result = qword_14071A138(&CmControlHive, v11, &v21);
          v12 = result;
          if ( !result )
            return result;
          RtlInitUnicodeString(&DestinationString, (PCWSTR)*(i - 2));
          ValueByName = CmpFindValueByName((__int64)&CmControlHive, v12);
          qword_14071A140(&CmControlHive, &v21);
          if ( ValueByName != -1 )
          {
            v16 = 4;
            if ( *i )
              v16 = *(_DWORD *)*i;
            result = qword_14071A138(&CmControlHive, ValueByName, &v22);
            v18 = result;
            if ( !result )
              return result;
            v10 = *(_DWORD *)(result + 4);
            if ( v10 >= 0x80000000 )
              v10 += 0x80000000;
            if ( v16 < v10 )
              v10 = v16;
            if ( v10 && !(unsigned __int8)CmpGetBootValueData(v17, result, *(i - 1), v10) )
              return qword_14071A140(&CmControlHive, &v22);
            v19 = (_DWORD *)i[1];
            if ( v19 )
              *v19 = *(_DWORD *)(v18 + 12);
            qword_14071A140(&CmControlHive, &v22);
          }
        }
        if ( *i )
          *(_DWORD *)*i = v10;
      }
    }
    if ( CmDefaultLanguageIdType == 1 )
      PsDefaultSystemLocaleId = (unsigned __int16)CmpConvertLangId(
                                                    CmDefaultLanguageId,
                                                    (unsigned int)CmDefaultLanguageIdLength);
    else
      PsDefaultSystemLocaleId = 1033;
    if ( CmInstallUILanguageIdType == 1 )
    {
      v14 = CmpConvertLangId(CmInstallUILanguageId, (unsigned int)CmInstallUILanguageIdLength);
      *(_WORD *)((char *)&NlsMbCodePageTag + 3) = v14;
    }
    else
    {
      v14 = *(_WORD *)((char *)&NlsMbCodePageTag + 3);
    }
    result = CmSelectQualifiedInstallLanguage(v8, SubKeyByName, &v23, v14);
    if ( (_DWORD)result )
    {
      if ( !psMUITest )
        KeBugCheckEx(0x12Au, 1uLL, (unsigned int)result, 0LL, 0LL);
      v15 = PsDefaultSystemLocaleId;
      *(_WORD *)((char *)&NlsMbCodePageTag + 3) = PsDefaultSystemLocaleId;
    }
    else
    {
      v15 = *(_WORD *)((char *)&NlsMbCodePageTag + 3);
      if ( *(unsigned __int16 *)((char *)&NlsMbCodePageTag + 3) != v23 )
      {
        v15 = v23;
        *(_WORD *)((char *)&NlsMbCodePageTag + 3) = v23;
        CmInstallUILanguageFallbackToOOBm = 1;
      }
    }
    PsDefaultThreadLocaleId = PsDefaultSystemLocaleId;
    PsDefaultUILanguageId = v15;
    if ( !PsMachineUILanguageId )
      PsMachineUILanguageId = v15;
  }
  return result;
}
