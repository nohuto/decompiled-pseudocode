/*
 * XREFs of LdrResSearchResource @ 0x1404FE548
 * Callers:
 *     PspLocateInPEManifest @ 0x1404FE46C (PspLocateInPEManifest.c)
 *     LdrResFindResource @ 0x140544984 (LdrResFindResource.c)
 *     SeRegisterElamCertResources @ 0x14054FB7C (SeRegisterElamCertResources.c)
 *     RtlLoadString @ 0x1406877B0 (RtlLoadString.c)
 *     LdrResFindResourceDirectory @ 0x140687C18 (LdrResFindResourceDirectory.c)
 *     AslpFileGetVersionBlock @ 0x1406C820C (AslpFileGetVersionBlock.c)
 *     KeHwPolicyLocateResource @ 0x1407B2CA4 (KeHwPolicyLocateResource.c)
 * Callees:
 *     LdrpResSearchResourceMappedFile @ 0x1400F5198 (LdrpResSearchResourceMappedFile.c)
 *     DownLevelLangIDToLanguageName @ 0x140132934 (DownLevelLangIDToLanguageName.c)
 *     DownLevelLanguageNameToLangID @ 0x140140F28 (DownLevelLanguageNameToLangID.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     LdrpResGetMappingSize @ 0x1404FEBB4 (LdrpResGetMappingSize.c)
 */

__int64 __fastcall LdrResSearchResource(
        ULONGLONG a1,
        const void *a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5,
        __int64 *a6,
        void *a7,
        __int64 a8)
{
  unsigned int v8; // ebx
  unsigned int v9; // esi
  ULONGLONG v11; // r14
  __int64 result; // rax
  bool v13; // zf
  int v14; // eax
  ULONGLONG v15; // [rsp+58h] [rbp-80h] BYREF
  int v16; // [rsp+60h] [rbp-78h]
  __int64 v17; // [rsp+68h] [rbp-70h]
  __int64 v18; // [rsp+70h] [rbp-68h]
  _BYTE v19[16]; // [rsp+78h] [rbp-60h] BYREF
  unsigned __int64 v20; // [rsp+88h] [rbp-50h]

  v8 = a4;
  v9 = a3;
  v18 = a5;
  v17 = a8;
  v11 = 0LL;
  if ( !a1 || !a2 || a7 && !a8 )
    return 3221225485LL;
  if ( (a4 & 0xC00) != 0 )
    return 3221225714LL;
  if ( (a4 & 0xF00) == 0 )
    v8 = a4 | 0x100;
  if ( (v8 & 0x2000) == 0 )
    v8 |= 0x1000u;
  if ( (v8 & 0xFFF00000) != 0 )
    return 3221225714LL;
  if ( a3 < 3 && (v8 & 2) == 0 || a3 > 4 )
    return 3221225713LL;
  if ( (v8 & 0x41) != 0 )
  {
    if ( a3 != 4 )
      return 3221225713LL;
  }
  else if ( a3 != 4 )
  {
    goto LABEL_21;
  }
  if ( (v8 & 0x41) == 0 )
    return 3221225714LL;
LABEL_21:
  if ( (v8 & 0x100) != 0 )
  {
    v13 = (v8 & 0xE00) == 0;
    goto LABEL_23;
  }
  if ( (v8 & 0x200) == 0 )
  {
    if ( (v8 & 0xC00) != 0xC00 )
      goto LABEL_28;
    return 3221225714LL;
  }
  v13 = (v8 & 0xC00) == 0;
LABEL_23:
  if ( !v13 )
    return 3221225714LL;
LABEL_28:
  if ( (v8 & 0x8000) != 0 && (~(_WORD)v8 & 0x810) != 0 || (v8 & 0x3000) == 0x3000 || (v8 & 0x18) == 0x18 )
    return 3221225714LL;
  v15 = 0LL;
  if ( (v8 & 0x20000) != 0 )
  {
    if ( (v8 & 0x400) == 0 || !a6 || !*a6 )
      return 3221225485LL;
    v15 = *a6;
  }
  if ( (v8 & 0x80000) != 0 )
  {
    if ( (v8 & 0x300) == 0 || !a6 || !*a6 )
      return 3221225485LL;
    v15 = *a6;
  }
  memmove(v19, a2, 8LL * a3);
  if ( v9 <= 3 )
  {
    if ( v9 != 3 )
      goto LABEL_56;
  }
  else
  {
    v9 = 3;
  }
  if ( v20 >= 0x10000 )
  {
    if ( *(_WORD *)v20 )
      v14 = (unsigned __int16)DownLevelLanguageNameToLangID((const void *)v20, 2);
    else
      v14 = 0;
    v16 = v14;
    v20 = (unsigned __int16)v14;
    goto LABEL_56;
  }
  if ( v20 && ((v20 & 0x3FF) == 0 || v20 == 127 || !(unsigned int)DownLevelLangIDToLanguageName(v20, 0LL, 0, 2)) )
    return 3221225485LL;
LABEL_56:
  if ( (v8 & 0x300) == 0 )
    return LdrpResSearchResourceMappedFile(v11, v15, v8, (__int64)v19, v9, (_QWORD *)v18, a6, a7, v17);
  v11 = a1;
  if ( (v8 & 0x200) != 0 && (a1 & 1) == 0 )
    v11 = a1 | 1;
  result = LdrpResGetMappingSize(v11, &v15, v8);
  if ( (int)result >= 0 || (v8 & 0x1000) == 0 )
    return LdrpResSearchResourceMappedFile(v11, v15, v8, (__int64)v19, v9, (_QWORD *)v18, a6, a7, v17);
  return result;
}
