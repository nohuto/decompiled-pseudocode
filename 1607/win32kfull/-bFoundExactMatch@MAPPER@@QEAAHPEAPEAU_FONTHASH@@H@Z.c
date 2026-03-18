/*
 * XREFs of ?bFoundExactMatch@MAPPER@@QEAAHPEAPEAU_FONTHASH@@H@Z @ 0x1C0024F60
 * Callers:
 *     ?ppfeGetAMatch@@YAPEAVPFE@@AEAVXDCOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEBGKKPEAKPEAU_POINTL@@3H@Z @ 0x1C0024C7C (-ppfeGetAMatch@@YAPEAVPFE@@AEAVXDCOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEBGKKPEAKPEAU_POINTL@@3H@Z.c)
 * Callees:
 *     ?bNearMatch@MAPPER@@QEAAHAEAVPFEOBJ@@PEAEH@Z @ 0x1C00254DC (-bNearMatch@MAPPER@@QEAAHAEAVPFEOBJ@@PEAEH@Z.c)
 *     ?pbktSearch@FHOBJ@@QEAAPEAU_HASHBUCKET@@PEBGPEAIPEAU_UNIVERSAL_FONT_ID@@H@Z @ 0x1C0027854 (-pbktSearch@FHOBJ@@QEAAPEAU_HASHBUCKET@@PEBGPEAIPEAU_UNIVERSAL_FONT_ID@@H@Z.c)
 *     ?flFontType@PFEOBJ@@QEAAKXZ @ 0x1C0027ADC (-flFontType@PFEOBJ@@QEAAKXZ.c)
 *     ulCharsetToCodePage @ 0x1C00281D8 (ulCharsetToCodePage.c)
 *     ?GetFontMapperFamilyFallback@@YAPEAU_FONTMAPPERFAMILYFALLBACK@@PEBG@Z @ 0x1C0028554 (-GetFontMapperFamilyFallback@@YAPEAU_FONTMAPPERFAMILYFALLBACK@@PEBG@Z.c)
 *     GetAppCompatFlags2 @ 0x1C006F66C (GetAppCompatFlags2.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 */

