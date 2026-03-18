/*
 * XREFs of ??1FRINGERECT@@QEAA@XZ @ 0x1C009CEA8
 * Callers:
 *     EngTextOut @ 0x1C009BA80 (EngTextOut.c)
 * Callees:
 *     ?pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@ZXZ @ 0x1C009CE2C (-pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL.c)
 *     ?vDIBSolidBlt@@YAXPEAVSURFACE@@PEAU_RECTL@@PEAU_CLIPOBJ@@KH@Z @ 0x1C009D740 (-vDIBSolidBlt@@YAXPEAVSURFACE@@PEAU_RECTL@@PEAU_CLIPOBJ@@KH@Z.c)
 *     ?bUMPDSecurityGateEx@@YAHXZ @ 0x1C00D3304 (-bUMPDSecurityGateEx@@YAHXZ.c)
 *     ??1UMPDReleaseAcquireRFONTSem@@QEAA@XZ @ 0x1C015BAA0 (--1UMPDReleaseAcquireRFONTSem@@QEAA@XZ.c)
 *     ??0UMPDReleaseAcquireRFONTSem@@QEAA@PEAVSURFACE@@PEAU_FONTOBJ@@H@Z @ 0x1C015BAF4 (--0UMPDReleaseAcquireRFONTSem@@QEAA@PEAVSURFACE@@PEAU_FONTOBJ@@H@Z.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015D150 (_guard_dispatch_icall_nop.c)
 */

void __fastcall FRINGERECT::~FRINGERECT(FRINGERECT *this)
{
  bool i; // sf
  int v3; // eax
  SURFACE *v4; // rcx
  char *v5; // rsi
  char *v6; // rdi
  int (*j)(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *, struct _POINTL *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int); // rbp
  _DWORD v8[4]; // [rsp+60h] [rbp-78h] BYREF
  _BYTE v9[80]; // [rsp+70h] [rbp-68h] BYREF

  if ( *((_QWORD *)this + 1) )
  {
    for ( i = --*((_DWORD *)this + 8) < 0; !i; --*((_DWORD *)this + 8) )
    {
      vDIBSolidBlt(
        *(struct SURFACE **)this,
        (struct _RECTL *)((char *)this + 16 * *((int *)this + 8) + 36),
        *((struct _CLIPOBJ **)this + 2),
        **((_DWORD **)this + 3),
        0);
      i = *((_DWORD *)this + 8) - 1 < 0;
    }
  }
  else
  {
    v3 = bUMPDSecurityGateEx();
    UMPDReleaseAcquireRFONTSem::UMPDReleaseAcquireRFONTSem(
      (UMPDReleaseAcquireRFONTSem *)v9,
      *(struct SURFACE **)this,
      *((struct _FONTOBJ **)this + 13),
      v3);
    v4 = *(SURFACE **)this;
    v8[0] = 0;
    v8[1] = 0;
    if ( v4 )
      v5 = (char *)v4 + 24;
    else
      v5 = 0LL;
    v6 = (char *)this + 36;
    for ( j = SURFACE::pfnBitBlt(v4); v6 < (char *)this + 16 * *((int *)this + 8) + 36; v6 += 16 )
      ((void (__fastcall *)(char *, _QWORD, _QWORD, _QWORD, _QWORD, char *, _QWORD, _QWORD, _QWORD, _DWORD *, int))j)(
        v5,
        0LL,
        0LL,
        *((_QWORD *)this + 2),
        0LL,
        v6,
        0LL,
        0LL,
        *((_QWORD *)this + 3),
        v8,
        61680);
    UMPDReleaseAcquireRFONTSem::~UMPDReleaseAcquireRFONTSem((UMPDReleaseAcquireRFONTSem *)v9);
  }
}
