/*
 * XREFs of ?hLoadMemFonts@PUBLIC_PFTOBJ@@QEAAPEAXPEAPEAU_FONTFILEVIEW@@PEAUtagDESIGNVECTOR@@KPEAKPEAH@Z @ 0x1C025AD2C
 * Callers:
 *     GreAddFontMemResourceEx @ 0x1C027C95C (GreAddFontMemResourceEx.c)
 * Callees:
 *     KmfdLoadFontFileView @ 0x1C0022388 (KmfdLoadFontFileView.c)
 *     ?UseUmfd@@YAHPEBG@Z @ 0x1C002291C (-UseUmfd@@YAHPEBG@Z.c)
 *     ?pPFFGet@PUBLIC_PFTOBJ@@QEAAPEAVPFF@@PEAGKKPEAUtagDESIGNVECTOR@@KPEAPEAPEAV2@H@Z @ 0x1C0024220 (-pPFFGet@PUBLIC_PFTOBJ@@QEAAPEAVPFF@@PEAGKKPEAUtagDESIGNVECTOR@@KPEAPEAPEAV2@H@Z.c)
 *     ?vSetUniqueness@PFFOBJ@@QEAAXXZ @ 0x1C00267A8 (-vSetUniqueness@PFFOBJ@@QEAAXXZ.c)
 *     ?bAddHash@PFFOBJ@@QEAAHH@Z @ 0x1C00268F8 (-bAddHash@PFFOBJ@@QEAAHH@Z.c)
 *     ?vRemoveHash@PFFOBJ@@QEAAXXZ @ 0x1C0026A50 (-vRemoveHash@PFFOBJ@@QEAAXXZ.c)
 *     ?QueryFontFile@PDEVOBJ@@QEAAJ_KKKPEAK@Z @ 0x1C002931C (-QueryFontFile@PDEVOBJ@@QEAAJ_KKKPEAK@Z.c)
 *     ??1PFFMEMOBJ@@QEAA@XZ @ 0x1C0064574 (--1PFFMEMOBJ@@QEAA@XZ.c)
 *     ??0PFFMEMOBJ@@QEAA@IPEAGKKPEAUtagDESIGNVECTOR@@K_KPEAUHDEV__@@PEAUDHPDEV__@@PEAVPFT@@KKPEAU_FNTCHECKSUM@@PEAPEAU_FONTFILEVIEW@@PEAU_UNIVERSAL_FONT_ID@@@Z @ 0x1C00645D8 (--0PFFMEMOBJ@@QEAA@IPEAGKKPEAUtagDESIGNVECTOR@@K_KPEAUHDEV__@@PEAUDHPDEV__@@PEAVPFT@@KKPEAU_FNTC.c)
 *     ?bLoadFontFileTable@PFFMEMOBJ@@QEAAHPEAGKPEAU_UNIVERSAL_FONT_ID@@PEAU_EUDCLOAD@@@Z @ 0x1C0064910 (-bLoadFontFileTable@PFFMEMOBJ@@QEAAHPEAGKPEAU_UNIVERSAL_FONT_ID@@PEAU_EUDCLOAD@@@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00FDC0C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?ScrutinizeFontLoad@@YAJW4_W32KFontSourceType@@PEBG@Z @ 0x1C010E200 (-ScrutinizeFontLoad@@YAJW4_W32KFontSourceType@@PEBG@Z.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     UmfdLoadFontFileView @ 0x1C025A374 (UmfdLoadFontFileView.c)
 *     ?vKeepIt@PFFMEMOBJ@@QEAAXXZ @ 0x1C02B693C (-vKeepIt@PFFMEMOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall PUBLIC_PFTOBJ::hLoadMemFonts(
        struct PFT **this,
        struct _FONTFILEVIEW **a2,
        struct tagDESIGNVECTOR *a3,
        unsigned int a4,
        unsigned int *a5,
        int *a6)
{
  struct _FONTFILEVIEW **v6; // rsi
  struct _FONTFILEVIEW *v7; // rdx
  __int64 v11; // r12
  unsigned __int64 v12; // rdx
  __int64 v13; // r8
  const unsigned __int16 *v14; // rcx
  __int64 v15; // rdx
  unsigned int FontFile; // eax
  unsigned int v17; // r14d
  __int64 v18; // rdi
  __int64 v19; // rbx
  struct PFT *v20; // rax
  struct PFF **v21; // rcx
  size_t Size; // [rsp+30h] [rbp-D0h]
  unsigned int v24; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int64 v25; // [rsp+88h] [rbp-78h] BYREF
  unsigned int v26; // [rsp+90h] [rbp-70h]
  unsigned int v27[2]; // [rsp+98h] [rbp-68h] BYREF
  void *v28; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v29; // [rsp+A8h] [rbp-58h] BYREF
  HDEV v30; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v31[3]; // [rsp+B8h] [rbp-48h] BYREF
  int *v32; // [rsp+D0h] [rbp-30h]
  struct PFF **v33; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v34; // [rsp+E0h] [rbp-20h] BYREF
  wchar_t Dst[32]; // [rsp+E8h] [rbp-18h] BYREF

  v6 = a2;
  v7 = *a2;
  v32 = a6;
  v26 = a4;
  v11 = 0LL;
  v28 = (void *)*((_QWORD *)v7 + 2);
  v24 = *((_DWORD *)v7 + 6);
  v25 = 0LL;
  if ( ScrutinizeFontLoad(1u, 0LL) >= 0 )
  {
    GreAcquireSemaphore(ghsemDriverMgmt);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 12LL);
    *(_QWORD *)v27 = 0LL;
    if ( UseUmfd(v14) )
      UmfdLoadFontFileView(0LL, v15, v6, 1u, &v28, &v24, a3, (__int64 *)&v25, &v29);
    else
      KmfdLoadFontFileView(0LL, 0, v6, 1u, &v28, &v24, a3, a4, &v25, (struct PDEV **)&v29, v27);
    v30 = (HDEV)v29;
    EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt", ghsemDriverMgmt);
    GreReleaseSemaphoreInternal(ghsemDriverMgmt);
    v12 = v25;
    if ( v25 )
    {
      FontFile = PDEVOBJ::QueryFontFile((PDEVOBJ *)&v30, v25, 2u, 0, 0LL);
      v17 = FontFile;
      if ( FontFile - 1 <= 0xFFFFFFFD )
      {
        *a5 = FontFile;
        swprintf_s(
          Dst,
          0x1EuLL,
          L"MEMORY-%u",
          (unsigned int)_InterlockedIncrement((volatile signed __int32 *)&PUBLIC_PFTOBJ::ulMemoryUnique));
        v18 = -1LL;
        do
          ++v18;
        while ( Dst[v18] );
        LODWORD(Size) = a4;
        PFFMEMOBJ::PFFMEMOBJ(
          (PFFMEMOBJ *)v31,
          v17,
          Dst,
          v18 + 1,
          1u,
          a3,
          Size,
          v25,
          v30,
          0LL,
          *this,
          0x10u,
          0x30u,
          (struct _FNTCHECKSUM *)v27,
          v6,
          0LL);
        v19 = v31[0];
        if ( v31[0] )
        {
          v6 = 0LL;
          *v32 = 0;
          if ( (unsigned int)PFFMEMOBJ::bLoadFontFileTable((PFFMEMOBJ *)v31, Dst, v17, 0LL, 0LL) )
          {
            v34 = ghsemPublicPFT;
            GreAcquireSemaphore(ghsemPublicPFT);
            if ( (unsigned int)PFFOBJ::bAddHash((PFFOBJ *)v31, 0) )
            {
              if ( !PUBLIC_PFTOBJ::pPFFGet((PUBLIC_PFTOBJ *)this, Dst, (int)v18 + 1, 1, a3, v26, &v33, 0) )
              {
                v20 = *this;
                if ( *(_QWORD *)(v19 + 88) == qword_1C0334780 )
                  ++*((_DWORD *)v20 + 8);
                ++*((_DWORD *)v20 + 7);
                v21 = v33;
                if ( *v33 )
                  *((_QWORD *)*v33 + 2) = v19;
                *(_QWORD *)(v19 + 8) = *v21;
                *(_QWORD *)(v19 + 16) = 0LL;
                *v21 = (struct PFF *)v19;
                PFFOBJ::vSetUniqueness((PFFOBJ *)v31);
                PFFMEMOBJ::vKeepIt((PFFMEMOBJ *)v31);
                v11 = *(unsigned int *)(v19 + 140);
              }
            }
            else
            {
              PFFOBJ::vRemoveHash((PFFOBJ *)v31);
            }
            SEMOBJ::vUnlock((SEMOBJ *)&v34);
          }
        }
        PFFMEMOBJ::~PFFMEMOBJ((PFFMEMOBJ *)v31);
      }
    }
  }
  if ( v6 )
    Win32FreePool(v6, v12, v13);
  return v11;
}
