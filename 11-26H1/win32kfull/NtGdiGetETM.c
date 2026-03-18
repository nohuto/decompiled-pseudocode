/*
 * XREFs of NtGdiGetETM @ 0x1403336E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1EUDCCountRegion@@QEAA@XZ @ 0x14006FBA8 (--1EUDCCountRegion@@QEAA@XZ.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x14006FDD0 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1400AFE30 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x1400B0D34 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ?vInit@RFONTOBJ@@QEAAXAEAVXDCOBJ@@HK@Z @ 0x1400C3E98 (-vInit@RFONTOBJ@@QEAAXAEAVXDCOBJ@@HK@Z.c)
 *     ?flFontType@PFEOBJ@@QEAAKXZ @ 0x140105A8C (-flFontType@PFEOBJ@@QEAAKXZ.c)
 *     ??1SURFFAKEOBJ@@QEAA@XZ @ 0x14016DD70 (--1SURFFAKEOBJ@@QEAA@XZ.c)
 *     ??0SURFFAKEOBJ@@QEAA@PEAUHDEV__@@PEAUDHPDEV__@@@Z @ 0x14016DF04 (--0SURFFAKEOBJ@@QEAA@PEAUHDEV__@@PEAUDHPDEV__@@@Z.c)
 *     ??0EUDCCountRegion@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x140282670 (--0EUDCCountRegion@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 *     ?vIFIMetricsToETM@@YAXPEAU_EXTTEXTMETRIC@@AEAVRFONTOBJ@@AEAVDCOBJ@@PEAU_IFIMETRICS@@@Z @ 0x14031C35C (-vIFIMetricsToETM@@YAXPEAU_EXTTEXTMETRIC@@AEAVRFONTOBJ@@AEAVDCOBJ@@PEAU_IFIMETRICS@@@Z.c)
 *     ?IsReady@EUDCCountRegion@@QEBA_NXZ @ 0x14033A28C (-IsReady@EUDCCountRegion@@QEBA_NXZ.c)
 *     ?FontManagement@PFFOBJ@@QEAAHPEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK2@Z @ 0x14033A800 (-FontManagement@PFFOBJ@@QEAAHPEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK2@Z.c)
 *     ?GetETMFontManagement@@YAHAEAVRFONTOBJ@@PEAUHDEV__@@PEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK4@Z @ 0x14034D380 (-GetETMFontManagement@@YAHAEAVRFONTOBJ@@PEAUHDEV__@@PEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK4@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall NtGdiGetETM(HDC a1, void *a2)
{
  unsigned int v3; // edi
  __int64 v4; // rdx
  int v5; // ecx
  __int64 SessionState; // rax
  struct _FONTOBJ *v7; // r9
  HDEV sizLogResPpi; // rbx
  struct _SURFOBJ *v9; // r8
  struct _SURFOBJ *v10; // rdx
  __int64 v11; // r9
  unsigned int v13; // [rsp+20h] [rbp-228h]
  unsigned int v14; // [rsp+28h] [rbp-220h]
  unsigned int v15; // [rsp+38h] [rbp-210h]
  void *v16; // [rsp+40h] [rbp-208h]
  struct _FONTOBJ *v17; // [rsp+50h] [rbp-1F8h] BYREF
  PVOID pvProducer; // [rsp+58h] [rbp-1F0h] BYREF
  _QWORD v19[2]; // [rsp+60h] [rbp-1E8h] BYREF
  _BYTE v20[64]; // [rsp+70h] [rbp-1D8h] BYREF
  _QWORD v21[14]; // [rsp+B0h] [rbp-198h] BYREF
  _BYTE v22[32]; // [rsp+120h] [rbp-128h] BYREF
  __int64 v23; // [rsp+140h] [rbp-108h]
  _OWORD v24[3]; // [rsp+190h] [rbp-B8h] BYREF
  int v25; // [rsp+1C0h] [rbp-88h]
  _BYTE v26[96]; // [rsp+1D0h] [rbp-78h] BYREF

  memset(v24, 0, sizeof(v24));
  v25 = 0;
  v3 = 0;
  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v21, a1);
  if ( a2 && v21[0] )
  {
    SessionState = W32GetSessionState(v5, v4);
    EUDCCountRegion::EUDCCountRegion(
      (EUDCCountRegion *)v20,
      (struct Gre::Font::GLOBALS *)(*(_QWORD *)(SessionState + 96) + 4864LL));
    if ( EUDCCountRegion::IsReady((EUDCCountRegion *)v20) )
    {
      v17 = 0LL;
      RFONTOBJ::vInit((RFONTOBJ *)&v17, (struct XDCOBJ *)v21, 0, 2u);
      if ( v17 )
      {
        sizLogResPpi = (HDEV)v17[1].sizLogResPpi;
        if ( *((_QWORD *)sizLogResPpi + 382) )
        {
          LODWORD(pvProducer) = 256;
          v9 = 0LL;
          if ( ((_DWORD)sizLogResPpi[10] & 0x8000) != 0 )
            v9 = (struct _SURFOBJ *)*((_QWORD *)sizLogResPpi + 223);
          if ( (unsigned int)GetETMFontManagement(
                               (struct RFONTOBJ *)&v17,
                               sizLogResPpi,
                               v9,
                               v7,
                               v13,
                               v14,
                               &pvProducer,
                               v15,
                               v16) )
          {
            v19[0] = *(_QWORD *)&v17[2].iUniq;
            v10 = (struct _SURFOBJ *)((*((_QWORD *)sizLogResPpi + 318) + 24LL) & ((unsigned __int128)-(__int128)*((unsigned __int64 *)sizLogResPpi + 318) >> 64));
            if ( v10 )
            {
              v3 = PFFOBJ::FontManagement((PFFOBJ *)v19, v10, v17, 0x100u, 0, 0LL, 0x34u, v24);
            }
            else
            {
              ThreadRestrictNewHandlesRegion::ThreadRestrictNewHandlesRegion((ThreadRestrictNewHandlesRegion *)v26);
              SURFFAKEOBJ::SURFFAKEOBJ(
                (SURFFAKEOBJ *)v22,
                *(HDEV *)&v17[1].ulStyleSize,
                (struct DHPDEV__ *)v17[1].pvConsumer);
              if ( v23 )
                v3 = PFFOBJ::FontManagement(
                       (PFFOBJ *)v19,
                       (struct _SURFOBJ *)((v23 + 24) & -(__int64)(v23 != 0)),
                       v17,
                       0x100u,
                       0,
                       0LL,
                       0x34u,
                       v24);
              SURFFAKEOBJ::~SURFFAKEOBJ((SURFFAKEOBJ *)v22);
              ThreadRestrictNewHandlesRegion::~ThreadRestrictNewHandlesRegion((ThreadRestrictNewHandlesRegion *)v26);
            }
          }
        }
        if ( !v3 )
        {
          pvProducer = v17[1].pvProducer;
          if ( pvProducer )
          {
            if ( (PFEOBJ::flFontType((PFEOBJ *)&pvProducer) & 4) != 0 )
            {
              vIFIMetricsToETM(
                (struct _EXTTEXTMETRIC *)v24,
                (struct RFONTOBJ *)&v17,
                (struct DCOBJ *)v21,
                *(struct _IFIMETRICS **)(v11 + 32));
              v3 = 1;
            }
          }
        }
      }
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v17);
    }
    EUDCCountRegion::~EUDCCountRegion((EUDCCountRegion *)v20);
  }
  if ( v3 )
    GreProbeAndWriteToUntrustedVa(a2, 0x34uLL, v24, 0x34uLL, 4uLL);
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v21);
  return v3;
}