__int64 __fastcall MAPPER::bFoundExactMatch(MAPPER *this, struct _FONTHASH **a2, __int64 a3)
{
  _DWORD *v3; // rax
  int v4; // r13d
  MAPPER *v5; // r11
  __int64 v6; // r12
  WCHAR *v7; // r15
  struct _HASHBUCKET *j; // r14
  const unsigned __int16 *v9; // r9
  char *v10; // r10
  WCHAR *v11; // rbx
  char *v12; // rdi
  __int64 v13; // rax
  char *v14; // rsi
  __int64 v15; // rbx
  unsigned __int16 *v16; // rax
  int v17; // ecx
  __int64 v18; // rdx
  struct _HASHBUCKET *v19; // r9
  WCHAR *v20; // rdx
  unsigned int v21; // ecx
  int v22; // eax
  WCHAR *v23; // rcx
  WCHAR v24; // dx
  struct _HASHBUCKET *v25; // rbx
  unsigned __int16 *v26; // rdx
  struct _HASHBUCKET *v27; // rax
  char *v28; // r15
  int v29; // r12d
  struct _HASHBUCKET **v30; // rsi
  int v31; // r14d
  struct _HASHBUCKET *v32; // rbx
  _QWORD *v33; // rdi
  _QWORD *v34; // r10
  int v35; // eax
  int v36; // r8d
  __int64 v37; // r9
  _QWORD *v38; // rcx
  __int64 v39; // rax
  int v40; // eax
  unsigned int v41; // ebx
  int *v42; // r9
  int v43; // r10d
  struct _FONTMAPPERFAMILYFALLBACK *FontMapperFamilyFallback; // rax
  struct _HASHBUCKET *v46; // rax
  __int16 AppCompatFlags2; // ax
  struct _HASHBUCKET *v48; // rax
  struct _HASHBUCKET *v49; // rax
  unsigned __int8 v50; // [rsp+30h] [rbp-D0h] BYREF
  char v51; // [rsp+31h] [rbp-CFh]
  char v52; // [rsp+34h] [rbp-CCh] BYREF
  char v53; // [rsp+35h] [rbp-CBh]
  char v54; // [rsp+36h] [rbp-CAh]
  MAPPER *v55; // [rsp+38h] [rbp-C8h]
  const unsigned __int16 *i; // [rsp+40h] [rbp-C0h]
  char *v57; // [rsp+48h] [rbp-B8h] BYREF
  int v58; // [rsp+50h] [rbp-B0h]
  int v59; // [rsp+54h] [rbp-ACh]
  int v60; // [rsp+58h] [rbp-A8h]
  _QWORD *k; // [rsp+60h] [rbp-A0h]
  int v62; // [rsp+68h] [rbp-98h]
  _QWORD v63[2]; // [rsp+70h] [rbp-90h] BYREF
  UNICODE_STRING SourceString; // [rsp+80h] [rbp-80h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+90h] [rbp-70h] BYREF
  struct _HASHBUCKET *v66; // [rsp+A0h] [rbp-60h] BYREF
  struct _HASHBUCKET *v67; // [rsp+A8h] [rbp-58h]
  struct _HASHBUCKET *v68; // [rsp+B0h] [rbp-50h]
  _WORD v69[32]; // [rsp+C0h] [rbp-40h] BYREF

  v3 = (_DWORD *)*((_QWORD *)this + 29);
  v4 = 0;
  v62 = a3;
  v5 = this;
  v55 = this;
  k = 0LL;
  *v3 &= ~1u;
  v6 = (__int64)*a2;
  v50 = 1;
  v58 = 0;
  v63[0] = a2;
  v63[1] = v6;
  if ( !v6 )
    return 0LL;
  v7 = (WCHAR *)*((_QWORD *)this + 2);
  j = 0LL;
  v9 = 0LL;
  v10 = (char *)gpfsTable;
  v11 = v7;
  v59 = *(_DWORD *)(v6 + 4);
  v12 = (char *)gpfsTable;
  v13 = *((_QWORD *)this + 1);
  v68 = 0LL;
  v67 = 0LL;
  v66 = 0LL;
  v51 = *(_BYTE *)(v13 + 23);
  v53 = v51;
  v54 = v51;
  v52 = v51;
  v57 = 0LL;
  v14 = (char *)gpfsTable + 196 * gcfsTable;
  for ( i = 0LL; v11 < v7 + 31; ++v11 )
  {
    if ( !*v11 )
      break;
  }
  v15 = v11 - v7;
  if ( (_DWORD)v15 )
  {
    SourceString.Buffer = v7;
    SourceString.MaximumLength = 64;
    DestinationString.MaximumLength = 64;
    SourceString.Length = 2 * v15;
    DestinationString.Buffer = v69;
    RtlUpcaseUnicodeString(&DestinationString, &SourceString, 0);
    v10 = (char *)gpfsTable;
    v9 = 0LL;
    v5 = v55;
  }
  v69[(int)v15] = 0;
  if ( v12 >= v14 )
    goto LABEL_14;
  while ( 1 )
  {
    v16 = v69;
    a3 = v12 + 64 - (char *)v69;
    do
    {
      v17 = *(unsigned __int16 *)((char *)v16 + a3);
      v18 = (unsigned int)*v16 - v17;
      if ( (_DWORD)v18 )
        break;
      ++v16;
    }
    while ( v17 );
    if ( (_DWORD)v18 )
      goto LABEL_12;
    if ( v12 != v10 )
    {
      if ( (v12[129] & 1) != 0 )
      {
        v57 = v12;
      }
      else
      {
        if ( v51 == v12[128] )
          v9 = (const unsigned __int16 *)v12;
        i = v9;
      }
      goto LABEL_12;
    }
    AppCompatFlags2 = GetAppCompatFlags2(1024LL, v18, a3, v9);
    v9 = i;
    if ( (AppCompatFlags2 & 0x400) != 0 )
      break;
    v10 = (char *)gpfsTable;
LABEL_12:
    v12 += 196;
    if ( v12 >= v14 )
      goto LABEL_13;
  }
  v57 = v12;
LABEL_13:
  v5 = v55;
  if ( v9 )
  {
LABEL_70:
    if ( (*((_BYTE *)v9 + 195) & 1) != 0 )
    {
      v66 = FHOBJ::pbktSearch((FHOBJ *)v63, v7, 0LL, 0LL, 0);
      j = v66;
      v46 = FHOBJ::pbktSearch((FHOBJ *)v63, i + 65, 0LL, 0LL, 0);
      v5 = v55;
      v25 = v46;
      v67 = v46;
    }
    else
    {
      v48 = FHOBJ::pbktSearch((FHOBJ *)v63, v9 + 65, 0LL, 0LL, 0);
      v5 = v55;
      v25 = v48;
      v67 = v48;
      v53 = *((_BYTE *)i + 194);
    }
    goto LABEL_29;
  }
LABEL_14:
  v9 = (const unsigned __int16 *)v57;
  i = (const unsigned __int16 *)v57;
  if ( v57 )
    goto LABEL_70;
  v19 = 0LL;
  if ( v7 )
  {
    a3 = *v7;
    v20 = v7;
    v21 = 0;
    if ( (_WORD)a3 )
    {
      do
      {
        v22 = *(unsigned __int8 *)v20++;
        v21 = v22 + 257 * v21;
      }
      while ( *v20 );
    }
    for ( j = *(struct _HASHBUCKET **)(v6 + 8LL * (v21 % *(_DWORD *)(v6 + 8)) + 40); j; j = *(struct _HASHBUCKET **)j )
    {
      v23 = v7;
      if ( (_WORD)a3 == *((_WORD *)j + 30) )
      {
        v24 = *v7;
        while ( v24 )
        {
          v24 = v23[1];
          if ( v24 != *(WCHAR *)((char *)++v23 + j - (struct _HASHBUCKET *)v7 + 60) )
            goto LABEL_23;
        }
        if ( (*((_DWORD *)j + 8) & 2) == 0 )
          goto LABEL_26;
        v19 = j;
      }
LABEL_23:
      ;
    }
    j = v19;
  }
LABEL_26:
  v66 = j;
  if ( v62 && !j )
  {
    FontMapperFamilyFallback = GetFontMapperFamilyFallback(v7);
    if ( !FontMapperFamilyFallback )
    {
      v5 = v55;
      goto LABEL_28;
    }
    v49 = FHOBJ::pbktSearch((FHOBJ *)v63, (const unsigned __int16 *)FontMapperFamilyFallback + 32, 0LL, 0LL, 0);
    v5 = v55;
    v25 = v49;
    v67 = v49;
    v58 = 1;
  }
  else
  {
LABEL_28:
    v25 = 0LL;
  }
LABEL_29:
  v26 = (unsigned __int16 *)((char *)v5 + 24);
  if ( *((_WORD *)v5 + 12) && v59 == 1 )
  {
    v27 = FHOBJ::pbktSearch((FHOBJ *)v63, v26, 0LL, 0LL, 0);
    v5 = v55;
    v68 = v27;
  }
  else
  {
    v27 = 0LL;
  }
  if ( j || v25 || v27 )
  {
    v28 = &v52;
    v29 = v60;
    v30 = &v66;
    v31 = 0;
    **((_DWORD **)v5 + 29) |= 1u;
    *((_DWORD *)v5 + 63) |= 0x40000000u;
    do
    {
      v32 = *v30;
      if ( *v30 )
      {
        *((_BYTE *)v5 + 284) = *v28;
        if ( (*((_DWORD *)v32 + 8) & 2) != 0 )
          *((_DWORD *)v5 + 63) |= 0x400000u;
        else
          *((_DWORD *)v5 + 63) &= ~0x400000u;
        if ( v31 == 2 )
          *((_DWORD *)v5 + 63) |= 0x80000000;
        else
          *((_DWORD *)v5 + 63) &= ~0x80000000;
        v33 = (_QWORD *)*((_QWORD *)v32 + 1);
        v34 = 0LL;
        for ( k = 0LL; v33; v33 = (_QWORD *)*v33 )
        {
          v57 = (char *)v33[1];
          v35 = MAPPER::bNearMatch(v5, (struct PFEOBJ *)&v57, &v50, 0);
          v5 = v55;
          if ( v35 )
          {
            v29 = v31;
            v36 = *((_DWORD *)v55 + 63);
            v34 = v33;
            v37 = v33[1];
            **((_DWORD **)v55 + 27) = *((_DWORD *)v55 + 47);
            v38 = (_QWORD *)*((_QWORD *)v5 + 28);
            v39 = *((_QWORD *)v5 + 24);
            k = v33;
            *v38 = v39;
            v26 = (unsigned __int16 *)*((_QWORD *)v5 + 29);
            *(_DWORD *)v26 = *(_DWORD *)v26 & 0xFFFFFF | (v50 << 24);
            *((_QWORD *)v5 + 25) = v37;
            a3 = (unsigned __int8)v36 & 0x80;
            if ( (_DWORD)a3 )
            {
              *((_DWORD *)v5 + 63) |= 0x1000000u;
            }
            else
            {
              v40 = *(_DWORD *)(v37 + 88);
              *((_DWORD *)v5 + 63) &= ~0x1000000u;
              *((_DWORD *)v5 + 52) = v40;
            }
            if ( !*((_DWORD *)v5 + 46) )
            {
              if ( !*((_DWORD *)v32 + 7) || (PFEOBJ::flFontType((PFEOBJ *)&v57) & 1) != 0 )
              {
                v41 = 1;
                goto LABEL_45;
              }
              *((_DWORD *)v5 + 46) = 1;
            }
            *((_DWORD *)v5 + 45) = *((_DWORD *)v5 + 46);
          }
          else
          {
            v34 = k;
          }
        }
      }
      else
      {
        v34 = k;
      }
      ++v31;
      ++v28;
      ++v30;
    }
    while ( v31 < 3 );
    v41 = 0;
LABEL_45:
    if ( !v34 )
      goto LABEL_51;
    if ( v29 == 1 )
    {
      if ( v58 )
        goto LABEL_48;
    }
    else if ( v59 )
    {
      goto LABEL_48;
    }
    **((_DWORD **)v5 + 29) |= 2u;
LABEL_48:
    v42 = (int *)*((_QWORD *)v5 + 29);
    v43 = *v42;
    if ( HIBYTE(*v42) != 0xFF
      || (v26 = (unsigned __int16 *)k[1], *(_DWORD *)(*((_QWORD *)v26 + 4) + 40LL))
      || (*((_DWORD *)v26 + 3) & 1) != 0 )
    {
      v4 = ulCharsetToCodePage(HIBYTE(*v42), v26, a3, v42);
    }
    else if ( gbDBCSCodePage )
    {
      v4 = 1252;
    }
    *v42 = v43 | (v4 << 8);
LABEL_51:
    *((_DWORD *)v5 + 63) &= ~0x400000u;
    return v41;
  }
  return 0LL;
}
