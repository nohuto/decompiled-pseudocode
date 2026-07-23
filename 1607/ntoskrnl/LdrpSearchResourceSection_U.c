/*
 * XREFs of LdrpSearchResourceSection_U @ 0x1404FFD34
 * Callers:
 *     LdrpLoadResourceFromAlternativeModule @ 0x1400F7EA4 (LdrpLoadResourceFromAlternativeModule.c)
 *     LdrpGetRcConfig @ 0x1400F88F4 (LdrpGetRcConfig.c)
 *     RtlFindMessage @ 0x1404FF964 (RtlFindMessage.c)
 *     LdrFindResource_U @ 0x140564BFC (LdrFindResource_U.c)
 *     LdrFindResourceDirectory_U @ 0x140686314 (LdrFindResourceDirectory_U.c)
 *     LdrFindResourceEx_U @ 0x140686330 (LdrFindResourceEx_U.c)
 *     RtlLoadString @ 0x1406877B0 (RtlLoadString.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x14007BB6C (RtlImageDirectoryEntryToData.c)
 *     LdrpLoadResourceFromAlternativeModule @ 0x1400F7EA4 (LdrpLoadResourceFromAlternativeModule.c)
 *     LdrIsResItemExist @ 0x1400F869C (LdrIsResItemExist.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     _wcsicmp @ 0x14014DD0C (_wcsicmp.c)
 *     LdrpCompareResourceNamesWithValidation @ 0x1402113F8 (LdrpCompareResourceNamesWithValidation.c)
 *     LdrpGetParentLangId @ 0x140213A60 (LdrpGetParentLangId.c)
 */

