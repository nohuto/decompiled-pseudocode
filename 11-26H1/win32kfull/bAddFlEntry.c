/*
 * XREFs of bAddFlEntry @ 0x140103490
 * Callers:
 *     BuildAndLoadLinkedFontRoutine @ 0x140102A40 (BuildAndLoadLinkedFontRoutine.c)
 *     GreEudcLoadLinkW @ 0x14032453C (GreEudcLoadLinkW.c)
 * Callees:
 *     ?bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH@Z @ 0x140102C2C (-bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH.c)
 *     ?bAppendSysDirectory@@YAHPEAGPEBGI@Z @ 0x140103ABC (-bAppendSysDirectory@@YAHPEAGPEBGI@Z.c)
 *     ?FindBaseFontEntry@@YAPEAU_FLENTRY@@PEBG@Z @ 0x140103DF4 (-FindBaseFontEntry@@YAPEAU_FLENTRY@@PEBG@Z.c)
 *     ?ParseFontScaleFactor@@YA_NPEBGPEAJ@Z @ 0x140103E88 (-ParseFontScaleFactor@@YA_NPEBGPEAJ@Z.c)
 *     ?cCapString@@YAJPEAGPEBGH@Z @ 0x140103F00 (-cCapString@@YAJPEAGPEBGH@Z.c)
 *     ?bUnloadEUDCFont@PFTOBJ@@QEAAHPEAG@Z @ 0x140104000 (-bUnloadEUDCFont@PFTOBJ@@QEAAHPEAG@Z.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x14010EE3C (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ??1?$AutoResource@$1?Win32FreePool@@YAXPEAX@Z@@QEAA@XZ @ 0x140187408 (--1-$AutoResource@$1-Win32FreePool@@YAXPEAX@Z@@QEAA@XZ.c)
 */

__int64 __fastcall bAddFlEntry(wchar_t *a1, __int64 a2, int a3, int a4, _QWORD *a5)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  unsigned int v10; // edi
  unsigned __int16 *v11; // r15
  _QWORD *v12; // r14
  _QWORD *v13; // rsi
  struct PFF *v14; // r13
  __int64 v15; // rdx
  struct PFF *v16; // rcx
  __int64 v17; // rbx
  __int16 v18; // ax
  struct PFF *v19; // rax
  size_t v21; // rax
  unsigned int v22; // r8d
  wchar_t *v23; // r12
  size_t v24; // rax
  __int64 v25; // r13
  __int64 v26; // r8
  struct _FLENTRY *BaseFontEntry; // rax
  struct PFF **v28; // rax
  struct PFF *v29; // rbx
  struct PFF *v30; // rcx
  int v31; // eax
  size_t v32; // rax
  wchar_t *v33; // rbx
  unsigned int v34; // r13d
  __int64 v35; // rax
  __int64 v36; // rax
  unsigned int v37; // ebx
  unsigned __int16 *v38; // rax
  unsigned __int16 *v39; // r12
  int Fonts; // ebx
  PFTOBJ *v41; // rcx
  void *v42; // rcx
  __int64 *v43; // rcx
  __int64 v44; // rdx
  __int64 v45; // rax
  __int64 i; // rcx
  _QWORD *v47; // r14
  _QWORD *v48; // rax
  __int64 v49; // rax
  PFTOBJ *v50; // rcx
  _QWORD *v51; // rcx
  _QWORD *v52; // rax
  __int64 v53; // rax
  __int64 v54; // rax
  size_t v55; // [rsp+30h] [rbp-99h]
  unsigned int v56[2]; // [rsp+78h] [rbp-51h] BYREF
  void *v57; // [rsp+80h] [rbp-49h]
  __int64 v58; // [rsp+88h] [rbp-41h]
  struct PFF *v59[2]; // [rsp+90h] [rbp-39h] BYREF
  int v60[4]; // [rsp+A0h] [rbp-29h] BYREF
  __int128 v61; // [rsp+B0h] [rbp-19h] BYREF
  _QWORD *v62; // [rsp+C0h] [rbp-9h]
  __int128 *v63; // [rsp+C8h] [rbp-1h] BYREF
  wchar_t *v64; // [rsp+D0h] [rbp+7h]
  __int64 v65[8]; // [rsp+D8h] [rbp+Fh] BYREF

  v6 = Win32AllocPoolZInit(1104LL, 1886221383LL);
  v10 = 0;
  *(_QWORD *)v56 = v6;
  v11 = (unsigned __int16 *)v6;
  if ( !v6 )
  {
    EngSetLastError(8u);
    goto LABEL_73;
  }
  v12 = 0LL;
  v57 = 0LL;
  v13 = 0LL;
  v14 = (struct PFF *)(v6 + 520);
  v58 = *(_QWORD *)(W32GetSessionState(v8, v7, v9) + 96);
  *(_DWORD *)(v58 + 13504) = 1;
  if ( a5 )
    *a5 = 0LL;
  v15 = 292LL;
  v16 = v14;
  v17 = a2 - (_QWORD)v14;
  do
  {
    if ( v15 == -2147483354 )
      break;
    v18 = *(_WORD *)((char *)v16 + v17);
    if ( !v18 )
      break;
    *(_WORD *)v16 = v18;
    v16 = (struct PFF *)((char *)v16 + 2);
    --v15;
  }
  while ( v15 );
  v19 = (struct PFF *)((char *)v16 - 2);
  if ( v15 )
    v19 = v16;
  *(_WORD *)v19 = 0;
  if ( !v15 )
    goto LABEL_11;
  v59[1] = v14;
  *(_OWORD *)v60 = 0LL;
  v21 = wcscspn((const wchar_t *)v14, L",");
  if ( *((_WORD *)v14 + v21) )
  {
    *((_WORD *)v14 + v21) = 0;
    v23 = (wchar_t *)((char *)v14 + 2 * v21 + 2 * wcsspn((const wchar_t *)v14 + v21 + 1, L" ") + 2);
    if ( !iswdigit(*v23) )
    {
      *(_QWORD *)v60 = v23;
      v24 = wcscspn(v23, L",");
      if ( !v23[v24] )
        goto LABEL_16;
      v23[v24] = 0;
      v23 += v24 + wcsspn(&v23[v24 + 1], L" ") + 1;
    }
    v32 = wcscspn(v23, L",");
    if ( !v23[v32] )
      goto LABEL_11;
    v23[v32] = 0;
    v33 = &v23[v32 + 1 + wcsspn(&v23[v32 + 1], L" ")];
    if ( !ParseFontScaleFactor(v23, &v60[2]) || !ParseFontScaleFactor(v33, &v60[3]) )
      goto LABEL_11;
  }
  v23 = *(wchar_t **)v60;
