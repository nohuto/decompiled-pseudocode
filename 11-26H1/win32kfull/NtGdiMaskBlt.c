/*
 * XREFs of NtGdiMaskBlt @ 0x14016B360
 * Callers:
 *     <none>
 * Callees:
 *     ??1MAPIDCOBJ@@QEAA@XZ @ 0x1400B4334 (--1MAPIDCOBJ@@QEAA@XZ.c)
 *     ??0MAPIDCOBJ@@QEAA@PEAUHDC__@@0@Z @ 0x14016B560 (--0MAPIDCOBJ@@QEAA@PEAUHDC__@@0@Z.c)
 *     ?GrepMaskBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHPEAUHBITMAP__@@HHKK@Z @ 0x14016B868 (-GrepMaskBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHPEAUHBITMAP__@@HHKK@Z.c)
 */

__int64 __fastcall NtGdiMaskBlt(
        HDC a1,
        int a2,
        int a3,
        int a4,
        int a5,
        HDC a6,
        int a7,
        int a8,
        HBITMAP a9,
        int a10,
        int a11,
        unsigned int a12,
        unsigned int a13)
{
  unsigned int v16; // ebx
  _QWORD v18[13]; // [rsp+70h] [rbp-E8h] BYREF
  _BYTE v19[120]; // [rsp+D8h] [rbp-80h] BYREF

  MAPIDCOBJ::MAPIDCOBJ((MAPIDCOBJ *)v18, a1, a6);
  v16 = 0;
  if ( v18[0] )
    v16 = GrepMaskBlt((struct XDCOBJ *)v18, a2, a3, a4, a5, (struct OPTAPIDCOBJ *)v19, a7, a8, a9, a10, a11, a12, a13);
  else
    EngSetLastError(0x57u);
  MAPIDCOBJ::~MAPIDCOBJ((MAPIDCOBJ *)v18);
  return v16;
}
