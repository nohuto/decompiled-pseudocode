/*
 * XREFs of NtGdiPlgBlt @ 0x14031E570
 * Callers:
 *     <none>
 * Callees:
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x1400B0D34 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??1MAPIDCOBJ@@QEAA@XZ @ 0x1400B4334 (--1MAPIDCOBJ@@QEAA@XZ.c)
 *     ?bValid@OPTAPIDCOBJ@@QEAA_NXZ @ 0x1400B7374 (-bValid@OPTAPIDCOBJ@@QEAA_NXZ.c)
 *     ??0MAPIDCOBJ@@QEAA@PEAUHDC__@@0@Z @ 0x14016B560 (--0MAPIDCOBJ@@QEAA@PEAUHDC__@@0@Z.c)
 *     ??0APIDCOBJ@@QEAA@AEAVOPTAPIDCOBJ@@@Z @ 0x14016C418 (--0APIDCOBJ@@QEAA@AEAVOPTAPIDCOBJ@@@Z.c)
 *     ?GrepPlgBlt@@YAHAEAVXDCOBJ@@PEAUtagPOINT@@0HHHHPEAUHBITMAP__@@HHK@Z @ 0x14031D908 (-GrepPlgBlt@@YAHAEAVXDCOBJ@@PEAUtagPOINT@@0HHHHPEAUHBITMAP__@@HHK@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall NtGdiPlgBlt(
        HDC a1,
        const void *a2,
        HDC a3,
        int a4,
        int a5,
        int a6,
        int a7,
        HBITMAP a8,
        int a9,
        int a10,
        unsigned int a11)
{
  __int64 v14; // rdx
  __int64 v15; // r8
  unsigned int v16; // ebx
  _QWORD v18[13]; // [rsp+90h] [rbp-1A8h] BYREF
  _BYTE v19[120]; // [rsp+F8h] [rbp-140h] BYREF
  _BYTE v20[112]; // [rsp+170h] [rbp-C8h] BYREF
  struct tagPOINT v21; // [rsp+1E0h] [rbp-58h] BYREF

  GreProbeAndReadFromUntrustedVa(&v21, 0x18uLL, a2, 0x18uLL, 4uLL);
  MAPIDCOBJ::MAPIDCOBJ((MAPIDCOBJ *)v18, a1, a3);
  if ( v18[0] && OPTAPIDCOBJ::bValid((OPTAPIDCOBJ *)v19, v14, v15) )
  {
    APIDCOBJ::APIDCOBJ((APIDCOBJ *)v20, (struct OPTAPIDCOBJ *)v19);
    v16 = GrepPlgBlt(
            (struct XDCOBJ *)v18,
            (const struct _POINTL *)&v21,
            (struct XDCOBJ *)v20,
            a4,
            a5,
            a6,
            a7,
            (HSURF)a8,
            a9,
            a10,
            a11);
    APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v20);
    MAPIDCOBJ::~MAPIDCOBJ((MAPIDCOBJ *)v18);
    return v16;
  }
  else
  {
    EngSetLastError(6u);
    MAPIDCOBJ::~MAPIDCOBJ((MAPIDCOBJ *)v18);
    return 0LL;
  }
}
