/*
 * XREFs of ?bTextToPathWorkhorse@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z @ 0x1C02B62DC
 * Callers:
 *     ?bProxyDrvTextOut@@YAHAEAVXDCOBJ@@PEAVSURFACE@@AEAVESTROBJ@@AEAVECLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@AEAVRFONTOBJ@@PEAVPDEVOBJ@@K4@Z @ 0x1C00FE334 (-bProxyDrvTextOut@@YAHAEAVXDCOBJ@@PEAVSURFACE@@AEAVESTROBJ@@AEAVECLIPOBJ@@PEAU_RECTL@@4PEAU_BRUS.c)
 *     ?bLinkedTextToPath@ESTROBJ@@QEAAHAEAVEPATHOBJ@@AEAVXDCOBJ@@@Z @ 0x1C02B60B0 (-bLinkedTextToPath@ESTROBJ@@QEAAHAEAVEPATHOBJ@@AEAVXDCOBJ@@@Z.c)
 *     ?bTextToPath@ESTROBJ@@QEAAHAEAVEPATHOBJ@@AEAVXDCOBJ@@@Z @ 0x1C02B62C8 (-bTextToPath@ESTROBJ@@QEAAHAEAVEPATHOBJ@@AEAVXDCOBJ@@@Z.c)
 * Callees:
 *     ?cGetGlyphData@RFONTOBJ@@QEAAKKPEAU_GLYPHPOS@@@Z @ 0x1C002DD54 (-cGetGlyphData@RFONTOBJ@@QEAAKKPEAU_GLYPHPOS@@@Z.c)
 *     STROBJ_bEnum @ 0x1C01002D0 (STROBJ_bEnum.c)
 */

__int64 __fastcall ESTROBJ::bTextToPathWorkhorse(STROBJ *pstro, struct EPATHOBJ *a2)
{
  unsigned int v2; // ebx
  BOOL v4; // eax
  ULONG v5; // r15d
  PGLYPHPOS v6; // rsi
  ULONG ulCharInc; // r14d
  bool v8; // zf
  FIX x; // ecx
  FIX y; // edx
  int v11; // r14d
  FIX v12; // ecx
  unsigned int GlyphData; // r12d
  unsigned int v14; // r13d
  FIX v15; // ecx
  FIX v16; // ecx
  FIX v17; // edx
  struct _POINTFIX v19; // [rsp+20h] [rbp-18h] BYREF
  PGLYPHPOS ppgpos; // [rsp+28h] [rbp-10h] BYREF
  ULONG v21; // [rsp+80h] [rbp+48h]
  ULONG pc; // [rsp+90h] [rbp+58h] BYREF
  BOOL v24; // [rsp+98h] [rbp+60h]

  v2 = 0;
  ppgpos = 0LL;
  *(_QWORD *)&pstro[1].cGlyphs = 0LL;
  do
  {
    v4 = STROBJ_bEnum(pstro, &pc, &ppgpos);
    v5 = pc;
    v24 = v4;
    v21 = pc;
    if ( !pc )
      break;
    v6 = ppgpos;
    if ( !ppgpos )
      break;
    ulCharInc = pstro->ulCharInc;
    if ( ulCharInc )
    {
      v8 = (pstro[1].rclBkGround.top & 0x100) == 0;
      x = ppgpos->ptl.x;
      v19.x = x;
      y = ppgpos->ptl.y;
      v19.y = y;
      if ( v8 )
      {
        x *= 16;
        v19.y = 16 * y;
      }
      v11 = 16 * ulCharInc;
      v12 = x - v11;
      v19.x = v12;
    }
    else
    {
      v12 = v19.x;
      v11 = 0;
    }
    GlyphData = pc;
    do
    {
      if ( (pstro[1].rclBkGround.top & 2) == 0 )
      {
        GlyphData = RFONTOBJ::cGetGlyphData(*(RFONTOBJ **)&pstro[1].ulCharInc, v5, v6);
        if ( !GlyphData )
          break;
        v12 = v19.x;
      }
      v14 = 0;
      if ( !GlyphData )
        goto LABEL_24;
      while ( 1 )
      {
        if ( v11 )
        {
          v15 = v11 + v12;
LABEL_18:
          v19.x = v15;
          goto LABEL_19;
        }
        v8 = (pstro[1].rclBkGround.top & 0x100) == 0;
        v16 = v6->ptl.x;
        v19.x = v16;
        v17 = v6->ptl.y;
        v19.y = v17;
        if ( v8 )
        {
          v15 = 16 * v16;
          v19.y = 16 * v17;
          goto LABEL_18;
        }
LABEL_19:
        if ( !EPATHOBJ::bAppend(a2, (struct EPATHOBJ *)v6->pgdf->pgb, &v19) )
          break;
        ++v14;
        ++v6;
        if ( v14 >= GlyphData )
          break;
        v12 = v19.x;
      }
      v5 = v21;
      ppgpos = v6;
      if ( v14 < GlyphData )
        break;
      v12 = v19.x;
LABEL_24:
      v5 -= GlyphData;
      v21 = v5;
    }
    while ( v5 );
    if ( v5 )
      return v2;
  }
  while ( v24 );
  return 1;
}
