/*
 * XREFs of LdrpSearchResourceSection_U @ 0x140462A10
 * Callers:
 *     LdrpGetRcConfig @ 0x14002A564 (LdrpGetRcConfig.c)
 *     LdrpLoadResourceFromAlternativeModule @ 0x14002A894 (LdrpLoadResourceFromAlternativeModule.c)
 *     RtlFindMessage @ 0x140463394 (RtlFindMessage.c)
 *     LdrFindResource_U @ 0x1405A9CF8 (LdrFindResource_U.c)
 *     RtlLoadString @ 0x1406CAE84 (RtlLoadString.c)
 *     LdrFindResourceDirectory_U @ 0x1406CB630 (LdrFindResourceDirectory_U.c)
 *     LdrFindResourceEx_U @ 0x1406CB64C (LdrFindResourceEx_U.c)
 * Callees:
 *     LdrIsResItemExist @ 0x14002A30C (LdrIsResItemExist.c)
 *     LdrpLoadResourceFromAlternativeModule @ 0x14002A894 (LdrpLoadResourceFromAlternativeModule.c)
 *     RtlImageDirectoryEntryToData @ 0x14002B16C (RtlImageDirectoryEntryToData.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     _wcsicmp @ 0x1401723FC (_wcsicmp.c)
 *     LdrpCompareResourceNamesWithValidation @ 0x140246420 (LdrpCompareResourceNamesWithValidation.c)
 *     LdrpGetParentLangId @ 0x14024895C (LdrpGetParentLangId.c)
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
  __int16 v41[2]; // [rsp+30h] [rbp-128h] BYREF
  char v42; // [rsp+34h] [rbp-124h]
  int v43; // [rsp+38h] [rbp-120h]
  char v44; // [rsp+3Ch] [rbp-11Ch]
  unsigned int v45; // [rsp+40h] [rbp-118h]
  ULONG Size; // [rsp+44h] [rbp-114h] BYREF
  __int64 v47; // [rsp+48h] [rbp-110h]
  int v48; // [rsp+50h] [rbp-108h]
  int v49; // [rsp+54h] [rbp-104h]
  int v50; // [rsp+58h] [rbp-100h]
  __int64 v51; // [rsp+60h] [rbp-F8h] BYREF
  __int64 *v52; // [rsp+68h] [rbp-F0h]
  unsigned int v53; // [rsp+70h] [rbp-E8h]
  char *v54; // [rsp+78h] [rbp-E0h]
  _BYTE v55[4]; // [rsp+80h] [rbp-D8h] BYREF
  BOOL v56; // [rsp+84h] [rbp-D4h]
  char v57; // [rsp+88h] [rbp-D0h]
  int v58; // [rsp+8Ch] [rbp-CCh]
  void *v59; // [rsp+90h] [rbp-C8h]
  char v60[4]; // [rsp+98h] [rbp-C0h] BYREF
  __int16 v61; // [rsp+9Ch] [rbp-BCh]
  char *v62; // [rsp+A0h] [rbp-B8h]
  __int64 v63; // [rsp+A8h] [rbp-B0h]
  __int64 v64; // [rsp+B0h] [rbp-A8h]
  int *v65; // [rsp+B8h] [rbp-A0h]
  int *v66; // [rsp+C0h] [rbp-98h]
  unsigned int *v67; // [rsp+C8h] [rbp-90h]
  char *v68; // [rsp+D0h] [rbp-88h]
  __int64 *v69; // [rsp+D8h] [rbp-80h]
  __int64 *v70; // [rsp+E0h] [rbp-78h]
  int v71; // [rsp+E8h] [rbp-70h]
  _QWORD v72[2]; // [rsp+F0h] [rbp-68h] BYREF
  __int64 v73; // [rsp+100h] [rbp-58h]
  __int64 v74; // [rsp+108h] [rbp-50h]

  v5 = a4;
  v50 = a4;
  v6 = a3;
  v53 = a3;
  v7 = a2;
  v59 = a1;
  v52 = a5;
  v69 = a2;
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
  v49 = v9;
  LOWORD(v10) = 0;
  v48 = 0;
  v11 = 0;
  v41[0] = 0;
  if ( (unsigned __int64)a2 - 1 > 0xFFFFFFFFFFFFFFFDuLL
    || (unsigned __int64)(a1 - 1) > 0xFFFFFFFFFFFFFFFDuLL
    || (unsigned __int64)a5 - 1 > 0xFFFFFFFFFFFFFFFDuLL )
  {
    return -1073741811;
  }
  v12 = (char *)RtlImageDirectoryEntryToData(a1, 1u, 2u, &Size);
  v63 = (__int64)v12;
  if ( !v12 )
    return -1073741687;
  v13 = v12;
  v54 = v12;
  v51 = 61166LL;
  v58 = 0;
  v14 = 0LL;
  v47 = 0LL;
  v64 = 0LL;
  v62 = 0LL;
  v68 = 0LL;
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
    v48 = v10;
    v61 = v10;
    v15 = *v7;
    if ( ((*v7 - 16) & 0xFFFFFFFFFFFFFFF7uLL) != 0
      && ((v15 & 0xFFFFFFFFFFFF0000uLL) == 0 || wcsicmp((const wchar_t *)v15, L"MUI"))
      || (~(_BYTE)v5 & 8) == 0
      || (v10 & 0xF3FF) != 0
      || (_WORD)v10 == 3072 )
    {
      v5 |= LdrIsResItemExist(v59, v7);
    }
    else
    {
      v5 |= 0x10u;
    }
    v14 = v47;
    v50 = v5;
  }
  if ( PnPBootDriversInitialized != 1 )
    goto LABEL_41;
  v16 = ~v5;
  if ( (~v5 & 0x80000) == 0 || (v16 & 0x20000) == 0 || (v16 & 0x10) == 0 )
    goto LABEL_41;
  v17 = 1;
  v42 = 1;
  v72[0] = *v7;
  v18 = v45;
  if ( v45 < 2 )
    v19 = 0LL;
  else
    v19 = v7[1];
  v72[1] = v19;
  if ( v6 == 4 )
    v74 = v7[3];
  while ( 1 )
  {
    v20 = v49;
    if ( !v13 )
    {
      v22 = v62;
      goto LABEL_52;
    }
    v21 = v49;
    v20 = v49 - 1;
    v49 = v20;
    v71 = v20;
    v22 = v62;
    if ( !v21 )
      goto LABEL_52;
    if ( !v20 )
    {
      if ( (_DWORD)v18 == 3 )
        v22 = v13;
      v62 = v22;
      v68 = v22;
    }
    if ( v22 )
    {
      v10 = *((unsigned __int16 *)v69 + 8);
      v48 = v10;
      v61 = v10;
      v14 = (v10 & 0x3FF) == 0;
      v56 = (v10 & 0x3FF) == 0;
      v55[1] = (v10 & 0x3FF) == 0;
      goto LABEL_70;
    }
LABEL_121:
    v31 = *((_WORD *)v13 + 6);
    LOWORD(Size) = v31;
    v32 = (int *)(v13 + 16);
    v65 = (int *)(v13 + 16);
    if ( (*v7 & 0xFFFFFFFFFFFF0000uLL) == 0 )
    {
      v32 += 2 * v31;
      v65 = v32;
      v31 = *((_WORD *)v13 + 7);
      LOWORD(Size) = v31;
    }
    if ( !v31 )
    {
      v54 = 0LL;
      v44 = 0;
      v57 = 0;
      v6 = v53;
      v17 = v42;
      v18 = v45;
      goto LABEL_59;
    }
    if ( v22 && (v5 & 0x20) != 0 )
      break;
    v13 = 0LL;
    v54 = 0LL;
    v33 = (unsigned int *)&v32[2 * v31 - 2];
    v67 = v33;
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
      v38 = LdrpCompareResourceNamesWithValidation(v14, v18, (const wchar_t *)*v7, v63, (int *)v37, v60);
      if ( !v38 )
      {
        v39 = v37[1];
        if ( (int)v39 < 0 )
        {
          v40 = v63;
          goto LABEL_137;
        }
        v13 = 0LL;
        v54 = 0LL;
        v14 = v63 + v39;
LABEL_139:
        v47 = v14;
        v64 = v14;
        goto LABEL_151;
      }
      if ( v38 >= 0 )
      {
        v32 = (int *)(v37 + 2);
        v65 = (int *)(v37 + 2);
        LOWORD(Size) = v34;
        v33 = v67;
LABEL_145:
        v31 = v34;
      }
      else
      {
        v33 = v37 - 2;
        v67 = v37 - 2;
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
      v40 = v63;
      if ( !(unsigned int)LdrpCompareResourceNamesWithValidation(v14, v18, (const wchar_t *)*v7, v63, v32, v55) )
      {
        v39 = (unsigned int)v32[1];
        if ( (int)v39 >= 0 )
        {
          v14 = v40 + v39;
          goto LABEL_139;
        }
LABEL_137:
        v13 = (char *)(v40 + (v39 & 0xFFFFFFFF7FFFFFFFuLL));
        v54 = v13;
      }
    }
LABEL_150:
    v14 = v47;
LABEL_151:
    v70 = ++v7;
    v5 = v50;
    v6 = v53;
    v17 = v42;
    LOWORD(v10) = v48;
LABEL_42:
    v18 = v45;
  }
  v13 = 0LL;
  v54 = 0LL;
  v51 = (unsigned int)*v32;
  v14 = v63 + (unsigned int)v32[1];
  v64 = v14;
  v6 = v53;
  v17 = v42;
  v18 = v45;
LABEL_52:
  if ( v14 && (v5 & 2) == 0 )
  {
    *v52 = v14;
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
        v64 = 0LL;
        if ( v44 )
        {
          v14 = v56;
LABEL_70:
          v23 = v58;
          while ( 1 )
          {
            v24 = v23++;
            v58 = v23;
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
                      v11 = v51;
                    }
                    else
                    {
                      if ( v17 )
                      {
                        v73 = *(unsigned __int16 *)((char *)&NlsMbCodePageTag + 3);
                        result = LdrpLoadResourceFromAlternativeModule(v59, (__int64)v72, v6, v5, v52);
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
                      v50 = v5;
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
                        v73 = 1033LL;
                        result = LdrpLoadResourceFromAlternativeModule(v59, (__int64)v72, v6, v5, v52);
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
                      v73 = (unsigned __int16)PsDefaultSystemLocaleId;
                      result = LdrpLoadResourceFromAlternativeModule(v59, (__int64)v72, v6, v5, v52);
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
                    v73 = (unsigned __int16)PsMachineUILanguageId;
                    result = LdrpLoadResourceFromAlternativeModule(v59, (__int64)v72, v6, v5, v52);
                    v43 = result;
                    if ( result >= 0 )
                      return result;
                    v11 = PsMachineUILanguageId;
                    goto LABEL_92;
                  }
                  v30 = v51;
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
                  v73 = v11;
                  result = LdrpLoadResourceFromAlternativeModule(v59, (__int64)v72, v6, v5, v52);
                  v43 = result;
                  if ( result >= 0 )
                    return result;
                }
                if ( v11 )
                  v58 = --v23;
              }
            }
            else
            {
              if ( v17 )
              {
                if ( (_WORD)v10 )
                {
                  v73 = (unsigned __int16)v10;
                  result = LdrpLoadResourceFromAlternativeModule(v59, (__int64)v72, v6, v5, v52);
                  v43 = result;
                  if ( result >= 0 )
                    return result;
                }
              }
              v11 = v10;
              v41[0] = v10;
            }
LABEL_117:
            if ( (~(_BYTE)v5 & 0x20) == 0 || v11 != v51 )
            {
              v51 = v11;
              v7 = &v51;
              v70 = &v51;
              v22 = v62;
              v13 = v62;
              v54 = v62;
              v20 = v49;
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
  *v52 = (__int64)v13;
LABEL_55:
  result = 0;
LABEL_66:
  v43 = result;
  return result;
}