LABEL_16:
  if ( !(unsigned int)bAppendSysDirectory(v11, (const unsigned __int16 *)v14, v22) )
  {
LABEL_73:
    AutoResource<&void Win32FreePool(void *)>::~AutoResource<&void Win32FreePool(void *)>(v56);
    return 0LL;
  }
  v25 = v58;
  if ( !_wcsicmp(v11, (const wchar_t *)(v58 + 13536)) )
  {
LABEL_11:
    Win32FreePool(v11);
    return 0LL;
  }
  v62 = (_QWORD *)(v58 + 14112);
  if ( (_QWORD *)*v62 == v62 )
    goto LABEL_35;
  BaseFontEntry = FindBaseFontEntry(a1);
  v12 = BaseFontEntry;
  if ( !BaseFontEntry )
    goto LABEL_35;
  v28 = (struct PFF **)((char *)BaseFontEntry + 16);
  v29 = *v28;
  if ( *v28 == (struct PFF *)v28 )
    goto LABEL_35;
  while ( 1 )
  {
    v59[0] = *((struct PFF **)v29 + 4);
    if ( !_wcsicmp(*(const wchar_t **)(*(_QWORD *)v59[0] + 24LL), v11) )
    {
      v31 = *((_DWORD *)v29 + 5) & 1;
      if ( !v23 )
        goto LABEL_28;
      if ( v31 )
        break;
    }
LABEL_22:
    v29 = *(struct PFF **)v29;
    v30 = 0LL;
    if ( v29 == (struct PFF *)(v12 + 2) )
      goto LABEL_23;
  }
  v31 = _wcsicmp((const wchar_t *)(*((_QWORD *)v59[0] + 4) + *(int *)(*((_QWORD *)v59[0] + 4) + 8LL)), v23);
LABEL_28:
  if ( v31 )
    goto LABEL_22;
  v30 = v29;
LABEL_23:
  v25 = v58;
  if ( v30 )
  {
    Win32FreePool(v11);
    return 1LL;
  }
