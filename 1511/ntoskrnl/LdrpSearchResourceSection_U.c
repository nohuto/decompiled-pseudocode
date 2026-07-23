/*
 * XREFs of LdrpSearchResourceSection_U @ 0x1404A1680
 * Callers:
 *     LdrpLoadResourceFromAlternativeModule @ 0x1400DD514 (LdrpLoadResourceFromAlternativeModule.c)
 *     LdrpGetRcConfig @ 0x1400DDD5C (LdrpGetRcConfig.c)
 *     RtlFindMessage @ 0x1404A12D4 (RtlFindMessage.c)
 *     LdrFindResource_U @ 0x1405341C8 (LdrFindResource_U.c)
 *     RtlLoadString @ 0x140647DA0 (RtlLoadString.c)
 *     LdrFindResourceDirectory_U @ 0x14064852C (LdrFindResourceDirectory_U.c)
 *     LdrFindResourceEx_U @ 0x140648548 (LdrFindResourceEx_U.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x140035E48 (RtlImageDirectoryEntryToData.c)
 *     LdrpLoadResourceFromAlternativeModule @ 0x1400DD514 (LdrpLoadResourceFromAlternativeModule.c)
 *     LdrIsResItemExist @ 0x1400DDB04 (LdrIsResItemExist.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     _wcsicmp @ 0x14014437C (_wcsicmp.c)
 *     LdrpGetParentLangId @ 0x1401F9908 (LdrpGetParentLangId.c)
 *     LdrpCompareResourceNames_U @ 0x1404A20DC (LdrpCompareResourceNames_U.c)
 */

