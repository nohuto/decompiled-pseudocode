/*
 * XREFs of ?bInsertMetricsPlusPath@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z @ 0x1C02D2A3C
 * Callers:
 *     xInsertMetricsPlusRFONTOBJ @ 0x1C00FC984 (xInsertMetricsPlusRFONTOBJ.c)
 * Callees:
 *     ?QueryFontData@PDEVOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z @ 0x1C002909C (-QueryFontData@PDEVOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z.c)
 *     ?pgbCheckGlyphCache@RFONTOBJ@@QEAAPEAX_K@Z @ 0x1C002A394 (-pgbCheckGlyphCache@RFONTOBJ@@QEAAPEAX_K@Z.c)
 *     ?bAllocateCache@RFONTOBJ@@QEAAHPEAV1@@Z @ 0x1C002ADA0 (-bAllocateCache@RFONTOBJ@@QEAAHPEAV1@@Z.c)
 *     ?vXlatGlyphArray@RFONTOBJ@@QEAAXPEAGIPEAKKH@Z @ 0x1C002F568 (-vXlatGlyphArray@RFONTOBJ@@QEAAXPEAGIPEAKKH@Z.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     ?vInit@EPATHFONTOBJ@@QEAAXK@Z @ 0x1C015ABB8 (-vInit@EPATHFONTOBJ@@QEAAXK@Z.c)
 */

__int64 __fastcall RFONTOBJ::bInsertMetricsPlusPath(RFONTOBJ *this, struct _GLYPHDATA **a2, __int16 a3)
{
  __int64 v3; // rbx
  unsigned int v4; // esi
  __int64 result; // rax
  unsigned int v8; // r14d
  struct _GLYPHDATA *v9; // rax
  __int64 v10; // rax
  unsigned int v11; // r15d
  EPATHFONTOBJ *v12; // rax
  EPATHFONTOBJ *v13; // rsi
  EPATHOBJ *v14; // rcx
  unsigned __int16 v15; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v16; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v17; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v18[8]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v19; // [rsp+68h] [rbp-98h]
  struct _GLYPHDATA v20; // [rsp+E0h] [rbp-20h] BYREF

  v3 = *(_QWORD *)this;
  LOWORD(v4) = a3;
  if ( *(_QWORD *)(*(_QWORD *)this + 480LL)
    || (result = RFONTOBJ::bAllocateCache(this, (struct RFONTOBJ *)a2), (_DWORD)result) )
  {
    v8 = 1;
    if ( (*(_DWORD *)(*(_QWORD *)this + 68LL) & 2) != 0 )
    {
      v15 = v4;
      RFONTOBJ::vXlatGlyphArray(this, &v15, 1, &v16, 0, 0);
      v4 = v16;
    }
    else
    {
      v4 = (unsigned __int16)v4;
    }
    v17 = *(_QWORD *)(*(_QWORD *)this + 80LL);
    PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v18);
    if ( !v19 )
      goto LABEL_20;
    v9 = &v20;
    if ( !*(_DWORD *)(*(_QWORD *)this + 652LL) )
      v9 = *(struct _GLYPHDATA **)(v3 + 536);
    if ( (unsigned int)PDEVOBJ::QueryFontData(
                         (PDEVOBJ *)&v17,
                         *(struct DHPDEV__ **)(*(_QWORD *)this + 104LL),
                         *(struct _FONTOBJ **)this,
                         2u,
                         v4,
                         v9,
                         v18,
                         0) == -1 )
    {
LABEL_20:
      v8 = 0;
    }
    else
    {
      if ( *(_DWORD *)(*(_QWORD *)this + 652LL) )
      {
        v10 = *(_QWORD *)(v3 + 536);
        *(_OWORD *)v10 = *(_OWORD *)&v20.gdf.pgb;
        *(_QWORD *)(v10 + 16) = *(_QWORD *)&v20.fxA;
      }
      v11 = EPATHOBJ::cjSize((EPATHOBJ *)v18) + 440;
      v12 = (EPATHFONTOBJ *)RFONTOBJ::pgbCheckGlyphCache(this, v11);
      v13 = v12;
      if ( v12 )
      {
        EPATHFONTOBJ::vInit(v12, v11);
        EPATHOBJ::bClone(v14, (struct EPATHOBJ *)v18);
        **(_QWORD **)(v3 + 536) = v13;
      }
      else
      {
        **(_QWORD **)(v3 + 536) = 0LL;
      }
      *a2 = *(struct _GLYPHDATA **)(v3 + 536);
      if ( *(_DWORD *)(*(_QWORD *)this + 652LL) )
        *(_QWORD *)(v3 + 536) += 24LL;
      else
        *(_QWORD *)(v3 + 536) += 64LL;
      if ( v13 )
        *(_QWORD *)(v3 + 616) += v11;
    }
    PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v18);
    return v8;
  }
  return result;
}
