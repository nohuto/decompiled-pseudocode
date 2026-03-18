/*
 * XREFs of ??0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z @ 0x1C0005F34
 * Callers:
 *     NtGdiFillPath @ 0x1C0005E40 (NtGdiFillPath.c)
 *     ?GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z @ 0x1C001E8B0 (-GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z.c)
 *     NtGdiCloseFigure @ 0x1C02A5450 (NtGdiCloseFigure.c)
 *     NtGdiFlattenPath @ 0x1C02A54F0 (NtGdiFlattenPath.c)
 *     NtGdiPathToRegion @ 0x1C02A57F0 (NtGdiPathToRegion.c)
 *     NtGdiSelectClipPath @ 0x1C02A5910 (NtGdiSelectClipPath.c)
 *     NtGdiStrokeAndFillPath @ 0x1C02A5A40 (NtGdiStrokeAndFillPath.c)
 *     NtGdiStrokePath @ 0x1C02A5B80 (NtGdiStrokePath.c)
 *     NtGdiWidenPath @ 0x1C02A5C90 (NtGdiWidenPath.c)
 * Callees:
 *     ?vLock@EPATHOBJ@@QEAAXPEAUHPATH__@@@Z @ 0x1C0005FE0 (-vLock@EPATHOBJ@@QEAAXPEAUHPATH__@@@Z.c)
 *     ??1XEPATHOBJ@@QEAA@XZ @ 0x1C00CB118 (--1XEPATHOBJ@@QEAA@XZ.c)
 *     ??0THREAD_GUARDED_EPATHOBJ@@QEAA@XZ @ 0x1C00CB3FC (--0THREAD_GUARDED_EPATHOBJ@@QEAA@XZ.c)
 *     ?vGuard@CAutoTGO@@QEAAXPEAXP6AX0@Z@Z @ 0x1C025E4D4 (-vGuard@CAutoTGO@@QEAAXPEAXP6AX0@Z@Z.c)
 *     ??0XEPATHOBJ@@QEAA@PEAUHPATH__@@@Z @ 0x1C027BDA8 (--0XEPATHOBJ@@QEAA@PEAUHPATH__@@@Z.c)
 */

XEPATHOBJ *__fastcall XEPATHOBJ::XEPATHOBJ(XEPATHOBJ *this, DC **a2)
{
  struct HPATH__ *v5; // rdx
  _BYTE v6[8]; // [rsp+20h] [rbp-108h] BYREF
  struct HPATH__ **v7; // [rsp+28h] [rbp-100h]
  _BYTE v8[8]; // [rsp+A0h] [rbp-88h] BYREF
  __int64 v9; // [rsp+A8h] [rbp-80h]

  THREAD_GUARDED_EPATHOBJ::THREAD_GUARDED_EPATHOBJ(this);
  if ( (*((_DWORD *)*a2 + 44) & 2) != 0 )
  {
    *((_DWORD *)*a2 + 44) &= ~2u;
    XEPATHOBJ::XEPATHOBJ((XEPATHOBJ *)v8, *((struct HPATH__ **)*a2 + 21));
    PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v6);
    if ( v7 && v9 && EPATHOBJ::bClone((EPATHOBJ *)v6, (struct EPATHOBJ *)v8) )
      v5 = *v7;
    else
      v5 = 0LL;
    DC::hpath(*a2, v5);
    PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v6);
    XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)v8);
  }
  *((_QWORD *)this + 1) = 0LL;
  CAutoTGO::vGuard((XEPATHOBJ *)((char *)this + 88), this, XEPATHOBJ_vDestructWrap);
  EPATHOBJ::vLock(this, *((struct HPATH__ **)*a2 + 21));
  return this;
}