LABEL_35:
  v65[0] = *(_QWORD *)(v25 + 20392);
  v63 = &v61;
  v56[0] = 0;
  v61 = 0LL;
  v64 = v23;
  v34 = a3 != 0 ? 8 : 10;
  if ( v23 && !_wcsicmp(v23, L"Segoe UI Symbol") )
    v34 |= 0x4000u;
  if ( !v12 )
  {
    v49 = Win32AllocPool(112LL, 1718382187LL, v26);
    v57 = (void *)v49;
    v12 = (_QWORD *)v49;
    if ( v49 )
    {
      if ( (int)StringCchCopyW((unsigned __int16 *)(v49 + 32), 0x21uLL, a1) >= 0 )
        goto LABEL_39;
      PFTOBJ::bUnloadEUDCFont(v50, v11);
      v42 = v12;
LABEL_46:
      Win32FreePool(v42);
LABEL_47:
      if ( v13 )
        Win32FreePool(v13);
    }
    goto LABEL_49;
  }
LABEL_39:
  v35 = Win32AllocPool(48LL, 1718382187LL, v26);
  v13 = (_QWORD *)v35;
  if ( !v35 )
    goto LABEL_45;
  *(_DWORD *)(v35 + 24) = v60[2];
  *(_DWORD *)(v35 + 28) = v60[3];
  v36 = -1LL;
  v59[0] = 0LL;
  do
    ++v36;
  while ( v11[v36] );
  v37 = v36 + 1;
  if ( (unsigned int)(v36 + 1) > 0x1388000
    || (v38 = (unsigned __int16 *)AllocFreeTmpBuffer(2 * v37), (v39 = v38) == 0LL)
    || (cCapString(v38, v11, v37),
        LODWORD(v55) = 0,
        Fonts = PUBLIC_PFTOBJ::bLoadFonts(
                  (PUBLIC_PFTOBJ *)v65,
                  v39,
                  v37,
                  1u,
                  0LL,
                  v55,
                  v56,
                  v34,
                  v59,
                  0,
                  0,
                  (struct _EUDCLOAD *)&v63,
                  0,
                  0),
        FreeTmpBuffer(v39),
        !Fonts) )
  {
LABEL_45:
    v42 = v57;
    if ( v57 )
      goto LABEL_46;
    goto LABEL_47;
  }
  if ( !(_QWORD)v61 )
  {
    PFTOBJ::bUnloadEUDCFont(v41, v11);
    goto LABEL_45;
  }
  v43 = (__int64 *)&v61;
  v44 = 2LL;
  do
  {
    v45 = *v43++;
    *(_DWORD *)(v45 + 12) |= 0x200u;
    --v44;
  }
  while ( v44 );
  if ( v57 )
  {
    v51 = v62;
    *(_QWORD *)((char *)v12 + 100) = 0LL;
    v12[3] = v12 + 2;
    v12[2] = v12 + 2;
    v52 = (_QWORD *)v51[1];
    if ( (_QWORD *)*v52 == v51 )
    {
      *v12 = v51;
      v12[1] = v52;
      *v52 = v12;
      v53 = v58;
      v51[1] = v12;
      ++*(_DWORD *)(v53 + 14104);
      if ( a5 )
        *a5 = v12;
      ++*(_DWORD *)(v53 + 14100);
      goto LABEL_54;
    }
    goto LABEL_60;
  }
LABEL_54:
  for ( i = 0LL; i < 2; ++i )
    v13[i + 4] = *((_QWORD *)&v61 + i);
  *((_DWORD *)v13 + 4) = a3;
  *((_DWORD *)v13 + 5) = 0;
  if ( v64 )
    *((_DWORD *)v13 + 5) = 1;
  ++*((_DWORD *)v12 + 25);
  ++*((_DWORD *)v12 + 26);
  v47 = v12 + 2;
  if ( a4 >= 0 )
  {
    v54 = *v47;
    if ( *(_QWORD **)(*v47 + 8LL) == v47 )
    {
      *v13 = v54;
      v13[1] = v47;
      *(_QWORD *)(v54 + 8) = v13;
      *v47 = v13;
      goto LABEL_69;
    }
LABEL_60:
    __fastfail(3u);
  }
  v48 = (_QWORD *)v47[1];
  if ( (_QWORD *)*v48 != v47 )
    goto LABEL_60;
  *v13 = v47;
  v13[1] = v48;
  *v48 = v13;
  v47[1] = v13;
LABEL_69:
  v10 = 1;
LABEL_49:
  Win32FreePool(v11);
  return v10;
}