NTSTATUS __fastcall LdrpSearchResourceSection_U(char *a1, __int64 *a2, unsigned int a3, int a4, __int64 *a5)
{
  int v5; // r12d
  int v6; // r14d
  __int64 *v7; // r15
  NTSTATUS result; // eax
  int v9; // eax
  int v10; // r13d
  unsigned __int16 v11; // si
  char *v12; // rax
  char *v13; // rbx
  __int64 v14; // rcx
  __int64 v15; // rcx
  int v16; // eax
  char v17; // di
  __int64 v18; // rdx
  __int64 v19; // rax
  int v20; // r9d
  int v21; // eax
  char *v22; // r8
  int v23; // ebx
  int v24; // eax
  int v25; // eax
  int v26; // eax
  int v27; // eax
  int v28; // eax
  int v29; // eax
  __int16 v30; // ax
  unsigned __int16 v31; // di
  int *v32; // r14
  unsigned int *v33; // rax
  unsigned __int16 v34; // r12
  char v35; // di
  __int64 v36; // rax
  unsigned int *v37; // r13
  int v38; // eax
  __int64 v39; // rax
  __int64 v40; // rdi
  __int16 v41[2]; // [rsp+30h] [rbp-118h] BYREF
  char v42; // [rsp+34h] [rbp-114h]
  int v43; // [rsp+38h] [rbp-110h]
  char v44; // [rsp+3Ch] [rbp-10Ch]
  unsigned int v45; // [rsp+40h] [rbp-108h]
  ULONG Size; // [rsp+44h] [rbp-104h] BYREF
  __int64 v47; // [rsp+48h] [rbp-100h]
  int v48; // [rsp+50h] [rbp-F8h]
  int v49; // [rsp+54h] [rbp-F4h]
  int v50; // [rsp+58h] [rbp-F0h]
  __int64 *v51; // [rsp+60h] [rbp-E8h]
  __int64 v52; // [rsp+68h] [rbp-E0h] BYREF
  char v53[4]; // [rsp+70h] [rbp-D8h] BYREF
  __int16 v54; // [rsp+74h] [rbp-D4h]
  int v55; // [rsp+78h] [rbp-D0h]
  BOOL v56; // [rsp+7Ch] [rbp-CCh]
  unsigned int v57; // [rsp+80h] [rbp-C8h]
  bool v58; // [rsp+84h] [rbp-C4h]
  char v59; // [rsp+85h] [rbp-C3h]
  char v60[2]; // [rsp+86h] [rbp-C2h] BYREF
  void *v61; // [rsp+88h] [rbp-C0h]
  char *v62; // [rsp+90h] [rbp-B8h]
  char *v63; // [rsp+98h] [rbp-B0h]
  __int64 v64; // [rsp+A0h] [rbp-A8h]
  __int64 v65; // [rsp+A8h] [rbp-A0h]
  int *v66; // [rsp+B0h] [rbp-98h]
  int *v67; // [rsp+B8h] [rbp-90h]
  unsigned int *v68; // [rsp+C0h] [rbp-88h]
  int v69; // [rsp+C8h] [rbp-80h]
  char *v70; // [rsp+D0h] [rbp-78h]
  __int64 *v71; // [rsp+D8h] [rbp-70h]
  __int64 *v72; // [rsp+E0h] [rbp-68h]
  _QWORD v73[2]; // [rsp+E8h] [rbp-60h] BYREF
  __int64 v74; // [rsp+F8h] [rbp-50h]
  __int64 v75; // [rsp+100h] [rbp-48h]

  v5 = a4;
  v49 = a4;
  v6 = a3;
  v57 = a3;
  v7 = a2;
  v61 = a1;
  v51 = a5;
  v71 = a2;
  LOBYTE(v56) = 0;
  v44 = 1;
  if ( a3 < 3 && (a4 & 2) == 0 || a3 > 4 )
    return -1073741583;
  if ( (a4 & 0x41) != 0 )
  {
    if ( a3 != 4 )
      return -1073741583;
  }
  else if ( a3 != 4 )
  {
    goto LABEL_10;
  }
  if ( (a4 & 0x41) == 0 )
    return -1073741583;
LABEL_10:
  v9 = a3;
  if ( a3 == 4 )
    v9 = 3;
  v45 = v9;
  v48 = v9;
  LOWORD(v10) = 0;
  v50 = 0;
  v11 = 0;
  v41[0] = 0;
  if ( (unsigned __int64)a2 - 1 > 0xFFFFFFFFFFFFFFFDuLL
    || (unsigned __int64)(a1 - 1) > 0xFFFFFFFFFFFFFFFDuLL
    || (unsigned __int64)a5 - 1 > 0xFFFFFFFFFFFFFFFDuLL )
  {
    return -1073741811;
  }
  v12 = (char *)RtlImageDirectoryEntryToData(a1, 1u, 2u, &Size);
  v64 = (__int64)v12;
  if ( !v12 )
    return -1073741687;
  v13 = v12;
  v62 = v12;
  v52 = 61166LL;
  v55 = 0;
  v14 = 0LL;
  v47 = 0LL;
  v65 = 0LL;
  v63 = 0LL;
  v70 = 0LL;
  if ( (~(_BYTE)v5 & 0x10) != 0 && v45 - 1 <= 2 )
  {
    if ( PnPBootDriversInitialized != 1 )
    {
LABEL_41:
      v17 = 0;
      v42 = 0;
      goto LABEL_42;
    }
    if ( v45 == 3 )
      v10 = *((unsigned __int16 *)v7 + 8);
    else
      v10 = 0;
    v50 = v10;
    v54 = v10;
    v15 = *v7;
    if ( ((*v7 - 16) & 0xFFFFFFFFFFFFFFF7uLL) != 0
      && ((v15 & 0xFFFFFFFFFFFF0000uLL) == 0 || wcsicmp((const wchar_t *)v15, L"MUI"))
      || (~(_BYTE)v5 & 8) == 0
      || (v10 & 0xF3FF) != 0
      || (_WORD)v10 == 3072 )
    {
      v5 |= LdrIsResItemExist(v61, v7);
    }
    else
    {
      v5 |= 0x10u;
    }
    v14 = v47;
    v49 = v5;
  }
  if ( PnPBootDriversInitialized != 1 )
    goto LABEL_41;
  v16 = ~v5;
  if ( (~v5 & 0x80000) == 0 || (v16 & 0x20000) == 0 || (v16 & 0x10) == 0 )
    goto LABEL_41;
  v17 = 1;
  v42 = 1;
  v73[0] = *v7;
  v18 = v45;
  if ( v45 < 2 )
    v19 = 0LL;
  else
    v19 = v7[1];
  v73[1] = v19;
  if ( v6 == 4 )
    v75 = v7[3];
  while ( 1 )
  {
    v20 = v48;
    if ( !v13 )
    {
      v22 = v63;
      goto LABEL_52;
    }
    v21 = v48;
    v20 = v48 - 1;
    v48 = v20;
    v69 = v20;
    v22 = v63;
    if ( !v21 )
      goto LABEL_52;
    if ( !v20 )
    {
      if ( (_DWORD)v18 == 3 )
        v22 = v13;
      v63 = v22;
      v70 = v22;
    }
    if ( v22 )
    {
      v10 = *((unsigned __int16 *)v71 + 8);
      v50 = v10;
      v54 = v10;
      v14 = (v10 & 0x3FF) == 0;
      v56 = (v10 & 0x3FF) == 0;
      v58 = (v10 & 0x3FF) == 0;
      goto LABEL_70;
    }
LABEL_121:
    v31 = *((_WORD *)v13 + 6);
    LOWORD(Size) = v31;
    v32 = (int *)(v13 + 16);
    v67 = (int *)(v13 + 16);
    if ( (*v7 & 0xFFFFFFFFFFFF0000uLL) == 0 )
    {
      v32 += 2 * v31;
      v67 = v32;
      v31 = *((_WORD *)v13 + 7);
      LOWORD(Size) = v31;
    }
    if ( !v31 )
    {
      v62 = 0LL;
      v44 = 0;
      v59 = 0;
      v6 = v57;
      v17 = v42;
      v18 = v45;
      goto LABEL_59;
    }
    if ( v22 && (v5 & 0x20) != 0 )
      break;
    v13 = 0LL;
    v62 = 0LL;
    v33 = (unsigned int *)&v32[2 * v31 - 2];
    v68 = v33;
    while ( 1 )
    {
      if ( v32 > (int *)v33 )
        goto LABEL_150;
      v34 = v31 >> 1;
      if ( !(v31 >> 1) )
        break;
      v66 = v32;
      v35 = v31 & 1;
      if ( v35 )
        v36 = v34;
      else
        v36 = v34 - 1;
      v37 = (unsigned int *)&v32[2 * v36];
      v66 = (int *)v37;
      v38 = LdrpCompareResourceNamesWithValidation(v14, v18, (const wchar_t *)*v7, v64, (int *)v37, v60);
      if ( !v38 )
      {
        v39 = v37[1];
        if ( (int)v39 < 0 )
        {
          v40 = v64;
          goto LABEL_137;
        }
        v13 = 0LL;
        v62 = 0LL;
        v14 = v64 + v39;
LABEL_139:
        v47 = v14;
        v65 = v14;
        goto LABEL_151;
      }
      if ( v38 >= 0 )
      {
        v32 = (int *)(v37 + 2);
        v67 = (int *)(v37 + 2);
        LOWORD(Size) = v34;
        v33 = v68;
LABEL_145:
        v31 = v34;
      }
      else
      {
        v33 = v37 - 2;
        v68 = v37 - 2;
        if ( v35 )
        {
          LOWORD(Size) = v34;
          goto LABEL_145;
        }
        v31 = v34 - 1;
        LOWORD(Size) = v34 - 1;
      }
    }
    if ( v31 )
    {
      v40 = v64;
      if ( !(unsigned int)LdrpCompareResourceNamesWithValidation(v14, v18, (const wchar_t *)*v7, v64, v32, v53) )
      {
        v39 = (unsigned int)v32[1];
        if ( (int)v39 >= 0 )
        {
          v14 = v40 + v39;
          goto LABEL_139;
        }
LABEL_137:
        v13 = (char *)(v40 + (v39 & 0xFFFFFFFF7FFFFFFFuLL));
        v62 = v13;
      }
    }
LABEL_150:
    v14 = v47;
LABEL_151:
    v72 = ++v7;
    v5 = v49;
    v6 = v57;
    v17 = v42;
    LOWORD(v10) = v50;
LABEL_42:
    v18 = v45;
  }
  v13 = 0LL;
  v62 = 0LL;
  v52 = (unsigned int)*v32;
  v14 = v64 + (unsigned int)v32[1];
  v65 = v14;
  v6 = v57;
  v17 = v42;
  v18 = v45;
LABEL_52:
  if ( v14 && (v5 & 2) == 0 )
  {
    *v51 = v14;
    goto LABEL_55;
  }
  if ( !v13 || (v5 & 2) == 0 )
  {
LABEL_59:
    switch ( (_DWORD)v18 - v20 )
    {
      case 1:
        result = -1073741686;
        goto LABEL_66;
      case 2:
        result = -1073741685;
        break;
      case 3:
        result = -1073741308;
        v43 = -1073741308;
        if ( !v22 )
          return result;
        v47 = 0LL;
        v65 = 0LL;
        if ( v44 )
        {
          v14 = v56;
LABEL_70:
          v23 = v55;
          while ( 1 )
          {
            v24 = v23++;
            v55 = v23;
            if ( v24 )
            {
              v25 = v24 - 1;
              if ( v25 )
              {
                v26 = v25 - 1;
                if ( v26 )
                {
                  v27 = v26 - 1;
                  if ( !v27 )
                  {
                    if ( *(_WORD *)((char *)&NlsMbCodePageTag + 3) == PsMachineUILanguageId )
                    {
LABEL_91:
                      v11 = v52;
                    }
                    else
                    {
                      if ( v17 )
                      {
                        v74 = *(unsigned __int16 *)((char *)&NlsMbCodePageTag + 3);
                        result = LdrpLoadResourceFromAlternativeModule(v61, (__int64)v73, v6, v5, v51);
                        v43 = result;
                        if ( result >= 0 )
                          return result;
                      }
                      v11 = *(_WORD *)((char *)&NlsMbCodePageTag + 3);
                    }
LABEL_92:
                    v41[0] = v11;
                    goto LABEL_117;
                  }
                  v28 = v27 - 1;
                  if ( v28 )
                  {
                    v29 = v28 - 1;
                    if ( v29 )
                    {
                      if ( v29 != 1 )
                        break;
                      v5 |= 0x20u;
                      v49 = v5;
                    }
                    else
                    {
                      v11 = 1033;
                      v41[0] = 1033;
                      if ( PsDefaultSystemLocaleId == 1033
                        || *(_WORD *)((char *)&NlsMbCodePageTag + 3) == 1033
                        || PsMachineUILanguageId == 1033 )
                      {
                        goto LABEL_91;
                      }
                      if ( v17 )
                      {
                        v74 = 1033LL;
                        result = LdrpLoadResourceFromAlternativeModule(v61, (__int64)v73, v6, v5, v51);
                        v43 = result;
                        if ( result >= 0 )
                          return result;
                      }
                    }
                  }
                  else
                  {
                    v11 = PsDefaultSystemLocaleId;
                    v41[0] = PsDefaultSystemLocaleId;
                    if ( (_WORD)PsDefaultSystemLocaleId == *(_WORD *)((char *)&NlsMbCodePageTag + 3)
                      || (_WORD)PsDefaultSystemLocaleId == PsMachineUILanguageId )
                    {
                      goto LABEL_91;
                    }
                    if ( v17 )
                    {
                      v74 = (unsigned __int16)PsDefaultSystemLocaleId;
                      result = LdrpLoadResourceFromAlternativeModule(v61, (__int64)v73, v6, v5, v51);
                      v43 = result;
                      if ( result >= 0 )
                        return result;
                    }
                  }
                }
                else
                {
                  if ( !(_BYTE)v14 )
                    break;
                  if ( v17 && PsMachineUILanguageId )
                  {
                    v74 = (unsigned __int16)PsMachineUILanguageId;
                    result = LdrpLoadResourceFromAlternativeModule(v61, (__int64)v73, v6, v5, v51);
                    v43 = result;
                    if ( result >= 0 )
                      return result;
                    v11 = PsMachineUILanguageId;
                    goto LABEL_92;
                  }
                  v30 = v52;
                  v14 = (unsigned __int16)PsMachineUILanguageId;
                  if ( PsMachineUILanguageId )
                    v30 = PsMachineUILanguageId;
                  v11 = v30;
                  v41[0] = v30;
                }
              }
              else
              {
                if ( v11 )
                {
                  if ( (int)LdrpGetParentLangId(v11, v41) >= 0 )
                  {
                    v11 = v41[0];
                  }
                  else
                  {
                    v11 = 0;
                    v41[0] = 0;
                  }
                }
                if ( v17 )
                {
                  if ( !v11 )
                    goto LABEL_117;
                  v74 = v11;
                  result = LdrpLoadResourceFromAlternativeModule(v61, (__int64)v73, v6, v5, v51);
                  v43 = result;
                  if ( result >= 0 )
                    return result;
                }
                if ( v11 )
                  v55 = --v23;
              }
            }
            else
            {
              if ( v17 )
              {
                if ( (_WORD)v10 )
                {
                  v74 = (unsigned __int16)v10;
                  result = LdrpLoadResourceFromAlternativeModule(v61, (__int64)v73, v6, v5, v51);
                  v43 = result;
                  if ( result >= 0 )
                    return result;
                }
              }
              v11 = v10;
              v41[0] = v10;
            }
LABEL_117:
            if ( (~(_BYTE)v5 & 0x20) == 0 || v11 != v52 )
            {
              v52 = v11;
              v7 = &v52;
              v72 = &v52;
              v22 = v63;
              v13 = v63;
              v62 = v63;
              v20 = v48;
              goto LABEL_121;
            }
            v14 = v56;
          }
        }
        result = -1073741308;
        break;
      default:
        result = -1073741811;
        goto LABEL_66;
    }
    v43 = result;
    return result;
  }
  *v51 = (__int64)v13;
LABEL_55:
  result = 0;
LABEL_66:
  v43 = result;
  return result;
}
