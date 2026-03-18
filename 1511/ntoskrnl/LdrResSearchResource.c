/*
 * XREFs of LdrResSearchResource @ 0x140464D10
 * Callers:
 *     PspLocateInPEManifest @ 0x140464C34 (PspLocateInPEManifest.c)
 *     LdrResFindResource @ 0x14050A6BC (LdrResFindResource.c)
 *     SeRegisterElamCertResources @ 0x140521C08 (SeRegisterElamCertResources.c)
 *     RtlLoadString @ 0x140647DA0 (RtlLoadString.c)
 *     LdrResFindResourceDirectory @ 0x140648570 (LdrResFindResourceDirectory.c)
 *     AslpFileGetVersionBlock @ 0x140682514 (AslpFileGetVersionBlock.c)
 *     KeHwPolicyLocateResource @ 0x140767F04 (KeHwPolicyLocateResource.c)
 * Callees:
 *     LdrpResSearchResourceMappedFile @ 0x14009B520 (LdrpResSearchResourceMappedFile.c)
 *     DownLevelLangIDToLanguageName @ 0x140127874 (DownLevelLangIDToLanguageName.c)
 *     DownLevelLanguageNameToLangID @ 0x14013B11C (DownLevelLanguageNameToLangID.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     LdrpResGetMappingSize @ 0x1404652AC (LdrpResGetMappingSize.c)
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
  bool v12; // zf
  __int64 result; // rax
  int v14; // eax
  ULONGLONG v15; // [rsp+50h] [rbp-88h] BYREF
  int v16; // [rsp+58h] [rbp-80h]
  int v17; // [rsp+5Ch] [rbp-7Ch]
  __int64 v18; // [rsp+60h] [rbp-78h]
  __int64 v19; // [rsp+68h] [rbp-70h]
  _BYTE v20[16]; // [rsp+70h] [rbp-68h] BYREF
  unsigned __int64 v21; // [rsp+80h] [rbp-58h]

  v8 = a4;
  v9 = a3;
  v19 = a5;
  v18 = a8;
  v11 = 0LL;
  if ( !a1 || !a2 || a7 && !a8 )
    return 3221225485LL;
  if ( (a4 & 0xC00) != 0 )
    return 3221225714LL;
  if ( (a4 & 0xF00) == 0 )
    v8 = a4 | 0x100;
  if ( (v8 & 0x2000) == 0 )
    v8 |= 0x1000u;
  if ( (v8 & 0xFFF80000) != 0 )
    return 3221225714LL;
  if ( a3 < 3 && (v8 & 2) == 0 || a3 > 4 )
    return 3221225713LL;
  if ( (v8 & 0x41) == 0 )
  {
    if ( a3 != 4 )
      goto LABEL_14;
    goto LABEL_40;
  }
  if ( a3 != 4 )
    return 3221225713LL;
LABEL_40:
  if ( (v8 & 0x41) == 0 )
    return 3221225714LL;
LABEL_14:
  if ( (v8 & 0x100) != 0 )
  {
    v12 = (v8 & 0xE00) == 0;
    goto LABEL_16;
  }
  if ( (v8 & 0x200) == 0 )
  {
    if ( (v8 & 0xC00) != 0xC00 )
      goto LABEL_17;
    return 3221225714LL;
  }
  v12 = (v8 & 0xC00) == 0;
LABEL_16:
  if ( !v12 )
    return 3221225714LL;
LABEL_17:
  if ( (~v8 & 0x810) != 0 && (v8 & 0x8000) != 0 || (v8 & 0x3000) == 0x3000 || (v8 & 0x18) == 0x18 )
    return 3221225714LL;
  v15 = 0LL;
  if ( (v8 & 0x20000) != 0 )
  {
    if ( (v8 & 0x400) == 0 || !a6 || !*a6 )
    {
      result = 3221225485LL;
      v17 = -1073741811;
      return result;
    }
    v15 = *a6;
  }
  memmove(v20, a2, 8LL * a3);
  if ( v9 > 3 )
  {
    v9 = 3;
  }
  else if ( v9 != 3 )
  {
    goto LABEL_27;
  }
  if ( v21 >= 0x10000 )
  {
    if ( *(_WORD *)v21 )
      v14 = (unsigned __int16)DownLevelLanguageNameToLangID((const void *)v21, 2);
    else
      v14 = 0;
    v16 = v14;
    v21 = (unsigned __int16)v14;
    goto LABEL_27;
  }
  if ( v21 && ((v21 & 0x3FF) == 0 || v21 == 127 || !(unsigned int)DownLevelLangIDToLanguageName(v21, 0LL, 0, 2)) )
    return 3221225485LL;
LABEL_27:
  if ( (v8 & 0x300) == 0 )
    return LdrpResSearchResourceMappedFile(v11, v15, v8, (__int64)v20, v9, (_QWORD *)v19, a6, a7, v18);
  v11 = a1;
  if ( (v8 & 0x200) != 0 && (a1 & 1) == 0 )
    v11 = a1 | 1;
  result = LdrpResGetMappingSize(v11, &v15, v8);
  if ( (int)result >= 0 || (v8 & 0x1000) == 0 )
    return LdrpResSearchResourceMappedFile(v11, v15, v8, (__int64)v20, v9, (_QWORD *)v19, a6, a7, v18);
  return result;
}
