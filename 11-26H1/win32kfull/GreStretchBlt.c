/*
 * XREFs of GreStretchBlt @ 0x14016B458
 * Callers:
 *     ?_InternalGetIconInfo@@YA_NPEAUtagCURSOR@@PEAU_ICONINFO@@PEAU_UNICODE_STRING@@2PEAK_N@Z @ 0x1400148D8 (-_InternalGetIconInfo@@YA_NPEAUtagCURSOR@@PEAU_ICONINFO@@PEAU_UNICODE_STRING@@2PEAK_N@Z.c)
 *     BitBltSysBmp @ 0x140124BEC (BitBltSysBmp.c)
 *     NtUserBitBltSysBmp @ 0x1401BFFE0 (NtUserBitBltSysBmp.c)
 *     ?CreateScaledWindowShadowFromDIB@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@J@Z @ 0x14028DF44 (-CreateScaledWindowShadowFromDIB@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@J@Z.c)
 * Callees:
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x1400B0D34 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1400B5850 (--1DCOBJ@@QEAA@XZ.c)
 *     ?GrepStretchBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHHHKKK@Z @ 0x1400B5D94 (-GrepStretchBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHHHKKK@Z.c)
 *     ??0MAPIDCOBJ@@QEAA@PEAUHDC__@@0@Z @ 0x14016B560 (--0MAPIDCOBJ@@QEAA@PEAUHDC__@@0@Z.c)
 */

__int64 __fastcall GreStretchBlt(
        HDC a1,
        LONG a2,
        int a3,
        int a4,
        int a5,
        HDC a6,
        unsigned int a7,
        int a8,
        int a9,
        int a10,
        unsigned int a11,
        unsigned int a12)
{
  unsigned int v15; // ebx
  struct SURFACE *v17[13]; // [rsp+70h] [rbp-E8h] BYREF
  _QWORD v18[8]; // [rsp+D8h] [rbp-80h] BYREF
  _BYTE v19[56]; // [rsp+118h] [rbp-40h] BYREF

  MAPIDCOBJ::MAPIDCOBJ((MAPIDCOBJ *)v17, a1, a6);
  v15 = GrepStretchBlt(v17, a2, a3, a4, a5, (struct OPTAPIDCOBJ *)v18, a7, a8, a9, a10, a11, a12, 0);
  if ( !v19[40] )
    v18[0] = 0LL;
  PopThreadGuardedObject(v19);
  DCOBJ::~DCOBJ((DCOBJ *)v18);
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v17);
  return v15;
}
