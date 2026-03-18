/*
 * XREFs of ?hLoadMemFonts@PUBLIC_PFTOBJ@@QEAAPEAXPEAPEAU_FONTFILEVIEW@@PEAUtagDESIGNVECTOR@@KPEAKPEAH@Z @ 0x1C025D890
 * Callers:
 *     GreAddFontMemResourceEx @ 0x1C027E6FC (GreAddFontMemResourceEx.c)
 * Callees:
 *     KmfdLoadFontFileView @ 0x1C0011294 (KmfdLoadFontFileView.c)
 *     ?UseUmfd@@YAHPEBG@Z @ 0x1C0011868 (-UseUmfd@@YAHPEBG@Z.c)
 *     ?QueryFontFile@PDEVOBJ@@QEAAJ_KKKPEAK@Z @ 0x1C001D00C (-QueryFontFile@PDEVOBJ@@QEAAJ_KKKPEAK@Z.c)
 *     ?pPFFGet@PUBLIC_PFTOBJ@@QEAAPEAVPFF@@PEAGKKPEAUtagDESIGNVECTOR@@KPEAPEAPEAV2@H@Z @ 0x1C0020CC8 (-pPFFGet@PUBLIC_PFTOBJ@@QEAAPEAVPFF@@PEAGKKPEAUtagDESIGNVECTOR@@KPEAPEAPEAV2@H@Z.c)
 *     ?vSetUniqueness@PFFOBJ@@QEAAXXZ @ 0x1C0021990 (-vSetUniqueness@PFFOBJ@@QEAAXXZ.c)
 *     ?bAddHash@PFFOBJ@@QEAAHH@Z @ 0x1C0021AE0 (-bAddHash@PFFOBJ@@QEAAHH@Z.c)
 *     ?vRemoveHash@PFFOBJ@@QEAAXXZ @ 0x1C0021C38 (-vRemoveHash@PFFOBJ@@QEAAXXZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00E14B8 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??0PFFMEMOBJ@@QEAA@IPEAGKKPEAUtagDESIGNVECTOR@@K_KPEAUHDEV__@@PEAUDHPDEV__@@PEAVPFT@@KKPEAU_FNTCHECKSUM@@PEAPEAU_FONTFILEVIEW@@PEAU_UNIVERSAL_FONT_ID@@@Z @ 0x1C0119FD8 (--0PFFMEMOBJ@@QEAA@IPEAGKKPEAUtagDESIGNVECTOR@@K_KPEAUHDEV__@@PEAUDHPDEV__@@PEAVPFT@@KKPEAU_FNTC.c)
 *     ??1PFFMEMOBJ@@QEAA@XZ @ 0x1C011A36C (--1PFFMEMOBJ@@QEAA@XZ.c)
 *     ?bLoadFontFileTable@PFFMEMOBJ@@QEAAHPEAGKPEAU_UNIVERSAL_FONT_ID@@PEAU_EUDCLOAD@@@Z @ 0x1C011A3D0 (-bLoadFontFileTable@PFFMEMOBJ@@QEAAHPEAGKPEAU_UNIVERSAL_FONT_ID@@PEAU_EUDCLOAD@@@Z.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     ?ScrutinizeMemoryFontLoad@@YAJXZ @ 0x1C025CFDC (-ScrutinizeMemoryFontLoad@@YAJXZ.c)
 *     UmfdLoadFontFileView @ 0x1C025CFF4 (UmfdLoadFontFileView.c)
 *     ?vKeepIt@PFFMEMOBJ@@QEAAXXZ @ 0x1C02B3808 (-vKeepIt@PFFMEMOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall PUBLIC_PFTOBJ::hLoadMemFonts(
        PUBLIC_PFTOBJ *this,
        struct _FONTFILEVIEW **a2,
        struct tagDESIGNVECTOR *a3,
        unsigned int a4,
        unsigned int *a5,
        int *a6)
{
  struct _FONTFILEVIEW **v6; // rsi
  struct _FONTFILEVIEW *v7; // rdx
  __int64 v11; // r12
  const unsigned __int16 *v12; // rcx
  __int64 v13; // rdx
  unsigned int FontFile; // eax
  unsigned int v15; // r15d
  __int64 v16; // r14
  unsigned int v17; // r14d
  __int64 v18; // rbx
  unsigned int v19; // r8d
  PUBLIC_PFTOBJ *v20; // r14
  struct PFF **v21; // rcx
  size_t Size; // [rsp+30h] [rbp-D0h]
  unsigned int v24; // [rsp+80h] [rbp-80h]
  unsigned int v25; // [rsp+84h] [rbp-7Ch] BYREF
  unsigned __int64 v26; // [rsp+88h] [rbp-78h] BYREF
  unsigned int v27[2]; // [rsp+90h] [rbp-70h] BYREF
  HDEV v28; // [rsp+98h] [rbp-68h] BYREF
  void *v29; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v30; // [rsp+A8h] [rbp-58h] BYREF
  _QWORD v31[3]; // [rsp+B0h] [rbp-50h] BYREF
  PUBLIC_PFTOBJ *v32; // [rsp+C8h] [rbp-38h]
  __int64 v33; // [rsp+D0h] [rbp-30h] BYREF
  int *v34; // [rsp+D8h] [rbp-28h]
  struct PFF **v35; // [rsp+E0h] [rbp-20h] BYREF
  wchar_t Dst[32]; // [rsp+E8h] [rbp-18h] BYREF

  v6 = a2;
  v7 = *a2;
  v34 = a6;
  v24 = a4;
  v11 = 0LL;
  v29 = (void *)*((_QWORD *)v7 + 2);
  v25 = *((_DWORD *)v7 + 6);
  v32 = this;
  v26 = 0LL;
  if ( ScrutinizeMemoryFontLoad() >= 0 )
  {
    GreAcquireSemaphore(ghsemDriverMgmt);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 12LL);
    *(_QWORD *)v27 = 0LL;
    if ( UseUmfd(v12) )
      UmfdLoadFontFileView(0LL, v13, v6, 1u, &v29, &v25, a3, (__int64 *)&v26, &v30);
    else
      KmfdLoadFontFileView(0LL, 0, v6, 1u, &v29, &v25, a3, a4, &v26, (struct PDEV **)&v30, v27);
    v28 = (HDEV)v30;
    EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt", ghsemDriverMgmt);
    GreReleaseSemaphoreInternal(ghsemDriverMgmt);
    if ( v26 )
    {
      FontFile = PDEVOBJ::QueryFontFile((PDEVOBJ *)&v28, v26, 2u, 0, 0LL);
      v15 = FontFile;
      if ( FontFile - 1 <= 0xFFFFFFFD )
      {
        *a5 = FontFile;
        swprintf_s(
          Dst,
          0x1EuLL,
          L"MEMORY-%u",
          (unsigned int)_InterlockedIncrement((volatile signed __int32 *)&PUBLIC_PFTOBJ::ulMemoryUnique));
        v16 = -1LL;
        do
          ++v16;
        while ( Dst[v16] );
        v17 = v16 + 1;
        LODWORD(Size) = v24;
        PFFMEMOBJ::PFFMEMOBJ(
          (PFFMEMOBJ *)v31,
          v15,
          Dst,
          v17,
          1u,
          a3,
          Size,
          v26,
          v28,
          0LL,
          *(struct PFT **)this,
          0x10u,
          0x30u,
          (struct _FNTCHECKSUM *)v27,
          v6,
          0LL);
        v18 = v31[0];
        if ( v31[0] )
        {
          v6 = 0LL;
          *v34 = 0;
          if ( (unsigned int)PFFMEMOBJ::bLoadFontFileTable((PFFMEMOBJ *)v31, Dst, v15, 0LL, 0LL) )
          {
            v33 = ghsemPublicPFT;
            GreAcquireSemaphore(ghsemPublicPFT);
            if ( (unsigned int)PFFOBJ::bAddHash((PFFOBJ *)v31, 0) )
            {
              v19 = v17;
              v20 = v32;
              if ( !PUBLIC_PFTOBJ::pPFFGet(v32, Dst, v19, 1, a3, v24, &v35, 0) )
              {
                v21 = v35;
                ++*(_DWORD *)(*(_QWORD *)v20 + 28LL);
                if ( *v21 )
                  *((_QWORD *)*v21 + 2) = v18;
                *(_QWORD *)(v18 + 8) = *v21;
                *(_QWORD *)(v18 + 16) = 0LL;
                *v21 = (struct PFF *)v18;
                PFFOBJ::vSetUniqueness((PFFOBJ *)v31);
                PFFMEMOBJ::vKeepIt((PFFMEMOBJ *)v31);
                v11 = *(unsigned int *)(v18 + 140);
              }
            }
            else
            {
              PFFOBJ::vRemoveHash((PFFOBJ *)v31);
            }
            SEMOBJ::vUnlock((SEMOBJ *)&v33);
          }
        }
        PFFMEMOBJ::~PFFMEMOBJ((PFFMEMOBJ *)v31);
      }
    }
  }
  if ( v6 )
    Win32FreePool(v6);
  return v11;
}
