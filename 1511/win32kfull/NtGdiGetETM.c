/*
 * XREFs of NtGdiGetETM @ 0x1C02B2DC0
 * Callers:
 *     <none>
 * Callees:
 *     ?flFontType@PFEOBJ@@QEAAKXZ @ 0x1C001E914 (-flFontType@PFEOBJ@@QEAAKXZ.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C0023A60 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0027184 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0036AA0 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0036AC0 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     memmove @ 0x1C0152980 (memmove.c)
 *     memset @ 0x1C0152CC0 (memset.c)
 *     ?vIFIMetricsToETM@@YAXPEAU_EXTTEXTMETRIC@@AEAVRFONTOBJ@@AEAVDCOBJ@@PEAU_IFIMETRICS@@@Z @ 0x1C0299E34 (-vIFIMetricsToETM@@YAXPEAU_EXTTEXTMETRIC@@AEAVRFONTOBJ@@AEAVDCOBJ@@PEAU_IFIMETRICS@@@Z.c)
 *     ?GetETMFontManagement@@YAHAEAVRFONTOBJ@@VPDEVOBJ@@PEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK4@Z @ 0x1C02A231C (-GetETMFontManagement@@YAHAEAVRFONTOBJ@@VPDEVOBJ@@PEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK4@Z.c)
 *     ?FontManagement@PDEVOBJ@@QEAAHPEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK2@Z @ 0x1C02B878C (-FontManagement@PDEVOBJ@@QEAAHPEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK2@Z.c)
 */

__int64 __fastcall NtGdiGetETM(HDC a1, _BYTE *a2)
{
  unsigned int v3; // ebx
  __int64 v4; // r9
  ULONG_PTR iTTUniq; // rdx
  struct _SURFOBJ *v6; // r8
  __int64 v7; // rcx
  struct _SURFOBJ *v8; // rdx
  __int64 v9; // r9
  _BYTE *v10; // r9
  __int64 v12; // [rsp+20h] [rbp-F8h]
  __int64 v13; // [rsp+28h] [rbp-F0h]
  struct _FONTOBJ *v14; // [rsp+50h] [rbp-C8h] BYREF
  int v15; // [rsp+58h] [rbp-C0h] BYREF
  ULONG_PTR v16; // [rsp+60h] [rbp-B8h] BYREF
  _QWORD v17[2]; // [rsp+68h] [rbp-B0h] BYREF
  PVOID pvConsumer; // [rsp+78h] [rbp-A0h] BYREF
  struct _SURFOBJ v19; // [rsp+80h] [rbp-98h] BYREF
  _BYTE Src[56]; // [rsp+D0h] [rbp-48h] BYREF

  v3 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v17, a1);
  if ( a2 && v17[0] )
  {
    if ( (unsigned int)RFONTOBJ::bInit((struct _FD_XFORM **)&v14, (struct XDCOBJ *)v17, 0, 2u) )
      GreAcquireSemaphore(v14[8].iTTUniq);
    if ( v14 )
    {
      iTTUniq = v14[1].iTTUniq;
      v16 = iTTUniq;
      if ( *(_QWORD *)(iTTUniq + 3096) )
      {
        v15 = 256;
        v6 = 0LL;
        if ( (*(_DWORD *)(iTTUniq + 56) & 0x8000) != 0 )
          v6 = *(struct _SURFOBJ **)(iTTUniq + 1824);
        if ( (unsigned int)GetETMFontManagement((struct RFONTOBJ *)&v14, iTTUniq, v6, v4, v12, v13, &v15) )
        {
          v7 = *(_QWORD *)(v16 + 2576);
          if ( !v7 || (v8 = (struct _SURFOBJ *)(v7 + 24), v7 == -24) )
          {
            memset(&v19, 0, sizeof(v19));
            v19.dhpdev = *(DHPDEV *)&v14[1].ulStyleSize;
            v19.hdev = (HDEV)v14[1].sizLogResPpi;
            v19.iType = 1;
            v8 = &v19;
          }
          v3 = PDEVOBJ::FontManagement((PDEVOBJ *)&v16, v8, v14, 0x100u, 0, 0LL, 0x34u, Src);
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
              (struct DCOBJ *)v17,
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
  DCOBJ::~DCOBJ((DCOBJ *)v17);
  return v3;
}
