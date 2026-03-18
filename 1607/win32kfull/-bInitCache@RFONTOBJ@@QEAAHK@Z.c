/*
 * XREFs of ?bInitCache@RFONTOBJ@@QEAAHK@Z @ 0x1C002A4C8
 * Callers:
 *     ?bRealizeFont@RFONTOBJ@@QEAAHPEAVXDCOBJ@@PEAVPDEVOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_XFORM@@QEAU_POINTL@@KKHHK@Z @ 0x1C002BA28 (-bRealizeFont@RFONTOBJ@@QEAAHPEAVXDCOBJ@@PEAVPDEVOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_.c)
 * Callees:
 *     ?QueryFontData@PDEVOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z @ 0x1C002909C (-QueryFontData@PDEVOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z.c)
 *     ?vXlatGlyphArray@RFONTOBJ@@QEAAXPEAGIPEAKKH@Z @ 0x1C002F568 (-vXlatGlyphArray@RFONTOBJ@@QEAAXPEAGIPEAKKH@Z.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 */

__int64 __fastcall RFONTOBJ::bInitCache(RFONTOBJ *this, int a2)
{
  __int64 v2; // r8
  unsigned int v4; // edi
  __int64 v5; // rcx
  unsigned int v6; // eax
  unsigned int v7; // ecx
  __int64 v8; // rax
  unsigned int v9; // r9d
  __int64 v10; // r8
  unsigned int v11; // esi
  unsigned __int16 v13; // [rsp+40h] [rbp-78h] BYREF
  unsigned int v14; // [rsp+48h] [rbp-70h] BYREF
  __int64 v15; // [rsp+50h] [rbp-68h] BYREF
  struct _GLYPHDATA v16; // [rsp+60h] [rbp-58h] BYREF

  v2 = *(_QWORD *)this + 536LL;
  v4 = 1;
  *(_QWORD *)(v2 + 24) = 0LL;
  *(_QWORD *)(v2 + 32) = 0LL;
  *(_QWORD *)(v2 + 44) = 0LL;
  *(_DWORD *)(v2 + 40) = 0;
  *(_QWORD *)(v2 + 72) = 0LL;
  *(_QWORD *)(v2 + 64) = 0LL;
  *(_QWORD *)(v2 + 88) = 0LL;
  *(_QWORD *)(v2 + 80) = 0LL;
  *(_QWORD *)(v2 + 52) = 0LL;
  *(_QWORD *)(v2 + 96) = 0LL;
  *(_QWORD *)(v2 + 104) = 0LL;
  *(_QWORD *)(*(_QWORD *)this + 480LL) = 0LL;
  *(_DWORD *)(v2 + 112) = 0;
  v5 = *(_QWORD *)this;
  v6 = *(_DWORD *)(v5 + 72);
  if ( v6 > 1 )
  {
    if ( v6 == 2 )
      *(_DWORD *)(v2 + 112) = 0x8000;
  }
  else
  {
    *(_DWORD *)(v2 + 112) = *(_DWORD *)(v5 + 352);
  }
  v7 = 2 * *(_DWORD *)(v2 + 112);
  *(_DWORD *)(*(_QWORD *)this + 68LL) = a2;
  v8 = *(_QWORD *)this;
  if ( v7 > 0x10000 && *(_DWORD *)(v8 + 72) )
    *(_DWORD *)(v8 + 68) |= 1u;
  v13 = *(_WORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 112LL) + 32LL) + 118LL);
  RFONTOBJ::vXlatGlyphArray(this, &v13, 1u, &v14, 2u, 0);
  v9 = 1;
  *(_DWORD *)(*(_QWORD *)this + 720LL) &= ~0x40u;
  v10 = *(_QWORD *)this;
  v15 = *(_QWORD *)(*(_QWORD *)this + 80LL);
  if ( *(_DWORD *)(v10 + 72) == 2 )
    v9 = 2;
  v11 = v14;
  if ( (unsigned int)PDEVOBJ::QueryFontData(
                       (PDEVOBJ *)&v15,
                       *(struct DHPDEV__ **)(v10 + 104),
                       (struct _FONTOBJ *)v10,
                       v9,
                       v14,
                       &v16,
                       0LL,
                       0) == -1 )
    return 0;
  *(_DWORD *)(*(_QWORD *)this + 464LL) = v16.fxD;
  *(_DWORD *)(*(_QWORD *)this + 460LL) = v11;
  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 112LL) + 12LL) & 8) != 0 )
  {
    *(_QWORD *)(*(_QWORD *)this + 856LL) = 0LL;
  }
  else
  {
    *(_QWORD *)(*(_QWORD *)this + 856LL) = GreCreateSemaphore();
    if ( !*(_QWORD *)(*(_QWORD *)this + 856LL) )
      return 0;
  }
  *(_QWORD *)(*(_QWORD *)this + 528LL) = GreCreateSemaphore();
  if ( !*(_QWORD *)(*(_QWORD *)this + 528LL) )
  {
    if ( *(_QWORD *)(*(_QWORD *)this + 856LL) )
    {
      GreDeleteSemaphore();
      *(_QWORD *)(*(_QWORD *)this + 856LL) = 0LL;
    }
    return 0;
  }
  return v4;
}
