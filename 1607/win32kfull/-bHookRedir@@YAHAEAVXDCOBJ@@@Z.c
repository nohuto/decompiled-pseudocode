/*
 * XREFs of ?bHookRedir@@YAHAEAVXDCOBJ@@@Z @ 0x1C0028A48
 * Callers:
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z @ 0x1C00453F0 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z.c)
 *     ?bMapTrgSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1C004655C (-bMapTrgSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ.c)
 *     ?bMapTrgSurfaceView@DEVLOCKOBJ@@QEAAHXZ @ 0x1C0048830 (-bMapTrgSurfaceView@DEVLOCKOBJ@@QEAAHXZ.c)
 * Callees:
 *     ?prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z @ 0x1C0029AD0 (-prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z.c)
 *     ?prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z @ 0x1C0029AF0 (-prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z.c)
 *     PALLOCMEM2 @ 0x1C0060508 (PALLOCMEM2.c)
 *     memmove @ 0x1C015A040 (memmove.c)
 *     ?bMakeOpaque@@YAHPEAVSURFACE@@@Z @ 0x1C028EECC (-bMakeOpaque@@YAHPEAVSURFACE@@@Z.c)
 */

__int64 __fastcall bHookRedir(struct XDCOBJ *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdi
  struct PDEV *v4; // rbx
  unsigned int v5; // esi
  size_t v6; // rcx
  __int64 v7; // rdx
  struct PDEV *v8; // rax
  _OWORD *v9; // rcx
  __int128 v10; // xmm1
  struct RFONT *v11; // rdx
  signed __int32 v12; // ett
  struct PDEV *v13; // rax
  struct PDEV *v15; // [rsp+38h] [rbp+10h] BYREF

  if ( gbNoHookRedir )
    return 0LL;
  v2 = *(_QWORD *)a1;
  if ( !*(_QWORD *)a1 )
    return 0LL;
  if ( (*(_DWORD *)(v2 + 36) & 0x4000) == 0 )
    return 0LL;
  v3 = *(_QWORD *)(v2 + 48);
  if ( !v3 || (*(_DWORD *)(v3 + 56) & 0x20000000) == 0 )
    return 0LL;
  v4 = gpRedirDev;
  v5 = 1;
  if ( (gpRedirDev
     || (v6 = gdwDirectDrawContext + 3580, (unsigned int)v6 > gdwDirectDrawContext)
     && (gpRedirDev = (struct PDEV *)PALLOCMEM2(v6), (v4 = gpRedirDev) != 0LL))
    && *(struct PDEV **)(*(_QWORD *)a1 + 48LL) != v4 )
  {
    v7 = 27LL;
    v15 = v4;
    v8 = v4;
    v9 = (_OWORD *)v3;
    do
    {
      *(_OWORD *)v8 = *v9;
      *((_OWORD *)v8 + 1) = v9[1];
      *((_OWORD *)v8 + 2) = v9[2];
      *((_OWORD *)v8 + 3) = v9[3];
      *((_OWORD *)v8 + 4) = v9[4];
      *((_OWORD *)v8 + 5) = v9[5];
      *((_OWORD *)v8 + 6) = v9[6];
      v8 = (struct PDEV *)((char *)v8 + 128);
      v10 = v9[7];
      v9 += 8;
      *((_OWORD *)v8 - 1) = v10;
      --v7;
    }
    while ( v7 );
    *(_OWORD *)v8 = *v9;
    *((_OWORD *)v8 + 1) = v9[1];
    *((_OWORD *)v8 + 2) = v9[2];
    *((_OWORD *)v8 + 3) = v9[3];
    *((_OWORD *)v8 + 4) = v9[4];
    memmove((char *)v4 + 3576, (const void *)(v3 + 3576), gdwDirectDrawContext);
    PDEVOBJ::prfntActive((PDEVOBJ *)&v15, 0LL);
    PDEVOBJ::prfntInactive((PDEVOBJ *)&v15, v11);
    if ( (*((_DWORD *)v4 + 14) & 0x800000) != 0 )
      *(_DWORD *)(*((_QWORD *)v4 + 442) + 1568LL) = 0;
    else
      *((_DWORD *)v4 + 392) = 0;
    _m_prefetchw((char *)v4 + 56);
    do
      v12 = *((_DWORD *)v4 + 14);
    while ( v12 != _InterlockedCompareExchange((volatile signed __int32 *)v4 + 14, v12 | 0x800000, v12) );
    v13 = v15;
    *((_QWORD *)v15 + 442) = v3;
    *((_QWORD *)v13 + 12) = v13;
    *((_QWORD *)gpRedirDev + 362) = RedirTextOut;
    *((_QWORD *)gpRedirDev + 353) = RedirStrokePath;
    *((_QWORD *)gpRedirDev + 358) = RedirCopyBits;
    *((_QWORD *)gpRedirDev + 357) = RedirBitBlt;
    *((_QWORD *)gpRedirDev + 370) = RedirLineTo;
    *((_QWORD *)gpRedirDev + 354) = RedirFillPath;
    *((_QWORD *)gpRedirDev + 355) = RedirStrokeAndFillPath;
    *((_QWORD *)gpRedirDev + 359) = RedirStretchBlt;
    *((_QWORD *)gpRedirDev + 410) = RedirAlphaBlend;
    *((_QWORD *)gpRedirDev + 413) = RedirTransparentBlt;
    *((_QWORD *)gpRedirDev + 407) = RedirGradientFill;
    *((_QWORD *)gpRedirDev + 429) = RedirDrawStream;
    *((_QWORD *)gpRedirDev + 430) = RedirNineGrid;
    *((_QWORD *)gpRedirDev + 409) = RedirPlgBlt;
    *((_QWORD *)gpRedirDev + 408) = RedirStretchBltROP;
    *((_QWORD *)gpRedirDev + 364) = RedirDrawEscape;
    bMakeOpaque(*(struct SURFACE **)(*(_QWORD *)a1 + 512LL));
    *(_QWORD *)(*(_QWORD *)a1 + 48LL) = gpRedirDev;
  }
  else
  {
    return 0;
  }
  return v5;
}
