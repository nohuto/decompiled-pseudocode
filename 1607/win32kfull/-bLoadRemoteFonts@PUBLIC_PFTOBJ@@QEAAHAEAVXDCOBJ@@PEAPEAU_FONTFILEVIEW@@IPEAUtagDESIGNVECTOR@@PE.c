/*
 * XREFs of ?bLoadRemoteFonts@PUBLIC_PFTOBJ@@QEAAHAEAVXDCOBJ@@PEAPEAU_FONTFILEVIEW@@IPEAUtagDESIGNVECTOR@@PEAU_UNIVERSAL_FONT_ID@@PEAH@Z @ 0x1C025A93C
 * Callers:
 *     NtGdiAddRemoteMMInstanceToDC @ 0x1C0267BC0 (NtGdiAddRemoteMMInstanceToDC.c)
 *     NtGdiAddRemoteFontToDC @ 0x1C027CA60 (NtGdiAddRemoteFontToDC.c)
 * Callees:
 *     KmfdLoadFontFileView @ 0x1C0022388 (KmfdLoadFontFileView.c)
 *     ?UseUmfd@@YAHPEBG@Z @ 0x1C002291C (-UseUmfd@@YAHPEBG@Z.c)
 *     ?pPFFGet@PUBLIC_PFTOBJ@@QEAAPEAVPFF@@PEAGKKPEAUtagDESIGNVECTOR@@KPEAPEAPEAV2@H@Z @ 0x1C0024220 (-pPFFGet@PUBLIC_PFTOBJ@@QEAAPEAVPFF@@PEAGKKPEAUtagDESIGNVECTOR@@KPEAPEAPEAV2@H@Z.c)
 *     ?bAddHash@PFFOBJ@@QEAAHH@Z @ 0x1C00268F8 (-bAddHash@PFFOBJ@@QEAAHH@Z.c)
 *     ?vRemoveHash@PFFOBJ@@QEAAXXZ @ 0x1C0026A50 (-vRemoveHash@PFFOBJ@@QEAAXXZ.c)
 *     ?QueryFontFile@PDEVOBJ@@QEAAJ_KKKPEAK@Z @ 0x1C002931C (-QueryFontFile@PDEVOBJ@@QEAAJ_KKKPEAK@Z.c)
 *     PALLOCMEM2 @ 0x1C0060508 (PALLOCMEM2.c)
 *     ??1PFFMEMOBJ@@QEAA@XZ @ 0x1C0064574 (--1PFFMEMOBJ@@QEAA@XZ.c)
 *     ??0PFFMEMOBJ@@QEAA@IPEAGKKPEAUtagDESIGNVECTOR@@K_KPEAUHDEV__@@PEAUDHPDEV__@@PEAVPFT@@KKPEAU_FNTCHECKSUM@@PEAPEAU_FONTFILEVIEW@@PEAU_UNIVERSAL_FONT_ID@@@Z @ 0x1C00645D8 (--0PFFMEMOBJ@@QEAA@IPEAGKKPEAUtagDESIGNVECTOR@@K_KPEAUHDEV__@@PEAUDHPDEV__@@PEAVPFT@@KKPEAU_FNTC.c)
 *     ?bLoadFontFileTable@PFFMEMOBJ@@QEAAHPEAGKPEAU_UNIVERSAL_FONT_ID@@PEAU_EUDCLOAD@@@Z @ 0x1C0064910 (-bLoadFontFileTable@PFFMEMOBJ@@QEAAHPEAGKPEAU_UNIVERSAL_FONT_ID@@PEAU_EUDCLOAD@@@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00FDC0C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?ScrutinizeFontLoad@@YAJW4_W32KFontSourceType@@PEBG@Z @ 0x1C010E200 (-ScrutinizeFontLoad@@YAJW4_W32KFontSourceType@@PEBG@Z.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     UmfdLoadFontFileView @ 0x1C025A374 (UmfdLoadFontFileView.c)
 *     ?bAddRemoteFont@XDCOBJ@@QEAAHPEAVPFF@@@Z @ 0x1C02A5548 (-bAddRemoteFont@XDCOBJ@@QEAAHPEAVPFF@@@Z.c)
 *     ?vKeepIt@PFFMEMOBJ@@QEAAXXZ @ 0x1C02B693C (-vKeepIt@PFFMEMOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall PUBLIC_PFTOBJ::bLoadRemoteFonts(
        PUBLIC_PFTOBJ *this,
        struct XDCOBJ *a2,
        struct _FONTFILEVIEW **a3,
        unsigned int a4,
        struct tagDESIGNVECTOR *Src,
        struct _UNIVERSAL_FONT_ID *a6,
        int *a7)
{
  unsigned int v8; // edi
  __int64 v9; // r15
  unsigned int v10; // r12d
  unsigned __int64 v11; // rdx
  __int64 v12; // r8
  char *v13; // rax
  void **v14; // rbx
  unsigned int *v15; // rsi
  unsigned int *v16; // r9
  struct _FONTFILEVIEW **v17; // rdx
  __int64 v18; // r10
  __int64 v19; // rax
  const unsigned __int16 *v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rdx
  unsigned int FontFile; // r12d
  __int64 v24; // rsi
  struct PFF *v25; // rbx
  struct _UNIVERSAL_FONT_ID *v26; // r9
  unsigned int v27; // r8d
  PUBLIC_PFTOBJ *v28; // rsi
  __int64 v29; // rax
  struct PFF **v30; // rcx
  size_t Size; // [rsp+30h] [rbp-D0h]
  unsigned int v33; // [rsp+80h] [rbp-80h]
  unsigned __int64 v34; // [rsp+88h] [rbp-78h] BYREF
  unsigned int v35[2]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v36; // [rsp+98h] [rbp-68h] BYREF
  HDEV v37; // [rsp+A0h] [rbp-60h] BYREF
  struct _UNIVERSAL_FONT_ID *v38; // [rsp+A8h] [rbp-58h]
  PUBLIC_PFTOBJ *v39; // [rsp+B0h] [rbp-50h]
  struct PFF *v40[3]; // [rsp+B8h] [rbp-48h] BYREF
  int *v41; // [rsp+D0h] [rbp-30h]
  XDCOBJ *v42; // [rsp+D8h] [rbp-28h]
  struct PFF **v43; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v44; // [rsp+E8h] [rbp-18h] BYREF
  char v45; // [rsp+F0h] [rbp-10h] BYREF
  _BYTE v46[32]; // [rsp+100h] [rbp+0h] BYREF
  wchar_t Dst[32]; // [rsp+120h] [rbp+20h] BYREF

  v38 = a6;
  v8 = 0;
  v41 = a7;
  v9 = a4;
  v42 = a2;
  v39 = this;
  v34 = 0LL;
  if ( Src )
    v10 = 4 * *((_DWORD *)Src + 1) + 8;
  else
    v10 = 0;
  v33 = v10;
  if ( ScrutinizeFontLoad(2u, 0LL) >= 0 )
  {
    if ( (unsigned int)v9 <= 4 )
    {
      v14 = (void **)v46;
      v15 = (unsigned int *)&v45;
    }
    else
    {
      v13 = (char *)PALLOCMEM2((unsigned int)(16 * v9), 1986422343LL, 1);
      v14 = (void **)v13;
      if ( !v13 )
        goto LABEL_35;
      v15 = (unsigned int *)(v13 + 32);
    }
    if ( (_DWORD)v9 )
    {
      v16 = v15;
      v17 = a3;
      v18 = v9;
      do
      {
        *(struct _FONTFILEVIEW **)((char *)v17 + (char *)v14 - (char *)a3) = (struct _FONTFILEVIEW *)*((_QWORD *)*v17 + 2);
        v19 = (__int64)*v17++;
        *v16++ = *(_DWORD *)(v19 + 24);
        --v18;
      }
      while ( v18 );
    }
    GreAcquireSemaphore(ghsemDriverMgmt);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 12LL);
    *(_QWORD *)v35 = 0LL;
    if ( UseUmfd(v20) )
      UmfdLoadFontFileView(0LL, v21, a3, v9, v14, v15, Src, (__int64 *)&v34, &v36);
    else
      KmfdLoadFontFileView(0LL, v21, a3, v9, v14, v15, Src, v10, &v34, (struct PDEV **)&v36, v35);
    v37 = (HDEV)v36;
    EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt", ghsemDriverMgmt);
    GreReleaseSemaphoreInternal(ghsemDriverMgmt);
    if ( v14 != (void **)v46 )
      Win32FreePool(v14, v22, v12);
    v11 = v34;
    if ( v34 )
    {
      FontFile = PDEVOBJ::QueryFontFile((PDEVOBJ *)&v37, v34, 2u, 0, 0LL);
      if ( FontFile - 1 <= 0xFFFFFFFD )
      {
        swprintf_s(
          Dst,
          0x1EuLL,
          L"REMOTE-%u",
          (unsigned int)_InterlockedIncrement((volatile signed __int32 *)&PUBLIC_PFTOBJ::ulRemoteUnique));
        v24 = -1LL;
        do
          ++v24;
        while ( Dst[v24] );
        LODWORD(Size) = v33;
        PFFMEMOBJ::PFFMEMOBJ(
          (PFFMEMOBJ *)v40,
          FontFile,
          Dst,
          v24 + 1,
          v9,
          Src,
          Size,
          v34,
          v37,
          0LL,
          *(struct PFT **)v39,
          0x20u,
          0x20u,
          (struct _FNTCHECKSUM *)v35,
          a3,
          v38);
        v25 = v40[0];
        if ( v40[0] )
        {
          v26 = v38;
          a3 = 0LL;
          *v41 = 0;
          if ( (unsigned int)PFFMEMOBJ::bLoadFontFileTable((PFFMEMOBJ *)v40, Dst, FontFile, v26, 0LL) )
          {
            v44 = ghsemPublicPFT;
            GreAcquireSemaphore(ghsemPublicPFT);
            v8 = PFFOBJ::bAddHash((PFFOBJ *)v40, 0);
            if ( v8 )
            {
              v27 = v24 + 1;
              v28 = v39;
              if ( PUBLIC_PFTOBJ::pPFFGet(v39, Dst, v27, v9, Src, v33, &v43, 0) )
              {
                v8 = 0;
              }
              else
              {
                v8 = XDCOBJ::bAddRemoteFont(v42, v25);
                if ( v8 )
                {
                  v29 = *(_QWORD *)v28;
                  if ( *((_QWORD *)v25 + 11) == qword_1C0334780 )
                    ++*(_DWORD *)(v29 + 32);
                  ++*(_DWORD *)(v29 + 28);
                  v30 = v43;
                  if ( *v43 )
                    *((_QWORD *)*v43 + 2) = v25;
                  *((_QWORD *)v25 + 1) = *v30;
                  *((_QWORD *)v25 + 2) = 0LL;
                  *v30 = v25;
                  PFFMEMOBJ::vKeepIt((PFFMEMOBJ *)v40);
                }
              }
            }
            else
            {
              PFFOBJ::vRemoveHash((PFFOBJ *)v40);
            }
            SEMOBJ::vUnlock((SEMOBJ *)&v44);
          }
        }
        PFFMEMOBJ::~PFFMEMOBJ((PFFMEMOBJ *)v40);
      }
    }
  }
LABEL_35:
  if ( a3 )
    Win32FreePool(a3, v11, v12);
  return v8;
}
