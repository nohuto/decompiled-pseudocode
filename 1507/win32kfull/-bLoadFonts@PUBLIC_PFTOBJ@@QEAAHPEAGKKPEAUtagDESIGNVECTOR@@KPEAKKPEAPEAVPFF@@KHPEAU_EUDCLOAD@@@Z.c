/*
 * XREFs of ?bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@@Z @ 0x1C013FB2C
 * Callers:
 *     ?ppfeSynthesizeAMatch@MAPPER@@QEAAPEAVPFE@@PEAK0PEAU_POINTL@@@Z @ 0x1C0027BC8 (-ppfeSynthesizeAMatch@MAPPER@@QEAAPEAVPFE@@PEAK0PEAU_POINTL@@@Z.c)
 *     GreAddFontResourceWInternal @ 0x1C013E1DC (GreAddFontResourceWInternal.c)
 *     ?bLoadAFont@PUBLIC_PFTOBJ@@QEAAHPEAGPEAKKPEAPEAVPFF@@PEAU_EUDCLOAD@@@Z @ 0x1C0140390 (-bLoadAFont@PUBLIC_PFTOBJ@@QEAAHPEAGPEAKKPEAPEAVPFF@@PEAU_EUDCLOAD@@@Z.c)
 * Callees:
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C0012874 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     PALLOCMEM2 @ 0x1C0033FC4 (PALLOCMEM2.c)
 *     EngUnmapFontFileFD @ 0x1C00B18E0 (EngUnmapFontFileFD.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00D6F48 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?vUnreferenceFileviewSection@@YAXPEAU_FILEVIEW@@@Z @ 0x1C00F19B0 (-vUnreferenceFileviewSection@@YAXPEAU_FILEVIEW@@@Z.c)
 *     ??1MALLOCOBJ@@QEAA@XZ @ 0x1C00F9B94 (--1MALLOCOBJ@@QEAA@XZ.c)
 *     ?vRemoveHash@PFFOBJ@@QEAAXXZ @ 0x1C0129E2C (-vRemoveHash@PFFOBJ@@QEAAXXZ.c)
 *     ??0PFFMEMOBJ@@QEAA@IPEAGKKPEAUtagDESIGNVECTOR@@K_KPEAUHDEV__@@PEAUDHPDEV__@@PEAVPFT@@KKPEAU_FNTCHECKSUM@@PEAPEAU_FONTFILEVIEW@@PEAU_UNIVERSAL_FONT_ID@@@Z @ 0x1C013E6BC (--0PFFMEMOBJ@@QEAA@IPEAGKKPEAUtagDESIGNVECTOR@@K_KPEAUHDEV__@@PEAUDHPDEV__@@PEAVPFT@@KKPEAU_FNTC.c)
 *     ??1PFFMEMOBJ@@QEAA@XZ @ 0x1C013EA0C (--1PFFMEMOBJ@@QEAA@XZ.c)
 *     ?bLoadFontFileTable@PFFMEMOBJ@@QEAAHPEAGKPEAU_UNIVERSAL_FONT_ID@@PEAU_EUDCLOAD@@@Z @ 0x1C013EA70 (-bLoadFontFileTable@PFFMEMOBJ@@QEAAHPEAGKPEAU_UNIVERSAL_FONT_ID@@PEAU_EUDCLOAD@@@Z.c)
 *     ??0PFFMEMOBJ@@QEAA@PEAVPFF@@KKPEAVPFT@@@Z @ 0x1C013EB5C (--0PFFMEMOBJ@@QEAA@PEAVPFF@@KKPEAVPFT@@@Z.c)
 *     ??0MALLOCOBJ@@QEAA@K@Z @ 0x1C013F8A4 (--0MALLOCOBJ@@QEAA@K@Z.c)
 *     ?pPFFGet@PUBLIC_PFTOBJ@@QEAAPEAVPFF@@PEAGKKPEAUtagDESIGNVECTOR@@KPEAPEAPEAV2@H@Z @ 0x1C013FA64 (-pPFFGet@PUBLIC_PFTOBJ@@QEAAPEAVPFF@@PEAGKKPEAUtagDESIGNVECTOR@@KPEAPEAPEAV2@H@Z.c)
 *     ?chpfeIncrPFF@PFTOBJ@@QEAAKPEAVPFF@@PEAHKPEAU_EUDCLOAD@@@Z @ 0x1C0140510 (-chpfeIncrPFF@PFTOBJ@@QEAAKPEAVPFF@@PEAHKPEAU_EUDCLOAD@@@Z.c)
 *     ?vSetUniqueness@PFFOBJ@@QEAAXXZ @ 0x1C0140630 (-vSetUniqueness@PFFOBJ@@QEAAXXZ.c)
 *     ?bAddHash@PFFOBJ@@QEAAHH@Z @ 0x1C0140780 (-bAddHash@PFFOBJ@@QEAAHH@Z.c)
 *     ?QueryFontFile@PDEVOBJ@@QEAAJ_KKKPEAK@Z @ 0x1C0140E30 (-QueryFontFile@PDEVOBJ@@QEAAJ_KKKPEAK@Z.c)
 *     KmfdLoadFontFileView @ 0x1C01415E4 (KmfdLoadFontFileView.c)
 *     ?UseUmfd@@YAHPEBG@Z @ 0x1C0141BB8 (-UseUmfd@@YAHPEBG@Z.c)
 *     ?IsTrustedFontFilePath@@YA_NPEBG@Z @ 0x1C0141BC8 (-IsTrustedFontFilePath@@YA_NPEBG@Z.c)
 *     ??0AutoExclusiveUmfdFileViewLock@@QEAA@XZ @ 0x1C0141ED8 (--0AutoExclusiveUmfdFileViewLock@@QEAA@XZ.c)
 *     ?Remove@?$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBI@Z @ 0x1C025D0E4 (-Remove@-$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBI@Z.c)
 *     UmfdLoadFontFileView @ 0x1C025D370 (UmfdLoadFontFileView.c)
 *     ?vKeepIt@PFFMEMOBJ@@QEAAXXZ @ 0x1C02B4834 (-vKeepIt@PFFMEMOBJ@@QEAAXXZ.c)
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
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  unsigned int v29; // edi
  unsigned int v30; // ebx
  unsigned __int16 *v31; // r14
  struct PFF *v32; // rax
  unsigned int v33; // eax
  int v34; // edx
  struct PFF **v35; // rdx
  struct PFF *v36; // rcx
  void **v37; // rbx
  __int64 v38; // r12
  struct _FONTFILEVIEW **v39; // rdi
  const WCHAR *v40; // rcx
  struct PFF *v41; // r13
  void **v42; // rax
  struct _FONTFILEVIEW **v43; // r15
  void **v44; // rbx
  signed __int64 v45; // r12
  __int64 v46; // rdi
  const unsigned __int16 *v48; // rcx
  __int64 v49; // rdx
  unsigned int FontFile; // edx
  unsigned int v51; // r9d
  unsigned __int16 *v52; // r8
  unsigned int v53; // ebx
  __int64 v54; // rdx
  __int64 v55; // r8
  __int64 v56; // r9
  struct PFF *v57; // rax
  unsigned int v58; // eax
  int v59; // edx
  struct PFF **v60; // rdx
  struct PFF *v61; // rcx
  _WORD *v62; // rcx
  struct _FONTFILEVIEW **v63; // rdx
  __int64 v64; // r8
  __int64 v66; // rbx
  ULONG_PTR *v67; // rbx
  __int64 v68; // r15
  struct _FONTFILEVIEW **v69; // rbx
  __int64 v70; // r15
  struct _FONTFILEVIEW *v71; // rcx
  struct _FONTFILEVIEW **v72; // rbx
  struct _FONTFILEVIEW *v73; // rcx
  size_t Size; // [rsp+38h] [rbp-B9h]
  unsigned int v75; // [rsp+60h] [rbp-91h]
  unsigned int v76; // [rsp+68h] [rbp-89h]
  char v77; // [rsp+88h] [rbp-69h]
  int v78; // [rsp+8Ch] [rbp-65h] BYREF
  int v79; // [rsp+90h] [rbp-61h]
  int v80; // [rsp+94h] [rbp-5Dh]
  unsigned int v81[2]; // [rsp+98h] [rbp-59h] BYREF
  _QWORD v82[2]; // [rsp+A0h] [rbp-51h] BYREF
  char v83; // [rsp+B0h] [rbp-41h]
  unsigned int v84[2]; // [rsp+B8h] [rbp-39h] BYREF
  void **v85; // [rsp+C0h] [rbp-31h] BYREF
  struct PFF **v86; // [rsp+C8h] [rbp-29h] BYREF
  unsigned __int64 v87; // [rsp+D0h] [rbp-21h] BYREF
  struct PFF *Src; // [rsp+D8h] [rbp-19h] BYREF
  struct _FONTFILEVIEW **v89; // [rsp+E0h] [rbp-11h]
  __int64 v90; // [rsp+E8h] [rbp-9h] BYREF
  void **v91; // [rsp+F0h] [rbp-1h]
  PCWSTR SourceString; // [rsp+140h] [rbp+4Fh] BYREF
  unsigned int v94; // [rsp+148h] [rbp+57h]

  v94 = a3;
  SourceString = a2;
  v13 = a4;
  v77 = 1;
  v80 = 0;
  v78 = 0;
  v15 = 0;
  v16 = 0;
  v79 = a12 != 0LL;
  if ( !a2 || a4 > 3 )
    return 0LL;
  v18 = a9;
  v19 = a7;
  if ( a11 )
    goto LABEL_28;
  v85 = (void **)ghsemPublicPFT;
  GreAcquireSemaphore(ghsemPublicPFT);
  v20 = v94;
  *v19 = 0;
  v21 = PUBLIC_PFTOBJ::pPFFGet(this, a2, v20, v13, a5, a6, &v86, v79);
  v22 = a10;
  *v18 = v21;
  if ( v21 )
  {
    v23 = PFTOBJ::chpfeIncrPFF(this, v21, &v78, v22, a12);
    *v19 = v23;
    if ( v23 )
    {
      if ( (v22 & 0x40) != 0 )
        *v19 = 0;
      SEMOBJ::vUnlock((SEMOBJ *)&v85);
      return (unsigned int)v78;
    }
    v15 = v78;
    v80 = v78;
  }
  v24 = PUBLIC_PFTOBJ::pPFFGet(this, (unsigned __int16 *)SourceString, v94, v13, a5, a6, &v86, v79 == 0);
  Src = v24;
  if ( v24 && !*((_QWORD *)v24 + 21) )
    v16 = 1;
  SEMOBJ::vUnlock((SEMOBJ *)&v85);
  if ( !v16 )
  {
LABEL_28:
    v87 = 0LL;
    MALLOCOBJ::MALLOCOBJ((MALLOCOBJ *)&v85, 12 * v13);
    v37 = v85;
    if ( v85
      && (v81[0] = (8 * v13 + 7) & 0xFFFFFFF8,
          v38 = v13,
          v89 = (struct _FONTFILEVIEW **)PALLOCMEM2(v81[0] + 120 * (_DWORD)v13, 1986422343LL, 1),
          (v39 = v89) != 0LL) )
    {
      v40 = SourceString;
      *(_QWORD *)v81 = (char *)v89 + v81[0];
      *(_QWORD *)v84 = SourceString;
      if ( (_DWORD)v13 )
      {
        v41 = *(struct PFF **)v81;
        v91 = &v37[v13];
        v42 = v37;
        v43 = v89;
        v44 = v91;
        v45 = (char *)v42 - (char *)v89;
        v46 = v13;
        do
        {
          *v43 = v41;
          *((_QWORD *)v41 + 10) = v40;
          *((_DWORD *)*v43 + 10) ^= (*((_DWORD *)*v43 + 10) ^ (8 * IsTrustedFontFilePath(v40))) & 8;
          v40 = *(const WCHAR **)v84;
          *(struct _FONTFILEVIEW **)((char *)v43 + v45) = 0LL;
          *(_DWORD *)v44 = 0;
          while ( *v40++ )
            ;
          v41 = (struct PFF *)((char *)v41 + 120);
          *(_QWORD *)v84 = v40;
          ++v43;
          v44 = (void **)((char *)v44 + 4);
          --v46;
        }
        while ( v46 );
        v37 = v85;
        v38 = v13;
        v39 = v89;
        v15 = v80;
        v19 = a7;
        v18 = a9;
      }
      GreAcquireSemaphore(ghsemDriverMgmt);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 12LL);
      *(_QWORD *)v84 = 0LL;
      if ( (unsigned int)UseUmfd(v48) )
        UmfdLoadFontFileView(SourceString, v49, v39, (unsigned int)v13, v37, &v37[v38], a5, &v87, v81);
      else
        KmfdLoadFontFileView(
          (unsigned __int16 *)SourceString,
          v94,
          v39,
          v13,
          v37,
          (unsigned int *)&v37[v38],
          a5,
          a6,
          (__int64)&v87,
          (__int64)v81,
          v84);
      Src = *(struct PFF **)v81;
      EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt", ghsemDriverMgmt);
      GreReleaseSemaphoreInternal(ghsemDriverMgmt);
      if ( !v87 )
        goto LABEL_74;
      FontFile = PDEVOBJ::QueryFontFile((PDEVOBJ *)&Src, v87, 2u, 0, 0LL);
      v81[0] = FontFile;
      if ( FontFile - 1 > 0xFFFFFFFD )
        goto LABEL_74;
      if ( !v79 || *((_QWORD *)a12 + 1) || FontFile <= 2 )
      {
        v51 = v94;
        v52 = (unsigned __int16 *)SourceString;
        v53 = a10;
        v76 = a10;
        v75 = a8;
        *v19 = FontFile;
        LODWORD(Size) = a6;
        PFFMEMOBJ::PFFMEMOBJ(
          (PFFMEMOBJ *)v82,
          FontFile,
          v52,
          v51,
          v13,
          a5,
          Size,
          v87,
          (HDEV)Src,
          0LL,
          *(struct PFT **)this,
          v75,
          v76,
          (struct _FNTCHECKSUM *)v84,
          v39,
          0LL);
        if ( v82[0] )
        {
          v77 = 0;
          if ( (unsigned int)PFFMEMOBJ::bLoadFontFileTable(
                               (PFFMEMOBJ *)v82,
                               (unsigned __int16 *)SourceString,
                               v81[0],
                               0LL,
                               a12) )
          {
            v90 = ghsemPublicPFT;
            GreAcquireSemaphore(ghsemPublicPFT);
            v57 = PUBLIC_PFTOBJ::pPFFGet(this, (unsigned __int16 *)SourceString, v94, v13, a5, a6, &v86, v79);
            *v18 = v57;
            if ( v57 && (v58 = PFTOBJ::chpfeIncrPFF(this, v57, &v78, v53, a12), v15 = v78, v80 = v78, v58) )
            {
              if ( (v53 & 0x40) != 0 )
                v58 = 0;
              *v19 = v58;
            }
            else
            {
              v59 = v79;
              *v18 = (struct PFF *)v82[0];
              if ( (unsigned int)PFFOBJ::bAddHash((PFFOBJ *)v82, v59) )
              {
                v60 = v86;
                ++*(_DWORD *)(*(_QWORD *)this + 28LL);
                if ( *v60 )
                  *((_QWORD *)*v60 + 2) = *v18;
                v61 = *v18;
                *((_QWORD *)v61 + 1) = *v60;
                *((_QWORD *)v61 + 2) = 0LL;
                *v60 = v61;
                PFFOBJ::vSetUniqueness((PFFOBJ *)v82);
                PFFMEMOBJ::vKeepIt((PFFMEMOBJ *)v82);
                v62 = *(_WORD **)(v82[0] + 24LL);
                if ( (_DWORD)v13 )
                {
                  v63 = v39;
                  v64 = v38;
                  do
                  {
                    *((_QWORD *)*v63 + 10) = v62;
                    while ( *v62++ )
                      ;
                    ++v63;
                    --v64;
                  }
                  while ( v64 );
                }
                if ( (v53 & 0x40) != 0 )
                  *((_DWORD *)*v18 + 13) |= 0x80u;
                if ( (_DWORD)v13 )
                {
                  v66 = v38;
                  do
                  {
                    EngUnmapFontFileFD((ULONG_PTR)*v39++);
                    --v66;
                  }
                  while ( v66 );
                }
                v39 = 0LL;
                v89 = 0LL;
                v15 = 1;
                v80 = 1;
              }
              else
              {
                *v19 = 0;
                PFFOBJ::vRemoveHash((PFFOBJ *)v82);
              }
            }
            SEMOBJ::vUnlock((SEMOBJ *)&v90);
          }
          else
          {
            *v19 = 0;
          }
          if ( (v83 & 2) == 0 )
          {
            if ( (_DWORD)v13 )
            {
              do
              {
                EngUnmapFontFileFD((ULONG_PTR)*v39++);
                --v38;
              }
              while ( v38 );
              v15 = v80;
            }
            PFFMEMOBJ::~PFFMEMOBJ((PFFMEMOBJ *)v82, v54, v55, v56);
            goto LABEL_95;
          }
        }
        PFFMEMOBJ::~PFFMEMOBJ((PFFMEMOBJ *)v82, v54, v55, v56);
LABEL_74:
        if ( v39 && (_DWORD)v13 )
        {
          v67 = (ULONG_PTR *)v39;
          v68 = v38;
          do
          {
            EngUnmapFontFileFD(*v67++);
            --v68;
          }
          while ( v68 );
        }
        if ( v77 )
        {
          AutoExclusiveUmfdFileViewLock::AutoExclusiveUmfdFileViewLock((AutoExclusiveUmfdFileViewLock *)&a12);
          if ( UmfdFileviewLookup && (_DWORD)v13 )
          {
            v69 = v39;
            v70 = v38;
            do
            {
              v71 = *v69;
              if ( (*((_DWORD *)*v69 + 10) & 0x20) != 0 )
              {
                LODWORD(SourceString) = *((_DWORD *)v71 + 16);
                NSInstrumentation::CSortedVector<unsigned int,_FONTFILEVIEW *>::Remove(v71, &SourceString);
              }
              ++v69;
              --v70;
            }
            while ( v70 );
          }
          PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&a12);
          if ( (_DWORD)v13 )
          {
            v72 = v39;
            do
            {
              v73 = *v72;
              if ( (*((_DWORD *)*v72 + 10) & 8) == 0 && !*((_QWORD *)v73 + 2) && !*((_QWORD *)v73 + 1) )
                vUnreferenceFileviewSection(v73);
              ++v72;
              --v38;
            }
            while ( v38 );
            v39 = v89;
          }
          Win32FreePool(v39);
        }
      }
    }
    else
    {
      v15 = 0;
    }
LABEL_95:
    MALLOCOBJ::~MALLOCOBJ((MALLOCOBJ *)&v85);
    return v15;
  }
  v25 = Src;
  PFFMEMOBJ::PFFMEMOBJ((PFFMEMOBJ *)v82, Src, a8, v22, *(struct PFT **)this);
  v29 = *((_DWORD *)v25 + 36);
  v30 = 0;
  v78 = 0;
  if ( v82[0] )
  {
    v31 = (unsigned __int16 *)SourceString;
    if ( (unsigned int)PFFMEMOBJ::bLoadFontFileTable((PFFMEMOBJ *)v82, (unsigned __int16 *)SourceString, v29, 0LL, a12) )
    {
      SourceString = (PCWSTR)ghsemPublicPFT;
      GreAcquireSemaphore(ghsemPublicPFT);
      v32 = PUBLIC_PFTOBJ::pPFFGet(this, v31, v94, v13, a5, a6, &v86, v79);
      *v18 = v32;
      if ( v32 && (v33 = PFTOBJ::chpfeIncrPFF(this, v32, &v78, v22, a12), v30 = v78, (v29 = v33) != 0) )
      {
        *v19 = v33;
      }
      else
      {
        v34 = v79;
        *v18 = (struct PFF *)v82[0];
        if ( (unsigned int)PFFOBJ::bAddHash((PFFOBJ *)v82, v34) )
        {
          v30 = 1;
          v35 = v86;
          ++*(_DWORD *)(*(_QWORD *)this + 28LL);
          if ( *v35 )
            *((_QWORD *)*v35 + 2) = *v18;
          v36 = *v18;
          *((_QWORD *)v36 + 1) = *v35;
          *((_QWORD *)v36 + 2) = 0LL;
          *v35 = v36;
          PFFOBJ::vSetUniqueness((PFFOBJ *)v82);
          PFFMEMOBJ::vKeepIt((PFFMEMOBJ *)v82);
          *v19 = v29;
        }
        else
        {
          *v19 = 0;
          PFFOBJ::vRemoveHash((PFFOBJ *)v82);
        }
      }
      SEMOBJ::vUnlock((SEMOBJ *)&SourceString);
    }
    else
    {
      *v19 = 0;
    }
  }
  PFFMEMOBJ::~PFFMEMOBJ((PFFMEMOBJ *)v82, v26, v27, v28);
  return v30;
}
