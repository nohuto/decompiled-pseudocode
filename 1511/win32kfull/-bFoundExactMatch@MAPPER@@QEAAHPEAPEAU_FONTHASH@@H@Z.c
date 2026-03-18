/*
 * XREFs of ?bFoundExactMatch@MAPPER@@QEAAHPEAPEAU_FONTHASH@@H@Z @ 0x1C001F280
 * Callers:
 *     ?ppfeGetAMatch@@YAPEAVPFE@@AEAVXDCOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEBGKKPEAKPEAU_POINTL@@3H@Z @ 0x1C001EF54 (-ppfeGetAMatch@@YAPEAVPFE@@AEAVXDCOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEBGKKPEAKPEAU_POINTL@@3H@Z.c)
 * Callees:
 *     ?pbktSearch@FHOBJ@@QEAAPEAU_HASHBUCKET@@PEBGPEAIPEAU_UNIVERSAL_FONT_ID@@H@Z @ 0x1C001E298 (-pbktSearch@FHOBJ@@QEAAPEAU_HASHBUCKET@@PEBGPEAIPEAU_UNIVERSAL_FONT_ID@@H@Z.c)
 *     ?flFontType@PFEOBJ@@QEAAKXZ @ 0x1C001E914 (-flFontType@PFEOBJ@@QEAAKXZ.c)
 *     ?bNearMatch@MAPPER@@QEAAHAEAVPFEOBJ@@PEAEH@Z @ 0x1C001F8E0 (-bNearMatch@MAPPER@@QEAAHAEAVPFEOBJ@@PEAEH@Z.c)
 *     GetAppCompatFlags2 @ 0x1C00722A8 (GetAppCompatFlags2.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 */

