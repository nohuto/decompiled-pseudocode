/*
 * XREFs of ?bLoadFontFileTable@PFFMEMOBJ@@QEAAHPEAGKPEAU_UNIVERSAL_FONT_ID@@PEAU_EUDCLOAD@@@Z @ 0x1C011A3D0
 * Callers:
 *     ?bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@@Z @ 0x1C0020D78 (-bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@@Z.c)
 *     ?bLoadRemoteFonts@PUBLIC_PFTOBJ@@QEAAHAEAVXDCOBJ@@PEAPEAU_FONTFILEVIEW@@IPEAUtagDESIGNVECTOR@@PEAU_UNIVERSAL_FONT_ID@@PEAH@Z @ 0x1C025D4C4 (-bLoadRemoteFonts@PUBLIC_PFTOBJ@@QEAAHAEAVXDCOBJ@@PEAPEAU_FONTFILEVIEW@@IPEAUtagDESIGNVECTOR@@PE.c)
 *     ?hLoadMemFonts@PUBLIC_PFTOBJ@@QEAAPEAXPEAPEAU_FONTFILEVIEW@@PEAUtagDESIGNVECTOR@@KPEAKPEAH@Z @ 0x1C025D890 (-hLoadMemFonts@PUBLIC_PFTOBJ@@QEAAPEAXPEAPEAU_FONTFILEVIEW@@PEAUtagDESIGNVECTOR@@KPEAKPEAH@Z.c)
 * Callees:
 *     ?Free@PDEVOBJ@@QEAAXPEAX_K@Z @ 0x1C001CCC8 (-Free@PDEVOBJ@@QEAAXPEAX_K@Z.c)
 *     ?QueryFont@PDEVOBJ@@QEAAPEAU_IFIMETRICS@@PEAUDHPDEV__@@_KKPEA_K@Z @ 0x1C001CD38 (-QueryFont@PDEVOBJ@@QEAAPEAU_IFIMETRICS@@PEAUDHPDEV__@@_KKPEA_K@Z.c)
 *     ?bAllocPFEData@PFFMEMOBJ@@AEAAHK@Z @ 0x1C0119D74 (-bAllocPFEData@PFFMEMOBJ@@AEAAHK@Z.c)
 *     ?bAddEntry@PFFMEMOBJ@@QEAAHKPEAU_FD_GLYPHSET@@_KPEAU_IFIMETRICS@@1PEAU_UNIVERSAL_FONT_ID@@PEAU_EUDCLOAD@@@Z @ 0x1C0119E0C (-bAddEntry@PFFMEMOBJ@@QEAAHKPEAU_FD_GLYPHSET@@_KPEAU_IFIMETRICS@@1PEAU_UNIVERSAL_FONT_ID@@PEAU_E.c)
 *     ?FindDefaultLinkedFontEntry@@YAHPEBG0@Z @ 0x1C028A950 (-FindDefaultLinkedFontEntry@@YAHPEBG0@Z.c)
 */

__int64 __fastcall PFFMEMOBJ::bLoadFontFileTable(
        PFFMEMOBJ *this,
        unsigned __int16 *a2,
        unsigned int a3,
        struct _UNIVERSAL_FONT_ID *a4,
        struct _EUDCLOAD *a5)
{
  unsigned int v9; // ebx
  unsigned int v10; // edi
  struct _EUDCLOAD *v11; // r14
  struct _IFIMETRICS *v12; // rax
  struct _IFIMETRICS *v13; // rsi
  unsigned __int64 v15; // [rsp+40h] [rbp-38h] BYREF
  __int64 v16; // [rsp+80h] [rbp+8h] BYREF

  v16 = *(_QWORD *)(*(_QWORD *)this + 88LL);
  if ( !(unsigned int)PFFMEMOBJ::bAllocPFEData(this, a3) )
    return 0;
  v9 = 1;
  v10 = 1;
  if ( a3 )
  {
    v11 = a5;
    while ( 1 )
    {
      v12 = PDEVOBJ::QueryFont(
              (PDEVOBJ *)&v16,
              *(struct DHPDEV__ **)(*(_QWORD *)this + 96LL),
              *(_QWORD *)(*(_QWORD *)this + 80LL),
              v10,
              &v15);
      v13 = v12;
      if ( !v12 )
        break;
      if ( bReadyToInitializeFontAssocDefault
        && !v11
        && !(unsigned int)FindDefaultLinkedFontEntry((wchar_t *)((char *)v12 + v12->dpwszFamilyName), a2)
        || !(unsigned int)PFFMEMOBJ::bAddEntry(this, v10, 0LL, 0LL, v13, v15, a4, v11) )
      {
        if ( *(_QWORD *)(v16 + 3056) )
          PDEVOBJ::Free((PDEVOBJ *)&v16, v13, v15);
        return 0;
      }
      if ( ++v10 > a3 )
        return v9;
    }
    return 0;
  }
  return v9;
}
