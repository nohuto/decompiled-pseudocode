/*
 * XREFs of CmSelectQualifiedInstallLanguage @ 0x1407B06B0
 * Callers:
 *     CmGetSystemControlValues @ 0x1407B0AC0 (CmGetSystemControlValues.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     DownLevelLangIDToLanguageName @ 0x140132934 (DownLevelLangIDToLanguageName.c)
 *     DownLevelLanguageNameToLangID @ 0x140140F28 (DownLevelLanguageNameToLangID.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     _wcsicmp @ 0x14014DD0C (_wcsicmp.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     __report_rangecheckfailure @ 0x1401B1134 (__report_rangecheckfailure.c)
 *     CmpFindValueByName @ 0x1404018E8 (CmpFindValueByName.c)
 *     CmpFindSubKeyByNumber @ 0x140437590 (CmpFindSubKeyByNumber.c)
 *     CmpCopyCompressedName @ 0x14043EFB0 (CmpCopyCompressedName.c)
 *     CmpValueToData @ 0x1405606E0 (CmpValueToData.c)
 *     CmpWalkPath @ 0x140560738 (CmpWalkPath.c)
 */

__int64 __fastcall CmSelectQualifiedInstallLanguage(__int64 a1, unsigned int a2, _DWORD *a3, int a4)
{
  unsigned int v4; // r15d
  char v8; // r14
  char v9; // r12
  unsigned int v10; // ebx
  unsigned int v11; // eax
  __int64 v12; // rdi
  unsigned int ValueByName; // eax
  unsigned int v14; // edi
  unsigned int v15; // eax
  _DWORD *v16; // rax
  bool v17; // si
  __int64 v19; // r14
  unsigned int v20; // eax
  unsigned int v21; // r15d
  ULONG_PTR v22; // rax
  int v23; // eax
  unsigned __int16 v24; // cx
  unsigned int v25; // esi
  unsigned __int64 v26; // rax
  int v27; // esi
  ULONG_PTR v28; // rax
  PVOID v29; // rax
  char v30; // [rsp+30h] [rbp-D0h]
  char v31; // [rsp+31h] [rbp-CFh]
  unsigned int v32; // [rsp+34h] [rbp-CCh]
  _DWORD *v33; // [rsp+38h] [rbp-C8h]
  unsigned int Size; // [rsp+40h] [rbp-C0h] BYREF
  int Size_4; // [rsp+44h] [rbp-BCh]
  int v36; // [rsp+48h] [rbp-B8h]
  _DWORD v37[2]; // [rsp+50h] [rbp-B0h] BYREF
  _DWORD v38[2]; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v39; // [rsp+60h] [rbp-A0h] BYREF
  _DWORD v40[2]; // [rsp+68h] [rbp-98h] BYREF
  __int64 v41; // [rsp+70h] [rbp-90h] BYREF
  _DWORD v42[2]; // [rsp+78h] [rbp-88h] BYREF
  unsigned int v43; // [rsp+80h] [rbp-80h] BYREF
  _DWORD *v44; // [rsp+88h] [rbp-78h]
  UNICODE_STRING DestinationString; // [rsp+90h] [rbp-70h] BYREF
  wchar_t Str2[88]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v47[176]; // [rsp+150h] [rbp+50h] BYREF
  wchar_t Str1[88]; // [rsp+200h] [rbp+100h] BYREF

  v4 = 0;
  v38[1] = 0;
  v40[1] = 0;
  v38[0] = -1;
  v40[0] = -1;
  v42[0] = -1;
  v37[0] = -1;
  v41 = 0xFFFFFFFFLL;
  v8 = 0;
  v39 = 0xFFFFFFFFLL;
  v9 = 0;
  v44 = a3;
  v42[1] = 0;
  v37[1] = 0;
  v30 = 0;
  v31 = 0;
  v36 = 0;
  Size_4 = 0;
  memset(v47, 0, 0xAAuLL);
  memset(Str2, 0, 0xAAuLL);
  memset(Str1, 0, 0xAAuLL);
  if ( a3 )
  {
    *a3 = 0;
    if ( a4 )
    {
      v10 = 70;
      if ( !(unsigned int)DownLevelLangIDToLanguageName(a4, Str1, 85, 0) )
        a4 = 0;
    }
    else
    {
      v10 = 38;
    }
    v11 = CmpWalkPath((__int64)&CmControlHive, a2, L"MUI\\Settings");
    if ( v11 != -1 )
    {
      v12 = qword_140763EF8(&CmControlHive, v11, v40);
      if ( v12 )
      {
        RtlInitUnicodeString(&DestinationString, L"PreferredUILanguages");
        ValueByName = CmpFindValueByName((int)&CmControlHive, v12, (int)&DestinationString);
        v14 = ValueByName;
        if ( ValueByName != -1 )
        {
          v28 = qword_140763EF8(&CmControlHive, ValueByName, v38);
          if ( v28 )
          {
            if ( *(_DWORD *)(v28 + 12) == 7 )
            {
              v29 = CmpValueToData((ULONG_PTR)&CmControlHive, v14, v28, &Size, (__int64)&v39);
              if ( v29 )
              {
                if ( Size < 0xA8 )
                {
                  memmove(v47, v29, Size);
                  PsMachineUILanguageId = DownLevelLanguageNameToLangID(v47, 0);
                }
                qword_140763F00(&CmControlHive, &v39);
              }
            }
            qword_140763F00(&CmControlHive, v38);
          }
        }
        qword_140763F00(&CmControlHive, v40);
      }
    }
    v15 = CmpWalkPath((__int64)&CmControlHive, a2, L"MUI\\UILanguages");
    if ( v15 == -1 )
      return v10;
    v16 = (_DWORD *)qword_140763EF8(&CmControlHive, v15, v42);
    v33 = v16;
    if ( !v16 )
      return v10;
    v10 &= ~2u;
LABEL_12:
    v17 = 0;
    while ( 1 )
    {
      CmpFindSubKeyByNumber((__int64)&CmControlHive, v16, v4++, &v43);
      v32 = v4;
      if ( v43 == -1 )
        break;
      v19 = qword_140763EF8(&CmControlHive, v43, v37);
      v16 = v33;
      if ( v19 )
      {
        RtlInitUnicodeString(&DestinationString, L"Type");
        v20 = CmpFindValueByName((int)&CmControlHive, v19, (int)&DestinationString);
        v21 = v20;
        if ( v20 == -1 )
          goto LABEL_58;
        v22 = qword_140763EF8(&CmControlHive, v20, v38);
        if ( !v22 )
          goto LABEL_58;
        if ( *(_DWORD *)(v22 + 12) == 4 )
        {
          v23 = *(_DWORD *)CmpValueToData((ULONG_PTR)&CmControlHive, v21, v22, &Size, (__int64)&v41);
          Size_4 = v23;
          if ( (v23 & 3) != 0 )
            v17 = (v23 & 0x10) != 0;
          qword_140763F00(&CmControlHive, &v41);
        }
        qword_140763F00(&CmControlHive, v38);
        if ( !v17 )
          goto LABEL_58;
        if ( (*(_BYTE *)(v19 + 2) & 0x20) != 0 )
        {
          v24 = *(_WORD *)(v19 + 72);
          v25 = (unsigned __int16)(2 * v24);
          if ( v25 <= 0xA8 )
          {
            CmpCopyCompressedName(Str2, v25, (unsigned __int8 *)(v19 + 76), v24);
            goto LABEL_31;
          }
LABEL_58:
          qword_140763F00(&CmControlHive, v37);
          v16 = v33;
          v4 = v32;
          v8 = v30;
        }
        else
        {
          v25 = *(unsigned __int16 *)(v19 + 72);
          if ( v25 > 0xA8 )
            goto LABEL_58;
          memmove(Str2, (const void *)(v19 + 76), *(unsigned __int16 *)(v19 + 72));
LABEL_31:
          qword_140763F00(&CmControlHive, v37);
          v26 = (unsigned __int64)v25 >> 1;
          if ( v26 >= 85 )
            _report_rangecheckfailure();
          Str2[v26] = 0;
          v4 = v32;
          v8 = v30;
          v27 = (unsigned __int16)DownLevelLanguageNameToLangID(Str2, 0);
          v16 = v33;
          if ( v27 && v27 != 127 )
          {
            if ( a4 && !v31 && !wcsicmp(Str1, Str2) )
            {
              v31 = 1;
              v10 &= ~0x40u;
            }
            v8 = v30;
            v4 = v32;
            v16 = v33;
            if ( !v30 )
            {
              if ( v9 )
                goto LABEL_12;
              v36 = v27;
              if ( (Size_4 & 2) == 0 )
              {
                v8 = 1;
                v30 = 1;
                goto LABEL_12;
              }
              goto LABEL_42;
            }
            if ( !v9 && (Size_4 & 2) != 0 )
            {
              v36 = v27;
LABEL_42:
              v9 = 1;
              goto LABEL_12;
            }
          }
        }
        goto LABEL_12;
      }
      v8 = v30;
    }
    qword_140763F00(&CmControlHive, v42);
    if ( v8 || v9 )
      v10 &= ~4u;
    if ( v31 )
    {
      *v44 = a4;
    }
    else
    {
      if ( !v9 && !v8 )
        return v10;
      *v44 = v36;
    }
    return 0;
  }
  return 1LL;
}
