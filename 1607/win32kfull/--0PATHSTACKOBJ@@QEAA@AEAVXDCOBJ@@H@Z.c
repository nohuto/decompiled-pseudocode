/*
 * XREFs of ??0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C0011890
 * Callers:
 *     GreRectangle @ 0x1C000E9CC (GreRectangle.c)
 *     ?GreLineTo@@YAHPEAUHDC__@@HH@Z @ 0x1C000F9E4 (-GreLineTo@@YAHPEAUHDC__@@HH@Z.c)
 *     GrePolyPolygonInternal @ 0x1C00116E0 (GrePolyPolygonInternal.c)
 *     ?GrePolyBezierInternal@@YAHPEAUHDC__@@PEAUtagPOINT@@K@Z @ 0x1C02916EC (-GrePolyBezierInternal@@YAHPEAUHDC__@@PEAUtagPOINT@@K@Z.c)
 *     GreAngleArc @ 0x1C02918E4 (GreAngleArc.c)
 *     GrePolyBezierTo @ 0x1C0291FE0 (GrePolyBezierTo.c)
 *     GrePolyDraw @ 0x1C02921B8 (GrePolyDraw.c)
 *     GrePolyPolylineInternal @ 0x1C0292770 (GrePolyPolylineInternal.c)
 *     GrePolylineTo @ 0x1C0292950 (GrePolylineTo.c)
 *     NtGdiEllipse @ 0x1C0292B20 (NtGdiEllipse.c)
 *     NtGdiRoundRect @ 0x1C0292D40 (NtGdiRoundRect.c)
 *     NtGdiArcInternal @ 0x1C02AA770 (NtGdiArcInternal.c)
 * Callees:
 *     ??1XEPATHOBJ@@QEAA@XZ @ 0x1C0011870 (--1XEPATHOBJ@@QEAA@XZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0039508 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?vLock@EPATHOBJ@@QEAAXPEAUHPATH__@@@Z @ 0x1C0258470 (-vLock@EPATHOBJ@@QEAAXPEAUHPATH__@@@Z.c)
 *     ?vGuard@CAutoTGO@@QEAAXPEAXP6AX0@Z@Z @ 0x1C025B43C (-vGuard@CAutoTGO@@QEAAXPEAXP6AX0@Z@Z.c)
 *     ??0XEPATHOBJ@@QEAA@PEAUHPATH__@@@Z @ 0x1C02794B8 (--0XEPATHOBJ@@QEAA@PEAUHPATH__@@@Z.c)
 *     ?ptfxGetCurrent@EPATHOBJ@@QEAA?AU_POINTFIX@@XZ @ 0x1C02797F8 (-ptfxGetCurrent@EPATHOBJ@@QEAA-AU_POINTFIX@@XZ.c)
 */

PATHSTACKOBJ *__fastcall PATHSTACKOBJ::PATHSTACKOBJ(PATHSTACKOBJ *this, DC **a2, int a3)
{
  int v6; // ecx
  __int64 v7; // rax
  struct HPATH__ *v9; // rdx
  __int64 v10; // r8
  _BYTE v11[16]; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v12; // [rsp+38h] [rbp-D0h] BYREF
  struct HPATH__ **v13; // [rsp+40h] [rbp-C8h]
  _BYTE v14[8]; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v15; // [rsp+C0h] [rbp-48h]
  int v16; // [rsp+158h] [rbp+50h]
  int v17; // [rsp+15Ch] [rbp+54h]

  *((_QWORD *)this + 10) = 0LL;
  *((_DWORD *)this + 30) = 0;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 16) = 0;
  *((_DWORD *)this + 12) = 0;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  v6 = *((_DWORD *)*a2 + 44);
  if ( (v6 & 1) != 0 )
  {
    if ( (v6 & 2) != 0 )
    {
      *((_DWORD *)*a2 + 44) &= ~2u;
      XEPATHOBJ::XEPATHOBJ((XEPATHOBJ *)v14, *((struct HPATH__ **)*a2 + 21));
      PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)&v12);
      if ( v13 && v15 && EPATHOBJ::bClone((EPATHOBJ *)&v12, (struct EPATHOBJ *)v14) )
        v9 = *v13;
      else
        v9 = 0LL;
      DC::hpath(*a2, v9);
      PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)&v12);
      XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)v14);
    }
    *((_QWORD *)this + 1) = 0LL;
    CAutoTGO::vGuard((PATHSTACKOBJ *)((char *)this + 88), this, XEPATHOBJ_vDestructWrap);
    EPATHOBJ::vLock(this, *((struct HPATH__ **)*a2 + 21));
    if ( *((_QWORD *)this + 1) && a3 )
    {
      if ( (*(_DWORD *)(*((_QWORD *)*a2 + 10) + 8LL) & 0x200) != 0 )
      {
        EXFORMOBJ::vQuickInit((EXFORMOBJ *)v11, (struct XDCOBJ *)a2, 0x204u);
        EXFORMOBJ::bXformRound(
          (EXFORMOBJ *)v11,
          (struct _POINTL *)(*((_QWORD *)*a2 + 10) + 76LL),
          (struct _POINTFIX *)(*((_QWORD *)*a2 + 10) + 84LL),
          1uLL);
        *(_DWORD *)(*((_QWORD *)*a2 + 10) + 8LL) &= ~0x200u;
        v10 = *((_QWORD *)*a2 + 10);
      }
      else
      {
        EPATHOBJ::ptfxGetCurrent(this);
        if ( *(_DWORD *)(v10 + 84) == v16 && *(_DWORD *)(v10 + 88) == v17 )
          return this;
      }
      EPATHOBJ::bMoveTo(this, 0LL, (struct _POINTL *)(v10 + 84));
    }
  }
  else
  {
    *(_QWORD *)this = 0LL;
    *((_QWORD *)this + 1) = (char *)this + 128;
    *((_QWORD *)this + 19) = (char *)this + 456;
    *((_QWORD *)this + 57) = 0LL;
    *((_QWORD *)this + 58) = (char *)this + 480;
    *((_DWORD *)this + 50) = 1;
    *((_QWORD *)this + 20) = 0LL;
    *((_QWORD *)this + 21) = 0LL;
    *((_QWORD *)this + 22) = 0LL;
    *((_QWORD *)this + 23) = 0LL;
    *((_DWORD *)this + 54) = 1;
    *((_DWORD *)this + 118) = 256;
    if ( a3 )
    {
      if ( (*(_DWORD *)(*((_QWORD *)*a2 + 10) + 8LL) & 0x200) != 0 )
      {
        EXFORMOBJ::vQuickInit((EXFORMOBJ *)v11, (struct XDCOBJ *)a2, 0x204u);
        EXFORMOBJ::bXformRound(
          (EXFORMOBJ *)v11,
          (struct _POINTL *)(*((_QWORD *)*a2 + 10) + 76LL),
          (struct _POINTFIX *)(*((_QWORD *)*a2 + 10) + 84LL),
          1uLL);
        *(_DWORD *)(*((_QWORD *)*a2 + 10) + 8LL) &= ~0x200u;
      }
      *((_QWORD *)this + 24) = *(_QWORD *)(*((_QWORD *)*a2 + 10) + 84LL);
      v7 = *((_QWORD *)*a2 + 10);
      if ( (*(_DWORD *)(v7 + 8) & 0x400) != 0 )
      {
        *(_DWORD *)(v7 + 8) &= ~0x400u;
        *((_DWORD *)*a2 + 54) = 0;
      }
    }
  }
  return this;
}
