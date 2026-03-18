/*
 * XREFs of ?bShadowAlphaCursor@@YAHPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@1PEAU_RECTL@@H@Z @ 0x1C00BCCB4
 * Callers:
 *     ?vProcessCursorShape@@YAXPEAUHDEV__@@HHPEAU_SURFOBJ@@1PEAVPALETTE@@PEAU_RECTL@@PEAPEAUHBITMAP__@@@Z @ 0x1C00BBC94 (-vProcessCursorShape@@YAXPEAUHDEV__@@HHPEAU_SURFOBJ@@1PEAVPALETTE@@PEAU_RECTL@@PEAPEAUHBITMAP__@.c)
 * Callees:
 *     EngBitBlt @ 0x1C0038EE0 (EngBitBlt.c)
 *     EngAlphaBlend @ 0x1C003CDC0 (EngAlphaBlend.c)
 *     EngCopyBits @ 0x1C00BC250 (EngCopyBits.c)
 *     ?bBlurCursorShadow@@YAHPEAU_SURFOBJ@@@Z @ 0x1C00BCE70 (-bBlurCursorShadow@@YAHPEAU_SURFOBJ@@@Z.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 */

__int64 __fastcall bShadowAlphaCursor(
        struct _SURFOBJ *a1,
        SURFOBJ *psoSrc,
        SURFOBJ *a3,
        XLATEOBJ *pxlo,
        struct _XLATEOBJ *a5,
        struct _RECTL *a6,
        int a7)
{
  LONG cy; // r12d
  unsigned int v10; // ebx
  LONG cx; // eax
  LONG v13; // r12d
  _DWORD *pvBits; // rcx
  ULONG i; // edx
  LONG right; // ecx
  LONG bottom; // edx
  _DWORD *v19; // rcx
  ULONG v20; // eax
  LONG v21; // eax
  unsigned __int64 v22; // [rsp+60h] [rbp-81h] BYREF
  POINTL pptlSrc; // [rsp+68h] [rbp-79h] BYREF
  struct _RECTL *v24; // [rsp+70h] [rbp-71h]
  XLATEOBJ *v25; // [rsp+78h] [rbp-69h]
  BLENDOBJ pBlendObj; // [rsp+80h] [rbp-61h] BYREF
  XLATEOBJ *v27; // [rsp+88h] [rbp-59h]
  XLATEOBJ *v28; // [rsp+90h] [rbp-51h]
  XLATEOBJ *v29; // [rsp+98h] [rbp-49h]
  XLATEOBJ *v30; // [rsp+A0h] [rbp-41h]
  XLATEOBJ v31; // [rsp+A8h] [rbp-39h] BYREF
  RECTL prclDest; // [rsp+C0h] [rbp-21h] BYREF
  RECTL prclSrc; // [rsp+D0h] [rbp-11h] BYREF

  cy = psoSrc->sizlBitmap.cy;
  v10 = 0;
  v24 = a6;
  cx = psoSrc->sizlBitmap.cx;
  v13 = cy >> 1;
  v31.pulXlate = (ULONG *)&v22;
  v25 = pxlo;
  v30 = a5;
  if ( a7 )
  {
    if ( a3 )
    {
      prclDest.right = cx + 6;
      prclDest.bottom = v13 + 4;
      prclDest.left = 6;
      prclDest.top = 4;
      EngBitBlt(a1, a3, 0LL, 0LL, 0LL, &prclDest, &gptlZero, 0LL, 0LL, 0LL, 0xEEEEu);
      pvBits = a1->pvBits;
      for ( i = a1->cjBits >> 2; i; --i )
      {
        if ( (*pvBits & 0xFF000000) != 0 )
          *pvBits = (*((unsigned __int8 *)pvBits + 3) << 22) & 0xFF000000;
        else
          *pvBits = 0;
        ++pvBits;
      }
      goto LABEL_7;
    }
    return 0LL;
  }
  *(_QWORD *)&prclDest.left = 0LL;
  prclDest.right = cx;
  prclDest.bottom = v13;
  if ( a3 )
  {
    EngBitBlt(a1, a3, 0LL, 0LL, a5, &prclDest, &gptlZero, 0LL, 0LL, 0LL, 0xEEEEu);
  }
  else
  {
    pptlSrc.x = 0;
    pptlSrc.y = v13;
    EngBitBlt(a1, psoSrc, 0LL, 0LL, pxlo, &prclDest, &pptlSrc, 0LL, 0LL, 0LL, 0xEEEEu);
  }
  v22 = 0xFFFFFFFF00000000uLL;
  EngBitBlt(a1, psoSrc, 0LL, 0LL, &v31, &prclDest, &gptlZero, 0LL, 0LL, 0LL, 0x8888u);
  v19 = a1->pvBits;
  v20 = a1->cjBits >> 2;
  if ( v20 )
  {
    while ( !*v19 )
    {
      ++v19;
      if ( !--v20 )
        goto LABEL_21;
    }
    return 0LL;
  }
LABEL_21:
  prclDest.left = 6;
  prclDest.top = 4;
  v21 = v24->right + 6;
  v22 = 0x40000000LL;
  prclDest.right = v21;
  prclDest.bottom = v24->bottom + 4;
  EngCopyBits(a1, psoSrc, 0LL, &v31, &prclDest, &gptlZero);
LABEL_7:
  if ( (unsigned int)bBlurCursorShadow(a1) && (unsigned int)bBlurCursorShadow(a1) )
  {
    prclDest.left = 3;
    prclDest.top = 3;
    right = v24->right;
    bottom = v24->bottom;
    prclDest.right = right + 3;
    prclDest.bottom = bottom + 3;
    if ( a7 )
    {
      prclSrc.right = right;
      prclSrc.bottom = bottom;
      pBlendObj = (BLENDOBJ)33488896;
      v27 = xloIdent;
      v28 = xloIdent;
      v29 = xloIdent;
      *(_QWORD *)&prclSrc.left = 0LL;
      EngAlphaBlend(a1, a3, 0LL, xloIdent, &prclDest, &prclSrc, &pBlendObj);
    }
    else
    {
      v22 = 0xFFFFFFFF00000000uLL;
      EngBitBlt(a1, psoSrc, 0LL, 0LL, &v31, &prclDest, &gptlZero, 0LL, 0LL, 0LL, 0x8888u);
      v22 = 4278190080LL;
      EngBitBlt(a1, psoSrc, 0LL, 0LL, &v31, &prclDest, &gptlZero, 0LL, 0LL, 0LL, 0xEEEEu);
      if ( a3 )
      {
        EngBitBlt(a1, a3, 0LL, 0LL, v30, &prclDest, &gptlZero, 0LL, 0LL, 0LL, 0xEEEEu);
      }
      else
      {
        pptlSrc.x = 0;
        pptlSrc.y = v13;
        EngBitBlt(a1, psoSrc, 0LL, 0LL, v25, &prclDest, &pptlSrc, 0LL, 0LL, 0LL, 0xEEEEu);
      }
    }
    return 1;
  }
  return v10;
}
