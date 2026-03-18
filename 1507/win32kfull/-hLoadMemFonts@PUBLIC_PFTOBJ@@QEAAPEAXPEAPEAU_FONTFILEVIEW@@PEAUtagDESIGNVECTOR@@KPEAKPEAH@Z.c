/*
 * XREFs of ?hLoadMemFonts@PUBLIC_PFTOBJ@@QEAAPEAXPEAPEAU_FONTFILEVIEW@@PEAUtagDESIGNVECTOR@@KPEAKPEAH@Z @ 0x1C025DCE4
 * Callers:
 *     GreAddFontMemResourceEx @ 0x1C027ED0C (GreAddFontMemResourceEx.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00D6F48 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?vRemoveHash@PFFOBJ@@QEAAXXZ @ 0x1C0129E2C (-vRemoveHash@PFFOBJ@@QEAAXXZ.c)
 *     ??0PFFMEMOBJ@@QEAA@IPEAGKKPEAUtagDESIGNVECTOR@@K_KPEAUHDEV__@@PEAUDHPDEV__@@PEAVPFT@@KKPEAU_FNTCHECKSUM@@PEAPEAU_FONTFILEVIEW@@PEAU_UNIVERSAL_FONT_ID@@@Z @ 0x1C013E6BC (--0PFFMEMOBJ@@QEAA@IPEAGKKPEAUtagDESIGNVECTOR@@K_KPEAUHDEV__@@PEAUDHPDEV__@@PEAVPFT@@KKPEAU_FNTC.c)
 *     ??1PFFMEMOBJ@@QEAA@XZ @ 0x1C013EA0C (--1PFFMEMOBJ@@QEAA@XZ.c)
 *     ?bLoadFontFileTable@PFFMEMOBJ@@QEAAHPEAGKPEAU_UNIVERSAL_FONT_ID@@PEAU_EUDCLOAD@@@Z @ 0x1C013EA70 (-bLoadFontFileTable@PFFMEMOBJ@@QEAAHPEAGKPEAU_UNIVERSAL_FONT_ID@@PEAU_EUDCLOAD@@@Z.c)
 *     ?pPFFGet@PUBLIC_PFTOBJ@@QEAAPEAVPFF@@PEAGKKPEAUtagDESIGNVECTOR@@KPEAPEAPEAV2@H@Z @ 0x1C013FA64 (-pPFFGet@PUBLIC_PFTOBJ@@QEAAPEAVPFF@@PEAGKKPEAUtagDESIGNVECTOR@@KPEAPEAPEAV2@H@Z.c)
 *     ?vSetUniqueness@PFFOBJ@@QEAAXXZ @ 0x1C0140630 (-vSetUniqueness@PFFOBJ@@QEAAXXZ.c)
 *     ?bAddHash@PFFOBJ@@QEAAHH@Z @ 0x1C0140780 (-bAddHash@PFFOBJ@@QEAAHH@Z.c)
 *     ?QueryFontFile@PDEVOBJ@@QEAAJ_KKKPEAK@Z @ 0x1C0140E30 (-QueryFontFile@PDEVOBJ@@QEAAJ_KKKPEAK@Z.c)
 *     KmfdLoadFontFileView @ 0x1C01415E4 (KmfdLoadFontFileView.c)
 *     ?UseUmfd@@YAHPEBG@Z @ 0x1C0141BB8 (-UseUmfd@@YAHPEBG@Z.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     ?ScrutinizeMemoryFontLoad@@YAJXZ @ 0x1C025D300 (-ScrutinizeMemoryFontLoad@@YAJXZ.c)
 *     UmfdLoadFontFileView @ 0x1C025D370 (UmfdLoadFontFileView.c)
 *     ?vKeepIt@PFFMEMOBJ@@QEAAXXZ @ 0x1C02B4834 (-vKeepIt@PFFMEMOBJ@@QEAAXXZ.c)
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
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rbx
  unsigned int v22; // r8d
  PUBLIC_PFTOBJ *v23; // r14
  struct PFF **v24; // rcx
  size_t Size; // [rsp+30h] [rbp-D0h]
  unsigned int v27; // [rsp+80h] [rbp-80h]
  unsigned int v28; // [rsp+84h] [rbp-7Ch] BYREF
  unsigned __int64 v29; // [rsp+88h] [rbp-78h] BYREF
  unsigned int v30[2]; // [rsp+90h] [rbp-70h] BYREF
  HDEV v31; // [rsp+98h] [rbp-68h] BYREF
  void *v32; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v33; // [rsp+A8h] [rbp-58h] BYREF
  _QWORD v34[3]; // [rsp+B0h] [rbp-50h] BYREF
  PUBLIC_PFTOBJ *v35; // [rsp+C8h] [rbp-38h]
  __int64 v36; // [rsp+D0h] [rbp-30h] BYREF
  int *v37; // [rsp+D8h] [rbp-28h]
  struct PFF **v38; // [rsp+E0h] [rbp-20h] BYREF
  wchar_t Dst[32]; // [rsp+E8h] [rbp-18h] BYREF

  v6 = a2;
  v7 = *a2;
  v37 = a6;
  v27 = a4;
  v11 = 0LL;
  v32 = (void *)*((_QWORD *)v7 + 2);
  v28 = *((_DWORD *)v7 + 6);
  v35 = this;
  v29 = 0LL;
  if ( ScrutinizeMemoryFontLoad() >= 0 )
  {
    GreAcquireSemaphore(ghsemDriverMgmt);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 12LL);
    *(_QWORD *)v30 = 0LL;
    if ( UseUmfd(v12) )
      UmfdLoadFontFileView(0LL, v13, v6, 1u, &v32, &v28, a3, (__int64 *)&v29, &v33);
    else
      KmfdLoadFontFileView(0LL, 0, v6, 1u, &v32, &v28, a3, a4, (__int64 *)&v29, (struct PDEV **)&v33, v30);
    v31 = (HDEV)v33;
    EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt", ghsemDriverMgmt);
    GreReleaseSemaphoreInternal(ghsemDriverMgmt);
    if ( v29 )
    {
      FontFile = PDEVOBJ::QueryFontFile((PDEVOBJ *)&v31, v29, 2u, 0, 0LL);
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
        LODWORD(Size) = v27;
        PFFMEMOBJ::PFFMEMOBJ(
          (PFFMEMOBJ *)v34,
          v15,
          Dst,
          v17,
          1u,
          a3,
          Size,
          v29,
          v31,
          0LL,
          *(struct PFT **)this,
          0x10u,
          0x30u,
          (struct _FNTCHECKSUM *)v30,
          v6,
          0LL);
        v21 = v34[0];
        if ( v34[0] )
        {
          v6 = 0LL;
          *v37 = 0;
          if ( (unsigned int)PFFMEMOBJ::bLoadFontFileTable((PFFMEMOBJ *)v34, Dst, v15, 0LL, 0LL) )
          {
            v36 = ghsemPublicPFT;
            GreAcquireSemaphore(ghsemPublicPFT);
            if ( (unsigned int)PFFOBJ::bAddHash((PFFOBJ *)v34, 0) )
            {
              v22 = v17;
              v23 = v35;
              if ( !PUBLIC_PFTOBJ::pPFFGet(v35, Dst, v22, 1, a3, v27, &v38, 0) )
              {
                v24 = v38;
                ++*(_DWORD *)(*(_QWORD *)v23 + 28LL);
                if ( *v24 )
                  *((_QWORD *)*v24 + 2) = v21;
                *(_QWORD *)(v21 + 8) = *v24;
                *(_QWORD *)(v21 + 16) = 0LL;
                *v24 = (struct PFF *)v21;
                PFFOBJ::vSetUniqueness((PFFOBJ *)v34);
                PFFMEMOBJ::vKeepIt((PFFMEMOBJ *)v34);
                v11 = *(unsigned int *)(v21 + 140);
              }
            }
            else
            {
              PFFOBJ::vRemoveHash((PFFOBJ *)v34);
            }
            SEMOBJ::vUnlock((SEMOBJ *)&v36);
          }
        }
        PFFMEMOBJ::~PFFMEMOBJ((PFFMEMOBJ *)v34, v18, v19, v20);
      }
    }
  }
  if ( v6 )
    Win32FreePool(v6);
  return v11;
}
