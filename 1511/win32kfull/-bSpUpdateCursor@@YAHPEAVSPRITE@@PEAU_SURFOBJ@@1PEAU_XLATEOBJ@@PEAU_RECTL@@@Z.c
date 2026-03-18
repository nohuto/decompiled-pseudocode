/*
 * XREFs of ?bSpUpdateCursor@@YAHPEAVSPRITE@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@@Z @ 0x1C026FF68
 * Callers:
 *     ?GdiSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x1C026C170 (-GdiSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 * Callees:
 *     EngCopyBits @ 0x1C00BC250 (EngCopyBits.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     ?bSpCreateShape@@YAHPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAVPALETTE@@KK4@Z @ 0x1C026F420 (-bSpCreateShape@@YAHPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAVPALETT.c)
 *     ?vSpDeleteShape@@YAXPEAVSPRITE@@@Z @ 0x1C0274D78 (-vSpDeleteShape@@YAXPEAVSPRITE@@@Z.c)
 */

__int64 __fastcall bSpUpdateCursor(
        struct SPRITE *a1,
        SURFOBJ *psoSrc,
        struct _SURFOBJ *a3,
        struct _XLATEOBJ *a4,
        struct _RECTL *a5)
{
  __int64 *v5; // r12
  unsigned int v6; // edi
  __int64 v9; // rbx
  SURFOBJ *v10; // r14
  LONG cy; // eax
  __int64 v12; // r8
  __int64 v14; // [rsp+60h] [rbp-41h] BYREF
  char v15; // [rsp+68h] [rbp-39h]
  int v16; // [rsp+6Ch] [rbp-35h]
  struct _RECTL *v17; // [rsp+70h] [rbp-31h]
  int v18; // [rsp+78h] [rbp-29h] BYREF
  __int64 v19; // [rsp+7Ch] [rbp-25h]
  __int128 v20; // [rsp+84h] [rbp-1Dh]
  int v21; // [rsp+94h] [rbp-Dh]
  struct _XLATEOBJ *v22; // [rsp+98h] [rbp-9h]
  struct _SURFOBJ *v23; // [rsp+A0h] [rbp-1h]
  RECTL prclDest; // [rsp+A8h] [rbp+7h] BYREF

  v5 = (__int64 *)*((_QWORD *)a1 + 2);
  v6 = 0;
  v18 = 0;
  v19 = 0LL;
  v20 = 0uLL;
  v21 = 0;
  v14 = 0LL;
  v15 = 0;
  v16 = 0;
  v9 = *v5;
  v22 = a4;
  v23 = a3;
  v17 = a5;
  *((struct _RECTL *)a1 + 6) = *a5;
  if ( psoSrc )
  {
    v10 = (SURFOBJ *)*((_QWORD *)a1 + 15);
    if ( !v10 )
      goto LABEL_8;
    if ( v10->sizlBitmap.cx != psoSrc->sizlBitmap.cx || v10->sizlBitmap.cy != psoSrc->sizlBitmap.cy )
    {
      bDeleteSurface(v10->hsurf);
      v10 = 0LL;
    }
    if ( !v10 )
    {
LABEL_8:
      LODWORD(v19) = psoSrc->sizlBitmap.cx;
      cy = psoSrc->sizlBitmap.cy;
      v18 = 1;
      HIDWORD(v19) = cy;
      HIDWORD(v20) = 1;
      *(_QWORD *)((char *)&v20 + 4) = 0LL;
      if ( SURFMEM::bCreateDIB((SURFMEM *)&v14, (struct _DEVBITMAPINFO *)&v18, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0) )
      {
        v10 = 0LL;
        if ( v14 )
          v10 = (SURFOBJ *)(v14 + 24);
        v15 |= 1u;
        LOBYTE(v12) = 5;
        HmgSetOwner(*(_QWORD *)(v14 + 32), 0LL, v12);
      }
    }
    *((_QWORD *)a1 + 15) = v10;
    if ( v10 )
    {
      prclDest = *v17;
      prclDest.bottom = (v10->sizlBitmap.cy >> 1) + _mm_srli_si128(*(__m128i *)&prclDest, 8).m128i_i32[1];
      EngCopyBits(v10, psoSrc, 0LL, 0LL, &prclDest, (POINTL *)&prclDest);
    }
    if ( v23 )
    {
      bSpCreateShape(a1, &gptlZero, v23, v22, v17, *(struct PALETTE **)(v9 + 1832), 0, 0, 0LL);
      LOBYTE(v6) = *((_QWORD *)a1 + 16) != 0LL;
    }
    else
    {
      vSpDeleteShape(a1);
      v6 = 1;
    }
    *((_DWORD *)a1 + 1) = 0x1000000;
    *((_DWORD *)a1 + 39) = *((_DWORD *)v5 + 30);
    *((_DWORD *)a1 + 38) = *((_DWORD *)v5 + 29);
  }
  else
  {
    *((_DWORD *)a1 + 1) = 2;
    *((_DWORD *)a1 + 50) = 33488896;
    bSpCreateShape(a1, &gptlZero, a3, 0LL, a5, gppalRGB, 6u, 1u, 0LL);
    LOBYTE(v6) = *((_QWORD *)a1 + 16) != 0LL;
  }
  SURFMEM::~SURFMEM((SURFMEM *)&v14);
  return v6;
}
