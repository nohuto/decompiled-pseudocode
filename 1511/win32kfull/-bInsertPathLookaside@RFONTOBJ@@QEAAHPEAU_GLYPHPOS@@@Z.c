/*
 * XREFs of ?bInsertPathLookaside@RFONTOBJ@@QEAAHPEAU_GLYPHPOS@@@Z @ 0x1C02CFB7C
 * Callers:
 *     ?bInsertGlyphbitsLookaside@RFONTOBJ@@QEAAHPEAU_GLYPHPOS@@K@Z @ 0x1C02CF784 (-bInsertGlyphbitsLookaside@RFONTOBJ@@QEAAHPEAU_GLYPHPOS@@K@Z.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C001A9C0 (PALLOCMEM2.c)
 *     ?QueryFontData@PDEVOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z @ 0x1C001CE68 (-QueryFontData@PDEVOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     ?vInit@EPATHFONTOBJ@@QEAAXK@Z @ 0x1C01534D8 (-vInit@EPATHFONTOBJ@@QEAAXK@Z.c)
 */

__int64 __fastcall RFONTOBJ::bInsertPathLookaside(struct _FONTOBJ **this, struct _GLYPHPOS *a2)
{
  unsigned int v4; // r14d
  PVOID pvProducer; // rcx
  unsigned int v6; // esi
  GLYPHDEF *v7; // rdi
  ULONG_PTR v9[2]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v10[8]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v11; // [rsp+58h] [rbp-A8h]
  struct _GLYPHDATA v12; // [rsp+D0h] [rbp-30h] BYREF

  v9[0] = (*this)[1].iTTUniq;
  PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v10);
  if ( !v11
    || (unsigned int)PDEVOBJ::QueryFontData(
                       (PDEVOBJ *)v9,
                       *(struct DHPDEV__ **)&(*this)[1].ulStyleSize,
                       *this,
                       2u,
                       a2->hg,
                       &v12,
                       v10,
                       0) == -1 )
  {
    goto LABEL_10;
  }
  v4 = EPATHOBJ::cjSize((EPATHOBJ *)v10) + 504;
  if ( *(_QWORD *)&(*this)[10].iUniq < (unsigned __int64)v4 )
  {
    pvProducer = (*this)[9].pvProducer;
    if ( pvProducer )
    {
      Win32FreePool(pvProducer);
      (*this)[9].pvProducer = 0LL;
      *(_QWORD *)&(*this)[10].iUniq = 0LL;
    }
  }
  v6 = 1;
  if ( (*this)[9].pvProducer )
    goto LABEL_9;
  (*this)[9].pvProducer = PALLOCMEM2(v4, 1667326791LL, 1);
  if ( !(*this)[9].pvProducer )
  {
LABEL_10:
    v6 = 0;
    goto LABEL_11;
  }
  *(_QWORD *)&(*this)[10].iUniq = v4;
LABEL_9:
  v7 = (GLYPHDEF *)(*this)[9].pvProducer;
  EPATHFONTOBJ::vInit((EPATHFONTOBJ *)&v7[8], v4 - 64);
  EPATHOBJ::bClone((EPATHOBJ *)&v7[8], (struct EPATHOBJ *)v10);
  *(struct _GLYPHDATA *)&v7->pgb = v12;
  a2->pgdf = v7;
  v7->pgb = (GLYPHBITS *)&v7[8];
LABEL_11:
  PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v10);
  return v6;
}
