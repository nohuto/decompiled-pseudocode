/*
 * XREFs of ??0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z @ 0x1C027AD5C
 * Callers:
 *     ?GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z @ 0x1C002A200 (-GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z.c)
 *     NtGdiCloseFigure @ 0x1C02A4D80 (NtGdiCloseFigure.c)
 *     NtGdiFillPath @ 0x1C02A4E80 (NtGdiFillPath.c)
 *     NtGdiFlattenPath @ 0x1C02A4F80 (NtGdiFlattenPath.c)
 *     NtGdiPathToRegion @ 0x1C02A5260 (NtGdiPathToRegion.c)
 *     NtGdiSelectClipPath @ 0x1C02A5380 (NtGdiSelectClipPath.c)
 *     NtGdiStrokeAndFillPath @ 0x1C02A54A0 (NtGdiStrokeAndFillPath.c)
 *     NtGdiStrokePath @ 0x1C02A55E0 (NtGdiStrokePath.c)
 *     NtGdiWidenPath @ 0x1C02A56F0 (NtGdiWidenPath.c)
 * Callees:
 *     ??0THREAD_GUARDED_EPATHOBJ@@QEAA@XZ @ 0x1C0013B44 (--0THREAD_GUARDED_EPATHOBJ@@QEAA@XZ.c)
 *     ?vLock@EPATHOBJ@@QEAAXPEAUHPATH__@@@Z @ 0x1C025B05C (-vLock@EPATHOBJ@@QEAAXPEAUHPATH__@@@Z.c)
 *     ??0XEPATHOBJ@@QEAA@PEAUHPATH__@@@Z @ 0x1C027AE60 (--0XEPATHOBJ@@QEAA@PEAUHPATH__@@@Z.c)
 *     ??1XEPATHOBJ@@QEAA@XZ @ 0x1C027AEC4 (--1XEPATHOBJ@@QEAA@XZ.c)
 */

XEPATHOBJ *__fastcall XEPATHOBJ::XEPATHOBJ(XEPATHOBJ *this, DC **a2)
{
  struct HPATH__ *v4; // rdx
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
      v4 = *v7;
    else
      v4 = 0LL;
    DC::hpath(*a2, v4);
    PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v6);
    XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)v8);
  }
  *((_QWORD *)this + 1) = 0LL;
  if ( !*((_DWORD *)this + 30) && XEPATHOBJ_vDestructWrap )
  {
    PushThreadGuardedObject((char *)this + 88, this, XEPATHOBJ_vDestructWrap);
    *((_DWORD *)this + 30) = 1;
  }
  EPATHOBJ::vLock(this, *((struct HPATH__ **)*a2 + 21));
  return this;
}
