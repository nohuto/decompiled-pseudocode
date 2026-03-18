/*
 * XREFs of bEnableFontDriver @ 0x1C0106B90
 * Callers:
 *     UmfdSessionInitialize @ 0x1C01067E0 (UmfdSessionInitialize.c)
 * Callees:
 *     ?FntCacheHDEV@@YAXPEAVPDEV@@K@Z @ 0x1C0106C94 (-FntCacheHDEV@@YAXPEAVPDEV@@K@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall bEnableFontDriver(__int64 a1, unsigned int a2)
{
  struct _LDEV *Internal; // rax
  struct PDEV *v4; // rax
  struct PDEV *v6; // [rsp+90h] [rbp+18h] BYREF

  Internal = (struct _LDEV *)ldevLoadInternal(a1, 6LL);
  if ( !Internal )
    return 0LL;
  PDEVOBJ::PDEVOBJ((PDEVOBJ *)&v6, Internal, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0, 0, 0);
  v4 = v6;
  if ( !v6 )
    return 0LL;
  if ( (a2 & 1) != 0 )
  {
    gppdevTrueType = v6;
    v4 = v6;
  }
  if ( (a2 & 4) != 0 )
  {
    gufiLocalType1Rasterizer = 0x100000002LL;
    gppdevATMFD = v4;
    v4 = v6;
  }
  if ( (a2 & 0x10) != 0 )
  {
    qword_1C032F218 = (__int64)v4;
    gufiLocalType1Rasterizer = 0x100000002LL;
  }
  else
  {
    FntCacheHDEV(v4, a2);
    v4 = v6;
  }
  *((_DWORD *)v4 + 14) |= 0x2000u;
  return 1LL;
}
