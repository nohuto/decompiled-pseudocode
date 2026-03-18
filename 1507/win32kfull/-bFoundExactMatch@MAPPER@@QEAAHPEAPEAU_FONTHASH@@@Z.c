/*
 * XREFs of ?bFoundExactMatch@MAPPER@@QEAAHPEAPEAU_FONTHASH@@@Z @ 0x1C0027C60
 * Callers:
 *     ?ppfeGetAMatch@@YAPEAVPFE@@AEAVXDCOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEBGKKPEAKPEAU_POINTL@@3H@Z @ 0x1C0027940 (-ppfeGetAMatch@@YAPEAVPFE@@AEAVXDCOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEBGKKPEAKPEAU_POINTL@@3H@Z.c)
 * Callees:
 *     ?bNearMatch@MAPPER@@QEAAHAEAVPFEOBJ@@PEAEH@Z @ 0x1C00281B0 (-bNearMatch@MAPPER@@QEAAHAEAVPFEOBJ@@PEAEH@Z.c)
 *     ?pbktSearch@FHOBJ@@QEAAPEAU_HASHBUCKET@@PEBGPEAIPEAU_UNIVERSAL_FONT_ID@@H@Z @ 0x1C003193C (-pbktSearch@FHOBJ@@QEAAPEAU_HASHBUCKET@@PEBGPEAIPEAU_UNIVERSAL_FONT_ID@@H@Z.c)
 *     ?flFontType@PFEOBJ@@QEAAKXZ @ 0x1C0031B9C (-flFontType@PFEOBJ@@QEAAKXZ.c)
 *     GetAppCompatFlags2 @ 0x1C00956B8 (GetAppCompatFlags2.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 */