__int64 __fastcall MAPPER::bFoundExactMatch(MAPPER *this, struct _FONTHASH **a2, int a3)
{
  _DWORD *v3; // rax
  unsigned __int64 v4; // rbx
  __int64 v5; // r13
  WCHAR *v6; // r15
  struct _HASHBUCKET *v7; // r11
  const unsigned __int16 *v8; // r12
  char *v9; // r9
  char *v10; // rdi
  __int64 v11; // rax
  WCHAR *v12; // r14
  char v13; // r10
  WCHAR *v14; // rbx
  char *v15; // rsi
  __int64 v16; // rax
  unsigned __int16 *v17; // rax
  int v18; // ecx
  int v19; // edx
  struct _HASHBUCKET *v20; // r9
  WCHAR v21; // r8
  WCHAR *v22; // rdx
  unsigned int j; // ecx
  int v24; // eax
  struct _HASHBUCKET *v25; // rdi
  WCHAR *v26; // rcx
  WCHAR v27; // dx
  struct _HASHBUCKET *v28; // rsi
  MAPPER *v29; // r13
  struct _HASHBUCKET *v30; // rax
  char *p_i; // r15
  int v32; // r12d
  struct _HASHBUCKET **v33; // rsi
  int v34; // edi
  struct _HASHBUCKET *v35; // r14
  _QWORD *v36; // r10
  unsigned int v37; // r11d
  _DWORD *v38; // rdx
  int v39; // ecx
  _DWORD *v40; // rax
  int v41; // r9d
  _QWORD *v42; // rbx
  int v43; // r8d
  __int64 v44; // r9
  _QWORD *v45; // rcx
  __int64 v46; // rax
  int v47; // eax
  WCHAR *v49; // rdi
  char *m; // rsi
  __int64 v51; // rdi
  unsigned __int16 *v52; // rax
  int v53; // ecx
  int v54; // edx
  __int64 v55; // r9
  const unsigned __int16 *v56; // rdx
  int v57; // r9d
  char v58; // [rsp+30h] [rbp-99h]
  unsigned __int8 v59[7]; // [rsp+31h] [rbp-98h] BYREF
  struct _HASHBUCKET *k; // [rsp+38h] [rbp-91h] BYREF
  char i; // [rsp+40h] [rbp-89h] BYREF
  char v62; // [rsp+41h] [rbp-88h]
  char v63; // [rsp+42h] [rbp-87h]
  int v64; // [rsp+44h] [rbp-85h]
  unsigned int v65; // [rsp+48h] [rbp-81h]
  _QWORD *v66; // [rsp+50h] [rbp-79h]
  int v67; // [rsp+58h] [rbp-71h]
  UNICODE_STRING SourceString; // [rsp+60h] [rbp-69h] BYREF
  _QWORD v69[2]; // [rsp+70h] [rbp-59h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+80h] [rbp-49h] BYREF
  MAPPER *v71; // [rsp+90h] [rbp-39h]
  struct _HASHBUCKET *v72; // [rsp+98h] [rbp-31h] BYREF
  struct _HASHBUCKET *v73; // [rsp+A0h] [rbp-29h]
  struct _HASHBUCKET *v74; // [rsp+A8h] [rbp-21h]
  _WORD v75[32]; // [rsp+B0h] [rbp-19h] BYREF

  v3 = (_DWORD *)*((_QWORD *)this + 29);
  LODWORD(v4) = 0;
  v67 = a3;
  v71 = this;
  v66 = 0LL;
  *v3 &= ~1u;
  v5 = (__int64)*a2;
  v65 = 0;
  v59[0] = 1;
  v69[0] = a2;
  v69[1] = v5;
  if ( !v5 )
    return (unsigned int)v4;
  v6 = (WCHAR *)*((_QWORD *)this + 2);
  v7 = 0LL;
  v8 = 0LL;
  v9 = (char *)gpfsTable;
  v64 = *(_DWORD *)(v5 + 4);
  v10 = (char *)gpfsTable;
  v11 = *((_QWORD *)this + 1);
  v12 = v6 + 31;
  v74 = 0LL;
  v73 = 0LL;
  v72 = 0LL;
  v13 = *(_BYTE *)(v11 + 23);
  k = 0LL;
  v14 = v6;
  v15 = (char *)gpfsTable + 196 * gcfsTable;
  v58 = v13;
  v62 = v13;
  v63 = v13;
  for ( i = v13; v14 < v12; ++v14 )
  {
    if ( !*v14 )
      break;
  }
  v4 = v14 - v6;
  if ( (_DWORD)v4 )
  {
    SourceString.MaximumLength = 64;
    DestinationString.MaximumLength = 64;
    SourceString.Length = 2 * v4;
    SourceString.Buffer = v6;
    DestinationString.Buffer = v75;
    RtlUpcaseUnicodeString(&DestinationString, &SourceString, 0);
    v9 = (char *)gpfsTable;
    v7 = 0LL;
    v13 = v58;
  }
  v16 = (int)v4;
  LODWORD(v4) = 0;
  v75[v16] = 0;
  if ( v10 >= v15 )
    goto LABEL_14;
  while ( 1 )
  {
    v17 = v75;
    do
    {
      v18 = *(unsigned __int16 *)((char *)v17 + v10 + 64 - (char *)v75);
      v19 = *v17 - v18;
      if ( v19 )
        break;
      ++v17;
    }
    while ( v18 );
    if ( v19 )
      goto LABEL_12;
    if ( v10 != v9 )
    {
      if ( (v10[129] & 1) != 0 )
      {
        v7 = (struct _HASHBUCKET *)v10;
        k = (struct _HASHBUCKET *)v10;
      }
      else if ( v13 == v10[128] )
      {
        v8 = (const unsigned __int16 *)v10;
      }
      goto LABEL_12;
    }
    if ( (GetAppCompatFlags2(1024LL) & 0x400) != 0 )
      break;
    v9 = (char *)gpfsTable;
    v13 = v58;
    v7 = k;
LABEL_12:
    v10 += 196;
    if ( v10 >= v15 )
      goto LABEL_13;
  }
  v7 = (struct _HASHBUCKET *)v10;
LABEL_13:
  if ( v8 )
  {
LABEL_89:
    if ( (*((_BYTE *)v8 + 195) & 1) != 0 )
    {
      v72 = FHOBJ::pbktSearch((FHOBJ *)v69, v6, 0LL, 0LL, 0);
      v25 = v72;
      v28 = FHOBJ::pbktSearch((FHOBJ *)v69, v8 + 65, 0LL, 0LL, 0);
      v73 = v28;
    }
    else
    {
      v28 = FHOBJ::pbktSearch((FHOBJ *)v69, v8 + 65, 0LL, 0LL, 0);
      v73 = v28;
      v25 = 0LL;
      v62 = *((_BYTE *)v8 + 194);
    }
    goto LABEL_29;
  }
LABEL_14:
  v8 = (const unsigned __int16 *)v7;
  if ( v7 )
    goto LABEL_89;
  v20 = 0LL;
  if ( v6 )
  {
    v21 = *v6;
    v22 = v6;
    for ( j = 0; *v22; j = v24 + 257 * j )
      v24 = *(unsigned __int8 *)v22++;
    v25 = *(struct _HASHBUCKET **)(v5 + 8LL * (j % *(_DWORD *)(v5 + 8)) + 40);
    for ( k = v25; v25; k = v25 )
    {
      v26 = v6;
      if ( v21 == *((_WORD *)v25 + 30) )
      {
        v27 = v21;
        while ( v27 )
        {
          v27 = v26[1];
          if ( v27 != *(WCHAR *)((char *)++v26 + v25 - (struct _HASHBUCKET *)v6 + 60) )
            goto LABEL_23;
        }
        if ( (*((_DWORD *)v25 + 8) & 2) == 0 )
          goto LABEL_26;
        v20 = v25;
      }
LABEL_23:
      v25 = *(struct _HASHBUCKET **)v25;
    }
    v25 = v20;
    k = v20;
  }
  else
  {
    v25 = 0LL;
    k = 0LL;
  }
LABEL_26:
  v72 = v25;
  if ( v67 && !v25 )
  {
    v4 = (unsigned __int64)gpfmffTable;
    if ( gpfmffTable )
    {
      v49 = v6;
      for ( m = (char *)gpfmffTable + 128 * (unsigned __int64)gcfmffTable; v49 < v12; ++v49 )
      {
        if ( !*v49 )
          break;
      }
      v51 = v49 - v6;
      if ( (_DWORD)v51 )
      {
        SourceString.Buffer = v6;
        SourceString.MaximumLength = 64;
        DestinationString.MaximumLength = 64;
        SourceString.Length = 2 * v51;
        DestinationString.Buffer = v75;
        RtlUpcaseUnicodeString(&DestinationString, &SourceString, 0);
      }
      v75[(int)v51] = 0;
      if ( v4 >= (unsigned __int64)m )
        goto LABEL_75;
      while ( 1 )
      {
        v52 = v75;
        do
        {
          v53 = *(unsigned __int16 *)((char *)v52 + v4 - (_QWORD)v75);
          v54 = *v52 - v53;
          if ( v54 )
            break;
          ++v52;
        }
        while ( v53 );
        if ( !v54 )
          break;
        v4 += 128LL;
        if ( v4 >= (unsigned __int64)m )
          goto LABEL_75;
      }
      if ( v4 )
      {
        v56 = (const unsigned __int16 *)(v4 + 64);
        LODWORD(v4) = 0;
        v25 = k;
        v28 = FHOBJ::pbktSearch((FHOBJ *)v69, v56, 0LL, 0LL, 0);
        v73 = v28;
      }
      else
      {
LABEL_75:
        v25 = k;
        LODWORD(v4) = 0;
        v28 = v73;
      }
    }
    else
    {
      v28 = v73;
    }
  }
  else
  {
    v28 = 0LL;
  }
LABEL_29:
  v29 = v71;
  if ( *((_WORD *)v71 + 12) && v64 == 1 )
  {
    v30 = FHOBJ::pbktSearch((FHOBJ *)v69, (const unsigned __int16 *)v71 + 12, 0LL, 0LL, 0);
    v74 = v30;
  }
  else
  {
    v30 = 0LL;
  }
  if ( !v25 && !v28 && !v30 )
    return (unsigned int)v4;
  p_i = &i;
  v32 = v65;
  v33 = &v72;
  v34 = 0;
  **((_DWORD **)v29 + 29) |= 1u;
  *((_DWORD *)v29 + 63) |= 0x40000000u;
  while ( 1 )
  {
    v35 = *v33;
    if ( *v33 )
    {
      *((_BYTE *)v29 + 284) = *p_i;
      if ( (*((_DWORD *)v35 + 8) & 2) != 0 )
        *((_DWORD *)v29 + 63) |= 0x400000u;
      else
        *((_DWORD *)v29 + 63) &= ~0x400000u;
      if ( v34 == 2 )
        *((_DWORD *)v29 + 63) |= 0x80000000;
      else
        *((_DWORD *)v29 + 63) &= ~0x80000000;
      v66 = 0LL;
      v42 = (_QWORD *)*((_QWORD *)v35 + 1);
      if ( v42 )
        break;
    }
LABEL_34:
    ++v34;
    ++p_i;
    ++v33;
    if ( v34 >= 3 )
    {
      v36 = v66;
      v37 = v65;
      goto LABEL_36;
    }
  }
  while ( 2 )
  {
    k = (struct _HASHBUCKET *)v42[1];
    if ( !(unsigned int)MAPPER::bNearMatch(v29, (struct PFEOBJ *)&k, v59, 0) )
    {
LABEL_51:
      v42 = (_QWORD *)*v42;
      if ( !v42 )
        goto LABEL_34;
      continue;
    }
    break;
  }
  v32 = v34;
  v43 = *((_DWORD *)v29 + 63);
  v36 = v42;
  v44 = v42[1];
  **((_DWORD **)v29 + 27) = *((_DWORD *)v29 + 47);
  v45 = (_QWORD *)*((_QWORD *)v29 + 28);
  v46 = *((_QWORD *)v29 + 24);
  v66 = v42;
  *v45 = v46;
  **((_DWORD **)v29 + 29) = **((_DWORD **)v29 + 29) & 0xFFFFFF | (v59[0] << 24);
  *((_QWORD *)v29 + 25) = v44;
  if ( (v43 & 0x80) != 0 )
  {
    *((_DWORD *)v29 + 63) |= 0x1000000u;
  }
  else
  {
    v47 = *(_DWORD *)(v44 + 88);
    *((_DWORD *)v29 + 63) &= ~0x1000000u;
    *((_DWORD *)v29 + 52) = v47;
  }
  if ( *((_DWORD *)v29 + 46) )
  {
LABEL_56:
    *((_DWORD *)v29 + 45) = *((_DWORD *)v29 + 46);
    goto LABEL_51;
  }
  if ( *((_DWORD *)v35 + 7) && (PFEOBJ::flFontType((PFEOBJ *)&k) & 1) == 0 )
  {
    *((_DWORD *)v29 + 46) = 1;
    goto LABEL_56;
  }
  v37 = 1;
LABEL_36:
  if ( v36 )
  {
    if ( v32 == 1 || !v64 )
      **((_DWORD **)v29 + 29) |= 2u;
    v38 = (_DWORD *)*((_QWORD *)v29 + 29);
    v39 = HIBYTE(*v38);
    if ( HIBYTE(*v38) != 0xFF
      || (v55 = v36[1], *(_DWORD *)(*(_QWORD *)(v55 + 32) + 40LL))
      || (*(_DWORD *)(v55 + 12) & 1) != 0 )
    {
      if ( v39 == 255 )
      {
        v57 = 1;
      }
      else
      {
        v40 = charsets;
        v41 = 0;
        while ( *v40 != v39 )
        {
          ++v41;
          if ( (__int64)++v40 >= (__int64)&_xmm )
          {
            v57 = gbDBCSCodePage != 0 ? 0x4E4 : 0;
            goto LABEL_58;
          }
        }
        v57 = codepages[v41];
      }
    }
    else if ( gbDBCSCodePage )
    {
      v57 = 1252;
    }
    else
    {
      v57 = 0;
    }
LABEL_58:
    *v38 |= v57 << 8;
  }
  *((_DWORD *)v29 + 63) &= ~0x400000u;
  return v37;
}
