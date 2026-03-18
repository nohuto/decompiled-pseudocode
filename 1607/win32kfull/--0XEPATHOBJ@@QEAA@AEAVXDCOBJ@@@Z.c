/*
 * XREFs of ??0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z @ 0x1C02793AC
 * Callers:
 *     ?GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z @ 0x1C002FA30 (-GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z.c)
 *     NtGdiCloseFigure @ 0x1C02A5EF0 (NtGdiCloseFigure.c)
 *     NtGdiFillPath @ 0x1C02A6000 (NtGdiFillPath.c)
 *     NtGdiFlattenPath @ 0x1C02A6100 (NtGdiFlattenPath.c)
 *     NtGdiPathToRegion @ 0x1C02A6400 (NtGdiPathToRegion.c)
 *     NtGdiSelectClipPath @ 0x1C02A6530 (NtGdiSelectClipPath.c)
 *     NtGdiStrokeAndFillPath @ 0x1C02A6660 (NtGdiStrokeAndFillPath.c)
 *     NtGdiStrokePath @ 0x1C02A67A0 (NtGdiStrokePath.c)
 *     NtGdiWidenPath @ 0x1C02A68B0 (NtGdiWidenPath.c)
 * Callees:
 *     ??1XEPATHOBJ@@QEAA@XZ @ 0x1C0011870 (--1XEPATHOBJ@@QEAA@XZ.c)
 *     ?vLock@EPATHOBJ@@QEAAXPEAUHPATH__@@@Z @ 0x1C0258470 (-vLock@EPATHOBJ@@QEAAXPEAUHPATH__@@@Z.c)
 *     ?vGuard@CAutoTGO@@QEAAXPEAXP6AX0@Z@Z @ 0x1C025B43C (-vGuard@CAutoTGO@@QEAAXPEAXP6AX0@Z@Z.c)
 *     ??0XEPATHOBJ@@QEAA@PEAUHPATH__@@@Z @ 0x1C02794B8 (--0XEPATHOBJ@@QEAA@PEAUHPATH__@@@Z.c)
 */

XEPATHOBJ *__fastcall XEPATHOBJ::XEPATHOBJ(XEPATHOBJ *this, DC **a2)
{
  struct HPATH__ *v4; // rdx
  _BYTE v6[8]; // [rsp+20h] [rbp-108h] BYREF
  struct HPATH__ **v7; // [rsp+28h] [rbp-100h]
  _BYTE v8[8]; // [rsp+A0h] [rbp-88h] BYREF
  __int64 v9; // [rsp+A8h] [rbp-80h]

  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 16) = 0;
  *((_DWORD *)this + 12) = 0;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_DWORD *)this + 30) = 0;
  if ( (*((_DWORD *)*a2 + 44) & 2) != 0 )
  {
    *((_DWORD *)*a2 + 44) &= ~2u;
    XEPATHOBJ::XEPATHOBJ((XEPATHOBJ *)v8, *((struct HPATH__ **)*a2 + 21));
    PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v6);
    if ( v7 && v9 && EPATHOBJ::bClone((EPATHOBJ *)v6, (struct EPATHOBJ *)v8) )
      v4 = *v7;
    else
      v4 = 0LL;
    DC::hpath(*a2, v4);
    PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v6);
    XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)v8);
  }
  *((_QWORD *)this + 1) = 0LL;
  CAutoTGO::vGuard((XEPATHOBJ *)((char *)this + 88), this, XEPATHOBJ_vDestructWrap);
  EPATHOBJ::vLock(this, *((struct HPATH__ **)*a2 + 21));
  return this;
}
