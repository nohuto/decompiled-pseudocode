/*
 * XREFs of ?bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@@Z @ 0x1C00242E8
 * Callers:
 *     GreAddFontResourceWInternal @ 0x1C00219AC (GreAddFontResourceWInternal.c)
 *     ?bLoadAFont@PUBLIC_PFTOBJ@@QEAAHPEAGPEAKKPEAPEAVPFF@@PEAU_EUDCLOAD@@@Z @ 0x1C0024B94 (-bLoadAFont@PUBLIC_PFTOBJ@@QEAAHPEAGPEAKKPEAPEAVPFF@@PEAU_EUDCLOAD@@@Z.c)
 *     ?ppfeSynthesizeAMatch@MAPPER@@QEAAPEAVPFE@@PEAK0PEAU_POINTL@@@Z @ 0x1C0024ECC (-ppfeSynthesizeAMatch@MAPPER@@QEAAPEAVPFE@@PEAK0PEAU_POINTL@@@Z.c)
 * Callees:
 *     ?vUnreferenceFileviewSection@@YAXPEAU_FILEVIEW@@@Z @ 0x1C00214C8 (-vUnreferenceFileviewSection@@YAXPEAU_FILEVIEW@@@Z.c)
 *     ??0AutoExclusiveUmfdFileViewLock@@QEAA@XZ @ 0x1C0021514 (--0AutoExclusiveUmfdFileViewLock@@QEAA@XZ.c)
 *     ?IsTrustedFontFilePath@@YA_NPEBG@Z @ 0x1C002232C (-IsTrustedFontFilePath@@YA_NPEBG@Z.c)
 *     KmfdLoadFontFileView @ 0x1C0022388 (KmfdLoadFontFileView.c)
 *     ?UseUmfd@@YAHPEBG@Z @ 0x1C002291C (-UseUmfd@@YAHPEBG@Z.c)
 *     ?chpfeIncrPFF@PFTOBJ@@QEAAKPEAVPFF@@PEAHKPEAU_EUDCLOAD@@@Z @ 0x1C0022988 (-chpfeIncrPFF@PFTOBJ@@QEAAKPEAVPFF@@PEAHKPEAU_EUDCLOAD@@@Z.c)
 *     ?pPFFGet@PUBLIC_PFTOBJ@@QEAAPEAVPFF@@PEAGKKPEAUtagDESIGNVECTOR@@KPEAPEAPEAV2@H@Z @ 0x1C0024220 (-pPFFGet@PUBLIC_PFTOBJ@@QEAAPEAVPFF@@PEAGKKPEAUtagDESIGNVECTOR@@KPEAPEAPEAV2@H@Z.c)
 *     ?vSetUniqueness@PFFOBJ@@QEAAXXZ @ 0x1C00267A8 (-vSetUniqueness@PFFOBJ@@QEAAXXZ.c)
 *     ?bAddHash@PFFOBJ@@QEAAHH@Z @ 0x1C00268F8 (-bAddHash@PFFOBJ@@QEAAHH@Z.c)
 *     ?vRemoveHash@PFFOBJ@@QEAAXXZ @ 0x1C0026A50 (-vRemoveHash@PFFOBJ@@QEAAXXZ.c)
 *     ?QueryFontFile@PDEVOBJ@@QEAAJ_KKKPEAK@Z @ 0x1C002931C (-QueryFontFile@PDEVOBJ@@QEAAJ_KKKPEAK@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C0052ABC (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ??1MALLOCOBJ@@QEAA@XZ @ 0x1C00604AC (--1MALLOCOBJ@@QEAA@XZ.c)
 *     ??0MALLOCOBJ@@QEAA@K@Z @ 0x1C00604D0 (--0MALLOCOBJ@@QEAA@K@Z.c)
 *     PALLOCMEM2 @ 0x1C0060508 (PALLOCMEM2.c)
 *     ??1PFFMEMOBJ@@QEAA@XZ @ 0x1C0064574 (--1PFFMEMOBJ@@QEAA@XZ.c)
 *     ??0PFFMEMOBJ@@QEAA@IPEAGKKPEAUtagDESIGNVECTOR@@K_KPEAUHDEV__@@PEAUDHPDEV__@@PEAVPFT@@KKPEAU_FNTCHECKSUM@@PEAPEAU_FONTFILEVIEW@@PEAU_UNIVERSAL_FONT_ID@@@Z @ 0x1C00645D8 (--0PFFMEMOBJ@@QEAA@IPEAGKKPEAUtagDESIGNVECTOR@@K_KPEAUHDEV__@@PEAUDHPDEV__@@PEAVPFT@@KKPEAU_FNTC.c)
 *     ?bLoadFontFileTable@PFFMEMOBJ@@QEAAHPEAGKPEAU_UNIVERSAL_FONT_ID@@PEAU_EUDCLOAD@@@Z @ 0x1C0064910 (-bLoadFontFileTable@PFFMEMOBJ@@QEAAHPEAGKPEAU_UNIVERSAL_FONT_ID@@PEAU_EUDCLOAD@@@Z.c)
 *     ??0PFFMEMOBJ@@QEAA@PEAVPFF@@KKPEAVPFT@@@Z @ 0x1C00649FC (--0PFFMEMOBJ@@QEAA@PEAVPFF@@KKPEAVPFT@@@Z.c)
 *     EngUnmapFontFileFD @ 0x1C00C2280 (EngUnmapFontFileFD.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00FDC0C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?Remove@?$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBI@Z @ 0x1C025A298 (-Remove@-$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBI@Z.c)
 *     UmfdLoadFontFileView @ 0x1C025A374 (UmfdLoadFontFileView.c)
 *     ?vKeepIt@PFFMEMOBJ@@QEAAXXZ @ 0x1C02B693C (-vKeepIt@PFFMEMOBJ@@QEAAXXZ.c)
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
  int v16; // ebx
  struct PFF **v18; // r13
  unsigned int *v19; // r15
  unsigned int v20; // r8d
  struct PFF *v21; // rax
  char v22; // r14
  unsigned int v23; // eax
  struct PFF *v24; // rdi
  unsigned int v25; // edi
  unsigned int v26; // ebx
  unsigned __int16 *v27; // r14
  struct PFF *v28; // rax
  unsigned int v29; // eax
  __int64 v30; // rsi
  int v31; // edx
  __int64 v32; // rax
  struct PFF **v33; // rdx
  struct PFF *v34; // rcx
  void **v35; // rbx
  __int64 v36; // r12
  struct _FONTFILEVIEW **v37; // rdi
  const WCHAR *v38; // rcx
  HDEV v39; // r13
  void **v40; // rax
  __int64 v41; // r15
  void **v42; // rbx
  char *v43; // r12
  __int64 v44; // rdi
  const unsigned __int16 *v46; // rcx
  __int64 v47; // rdx
  unsigned int FontFile; // edx
  unsigned int v49; // r9d
  unsigned __int16 *v50; // r8
  struct PFF *v51; // rax
  char v52; // r14
  unsigned int v53; // eax
  bool v54; // zf
  int v55; // edx
  __int64 v56; // rax
  struct PFF **v57; // rdx
  struct PFF *v58; // rcx
  _WORD *v59; // rcx
  struct _FONTFILEVIEW **v60; // rdx
  __int64 v61; // r8
  __int64 v63; // rbx
  ULONG_PTR *v64; // rbx
  __int64 v65; // r15
  struct _FONTFILEVIEW **v66; // rbx
  __int64 v67; // r15
  struct _FONTFILEVIEW *v68; // rcx
  __int64 v69; // rdx
  __int64 v70; // r8
  struct _FONTFILEVIEW **v71; // rbx
  struct _FONTFILEVIEW *v72; // rcx
  struct tagDESIGNVECTOR *Src; // [rsp+30h] [rbp-C1h]
  size_t Size; // [rsp+38h] [rbp-B9h]
  unsigned __int64 v75; // [rsp+40h] [rbp-B1h]
  HDEV v76; // [rsp+48h] [rbp-A9h]
  struct PFT *v77; // [rsp+58h] [rbp-99h]
  unsigned int v78; // [rsp+60h] [rbp-91h]
  unsigned int v79; // [rsp+68h] [rbp-89h]
  char v80; // [rsp+88h] [rbp-69h]
  int v81; // [rsp+8Ch] [rbp-65h] BYREF
  int v82; // [rsp+90h] [rbp-61h]
  int v83; // [rsp+94h] [rbp-5Dh]
  unsigned int v84[2]; // [rsp+98h] [rbp-59h] BYREF
  _QWORD v85[2]; // [rsp+A0h] [rbp-51h] BYREF
  char v86; // [rsp+B0h] [rbp-41h]
  unsigned int v87[2]; // [rsp+B8h] [rbp-39h] BYREF
  void **v88; // [rsp+C0h] [rbp-31h] BYREF
  struct PFF **v89; // [rsp+C8h] [rbp-29h] BYREF
  unsigned __int64 v90; // [rsp+D0h] [rbp-21h] BYREF
  __int64 v91; // [rsp+D8h] [rbp-19h]
  __int64 v92; // [rsp+E0h] [rbp-11h] BYREF
  HDEV v93; // [rsp+E8h] [rbp-9h] BYREF
  void **v94; // [rsp+F0h] [rbp-1h]
  PCWSTR SourceString; // [rsp+140h] [rbp+4Fh] BYREF
  unsigned int v97; // [rsp+148h] [rbp+57h]

  v97 = a3;
  SourceString = a2;
  v13 = a4;
  v80 = 1;
  v83 = 0;
  v81 = 0;
  v15 = 0;
  v16 = 0;
  v82 = a12 != 0LL;
  if ( !a2 || a4 > 3 )
    return 0LL;
  v18 = a9;
  v19 = a7;
  if ( a11 )
    goto LABEL_30;
  v88 = (void **)ghsemPublicPFT;
  GreAcquireSemaphore(ghsemPublicPFT);
  v20 = v97;
  *v19 = 0;
  v21 = PUBLIC_PFTOBJ::pPFFGet(this, a2, v20, v13, a5, a6, &v89, v82);
  *v18 = v21;
  if ( v21 )
  {
    v22 = a10;
    v23 = PFTOBJ::chpfeIncrPFF((struct PFT **const *)this, v21, &v81, a10, a12);
    *v19 = v23;
    if ( v23 )
    {
      if ( (v22 & 0x40) != 0 )
        *v19 = 0;
      SEMOBJ::vUnlock((SEMOBJ *)&v88);
      return (unsigned int)v81;
    }
    v15 = v81;
    v83 = v81;
  }
  v24 = PUBLIC_PFTOBJ::pPFFGet(this, a2, v97, v13, a5, a6, &v89, v82 == 0);
  if ( v24 && !*((_QWORD *)v24 + 21) )
    v16 = 1;
  SEMOBJ::vUnlock((SEMOBJ *)&v88);
  if ( !v16 )
  {
LABEL_30:
    v90 = 0LL;
    MALLOCOBJ::MALLOCOBJ((MALLOCOBJ *)&v88, 12 * v13);
    v35 = v88;
    if ( v88
      && (v84[0] = (8 * v13 + 7) & 0xFFFFFFF8,
          v36 = v13,
          v91 = PALLOCMEM2(v84[0] + 120 * (_DWORD)v13),
          (v37 = (struct _FONTFILEVIEW **)v91) != 0LL) )
    {
      v38 = SourceString;
      *(_QWORD *)v84 = v91 + v84[0];
      *(_QWORD *)v87 = SourceString;
      if ( (_DWORD)v13 )
      {
        v39 = *(HDEV *)v84;
        v94 = &v35[v13];
        v40 = v35;
        v41 = v91;
        v42 = v94;
        v43 = (char *)v40 - v91;
        v44 = v13;
        do
        {
          *(_QWORD *)v41 = v39;
          *((_QWORD *)v39 + 10) = v38;
          *(_DWORD *)(*(_QWORD *)v41 + 40LL) ^= (*(_DWORD *)(*(_QWORD *)v41 + 40LL) ^ (8 * IsTrustedFontFilePath(v38))) & 8;
          v38 = *(const WCHAR **)v87;
          *(_QWORD *)&v43[v41] = 0LL;
          *(_DWORD *)v42 = 0;
          while ( *v38++ )
            ;
          v39 += 30;
          *(_QWORD *)v87 = v38;
          v41 += 8LL;
          v42 = (void **)((char *)v42 + 4);
          --v44;
        }
        while ( v44 );
        v35 = v88;
        v36 = v13;
        v37 = (struct _FONTFILEVIEW **)v91;
        v15 = v83;
        v19 = a7;
        v18 = a9;
      }
      GreAcquireSemaphore(ghsemDriverMgmt);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 12LL);
      *(_QWORD *)v87 = 0LL;
      if ( UseUmfd(v46) )
        UmfdLoadFontFileView(SourceString, v47, v37, (unsigned int)v13, v35, &v35[v36], a5, &v90, v84);
      else
        KmfdLoadFontFileView(
          (unsigned __int16 *)SourceString,
          v97,
          v37,
          v13,
          v35,
          (unsigned int *)&v35[v36],
          a5,
          a6,
          &v90,
          (struct PDEV **)v84,
          v87);
      v93 = *(HDEV *)v84;
      EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt", ghsemDriverMgmt);
      GreReleaseSemaphoreInternal(ghsemDriverMgmt);
      if ( !v90 )
        goto LABEL_79;
      FontFile = PDEVOBJ::QueryFontFile((PDEVOBJ *)&v93, v90, 2u, 0, 0LL);
      v84[0] = FontFile;
      if ( FontFile - 1 > 0xFFFFFFFD )
        goto LABEL_79;
      if ( !v82 || *((_QWORD *)a12 + 1) || FontFile <= 2 )
      {
        v49 = v97;
        v50 = (unsigned __int16 *)SourceString;
        v79 = a10;
        v78 = a8;
        v77 = *(struct PFT **)this;
        v76 = v93;
        v75 = v90;
        LODWORD(Size) = a6;
        Src = a5;
        *v19 = FontFile;
        PFFMEMOBJ::PFFMEMOBJ(
          (PFFMEMOBJ *)v85,
          FontFile,
          v50,
          v49,
          v13,
          Src,
          Size,
          v75,
          v76,
          0LL,
          v77,
          v78,
          v79,
          (struct _FNTCHECKSUM *)v87,
          v37,
          0LL);
        if ( !v85[0] )
        {
LABEL_78:
          PFFMEMOBJ::~PFFMEMOBJ((PFFMEMOBJ *)v85);
LABEL_79:
          if ( v37 && (_DWORD)v13 )
          {
            v64 = (ULONG_PTR *)v37;
            v65 = v36;
            do
            {
              EngUnmapFontFileFD(*v64++);
              --v65;
            }
            while ( v65 );
          }
          if ( v80 )
          {
            AutoExclusiveUmfdFileViewLock::AutoExclusiveUmfdFileViewLock((AutoExclusiveUmfdFileViewLock *)&a12);
            if ( UmfdFileviewLookup && (_DWORD)v13 )
            {
              v66 = v37;
              v67 = v36;
              do
              {
                v68 = *v66;
                if ( (*((_DWORD *)*v66 + 10) & 0x20) != 0 )
                {
                  LODWORD(SourceString) = *((_DWORD *)v68 + 16);
                  NSInstrumentation::CSortedVector<unsigned int,_FONTFILEVIEW *>::Remove(v68, &SourceString);
                }
                ++v66;
                --v67;
              }
              while ( v67 );
            }
            PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&a12);
            if ( (_DWORD)v13 )
            {
              v71 = v37;
              do
              {
                v72 = *v71;
                if ( (*((_DWORD *)*v71 + 10) & 8) == 0 && !*((_QWORD *)v72 + 2) && !*((_QWORD *)v72 + 1) )
                  vUnreferenceFileviewSection(v72);
                ++v71;
                --v36;
              }
              while ( v36 );
              v37 = (struct _FONTFILEVIEW **)v91;
            }
            Win32FreePool(v37, v69, v70);
          }
          goto LABEL_100;
        }
        v80 = 0;
        if ( !(unsigned int)PFFMEMOBJ::bLoadFontFileTable(
                              (PFFMEMOBJ *)v85,
                              (unsigned __int16 *)SourceString,
                              v84[0],
                              0LL,
                              a12) )
        {
          *v19 = 0;
          goto LABEL_73;
        }
        v92 = ghsemPublicPFT;
        GreAcquireSemaphore(ghsemPublicPFT);
        v51 = PUBLIC_PFTOBJ::pPFFGet(this, (unsigned __int16 *)SourceString, v97, v13, a5, a6, &v89, v82);
        *v18 = v51;
        if ( v51 )
        {
          v52 = a10;
          v53 = PFTOBJ::chpfeIncrPFF((struct PFT **const *)this, v51, &v81, a10, a12);
          if ( v53 )
          {
            v54 = (v52 & 0x40) == 0;
            v15 = v81;
            v83 = v81;
            if ( !v54 )
              v53 = 0;
            *v19 = v53;
LABEL_72:
            SEMOBJ::vUnlock((SEMOBJ *)&v92);
LABEL_73:
            if ( (v86 & 2) == 0 )
            {
              if ( (_DWORD)v13 )
              {
                do
                {
                  EngUnmapFontFileFD((ULONG_PTR)*v37++);
                  --v36;
                }
                while ( v36 );
                v15 = v83;
              }
              PFFMEMOBJ::~PFFMEMOBJ((PFFMEMOBJ *)v85);
              goto LABEL_100;
            }
            goto LABEL_78;
          }
          v15 = v81;
          v83 = v81;
        }
        v55 = v82;
        *v18 = (struct PFF *)v85[0];
        if ( (unsigned int)PFFOBJ::bAddHash((PFFOBJ *)v85, v55) )
        {
          v56 = *(_QWORD *)this;
          if ( *(_QWORD *)(v85[0] + 88LL) == qword_1C0334780 )
            ++*(_DWORD *)(v56 + 32);
          ++*(_DWORD *)(v56 + 28);
          v57 = v89;
          if ( *v89 )
            *((_QWORD *)*v89 + 2) = *v18;
          v58 = *v18;
          *((_QWORD *)v58 + 1) = *v57;
          *((_QWORD *)v58 + 2) = 0LL;
          *v57 = v58;
          PFFOBJ::vSetUniqueness((PFFOBJ *)v85);
          PFFMEMOBJ::vKeepIt((PFFMEMOBJ *)v85);
          v59 = *(_WORD **)(v85[0] + 24LL);
          if ( (_DWORD)v13 )
          {
            v60 = v37;
            v61 = v36;
            do
            {
              *((_QWORD *)*v60 + 10) = v59;
              while ( *v59++ )
                ;
              ++v60;
              --v61;
            }
            while ( v61 );
          }
          if ( (a10 & 0x40) != 0 )
            *((_DWORD *)*v18 + 13) |= 0x80u;
          if ( (_DWORD)v13 )
          {
            v63 = v36;
            do
            {
              EngUnmapFontFileFD((ULONG_PTR)*v37++);
              --v63;
            }
            while ( v63 );
          }
          v37 = 0LL;
          v91 = 0LL;
          v15 = 1;
          v83 = 1;
        }
        else
        {
          *v19 = 0;
          PFFOBJ::vRemoveHash((PFFOBJ *)v85);
        }
        goto LABEL_72;
      }
    }
    else
    {
      v15 = 0;
    }
LABEL_100:
    MALLOCOBJ::~MALLOCOBJ((MALLOCOBJ *)&v88);
    return v15;
  }
  PFFMEMOBJ::PFFMEMOBJ((PFFMEMOBJ *)v85, v24, a8, a10, *(struct PFT **)this);
  v25 = *((_DWORD *)v24 + 36);
  v26 = 0;
  v81 = 0;
  if ( v85[0] )
  {
    v27 = (unsigned __int16 *)SourceString;
    if ( (unsigned int)PFFMEMOBJ::bLoadFontFileTable((PFFMEMOBJ *)v85, (unsigned __int16 *)SourceString, v25, 0LL, a12) )
    {
      SourceString = (PCWSTR)ghsemPublicPFT;
      GreAcquireSemaphore(ghsemPublicPFT);
      v28 = PUBLIC_PFTOBJ::pPFFGet(this, v27, v97, v13, a5, a6, &v89, v82);
      *v18 = v28;
      if ( v28
        && (v29 = PFTOBJ::chpfeIncrPFF((struct PFT **const *)this, v28, &v81, a10, a12), v26 = v81, (v25 = v29) != 0) )
      {
        *v19 = v29;
      }
      else
      {
        v30 = v85[0];
        v31 = v82;
        *v18 = (struct PFF *)v85[0];
        if ( (unsigned int)PFFOBJ::bAddHash((PFFOBJ *)v85, v31) )
        {
          v26 = 1;
          v32 = *(_QWORD *)this;
          if ( *(_QWORD *)(v30 + 88) == qword_1C0334780 )
            ++*(_DWORD *)(v32 + 32);
          ++*(_DWORD *)(v32 + 28);
          v33 = v89;
          if ( *v89 )
            *((_QWORD *)*v89 + 2) = *v18;
          v34 = *v18;
          *((_QWORD *)v34 + 1) = *v33;
          *((_QWORD *)v34 + 2) = 0LL;
          *v33 = v34;
          PFFOBJ::vSetUniqueness((PFFOBJ *)v85);
          PFFMEMOBJ::vKeepIt((PFFMEMOBJ *)v85);
          *v19 = v25;
        }
        else
        {
          *v19 = 0;
          PFFOBJ::vRemoveHash((PFFOBJ *)v85);
        }
      }
      SEMOBJ::vUnlock((SEMOBJ *)&SourceString);
    }
    else
    {
      *v19 = 0;
    }
  }
  PFFMEMOBJ::~PFFMEMOBJ((PFFMEMOBJ *)v85);
  return v26;
}
