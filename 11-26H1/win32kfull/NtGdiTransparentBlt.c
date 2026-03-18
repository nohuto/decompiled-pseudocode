/*
 * XREFs of NtGdiTransparentBlt @ 0x14016B240
 * Callers:
 *     <none>
 * Callees:
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x1400B0D34 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??1MAPIDCOBJ@@QEAA@XZ @ 0x1400B4334 (--1MAPIDCOBJ@@QEAA@XZ.c)
 *     ?bValid@OPTAPIDCOBJ@@QEAA_NXZ @ 0x1400B7374 (-bValid@OPTAPIDCOBJ@@QEAA_NXZ.c)
 *     ??0MAPIDCOBJ@@QEAA@PEAUHDC__@@0@Z @ 0x14016B560 (--0MAPIDCOBJ@@QEAA@PEAUHDC__@@0@Z.c)
 *     ??0APIDCOBJ@@QEAA@AEAVOPTAPIDCOBJ@@@Z @ 0x14016C418 (--0APIDCOBJ@@QEAA@AEAVOPTAPIDCOBJ@@@Z.c)
 *     ?GrepTransparentBlt@@YAHAEAVXDCOBJ@@HHHH0HHHHK@Z @ 0x14016C510 (-GrepTransparentBlt@@YAHAEAVXDCOBJ@@HHHH0HHHHK@Z.c)
 */

__int64 __fastcall NtGdiTransparentBlt(
        HDC a1,
        int a2,
        int a3,
        int a4,
        int a5,
        HDC a6,
        int a7,
        int a8,
        int a9,
        int a10,
        unsigned int a11)
{
  __int64 v14; // rdx
  __int64 v15; // r8
  unsigned int v16; // ebx
  _QWORD v18[13]; // [rsp+60h] [rbp-158h] BYREF
  _BYTE v19[120]; // [rsp+C8h] [rbp-F0h] BYREF
  _BYTE v20[112]; // [rsp+140h] [rbp-78h] BYREF

  MAPIDCOBJ::MAPIDCOBJ((MAPIDCOBJ *)v18, a1, a6);
  if ( v18[0] && OPTAPIDCOBJ::bValid((OPTAPIDCOBJ *)v19, v14, v15) )
  {
    APIDCOBJ::APIDCOBJ((APIDCOBJ *)v20, (struct OPTAPIDCOBJ *)v19);
    v16 = GrepTransparentBlt((struct XDCOBJ *)v18, a2, a3, a4, a5, (struct XDCOBJ *)v20, a7, a8, a9, a10, a11);
    APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v20);
    MAPIDCOBJ::~MAPIDCOBJ((MAPIDCOBJ *)v18);
    return v16;
  }
  else
  {
    EngSetLastError(0x57u);
    MAPIDCOBJ::~MAPIDCOBJ((MAPIDCOBJ *)v18);
    return 0LL;
  }
}
