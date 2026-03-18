/*
 * XREFs of NtGdiGetETM @ 0x1C02B5DF0
 * Callers:
 *     <none>
 * Callees:
 *     ?flFontType@PFEOBJ@@QEAAKXZ @ 0x1C0027ADC (-flFontType@PFEOBJ@@QEAAKXZ.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C002D6C4 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C002EAC0 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ?pSurfobj@SURFACE@@QEAAPEAU_SURFOBJ@@XZ @ 0x1C0033D5C (-pSurfobj@SURFACE@@QEAAPEAU_SURFOBJ@@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004A058 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C004A0A0 (--1DCOBJ@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     memmove @ 0x1C015A040 (memmove.c)
 *     memset @ 0x1C015A380 (memset.c)
 *     ?vIFIMetricsToETM@@YAXPEAU_EXTTEXTMETRIC@@AEAVRFONTOBJ@@AEAVDCOBJ@@PEAU_IFIMETRICS@@@Z @ 0x1C0299614 (-vIFIMetricsToETM@@YAXPEAU_EXTTEXTMETRIC@@AEAVRFONTOBJ@@AEAVDCOBJ@@PEAU_IFIMETRICS@@@Z.c)
 *     ?GetETMFontManagement@@YAHAEAVRFONTOBJ@@VPDEVOBJ@@PEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK4@Z @ 0x1C02A32CC (-GetETMFontManagement@@YAHAEAVRFONTOBJ@@VPDEVOBJ@@PEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK4@Z.c)
 *     ?FontManagement@PDEVOBJ@@QEAAHPEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK2@Z @ 0x1C02BBB2C (-FontManagement@PDEVOBJ@@QEAAHPEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK2@Z.c)
 */

__int64 __fastcall NtGdiGetETM(HDC a1, _BYTE *a2)
{
  unsigned int v3; // ebx
  __int64 v4; // r9
  ULONG_PTR iTTUniq; // rdx
  struct _SURFOBJ *v6; // r8
  struct _SURFOBJ *v7; // rdx
  struct _FONTOBJ *v8; // rax
  __int64 v9; // r9
  _BYTE *v10; // r9
  __int64 v12; // [rsp+20h] [rbp-348h]
  __int64 v13; // [rsp+28h] [rbp-340h]
  struct _FONTOBJ *v14; // [rsp+50h] [rbp-318h] BYREF
  int v15; // [rsp+58h] [rbp-310h] BYREF
  ULONG_PTR v16; // [rsp+60h] [rbp-308h] BYREF
  PVOID pvConsumer; // [rsp+68h] [rbp-300h] BYREF
  _QWORD v18[6]; // [rsp+70h] [rbp-2F8h] BYREF
  _BYTE Src[64]; // [rsp+A0h] [rbp-2C8h] BYREF
  _BYTE v20[624]; // [rsp+E0h] [rbp-288h] BYREF

  v3 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v18, a1);
  if ( a2 && v18[0] )
  {
    if ( (unsigned int)RFONTOBJ::bInit((struct _FD_XFORM **)&v14, (struct XDCOBJ *)v18, 0, 2u) )
      GreAcquireSemaphore(v14[8].iTTUniq);
    if ( v14 )
    {
      iTTUniq = v14[1].iTTUniq;
      v16 = iTTUniq;
      if ( *(_QWORD *)(iTTUniq + 3088) )
      {
        v15 = 256;
        v6 = 0LL;
        if ( (*(_DWORD *)(iTTUniq + 56) & 0x8000) != 0 )
          v6 = *(struct _SURFOBJ **)(iTTUniq + 1824);
        if ( (unsigned int)GetETMFontManagement((struct RFONTOBJ *)&v14, iTTUniq, v6, v4, v12, v13, &v15) )
        {
          v7 = SURFACE::pSurfobj(*(SURFACE **)(v16 + 2576));
          if ( !v7 )
          {
            memset(v20, 0, 0x268uLL);
            v7 = SURFACE::pSurfobj((SURFACE *)v20);
            v8 = v14;
            v7->dhpdev = *(DHPDEV *)&v14[1].ulStyleSize;
            v7->hdev = (HDEV)v8[1].sizLogResPpi;
            v7->iType = 1;
          }
          v3 = PDEVOBJ::FontManagement((PDEVOBJ *)&v16, v7, v14, 0x100u, 0, 0LL, 0x34u, Src);
        }
      }
      if ( !v3 )
      {
        pvConsumer = v14[1].pvConsumer;
        if ( pvConsumer )
        {
          if ( (PFEOBJ::flFontType((PFEOBJ *)&pvConsumer) & 4) != 0 )
          {
            vIFIMetricsToETM(
              (struct _EXTTEXTMETRIC *)Src,
              (struct RFONTOBJ *)&v14,
              (struct DCOBJ *)v18,
              *(struct _IFIMETRICS **)(v9 + 32));
            v3 = 1;
          }
        }
      }
    }
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v14);
  }
  if ( v3 )
  {
    if ( ((unsigned __int8)a2 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v10 = a2;
    if ( (unsigned __int64)a2 >= W32UserProbeAddress )
      v10 = (_BYTE *)W32UserProbeAddress;
    *v10 = *v10;
    v10[51] = v10[51];
    memmove(a2, Src, 0x34uLL);
  }
  DCOBJ::~DCOBJ((DCOBJ *)v18);
  return v3;
}
