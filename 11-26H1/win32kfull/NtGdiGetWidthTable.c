/*
 * XREFs of NtGdiGetWidthTable @ 0x140281520
 * Callers:
 *     <none>
 * Callees:
 *     ??1EUDCCountRegion@@QEAA@XZ @ 0x14006FBA8 (--1EUDCCountRegion@@QEAA@XZ.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x14006FDD0 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1400AFE30 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x1400B0D34 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ?vInit@RFONTOBJ@@QEAAXAEAVXDCOBJ@@HK@Z @ 0x1400C3E98 (-vInit@RFONTOBJ@@QEAAXAEAVXDCOBJ@@HK@Z.c)
 *     ?bGetWidthTable@RFONTOBJ@@QEAAHAEAVDCOBJ@@KPEAGK1@Z @ 0x1400FA384 (-bGetWidthTable@RFONTOBJ@@QEAAHAEAVDCOBJ@@KPEAGK1@Z.c)
 *     ?bGetWidthData@RFONTOBJ@@QEAAHPEAU_WIDTHDATA@@AEAVDCOBJ@@@Z @ 0x1401C55B8 (-bGetWidthData@RFONTOBJ@@QEAAHPEAU_WIDTHDATA@@AEAVDCOBJ@@@Z.c)
 *     ??0EUDCCountRegion@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x140282670 (--0EUDCCountRegion@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 *     ?IsReady@EUDCCountRegion@@QEBA_NXZ @ 0x14033A28C (-IsReady@EUDCCountRegion@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall NtGdiGetWidthTable(
        HDC a1,
        unsigned int a2,
        const void *a3,
        unsigned int a4,
        void *a5,
        void *a6,
        void *a7)
{
  __int64 v7; // rsi
  unsigned int WidthTable; // edi
  __int64 v11; // rdx
  int v12; // ecx
  unsigned __int16 *v13; // rbx
  unsigned __int16 *v14; // r14
  __int64 SessionState; // rax
  int v16; // edx
  unsigned __int16 v17; // dx
  __int64 v18; // rcx
  unsigned __int16 *v19; // rdi
  _DWORD *v21; // [rsp+30h] [rbp-138h] BYREF
  _DWORD v22[2]; // [rsp+38h] [rbp-130h] BYREF
  unsigned __int16 *v23; // [rsp+40h] [rbp-128h]
  void *v24; // [rsp+48h] [rbp-120h]
  void *v25; // [rsp+50h] [rbp-118h]
  unsigned __int16 *v26; // [rsp+58h] [rbp-110h]
  void *v27; // [rsp+60h] [rbp-108h]
  _QWORD v28[14]; // [rsp+70h] [rbp-F8h] BYREF
  _BYTE v29[56]; // [rsp+E0h] [rbp-88h] BYREF
  __int128 v30; // [rsp+118h] [rbp-50h] BYREF

  v7 = a4;
  LODWORD(v21) = a2;
  v24 = a5;
  v27 = a6;
  v25 = a7;
  WidthTable = -1;
  v22[1] = -1;
  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v28, a1);
  if ( !(_DWORD)v7 || !v28[0] )
    goto LABEL_29;
  v30 = 0LL;
  v22[0] = 0;
  v13 = 0LL;
  v23 = 0LL;
  v14 = 0LL;
  if ( (unsigned int)v7 <= 0x9C4000 )
  {
    v13 = (unsigned __int16 *)AllocFreeTmpBuffer((unsigned int)(4 * v7));
    v23 = v13;
  }
  if ( v13 )
  {
    v14 = &v13[v7];
    v26 = v14;
    GreProbeAndReadFromUntrustedVa(v14, 2 * v7, a3, 2 * v7, 2uLL);
  }
  else
  {
    LODWORD(v7) = 0;
  }
  if ( (_DWORD)v7 )
  {
    SessionState = W32GetSessionState(v12, v11);
    EUDCCountRegion::EUDCCountRegion(
      (EUDCCountRegion *)v29,
      (struct Gre::Font::GLOBALS *)(*(_QWORD *)(SessionState + 96) + 4864LL));
    if ( !EUDCCountRegion::IsReady((EUDCCountRegion *)v29) )
    {
LABEL_22:
      EUDCCountRegion::~EUDCCountRegion((EUDCCountRegion *)v29);
      goto LABEL_23;
    }
    v21 = 0LL;
    RFONTOBJ::vInit((RFONTOBJ *)&v21, (struct XDCOBJ *)v28, 0, 2u);
    if ( v21 )
    {
      v22[0] = v21[181];
      if ( v21[84] < 0xFFFu )
      {
        v16 = v21[76];
        if ( v16 )
        {
          v17 = 16 * v16;
          v18 = (unsigned int)v7;
          v19 = v13;
          while ( v18 )
          {
            *v19++ = v17;
            --v18;
          }
          WidthTable = 1;
LABEL_19:
          if ( !(unsigned int)RFONTOBJ::bGetWidthData((RFONTOBJ *)&v21, (struct _WIDTHDATA *)&v30, (struct DCOBJ *)v28) )
            WidthTable = -1;
          goto LABEL_21;
        }
        WidthTable = RFONTOBJ::bGetWidthTable((RFONTOBJ *)&v21, (struct DCOBJ *)v28, a2, v14, v7, v13);
        if ( WidthTable != -1 )
          goto LABEL_19;
      }
    }
LABEL_21:
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v21);
    goto LABEL_22;
  }
LABEL_23:
  if ( WidthTable != -1 )
  {
    GreProbeAndWriteToUntrustedVa(v24, 2LL * (unsigned int)v7, v13, 2LL * (unsigned int)v7, 2uLL);
    if ( a6 )
      GreProbeAndWriteToUntrustedVa(a6, 0x10uLL, &v30, 0x10uLL, 0x10uLL);
    GreProbeAndWriteToUntrustedVa(v25, 4uLL, v22, 4uLL, 1uLL);
  }
  if ( v13 )
    FreeTmpBuffer(v13);
LABEL_29:
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v28);
  return WidthTable;
}
