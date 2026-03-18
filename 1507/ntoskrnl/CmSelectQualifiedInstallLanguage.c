/*
 * XREFs of CmSelectQualifiedInstallLanguage @ 0x1407BB6E8
 * Callers:
 *     CmGetSystemControlValues @ 0x1407BBAF0 (CmGetSystemControlValues.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     DownLevelLangIDToLanguageName @ 0x14014FD60 (DownLevelLangIDToLanguageName.c)
 *     DownLevelLanguageNameToLangID @ 0x14015EA78 (DownLevelLanguageNameToLangID.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     _wcsicmp @ 0x1401723FC (_wcsicmp.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     memset @ 0x140195A80 (memset.c)
 *     __report_rangecheckfailure @ 0x1401DC4F0 (__report_rangecheckfailure.c)
 *     CmpFindValueByName @ 0x140429D14 (CmpFindValueByName.c)
 *     CmpCopyCompressedName @ 0x14042B374 (CmpCopyCompressedName.c)
 *     CmpFindSubKeyByNumber @ 0x1404C7350 (CmpFindSubKeyByNumber.c)
 *     CmpValueToData @ 0x14059110C (CmpValueToData.c)
 *     CmpWalkPath @ 0x140591164 (CmpWalkPath.c)
 */

__int64 __fastcall CmSelectQualifiedInstallLanguage(__int64 a1, unsigned int a2, _DWORD *a3, int a4)
{
  unsigned int v4; // r15d
  int v6; // r13d
  char v7; // r14
  char v8; // r12
  unsigned int v9; // ebx
  unsigned int v10; // eax
  __int64 v11; // rdi
  unsigned int ValueByName; // eax
  unsigned int v13; // edi
  unsigned int v14; // eax
  _DWORD *v15; // rax
  bool v16; // si
  __int64 v18; // r14
  unsigned int v19; // eax
  unsigned int v20; // r15d
  ULONG_PTR v21; // rax
  int v22; // eax
  unsigned __int16 v23; // cx
  unsigned int v24; // esi
  unsigned __int64 v25; // rax
  int v26; // esi
  ULONG_PTR v27; // rax
  PVOID v28; // rax
  char v29; // [rsp+30h] [rbp-D0h]
  char v30; // [rsp+31h] [rbp-CFh]
  unsigned int v31; // [rsp+34h] [rbp-CCh]
  _DWORD *v32; // [rsp+38h] [rbp-C8h]
  int v33; // [rsp+40h] [rbp-C0h] BYREF
  int v34; // [rsp+44h] [rbp-BCh] BYREF
  int v35; // [rsp+48h] [rbp-B8h]
  int v36; // [rsp+4Ch] [rbp-B4h]
  unsigned int Size; // [rsp+50h] [rbp-B0h] BYREF
  int Size_4; // [rsp+54h] [rbp-ACh] BYREF
  int v39; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v40; // [rsp+5Ch] [rbp-A4h] BYREF
  unsigned int v41; // [rsp+64h] [rbp-9Ch] BYREF
  _DWORD *v42; // [rsp+68h] [rbp-98h]
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp-90h] BYREF
  wchar_t Str2[88]; // [rsp+80h] [rbp-80h] BYREF
  _WORD v45[88]; // [rsp+130h] [rbp+30h] BYREF
  wchar_t Str1[88]; // [rsp+1E0h] [rbp+E0h] BYREF

  v4 = 0;
  v29 = 0;
  v30 = 0;
  v34 = -1;
  Size_4 = -1;
  v39 = -1;
  v33 = -1;
  v6 = a4;
  v7 = 0;
  v40 = -1LL;
  v8 = 0;
  v42 = a3;
  v35 = 0;
  v36 = 0;
  memset(v45, 0, 170);
  memset(Str2, 0, 170);
  memset(Str1, 0, 170);
  if ( a3 )
  {
    *a3 = 0;
    if ( a4 )
    {
      v9 = 70;
      if ( !(unsigned int)DownLevelLangIDToLanguageName(a4, (char *)Str1, 85, 0) )
        v6 = 0;
    }
    else
    {
      v9 = 38;
    }
    v10 = CmpWalkPath((__int64)&CmControlHive, a2, L"MUI\\Settings");
    if ( v10 != -1 )
    {
      v11 = qword_14080E168(&CmControlHive, v10, &Size_4);
      if ( v11 )
      {
        RtlInitUnicodeString(&DestinationString, L"PreferredUILanguages");
        ValueByName = CmpFindValueByName((int)&CmControlHive, v11, (int)&DestinationString);
        v13 = ValueByName;
        if ( ValueByName != -1 )
        {
          v27 = qword_14080E168(&CmControlHive, ValueByName, &v34);
          if ( v27 )
          {
            if ( *(_DWORD *)(v27 + 12) == 7 )
            {
              v28 = CmpValueToData((__int64)&CmControlHive, v13, v27, &Size, (__int64)&v40);
              if ( v28 )
              {
                if ( Size < 0xA8 )
                {
                  memmove(v45, v28, Size);
                  PsMachineUILanguageId = DownLevelLanguageNameToLangID(v45, 0);
                }
                qword_14080E170(&CmControlHive, &v40);
              }
            }
            qword_14080E170(&CmControlHive, &v34);
          }
        }
        qword_14080E170(&CmControlHive, &Size_4);
      }
    }
    v14 = CmpWalkPath((__int64)&CmControlHive, a2, L"MUI\\UILanguages");
    if ( v14 == -1 )
      return v9;
    v15 = (_DWORD *)qword_14080E168(&CmControlHive, v14, &v39);
    v32 = v15;
    if ( !v15 )
      return v9;
    v9 &= ~2u;
LABEL_12:
    v16 = 0;
    while ( 1 )
    {
      CmpFindSubKeyByNumber((__int64)&CmControlHive, v15, v4++, &v41);
      v31 = v4;
      if ( v41 == -1 )
        break;
      v18 = qword_14080E168(&CmControlHive, v41, &v33);
      v15 = v32;
      if ( v18 )
      {
        RtlInitUnicodeString(&DestinationString, L"Type");
        v19 = CmpFindValueByName((int)&CmControlHive, v18, (int)&DestinationString);
        v20 = v19;
        if ( v19 == -1 )
          goto LABEL_58;
        v21 = qword_14080E168(&CmControlHive, v19, &v34);
        if ( !v21 )
          goto LABEL_58;
        if ( *(_DWORD *)(v21 + 12) == 4 )
        {
          v22 = *(_DWORD *)CmpValueToData((__int64)&CmControlHive, v20, v21, &Size, (__int64)&v40 + 4);
          v36 = v22;
          if ( (v22 & 3) != 0 )
            v16 = (v22 & 0x10) != 0;
          qword_14080E170(&CmControlHive, (char *)&v40 + 4);
        }
        qword_14080E170(&CmControlHive, &v34);
        if ( !v16 )
          goto LABEL_58;
        if ( (*(_BYTE *)(v18 + 2) & 0x20) != 0 )
        {
          v23 = *(_WORD *)(v18 + 72);
          v24 = (unsigned __int16)(2 * v23);
          if ( v24 <= 0xA8 )
          {
            CmpCopyCompressedName(Str2, v24, (unsigned __int8 *)(v18 + 76), v23);
            goto LABEL_31;
          }
LABEL_58:
          qword_14080E170(&CmControlHive, &v33);
          v15 = v32;
          v4 = v31;
          v7 = v29;
        }
        else
        {
          v24 = *(unsigned __int16 *)(v18 + 72);
          if ( v24 > 0xA8 )
            goto LABEL_58;
          memmove(Str2, (const void *)(v18 + 76), *(unsigned __int16 *)(v18 + 72));
LABEL_31:
          qword_14080E170(&CmControlHive, &v33);
          v25 = (unsigned __int64)v24 >> 1;
          if ( v25 >= 85 )
            _report_rangecheckfailure();
          Str2[v25] = 0;
          v4 = v31;
          v7 = v29;
          v26 = (unsigned __int16)DownLevelLanguageNameToLangID(Str2, 0);
          v15 = v32;
          if ( v26 && v26 != 127 )
          {
            if ( v6 && !v30 && !wcsicmp(Str1, Str2) )
            {
              v30 = 1;
              v9 &= ~0x40u;
            }
            v7 = v29;
            v4 = v31;
            v15 = v32;
            if ( !v29 )
            {
              if ( v8 )
                goto LABEL_12;
              v35 = v26;
              if ( (v36 & 2) == 0 )
              {
                v7 = 1;
                v29 = 1;
                goto LABEL_12;
              }
              goto LABEL_42;
            }
            if ( !v8 && (v36 & 2) != 0 )
            {
              v35 = v26;
LABEL_42:
              v8 = 1;
              goto LABEL_12;
            }
          }
        }
        goto LABEL_12;
      }
      v7 = v29;
    }
    qword_14080E170(&CmControlHive, &v39);
    if ( v7 || v8 )
      v9 &= ~4u;
    if ( v30 )
    {
      *v42 = v6;
    }
    else
    {
      if ( !v8 && !v7 )
        return v9;
      *v42 = v35;
    }
    return 0;
  }
  return 1LL;
}
