/*
 * XREFs of ?bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@@Z @ 0x1C0020D78
 * Callers:
 *     GreAddFontResourceWInternal @ 0x1C000DD2C (GreAddFontResourceWInternal.c)
 *     ?ppfeSynthesizeAMatch@MAPPER@@QEAAPEAVPFE@@PEAK0PEAU_POINTL@@@Z @ 0x1C001F1F0 (-ppfeSynthesizeAMatch@MAPPER@@QEAAPEAVPFE@@PEAK0PEAU_POINTL@@@Z.c)
 *     ?bLoadAFont@PUBLIC_PFTOBJ@@QEAAHPEAGPEAKKPEAPEAVPFF@@PEAU_EUDCLOAD@@@Z @ 0x1C00215DC (-bLoadAFont@PUBLIC_PFTOBJ@@QEAAHPEAGPEAKKPEAPEAVPFF@@PEAU_EUDCLOAD@@@Z.c)
 * Callees:
 *     ?chpfeIncrPFF@PFTOBJ@@QEAAKPEAVPFF@@PEAHKPEAU_EUDCLOAD@@@Z @ 0x1C000E1BC (-chpfeIncrPFF@PFTOBJ@@QEAAKPEAVPFF@@PEAHKPEAU_EUDCLOAD@@@Z.c)
 *     KmfdLoadFontFileView @ 0x1C0011294 (KmfdLoadFontFileView.c)
 *     ?UseUmfd@@YAHPEBG@Z @ 0x1C0011868 (-UseUmfd@@YAHPEBG@Z.c)
 *     ??1MALLOCOBJ@@QEAA@XZ @ 0x1C001A964 (--1MALLOCOBJ@@QEAA@XZ.c)
 *     ??0MALLOCOBJ@@QEAA@K@Z @ 0x1C001A988 (--0MALLOCOBJ@@QEAA@K@Z.c)
 *     PALLOCMEM2 @ 0x1C001A9C0 (PALLOCMEM2.c)
 *     ?QueryFontFile@PDEVOBJ@@QEAAJ_KKKPEAK@Z @ 0x1C001D00C (-QueryFontFile@PDEVOBJ@@QEAAJ_KKKPEAK@Z.c)
 *     ?pPFFGet@PUBLIC_PFTOBJ@@QEAAPEAVPFF@@PEAGKKPEAUtagDESIGNVECTOR@@KPEAPEAPEAV2@H@Z @ 0x1C0020CC8 (-pPFFGet@PUBLIC_PFTOBJ@@QEAAPEAVPFF@@PEAGKKPEAUtagDESIGNVECTOR@@KPEAPEAPEAV2@H@Z.c)
 *     ?vSetUniqueness@PFFOBJ@@QEAAXXZ @ 0x1C0021990 (-vSetUniqueness@PFFOBJ@@QEAAXXZ.c)
 *     ?bAddHash@PFFOBJ@@QEAAHH@Z @ 0x1C0021AE0 (-bAddHash@PFFOBJ@@QEAAHH@Z.c)
 *     ?vRemoveHash@PFFOBJ@@QEAAXXZ @ 0x1C0021C38 (-vRemoveHash@PFFOBJ@@QEAAXXZ.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C003C6F0 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     EngUnmapFontFileFD @ 0x1C00AA120 (EngUnmapFontFileFD.c)
 *     ?vUnreferenceFileviewSection@@YAXPEAU_FILEVIEW@@@Z @ 0x1C00D9028 (-vUnreferenceFileviewSection@@YAXPEAU_FILEVIEW@@@Z.c)
 *     ??0AutoExclusiveUmfdFileViewLock@@QEAA@XZ @ 0x1C00D911C (--0AutoExclusiveUmfdFileViewLock@@QEAA@XZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00E14B8 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?IsTrustedFontFilePath@@YA_NPEBG@Z @ 0x1C00FC8C4 (-IsTrustedFontFilePath@@YA_NPEBG@Z.c)
 *     ??0PFFMEMOBJ@@QEAA@IPEAGKKPEAUtagDESIGNVECTOR@@K_KPEAUHDEV__@@PEAUDHPDEV__@@PEAVPFT@@KKPEAU_FNTCHECKSUM@@PEAPEAU_FONTFILEVIEW@@PEAU_UNIVERSAL_FONT_ID@@@Z @ 0x1C0119FD8 (--0PFFMEMOBJ@@QEAA@IPEAGKKPEAUtagDESIGNVECTOR@@K_KPEAUHDEV__@@PEAUDHPDEV__@@PEAVPFT@@KKPEAU_FNTC.c)
 *     ??1PFFMEMOBJ@@QEAA@XZ @ 0x1C011A36C (--1PFFMEMOBJ@@QEAA@XZ.c)
 *     ?bLoadFontFileTable@PFFMEMOBJ@@QEAAHPEAGKPEAU_UNIVERSAL_FONT_ID@@PEAU_EUDCLOAD@@@Z @ 0x1C011A3D0 (-bLoadFontFileTable@PFFMEMOBJ@@QEAAHPEAGKPEAU_UNIVERSAL_FONT_ID@@PEAU_EUDCLOAD@@@Z.c)
 *     ??0PFFMEMOBJ@@QEAA@PEAVPFF@@KKPEAVPFT@@@Z @ 0x1C011A4BC (--0PFFMEMOBJ@@QEAA@PEAVPFF@@KKPEAVPFT@@@Z.c)
 *     ?Remove@?$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBI@Z @ 0x1C025CDD8 (-Remove@-$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBI@Z.c)
 *     UmfdLoadFontFileView @ 0x1C025CFF4 (UmfdLoadFontFileView.c)
 *     ?vKeepIt@PFFMEMOBJ@@QEAAXXZ @ 0x1C02B3808 (-vKeepIt@PFFMEMOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall PUBLIC_PFTOBJ::bLoadFonts(
        PUBLIC_PFTOBJ *this,
        unsigned __int16 *a2,
        unsigned int a3,
        unsigned int a4,
        struct tagDESIGNVECTOR *a5,
        size_t a6,
        unsigned int *a7,
        unsigned int a8,
        struct PFF **a9,
        unsigned int a10,
        int a11,
        struct _EUDCLOAD *a12)
{
  __int64 v13; // rsi
  unsigned int v15; // r14d
  int v16; // edi
  struct PFF **v18; // r13
  unsigned int *v19; // r15
  unsigned int v20; // r8d
  struct PFF *v21; // rax
  unsigned int v22; // r12d
  unsigned int v23; // eax
  struct PFF *v24; // rax
  struct PFF *v25; // rdi
  unsigned int v26; // edi
  unsigned int v27; // ebx
  unsigned __int16 *v28; // r14
  struct PFF *v29; // rax
  unsigned int v30; // eax
  int v31; // edx
  struct PFF **v32; // rdx
  struct PFF *v33; // rcx
  void **v34; // rbx
  __int64 v35; // r12
  struct _FONTFILEVIEW **v36; // rdi
  const WCHAR *v37; // rcx
  struct PFF *v38; // r13
  void **v39; // rax
  struct _FONTFILEVIEW **v40; // r15
  void **v41; // rbx
  signed __int64 v42; // r12
  __int64 v43; // rdi
  const unsigned __int16 *v45; // rcx
  __int64 v46; // rdx
  unsigned int FontFile; // edx
  unsigned int v48; // r9d
  unsigned __int16 *v49; // r8
  char v50; // bl
  struct PFF *v51; // rax
  unsigned int v52; // eax
  int v53; // edx
  struct PFF **v54; // rdx
  struct PFF *v55; // rcx
  _WORD *v56; // rcx
  struct _FONTFILEVIEW **v57; // rdx
  __int64 v58; // r8
  __int64 v60; // rbx
  ULONG_PTR *v61; // rbx
  __int64 v62; // r15
  struct _FONTFILEVIEW **v63; // rbx
  __int64 v64; // r15
  struct _FONTFILEVIEW *v65; // rcx
  struct _FONTFILEVIEW **v66; // rbx
  struct _FONTFILEVIEW *v67; // rcx
  size_t Size; // [rsp+38h] [rbp-B9h]
  unsigned int v69; // [rsp+60h] [rbp-91h]
  unsigned int v70; // [rsp+68h] [rbp-89h]
  char v71; // [rsp+88h] [rbp-69h]
  int v72; // [rsp+8Ch] [rbp-65h] BYREF
  int v73; // [rsp+90h] [rbp-61h]
  int v74; // [rsp+94h] [rbp-5Dh]
  unsigned int v75[2]; // [rsp+98h] [rbp-59h] BYREF
  _QWORD v76[2]; // [rsp+A0h] [rbp-51h] BYREF
  char v77; // [rsp+B0h] [rbp-41h]
  unsigned int v78[2]; // [rsp+B8h] [rbp-39h] BYREF
  void **v79; // [rsp+C0h] [rbp-31h] BYREF
  struct PFF **v80; // [rsp+C8h] [rbp-29h] BYREF
  unsigned __int64 v81; // [rsp+D0h] [rbp-21h] BYREF
  struct PFF *Src; // [rsp+D8h] [rbp-19h] BYREF
  struct _FONTFILEVIEW **v83; // [rsp+E0h] [rbp-11h]
  __int64 v84; // [rsp+E8h] [rbp-9h] BYREF
  void **v85; // [rsp+F0h] [rbp-1h]
  PCWSTR SourceString; // [rsp+140h] [rbp+4Fh] BYREF
  unsigned int v88; // [rsp+148h] [rbp+57h]

  v88 = a3;
  SourceString = a2;
  v13 = a4;
  v71 = 1;
  v74 = 0;
  v72 = 0;
  v15 = 0;
  v16 = 0;
  v73 = a12 != 0LL;
  if ( !a2 || a4 > 3 )
    return 0LL;
  v18 = a9;
  v19 = a7;
  if ( a11 )
    goto LABEL_28;
  v79 = (void **)ghsemPublicPFT;
  GreAcquireSemaphore(ghsemPublicPFT);
  v20 = v88;
  *v19 = 0;
  v21 = PUBLIC_PFTOBJ::pPFFGet(this, a2, v20, v13, a5, a6, &v80, v73);
  v22 = a10;
  *v18 = v21;
  if ( v21 )
  {
    v23 = PFTOBJ::chpfeIncrPFF((struct PFT **const *)this, v21, &v72, v22, a12);
    *v19 = v23;
    if ( v23 )
    {
      if ( (v22 & 0x40) != 0 )
        *v19 = 0;
      SEMOBJ::vUnlock((SEMOBJ *)&v79);
      return (unsigned int)v72;
    }
    v15 = v72;
    v74 = v72;
  }
  v24 = PUBLIC_PFTOBJ::pPFFGet(this, (unsigned __int16 *)SourceString, v88, v13, a5, a6, &v80, v73 == 0);
  Src = v24;
  if ( v24 && !*((_QWORD *)v24 + 21) )
    v16 = 1;
  SEMOBJ::vUnlock((SEMOBJ *)&v79);
  if ( !v16 )
  {
LABEL_28:
    v81 = 0LL;
    MALLOCOBJ::MALLOCOBJ((MALLOCOBJ *)&v79, 12 * v13);
    v34 = v79;
    if ( v79
      && (v75[0] = (8 * v13 + 7) & 0xFFFFFFF8,
          v35 = v13,
          v83 = (struct _FONTFILEVIEW **)PALLOCMEM2(v75[0] + 120 * (_DWORD)v13, 1986422343LL, 1),
          (v36 = v83) != 0LL) )
    {
      v37 = SourceString;
      *(_QWORD *)v75 = (char *)v83 + v75[0];
      *(_QWORD *)v78 = SourceString;
      if ( (_DWORD)v13 )
      {
        v38 = *(struct PFF **)v75;
        v85 = &v34[v13];
        v39 = v34;
        v40 = v83;
        v41 = v85;
        v42 = (char *)v39 - (char *)v83;
        v43 = v13;
        do
        {
          *v40 = v38;
          *((_QWORD *)v38 + 10) = v37;
          *((_DWORD *)*v40 + 10) ^= (*((_DWORD *)*v40 + 10) ^ (8 * IsTrustedFontFilePath(v37))) & 8;
          v37 = *(const WCHAR **)v78;
          *(struct _FONTFILEVIEW **)((char *)v40 + v42) = 0LL;
          *(_DWORD *)v41 = 0;
          while ( *v37++ )
            ;
          v38 = (struct PFF *)((char *)v38 + 120);
          *(_QWORD *)v78 = v37;
          ++v40;
          v41 = (void **)((char *)v41 + 4);
          --v43;
        }
        while ( v43 );
        v34 = v79;
        v35 = v13;
        v36 = v83;
        v15 = v74;
        v19 = a7;
        v18 = a9;
      }
      GreAcquireSemaphore(ghsemDriverMgmt);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 12LL);
      *(_QWORD *)v78 = 0LL;
      if ( UseUmfd(v45) )
        UmfdLoadFontFileView(SourceString, v46, v36, (unsigned int)v13, v34, &v34[v35], a5, &v81, v75);
      else
        KmfdLoadFontFileView(
          (unsigned __int16 *)SourceString,
          v88,
          v36,
          v13,
          v34,
          (unsigned int *)&v34[v35],
          a5,
          a6,
          &v81,
          (struct PDEV **)v75,
          v78);
      Src = *(struct PFF **)v75;
      EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt", ghsemDriverMgmt);
      GreReleaseSemaphoreInternal(ghsemDriverMgmt);
      if ( !v81 )
        goto LABEL_74;
      FontFile = PDEVOBJ::QueryFontFile((PDEVOBJ *)&Src, v81, 2u, 0, 0LL);
      v75[0] = FontFile;
      if ( FontFile - 1 > 0xFFFFFFFD )
        goto LABEL_74;
      if ( !v73 || *((_QWORD *)a12 + 1) || FontFile <= 2 )
      {
        v48 = v88;
        v49 = (unsigned __int16 *)SourceString;
        v50 = a10;
        v70 = a10;
        v69 = a8;
        *v19 = FontFile;
        LODWORD(Size) = a6;
        PFFMEMOBJ::PFFMEMOBJ(
          (PFFMEMOBJ *)v76,
          FontFile,
          v49,
          v48,
          v13,
          a5,
          Size,
          v81,
          (HDEV)Src,
          0LL,
          *(struct PFT **)this,
          v69,
          v70,
          (struct _FNTCHECKSUM *)v78,
          v36,
          0LL);
        if ( v76[0] )
        {
          v71 = 0;
          if ( (unsigned int)PFFMEMOBJ::bLoadFontFileTable(
                               (PFFMEMOBJ *)v76,
                               (unsigned __int16 *)SourceString,
                               v75[0],
                               0LL,
                               a12) )
          {
            v84 = ghsemPublicPFT;
            GreAcquireSemaphore(ghsemPublicPFT);
            v51 = PUBLIC_PFTOBJ::pPFFGet(this, (unsigned __int16 *)SourceString, v88, v13, a5, a6, &v80, v73);
            *v18 = v51;
            if ( v51
              && (v52 = PFTOBJ::chpfeIncrPFF((struct PFT **const *)this, v51, &v72, v50, a12), v15 = v72, v74 = v72, v52) )
            {
              if ( (v50 & 0x40) != 0 )
                v52 = 0;
              *v19 = v52;
            }
            else
            {
              v53 = v73;
              *v18 = (struct PFF *)v76[0];
              if ( (unsigned int)PFFOBJ::bAddHash((PFFOBJ *)v76, v53) )
              {
                v54 = v80;
                ++*(_DWORD *)(*(_QWORD *)this + 28LL);
                if ( *v54 )
                  *((_QWORD *)*v54 + 2) = *v18;
                v55 = *v18;
                *((_QWORD *)v55 + 1) = *v54;
                *((_QWORD *)v55 + 2) = 0LL;
                *v54 = v55;
                PFFOBJ::vSetUniqueness((PFFOBJ *)v76);
                PFFMEMOBJ::vKeepIt((PFFMEMOBJ *)v76);
                v56 = *(_WORD **)(v76[0] + 24LL);
                if ( (_DWORD)v13 )
                {
                  v57 = v36;
                  v58 = v35;
                  do
                  {
                    *((_QWORD *)*v57 + 10) = v56;
                    while ( *v56++ )
                      ;
                    ++v57;
                    --v58;
                  }
                  while ( v58 );
                }
                if ( (v50 & 0x40) != 0 )
                  *((_DWORD *)*v18 + 13) |= 0x80u;
                if ( (_DWORD)v13 )
                {
                  v60 = v35;
                  do
                  {
                    EngUnmapFontFileFD((ULONG_PTR)*v36++);
                    --v60;
                  }
                  while ( v60 );
                }
                v36 = 0LL;
                v83 = 0LL;
                v15 = 1;
                v74 = 1;
              }
              else
              {
                *v19 = 0;
                PFFOBJ::vRemoveHash((PFFOBJ *)v76);
              }
            }
            SEMOBJ::vUnlock((SEMOBJ *)&v84);
          }
          else
          {
            *v19 = 0;
          }
          if ( (v77 & 2) == 0 )
          {
            if ( (_DWORD)v13 )
            {
              do
              {
                EngUnmapFontFileFD((ULONG_PTR)*v36++);
                --v35;
              }
              while ( v35 );
              v15 = v74;
            }
            PFFMEMOBJ::~PFFMEMOBJ((PFFMEMOBJ *)v76);
            goto LABEL_95;
          }
        }
        PFFMEMOBJ::~PFFMEMOBJ((PFFMEMOBJ *)v76);
LABEL_74:
        if ( v36 && (_DWORD)v13 )
        {
          v61 = (ULONG_PTR *)v36;
          v62 = v35;
          do
          {
            EngUnmapFontFileFD(*v61++);
            --v62;
          }
          while ( v62 );
        }
        if ( v71 )
        {
          AutoExclusiveUmfdFileViewLock::AutoExclusiveUmfdFileViewLock((AutoExclusiveUmfdFileViewLock *)&a12);
          if ( UmfdFileviewLookup && (_DWORD)v13 )
          {
            v63 = v36;
            v64 = v35;
            do
            {
              v65 = *v63;
              if ( (*((_DWORD *)*v63 + 10) & 0x20) != 0 )
              {
                LODWORD(SourceString) = *((_DWORD *)v65 + 16);
                NSInstrumentation::CSortedVector<unsigned int,_FONTFILEVIEW *>::Remove(v65, &SourceString);
              }
              ++v63;
              --v64;
            }
            while ( v64 );
          }
          PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&a12);
          if ( (_DWORD)v13 )
          {
            v66 = v36;
            do
            {
              v67 = *v66;
              if ( (*((_DWORD *)*v66 + 10) & 8) == 0 && !*((_QWORD *)v67 + 2) && !*((_QWORD *)v67 + 1) )
                vUnreferenceFileviewSection(v67);
              ++v66;
              --v35;
            }
            while ( v35 );
            v36 = v83;
          }
          Win32FreePool(v36);
        }
      }
    }
    else
    {
      v15 = 0;
    }
LABEL_95:
    MALLOCOBJ::~MALLOCOBJ((MALLOCOBJ *)&v79);
    return v15;
  }
  v25 = Src;
  PFFMEMOBJ::PFFMEMOBJ((PFFMEMOBJ *)v76, Src, a8, v22, *(struct PFT **)this);
  v26 = *((_DWORD *)v25 + 36);
  v27 = 0;
  v72 = 0;
  if ( v76[0] )
  {
    v28 = (unsigned __int16 *)SourceString;
    if ( (unsigned int)PFFMEMOBJ::bLoadFontFileTable((PFFMEMOBJ *)v76, (unsigned __int16 *)SourceString, v26, 0LL, a12) )
    {
      SourceString = (PCWSTR)ghsemPublicPFT;
      GreAcquireSemaphore(ghsemPublicPFT);
      v29 = PUBLIC_PFTOBJ::pPFFGet(this, v28, v88, v13, a5, a6, &v80, v73);
      *v18 = v29;
      if ( v29
        && (v30 = PFTOBJ::chpfeIncrPFF((struct PFT **const *)this, v29, &v72, v22, a12), v27 = v72, (v26 = v30) != 0) )
      {
        *v19 = v30;
      }
      else
      {
        v31 = v73;
        *v18 = (struct PFF *)v76[0];
        if ( (unsigned int)PFFOBJ::bAddHash((PFFOBJ *)v76, v31) )
        {
          v27 = 1;
          v32 = v80;
          ++*(_DWORD *)(*(_QWORD *)this + 28LL);
          if ( *v32 )
            *((_QWORD *)*v32 + 2) = *v18;
          v33 = *v18;
          *((_QWORD *)v33 + 1) = *v32;
          *((_QWORD *)v33 + 2) = 0LL;
          *v32 = v33;
          PFFOBJ::vSetUniqueness((PFFOBJ *)v76);
          PFFMEMOBJ::vKeepIt((PFFMEMOBJ *)v76);
          *v19 = v26;
        }
        else
        {
          *v19 = 0;
          PFFOBJ::vRemoveHash((PFFOBJ *)v76);
        }
      }
      SEMOBJ::vUnlock((SEMOBJ *)&SourceString);
    }
    else
    {
      *v19 = 0;
    }
  }
  PFFMEMOBJ::~PFFMEMOBJ((PFFMEMOBJ *)v76);
  return v27;
}