NTSTATUS __fastcall LdrpSearchResourceSection_U(char *a1, __int64 *a2, unsigned int a3, int a4, char **a5)
{
  int v5; // r15d
  int v6; // r13d
  __int64 *v7; // r12
  int v8; // eax
  unsigned __int16 v9; // r14
  char v10; // di
  unsigned int v11; // ecx
  __int64 v12; // rax
  int v13; // r9d
  int v14; // eax
  char *v15; // rdx
  unsigned __int16 v16; // di
  unsigned int *v17; // rsi
  char *v18; // rbx
  unsigned int *v19; // rax
  unsigned __int16 v20; // r13
  char *v21; // rdi
  __int64 v22; // rax
  char *v23; // rsi
  int v24; // r8d
  char v25; // di
  __int64 v26; // rax
  unsigned int *v27; // r15
  int v28; // eax
  bool v29; // cl
  int v30; // ebx
  int v31; // eax
  int v32; // eax
  int v33; // eax
  NTSTATUS result; // eax
  __int16 v35; // ax
  char *v36; // rax
  __int64 v37; // rcx
  int v38; // eax
  int v39; // eax
  int v40; // eax
  __int16 v41[2]; // [rsp+30h] [rbp-128h] BYREF
  char v42; // [rsp+34h] [rbp-124h]
  int v43; // [rsp+38h] [rbp-120h]
  int v44; // [rsp+3Ch] [rbp-11Ch]
  char v45; // [rsp+40h] [rbp-118h]
  unsigned int v46; // [rsp+44h] [rbp-114h]
  ULONG Size; // [rsp+48h] [rbp-110h] BYREF
  int v48; // [rsp+4Ch] [rbp-10Ch]
  int v49; // [rsp+50h] [rbp-108h]
  char *v50; // [rsp+58h] [rbp-100h]
  char **v51; // [rsp+60h] [rbp-F8h]
  __int64 v52; // [rsp+68h] [rbp-F0h] BYREF
  int v53; // [rsp+70h] [rbp-E8h]
  void *v54; // [rsp+78h] [rbp-E0h]
  BOOL v55; // [rsp+80h] [rbp-D8h]
  char *v56; // [rsp+88h] [rbp-D0h]
  __int16 v57; // [rsp+90h] [rbp-C8h]
  char v58; // [rsp+94h] [rbp-C4h]
  bool v59; // [rsp+95h] [rbp-C3h]
  char *v60; // [rsp+98h] [rbp-C0h]
  char *v61; // [rsp+A0h] [rbp-B8h]
  char *v62; // [rsp+A8h] [rbp-B0h]
  unsigned int v63; // [rsp+B0h] [rbp-A8h]
  unsigned int *v64; // [rsp+B8h] [rbp-A0h]
  unsigned int *v65; // [rsp+C0h] [rbp-98h]
  unsigned int *v66; // [rsp+C8h] [rbp-90h]
  int v67; // [rsp+D0h] [rbp-88h]
  __int64 *v68; // [rsp+D8h] [rbp-80h]
  __int64 *v69; // [rsp+E0h] [rbp-78h]
  char *v70; // [rsp+E8h] [rbp-70h]
  _QWORD v71[2]; // [rsp+F0h] [rbp-68h] BYREF
  __int64 v72; // [rsp+100h] [rbp-58h]
  __int64 v73; // [rsp+108h] [rbp-50h]

  v5 = a4;
  v49 = a4;
  v6 = a3;
  v63 = a3;
  v7 = a2;
  v54 = a1;
  v51 = a5;
  v68 = a2;
  LOBYTE(v55) = 0;
  v45 = 1;
  if ( a3 < 3 && (a4 & 2) == 0 || a3 > 4 )
    return -1073741583;
  if ( (a4 & 0x41) != 0 )
  {
    if ( a3 != 4 )
      return -1073741583;
    goto LABEL_5;
  }
  if ( a3 == 4 )
  {
LABEL_5:
    if ( (a4 & 0x41) != 0 )
      goto LABEL_6;
    return -1073741583;
  }
LABEL_6:
  v8 = a3;
  if ( a3 == 4 )
    v8 = 3;
  v46 = v8;
  v48 = v8;
  LOWORD(v44) = 0;
  v9 = 0;
  v41[0] = 0;
  if ( (unsigned __int64)a2 - 1 > 0xFFFFFFFFFFFFFFFDuLL
    || (unsigned __int64)(a1 - 1) > 0xFFFFFFFFFFFFFFFDuLL
    || (unsigned __int64)a5 - 1 > 0xFFFFFFFFFFFFFFFDuLL )
  {
    return -1073741811;
  }
  v36 = (char *)RtlImageDirectoryEntryToData(a1, 1u, 2u, &Size);
  v61 = v36;
  if ( !v36 )
    return -1073741687;
  v18 = v36;
  v56 = v36;
  v52 = 61166LL;
  v53 = 0;
  v23 = 0LL;
  v50 = 0LL;
  v62 = 0LL;
  v60 = 0LL;
  v70 = 0LL;
  if ( (~(_BYTE)v5 & 0x10) == 0 || PnPBootDriversInitialized != 1 || v46 - 1 > 2 )
    goto LABEL_102;
  if ( v46 == 3 )
    v24 = *((unsigned __int16 *)v7 + 8);
  else
    v24 = 0;
  v44 = v24;
  v57 = v24;
  v37 = *v7;
  if ( ((*v7 - 16) & 0xFFFFFFFFFFFFFFF7uLL) != 0 )
  {
    if ( (v37 & 0xFFFFFFFFFFFF0000uLL) == 0 || wcsicmp((const wchar_t *)v37, L"MUI") )
      goto LABEL_101;
    LOWORD(v24) = v44;
  }
  if ( (~(_BYTE)v5 & 8) == 0 || (v24 & 0xF3FF) != 0 || (_WORD)v24 == 3072 )
  {
LABEL_101:
    v5 |= LdrIsResItemExist(v54, v7);
    v49 = v5;
LABEL_102:
    LOWORD(v24) = v44;
    goto LABEL_103;
  }
  v5 |= 0x10u;
  v49 = v5;
LABEL_103:
  if ( PnPBootDriversInitialized != 1 || (~v5 & 0x20000) == 0 || (~v5 & 0x80000) == 0 || (~(_BYTE)v5 & 0x10) == 0 )
  {
    v10 = 0;
    v42 = 0;
    goto LABEL_31;
  }
  v10 = 1;
  v42 = 1;
  v71[0] = *v7;
  v11 = v46;
  if ( v46 < 2 )
    v12 = 0LL;
  else
    v12 = v7[1];
  v71[1] = v12;
  if ( v6 == 4 )
    v73 = v7[3];
LABEL_14:
  v13 = v48;
  if ( !v18 )
  {
    v15 = v60;
LABEL_58:
    if ( v23 && (v5 & 2) == 0 )
    {
      *v51 = v23;
LABEL_61:
      result = 0;
LABEL_62:
      v43 = result;
      return result;
    }
    if ( v18 && (v5 & 2) != 0 )
    {
      *v51 = v18;
      goto LABEL_61;
    }
    goto LABEL_65;
  }
  v14 = v48;
  v13 = v48 - 1;
  v48 = v13;
  v67 = v13;
  v15 = v60;
  if ( !v14 )
    goto LABEL_58;
  if ( !v13 )
  {
    if ( v11 == 3 )
      v15 = v18;
    v60 = v15;
    v70 = v15;
  }
  if ( v15 )
  {
    v24 = *((unsigned __int16 *)v68 + 8);
    v44 = v24;
    v57 = v24;
    v29 = (v24 & 0x3FF) == 0;
    v55 = v29;
    v59 = v29;
LABEL_40:
    v30 = v53;
    while ( 1 )
    {
      v31 = v30++;
      v53 = v30;
      if ( v31 )
      {
        v32 = v31 - 1;
        if ( v32 )
        {
          v33 = v32 - 1;
          if ( v33 )
          {
            v38 = v33 - 1;
            if ( !v38 )
            {
              if ( *(_WORD *)((char *)&NlsMbCodePageTag + 3) == PsMachineUILanguageId )
              {
LABEL_140:
                v9 = v52;
              }
              else
              {
                if ( v10 )
                {
                  v72 = *(unsigned __int16 *)((char *)&NlsMbCodePageTag + 3);
                  result = LdrpLoadResourceFromAlternativeModule(v54, (__int64)v71, v6, v5, v51);
                  v43 = result;
                  if ( result >= 0 )
                    return result;
                }
                v9 = *(_WORD *)((char *)&NlsMbCodePageTag + 3);
              }
LABEL_142:
              v41[0] = v9;
              goto LABEL_51;
            }
            v39 = v38 - 1;
            if ( v39 )
            {
              v40 = v39 - 1;
              if ( v40 )
              {
                if ( v40 != 1 )
                  goto LABEL_154;
                v5 |= 0x20u;
                v49 = v5;
              }
              else
              {
                v9 = 1033;
                v41[0] = 1033;
                if ( PsDefaultSystemLocaleId == 1033
                  || *(_WORD *)((char *)&NlsMbCodePageTag + 3) == 1033
                  || PsMachineUILanguageId == 1033 )
                {
                  goto LABEL_140;
                }
                if ( v10 )
                {
                  v72 = 1033LL;
                  result = LdrpLoadResourceFromAlternativeModule(v54, (__int64)v71, v6, v5, v51);
                  v43 = result;
                  if ( result >= 0 )
                    return result;
                }
              }
            }
            else
            {
              v9 = PsDefaultSystemLocaleId;
              v41[0] = PsDefaultSystemLocaleId;
              if ( (_WORD)PsDefaultSystemLocaleId == *(_WORD *)((char *)&NlsMbCodePageTag + 3)
                || (_WORD)PsDefaultSystemLocaleId == PsMachineUILanguageId )
              {
                goto LABEL_140;
              }
              if ( v10 )
              {
                v72 = (unsigned __int16)PsDefaultSystemLocaleId;
                result = LdrpLoadResourceFromAlternativeModule(v54, (__int64)v71, v6, v5, v51);
                v43 = result;
                if ( result >= 0 )
                  return result;
              }
            }
          }
          else
          {
            if ( !v29 )
              goto LABEL_154;
            if ( v10 && PsMachineUILanguageId )
            {
              v72 = (unsigned __int16)PsMachineUILanguageId;
              result = LdrpLoadResourceFromAlternativeModule(v54, (__int64)v71, v6, v5, v51);
              v43 = result;
              if ( result >= 0 )
                return result;
              v9 = PsMachineUILanguageId;
              goto LABEL_142;
            }
            v35 = v52;
            if ( PsMachineUILanguageId )
              v35 = PsMachineUILanguageId;
            v9 = v35;
            v41[0] = v35;
          }
        }
        else
        {
          if ( v9 )
          {
            if ( (int)LdrpGetParentLangId(v9, v41) >= 0 )
            {
              v9 = v41[0];
            }
            else
            {
              v9 = 0;
              v41[0] = 0;
            }
          }
          if ( v10 )
          {
            if ( !v9 )
              goto LABEL_51;
            v72 = v9;
            result = LdrpLoadResourceFromAlternativeModule(v54, (__int64)v71, v6, v5, v51);
            v43 = result;
            if ( result >= 0 )
              return result;
          }
          if ( v9 )
            v53 = --v30;
        }
      }
      else
      {
        if ( v10 && (_WORD)v24 )
        {
          v72 = (unsigned __int16)v24;
          result = LdrpLoadResourceFromAlternativeModule(v54, (__int64)v71, v6, v5, v51);
          v43 = result;
          if ( result >= 0 )
            return result;
          LOWORD(v24) = v44;
        }
        v9 = v24;
        v41[0] = v24;
      }
LABEL_51:
      if ( (~(_BYTE)v5 & 0x20) == 0 || v9 != v52 )
      {
        v52 = v9;
        v7 = &v52;
        v69 = &v52;
        v15 = v60;
        v18 = v60;
        v56 = v60;
        v13 = v48;
        break;
      }
      LOWORD(v24) = v44;
      v29 = v55;
    }
  }
  v16 = *((_WORD *)v18 + 6);
  LOWORD(Size) = v16;
  v17 = (unsigned int *)(v18 + 16);
  v66 = (unsigned int *)(v18 + 16);
  if ( (*v7 & 0xFFFFFFFFFFFF0000uLL) == 0 )
  {
    v17 += 2 * v16;
    v66 = v17;
    v16 = *((_WORD *)v18 + 7);
    LOWORD(Size) = v16;
  }
  if ( v16 )
  {
    if ( v15 && (v5 & 0x20) != 0 )
    {
      v18 = 0LL;
      v56 = 0LL;
      v52 = *v17;
      v23 = &v61[v17[1]];
      v62 = v23;
      v10 = v42;
      LOWORD(v24) = v44;
      v11 = v46;
      goto LABEL_58;
    }
    v18 = 0LL;
    v56 = 0LL;
    v19 = &v17[2 * v16 - 2];
    v65 = v19;
    while ( 1 )
    {
      while ( 1 )
      {
        if ( v17 > v19 )
          goto LABEL_29;
        v20 = v16 >> 1;
        if ( !(v16 >> 1) )
        {
          if ( !v16 )
            goto LABEL_29;
          v21 = v61;
          if ( (unsigned int)LdrpCompareResourceNames_U(*v7, v61, v17) )
            goto LABEL_29;
          v22 = v17[1];
          if ( (int)v22 < 0 )
            goto LABEL_28;
          v23 = &v21[v22];
          goto LABEL_84;
        }
        v64 = v17;
        v25 = v16 & 1;
        if ( v25 )
          v26 = v20;
        else
          v26 = v20 - 1;
        v27 = &v17[2 * v26];
        v64 = v27;
        v28 = LdrpCompareResourceNames_U(*v7, v61, v27);
        if ( !v28 )
        {
          v22 = v27[1];
          if ( (int)v22 < 0 )
          {
            v21 = v61;
LABEL_28:
            v18 = &v21[v22 & 0xFFFFFFFF7FFFFFFFuLL];
            v56 = v18;
LABEL_29:
            v23 = v50;
            goto LABEL_30;
          }
          v18 = 0LL;
          v56 = 0LL;
          v23 = &v61[v22];
LABEL_84:
          v50 = v23;
          v62 = v23;
LABEL_30:
          v69 = ++v7;
          v5 = v49;
          v6 = v63;
          v10 = v42;
          LOWORD(v24) = v44;
LABEL_31:
          v11 = v46;
          goto LABEL_14;
        }
        if ( v28 < 0 )
          break;
        v17 = v27 + 2;
        v66 = v27 + 2;
        LOWORD(Size) = v20;
        v19 = v65;
LABEL_89:
        v16 = v20;
      }
      v19 = v27 - 2;
      v65 = v27 - 2;
      if ( v25 )
      {
        LOWORD(Size) = v20;
        goto LABEL_89;
      }
      v16 = v20 - 1;
      LOWORD(Size) = v20 - 1;
    }
  }
  v56 = 0LL;
  v45 = 0;
  v58 = 0;
  v10 = v42;
  LOWORD(v24) = v44;
  v11 = v46;
LABEL_65:
  if ( v11 - v13 == 1 )
  {
    result = -1073741686;
    goto LABEL_62;
  }
  if ( v11 - v13 == 2 )
  {
    result = -1073741685;
    goto LABEL_155;
  }
  if ( v11 - v13 != 3 )
  {
    result = -1073741811;
    goto LABEL_62;
  }
  result = -1073741308;
  v43 = -1073741308;
  if ( v15 )
  {
    v50 = 0LL;
    v62 = 0LL;
    if ( v45 )
    {
      v29 = v55;
      goto LABEL_40;
    }
LABEL_154:
    result = -1073741308;
LABEL_155:
    v43 = result;
  }
  return result;
}
