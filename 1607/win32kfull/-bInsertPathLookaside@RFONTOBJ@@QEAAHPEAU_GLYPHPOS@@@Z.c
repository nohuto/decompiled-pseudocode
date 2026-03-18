/*
 * XREFs of ?bInsertPathLookaside@RFONTOBJ@@QEAAHPEAU_GLYPHPOS@@@Z @ 0x1C02D2C24
 * Callers:
 *     ?bInsertGlyphbitsLookaside@RFONTOBJ@@QEAAHPEAU_GLYPHPOS@@K@Z @ 0x1C02D2834 (-bInsertGlyphbitsLookaside@RFONTOBJ@@QEAAHPEAU_GLYPHPOS@@K@Z.c)
 * Callees:
 *     ?QueryFontData@PDEVOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z @ 0x1C002909C (-QueryFontData@PDEVOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z.c)
 *     PALLOCMEM2 @ 0x1C0060508 (PALLOCMEM2.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     ?vInit@EPATHFONTOBJ@@QEAAXK@Z @ 0x1C015ABB8 (-vInit@EPATHFONTOBJ@@QEAAXK@Z.c)
 */

__int64 __fastcall RFONTOBJ::bInsertPathLookaside(struct _FONTOBJ **this, struct _GLYPHPOS *a2)
{
  __int64 v4; // rdx
  unsigned int v5; // r14d
  PVOID pvProducer; // rcx
  unsigned int v7; // esi
  GLYPHDEF *v8; // rdi
  EPATHOBJ *v9; // rcx
  ULONG_PTR v11[2]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v12[8]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v13; // [rsp+58h] [rbp-A8h]
  struct _GLYPHDATA v14; // [rsp+D0h] [rbp-30h] BYREF

  v11[0] = (*this)[1].iTTUniq;
  PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v12);
  if ( !v13
    || (unsigned int)PDEVOBJ::QueryFontData(
                       (PDEVOBJ *)v11,
                       *(struct DHPDEV__ **)&(*this)[1].ulStyleSize,
                       *this,
                       2u,
                       a2->hg,
                       &v14,
                       v12,
                       0) == -1 )
  {
    goto LABEL_10;
  }
  v5 = EPATHOBJ::cjSize((EPATHOBJ *)v12) + 504;
  if ( *(_QWORD *)&(*this)[10].iUniq < (unsigned __int64)v5 )
  {
    pvProducer = (*this)[9].pvProducer;
    if ( pvProducer )
    {
      Win32FreePool(pvProducer, v4);
      (*this)[9].pvProducer = 0LL;
      *(_QWORD *)&(*this)[10].iUniq = 0LL;
    }
  }
  v7 = 1;
  if ( (*this)[9].pvProducer )
    goto LABEL_9;
  (*this)[9].pvProducer = PALLOCMEM2(v5, 1667326791LL, 1);
  if ( !(*this)[9].pvProducer )
  {
LABEL_10:
    v7 = 0;
    goto LABEL_11;
  }
  *(_QWORD *)&(*this)[10].iUniq = v5;
LABEL_9:
  v8 = (GLYPHDEF *)(*this)[9].pvProducer;
  EPATHFONTOBJ::vInit((EPATHFONTOBJ *)&v8[8], v5 - 64);
  EPATHOBJ::bClone(v9, (struct EPATHOBJ *)v12);
  *(struct _GLYPHDATA *)&v8->pgb = v14;
  a2->pgdf = v8;
  v8->pgb = (GLYPHBITS *)&v8[8];
LABEL_11:
  PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v12);
  return v7;
}