__int64 __fastcall MAPPER::bFoundExactMatch(MAPPER *this, struct _FONTHASH **a2)
{
  _DWORD *v2; // rax
  int v3; // r13d
  MAPPER *v4; // r10
  __int64 v5; // r12
  WCHAR *v6; // r15
  struct _HASHBUCKET *k; // r14
  const unsigned __int16 *v8; // r9
  char *v9; // r11
  WCHAR *v10; // rbx
  char *v11; // rdi
  __int64 v12; // rax
  char *v13; // rsi
  __int64 v14; // rbx
  unsigned __int16 *v15; // rax
  __int64 v16; // r8
  int v17; // ecx
  __int64 v18; // rdx
  struct _HASHBUCKET *v19; // r9
  WCHAR *v20; // rdx
  unsigned int j; // ecx
  int v22; // eax
  WCHAR *v23; // rcx
  WCHAR v24; // dx
  struct _HASHBUCKET *v25; // rbx
  struct _HASHBUCKET *v26; // rax
  char *v27; // r15
  int v28; // r12d
  struct _HASHBUCKET **v29; // rsi
  int v30; // edi
  struct _HASHBUCKET *v31; // r14
  _QWORD *v32; // r11
  unsigned int v33; // ebx
  _DWORD *v34; // rdx
  int v35; // ecx
  _DWORD *v36; // rax
  _QWORD *v37; // rbx
  int v38; // eax
  int v39; // r8d
  __int64 v40; // r9
  _QWORD *v41; // rcx
  __int64 v42; // rax
  int v43; // eax
  __int64 v45; // r9
  struct _HASHBUCKET *v46; // rax
  __int16 AppCompatFlags2; // ax
  struct _HASHBUCKET *v48; // rax
  unsigned __int8 v49; // [rsp+30h] [rbp-99h] BYREF
  char v50; // [rsp+31h] [rbp-98h]
  char v51; // [rsp+34h] [rbp-95h] BYREF
  char v52; // [rsp+35h] [rbp-94h]
  char v53; // [rsp+36h] [rbp-93h]
  MAPPER *v54; // [rsp+38h] [rbp-91h]
  const unsigned __int16 *i; // [rsp+40h] [rbp-89h]
  char *v56; // [rsp+48h] [rbp-81h] BYREF
  int v57; // [rsp+50h] [rbp-79h]
  int v58; // [rsp+54h] [rbp-75h]
  _QWORD *v59; // [rsp+58h] [rbp-71h]
  _QWORD v60[2]; // [rsp+60h] [rbp-69h] BYREF
  UNICODE_STRING SourceString; // [rsp+70h] [rbp-59h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+80h] [rbp-49h] BYREF
  struct _HASHBUCKET *v63; // [rsp+90h] [rbp-39h] BYREF
  struct _HASHBUCKET *v64; // [rsp+98h] [rbp-31h]
  struct _HASHBUCKET *v65; // [rsp+A0h] [rbp-29h]
  _WORD v66[32]; // [rsp+B0h] [rbp-19h] BYREF

  v2 = (_DWORD *)*((_QWORD *)this + 29);
  v3 = 0;
  v4 = this;
  v54 = this;
  v59 = 0LL;
  v49 = 1;
  *v2 &= ~1u;
  v5 = (__int64)*a2;
  v60[0] = a2;
  v60[1] = v5;
  if ( !v5 )
    return 0LL;
  v6 = (WCHAR *)*((_QWORD *)this + 2);
  k = 0LL;
  v8 = 0LL;
  v9 = (char *)gpfsTable;
  v10 = v6;
  v58 = *(_DWORD *)(v5 + 4);
  v11 = (char *)gpfsTable;
  v12 = *((_QWORD *)this + 1);
  v65 = 0LL;
  v64 = 0LL;
  v63 = 0LL;
  v50 = *(_BYTE *)(v12 + 23);
  v52 = v50;
  v53 = v50;
  v51 = v50;
  v56 = 0LL;
  v13 = (char *)gpfsTable + 196 * gcfsTable;
  for ( i = 0LL; v10 < v6 + 31; ++v10 )
  {
    if ( !*v10 )
      break;
  }
  v14 = v10 - v6;
  if ( (_DWORD)v14 )
  {
    SourceString.Buffer = v6;
    SourceString.MaximumLength = 64;
    DestinationString.MaximumLength = 64;
    SourceString.Length = 2 * v14;
    DestinationString.Buffer = v66;
    RtlUpcaseUnicodeString(&DestinationString, &SourceString, 0);
    v9 = (char *)gpfsTable;
    v8 = 0LL;
    v4 = v54;
  }
  v66[(int)v14] = 0;
  if ( v11 >= v13 )
    goto LABEL_14;
  while ( 1 )
  {
    v15 = v66;
    v16 = v11 + 64 - (char *)v66;
    do
    {
      v17 = *(unsigned __int16 *)((char *)v15 + v16);
      v18 = (unsigned int)*v15 - v17;
      if ( (_DWORD)v18 )
        break;
      ++v15;
    }
    while ( v17 );
    if ( (_DWORD)v18 )
      goto LABEL_12;
    if ( v11 != v9 )
    {
      if ( (v11[129] & 1) != 0 )
      {
        v56 = v11;
      }
      else
      {
        if ( v50 == v11[128] )
          v8 = (const unsigned __int16 *)v11;
        i = v8;
      }
      goto LABEL_12;
    }
    AppCompatFlags2 = GetAppCompatFlags2(1024LL, v18, v16, v8);
    v8 = i;
    if ( (AppCompatFlags2 & 0x400) != 0 )
      break;
    v9 = (char *)gpfsTable;
LABEL_12:
    v11 += 196;
    if ( v11 >= v13 )
      goto LABEL_13;
  }
  v56 = v11;
LABEL_13:
  v4 = v54;
  if ( v8 )
  {
LABEL_72:
    if ( (*((_BYTE *)v8 + 195) & 1) != 0 )
    {
      v63 = FHOBJ::pbktSearch((FHOBJ *)v60, v6, 0LL, 0LL, 0);
      k = v63;
      v46 = FHOBJ::pbktSearch((FHOBJ *)v60, i + 65, 0LL, 0LL, 0);
      v4 = v54;
      v25 = v46;
      v64 = v46;
    }
    else
    {
      v48 = FHOBJ::pbktSearch((FHOBJ *)v60, v8 + 65, 0LL, 0LL, 0);
      v4 = v54;
      v25 = v48;
      v64 = v48;
      v52 = *((_BYTE *)i + 194);
    }
    goto LABEL_27;
  }
LABEL_14:
  v8 = (const unsigned __int16 *)v56;
  i = (const unsigned __int16 *)v56;
  if ( v56 )
    goto LABEL_72;
  v19 = 0LL;
  if ( v6 )
  {
    v20 = v6;
    for ( j = 0; *v20; j = v22 + 257 * j )
      v22 = *(unsigned __int8 *)v20++;
    for ( k = *(struct _HASHBUCKET **)(v5 + 8LL * (j % *(_DWORD *)(v5 + 8)) + 40); k; k = *(struct _HASHBUCKET **)k )
    {
      v23 = v6;
      if ( *v6 == *((_WORD *)k + 30) )
      {
        v24 = *v6;
        while ( v24 )
        {
          v24 = v23[1];
          if ( v24 != *(WCHAR *)((char *)++v23 + k - (struct _HASHBUCKET *)v6 + 60) )
            goto LABEL_23;
        }
        if ( (*((_DWORD *)k + 8) & 2) == 0 )
          goto LABEL_26;
        v19 = k;
      }
LABEL_23:
      ;
    }
    k = v19;
  }
LABEL_26:
  v63 = k;
  v25 = 0LL;
LABEL_27:
  if ( *((_WORD *)v4 + 12) && v58 == 1 )
  {
    v26 = FHOBJ::pbktSearch((FHOBJ *)v60, (const unsigned __int16 *)v4 + 12, 0LL, 0LL, 0);
    v4 = v54;
    v65 = v26;
  }
  else
  {
    v26 = 0LL;
  }
  if ( !k && !v25 && !v26 )
    return 0LL;
  v27 = &v51;
  v28 = v57;
  v29 = &v63;
  v30 = 0;
  **((_DWORD **)v4 + 29) |= 1u;
  *((_DWORD *)v4 + 63) |= 0x40000000u;
  while ( 1 )
  {
    v31 = *v29;
    if ( *v29 )
    {
      *((_BYTE *)v4 + 284) = *v27;
      if ( (*((_DWORD *)v31 + 8) & 2) != 0 )
        *((_DWORD *)v4 + 63) |= 0x400000u;
      else
        *((_DWORD *)v4 + 63) &= ~0x400000u;
      if ( v30 == 2 )
        *((_DWORD *)v4 + 63) |= 0x80000000;
      else
        *((_DWORD *)v4 + 63) &= ~0x80000000;
      v37 = (_QWORD *)*((_QWORD *)v31 + 1);
      v59 = 0LL;
      if ( v37 )
        break;
    }
LABEL_32:
    ++v30;
    ++v27;
    ++v29;
    if ( v30 >= 3 )
    {
      v32 = v59;
      v33 = 0;
      goto LABEL_34;
    }
  }
  while ( 2 )
  {
    v56 = (char *)v37[1];
    v38 = MAPPER::bNearMatch(v4, (struct PFEOBJ *)&v56, &v49, 0);
    v4 = v54;
    if ( !v38 )
    {
LABEL_49:
      v37 = (_QWORD *)*v37;
      if ( !v37 )
        goto LABEL_32;
      continue;
    }
    break;
  }
  v28 = v30;
  v39 = *((_DWORD *)v54 + 63);
  v32 = v37;
  v40 = v37[1];
  **((_DWORD **)v54 + 27) = *((_DWORD *)v54 + 47);
  v41 = (_QWORD *)*((_QWORD *)v4 + 28);
  v42 = *((_QWORD *)v4 + 24);
  v59 = v37;
  *v41 = v42;
  **((_DWORD **)v4 + 29) = **((_DWORD **)v4 + 29) & 0xFFFFFF | (v49 << 24);
  *((_QWORD *)v4 + 25) = v40;
  if ( (v39 & 0x80) != 0 )
  {
    *((_DWORD *)v4 + 63) |= 0x1000000u;
  }
  else
  {
    v43 = *(_DWORD *)(v40 + 88);
    *((_DWORD *)v4 + 63) &= ~0x1000000u;
    *((_DWORD *)v4 + 52) = v43;
  }
  if ( *((_DWORD *)v4 + 46) )
  {
LABEL_54:
    *((_DWORD *)v4 + 45) = *((_DWORD *)v4 + 46);
    goto LABEL_49;
  }
  if ( *((_DWORD *)v31 + 7) && (PFEOBJ::flFontType((PFEOBJ *)&v56) & 1) == 0 )
  {
    *((_DWORD *)v4 + 46) = 1;
    goto LABEL_54;
  }
  v33 = 1;
LABEL_34:
  if ( v32 )
  {
    if ( !v58 || v28 == 1 )
      **((_DWORD **)v4 + 29) |= 2u;
    v34 = (_DWORD *)*((_QWORD *)v4 + 29);
    v35 = HIBYTE(*v34);
    if ( HIBYTE(*v34) != 0xFF
      || (v45 = v32[1], *(_DWORD *)(*(_QWORD *)(v45 + 32) + 40LL))
      || (*(_DWORD *)(v45 + 12) & 1) != 0 )
    {
      if ( v35 == 255 )
      {
        v3 = 1;
      }
      else
      {
        v36 = &charsets;
        while ( *v36 != v35 )
        {
          ++v3;
          if ( (__int64)++v36 >= (__int64)&off_1C02E9580 )
          {
            v3 = gbDBCSCodePage != 0 ? 0x4E4 : 0;
            goto LABEL_56;
          }
        }
        v3 = codepages[v3];
      }
    }
    else if ( gbDBCSCodePage )
    {
      v3 = 1252;
    }
LABEL_56:
    *v34 |= v3 << 8;
  }
  *((_DWORD *)v4 + 63) &= ~0x400000u;
  return v33;
}
