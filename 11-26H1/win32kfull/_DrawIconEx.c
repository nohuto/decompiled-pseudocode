/*
 * XREFs of _DrawIconEx @ 0x140027334
 * Callers:
 *     NtUserDrawIconEx @ 0x140027D60 (NtUserDrawIconEx.c)
 *     xxxRealDrawMenuItem @ 0x1401F9D14 (xxxRealDrawMenuItem.c)
 *     ?DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z @ 0x14023C7F8 (-DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z.c)
 * Callees:
 *     ?ShouldVirtualizeIconCursorSize@@YA_NPEAUtagCURSOR@@@Z @ 0x140015078 (-ShouldVirtualizeIconCursorSize@@YA_NPEAUtagCURSOR@@@Z.c)
 *     GreCreateCompatibleBitmapEx @ 0x1400171C0 (GreCreateCompatibleBitmapEx.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     BltIcon @ 0x140027954 (BltIcon.c)
 *     GreSetTextColor @ 0x140027BB0 (GreSetTextColor.c)
 *     GreSetBkColor @ 0x140027C40 (GreSetBkColor.c)
 *     GreSetStretchBltMode @ 0x140027CD0 (GreSetStretchBltMode.c)
 *     GetCursorSizesIndexFromDpi @ 0x14002BC2C (GetCursorSizesIndexFromDpi.c)
 *     GetDpiDependentMetric @ 0x140032058 (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x140032228 (GetDpiForSystem.c)
 *     ??1MAPIDCOBJ@@QEAA@XZ @ 0x1400B4334 (--1MAPIDCOBJ@@QEAA@XZ.c)
 *     GreBitBltInternal @ 0x1400B5980 (GreBitBltInternal.c)
 *     ?GrepStretchBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHHHKKK@Z @ 0x1400B5D94 (-GrepStretchBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHHHKKK@Z.c)
 *     GrePolyPatBlt @ 0x140126C64 (GrePolyPatBlt.c)
 *     GreSetBrushOrg @ 0x14012768C (GreSetBrushOrg.c)
 *     ??0MAPIDCOBJ@@QEAA@PEAUHDC__@@0@Z @ 0x14016B560 (--0MAPIDCOBJ@@QEAA@PEAUHDC__@@0@Z.c)
 *     ?GetAnimatedCursorFrame@@YAPEAUtagCURSOR@@QEAUtagACON@@H@Z @ 0x1401BF3F0 (-GetAnimatedCursorFrame@@YAPEAUtagCURSOR@@QEAUtagACON@@H@Z.c)
 *     GetCursorSizeFromIndex @ 0x1401BFD2C (GetCursorSizeFromIndex.c)
 *     GreGetBrushOrg @ 0x140242288 (GreGetBrushOrg.c)
 */

__int64 __fastcall DrawIconEx(
        Gre::Base *a1,
        unsigned int a2,
        unsigned int a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        __int64 a8,
        char a)
{
  unsigned int v10; // r13d
  int v11; // edi
  __int64 v12; // rsi
  int v13; // r12d
  __int64 v14; // rdx
  unsigned int DpiDependentMetric; // ebx
  int v16; // r14d
  __int64 v17; // rcx
  int v18; // eax
  __int64 UserSessionState; // rax
  HDC v20; // rcx
  int v21; // eax
  int v22; // r15d
  int v23; // eax
  __int64 v24; // rbx
  __int64 v25; // r14
  int v26; // edi
  int v28; // eax
  unsigned int v29; // eax
  unsigned int CursorSizesIndexFromDpi; // eax
  INT CursorSizeFromIndex; // ebx
  unsigned int v32; // eax
  unsigned int DpiForSystem; // eax
  HDC v34; // r15
  HBITMAP CompatibleBitmap; // rax
  int v36; // r8d
  int v37; // eax
  int v38; // [rsp+78h] [rbp-90h]
  unsigned int v39; // [rsp+78h] [rbp-90h]
  int v40; // [rsp+80h] [rbp-88h]
  int v41; // [rsp+80h] [rbp-88h]
  HBITMAP v42; // [rsp+80h] [rbp-88h]
  HDC CompatibleDC; // [rsp+88h] [rbp-80h]
  int v44; // [rsp+90h] [rbp-78h]
  __int64 v45; // [rsp+90h] [rbp-78h]
  __int64 v46; // [rsp+98h] [rbp-70h] BYREF
  unsigned int v47; // [rsp+A0h] [rbp-68h]
  int v48; // [rsp+A4h] [rbp-64h]
  __int64 v49; // [rsp+A8h] [rbp-60h]
  _BYTE v50[104]; // [rsp+B8h] [rbp-50h] BYREF
  _BYTE v51[184]; // [rsp+120h] [rbp+18h] BYREF
  struct tagCURSOR *AnimatedCursorFrame; // [rsp+200h] [rbp+F8h]
  INT aa; // [rsp+228h] [rbp+120h]

  AnimatedCursorFrame = (struct tagCURSOR *)a4;
  v10 = 0;
  v11 = a & 0x10;
  v38 = 0;
  v44 = v11;
  v12 = a4;
  v13 = 0;
  if ( (*(_DWORD *)(a4 + 80) & 8) == 0
    || (AnimatedCursorFrame = GetAnimatedCursorFrame((struct tagACON *const)a4, a7),
        (v12 = (__int64)AnimatedCursorFrame) != 0) )
  {
    if ( *(_QWORD *)(v12 + 128) )
    {
      if ( (a & 3) == 3 )
        v13 = 1;
      v38 = v13;
    }
    aa = *(_DWORD *)(v12 + 140);
    v40 = *(_DWORD *)(v12 + 144);
    if ( ShouldVirtualizeIconCursorSize((struct tagCURSOR *)v12, 1LL) )
    {
      v29 = ((__int64 (*)(void))GetDpiForSystem)();
      CursorSizesIndexFromDpi = GetCursorSizesIndexFromDpi(v29);
      CursorSizeFromIndex = GetCursorSizeFromIndex(CursorSizesIndexFromDpi);
      aa = EngMulDiv(aa, CursorSizeFromIndex, *(_DWORD *)(v12 + 76));
      v40 = EngMulDiv(v40, CursorSizeFromIndex, *(_DWORD *)(v12 + 76));
    }
    DpiDependentMetric = a5;
    if ( !a5 )
    {
      if ( (a & 8) != 0 )
      {
        v32 = ((__int64 (*)(void))GetDpiForSystem)();
        DpiDependentMetric = GetDpiDependentMetric(5LL, v32);
        a5 = DpiDependentMetric;
      }
      else
      {
        DpiDependentMetric = aa;
        a5 = aa;
      }
    }
    v16 = a6;
    v17 = 2LL;
    if ( !a6 )
    {
      if ( (a & 8) != 0 )
      {
        DpiForSystem = GetDpiForSystem(2LL);
        v18 = GetDpiDependentMetric(6LL, DpiForSystem);
      }
      else
      {
        v14 = (unsigned int)(v40 >> 31);
        LODWORD(v14) = v40 % 2;
        v18 = v40 / 2;
      }
      a6 = v18;
      v16 = v18;
    }
    UserSessionState = W32GetUserSessionState(v17, v14);
    CompatibleDC = (HDC)GreCreateCompatibleDC(*(_QWORD *)(*(_QWORD *)(UserSessionState + 56968) + 56LL));
    v20 = CompatibleDC;
    if ( CompatibleDC )
    {
      if ( a8 )
      {
        v34 = (HDC)GreCreateCompatibleDC(a1);
        if ( v34 )
        {
          CompatibleBitmap = GreCreateCompatibleBitmapEx(a1, DpiDependentMetric, v16, 0, 0LL, 0LL);
          v42 = CompatibleBitmap;
          if ( CompatibleBitmap )
          {
            v45 = GreSelectBitmap(v34, CompatibleBitmap);
            GreGetBrushOrg((HDC)a1);
            GreSetBrushOrg(v34);
            v49 = a8;
            v46 = 0LL;
            v47 = DpiDependentMetric;
            v48 = v16;
            GrePolyPatBlt(v34, 0xF00021u, (struct _POLYPATBLT *)&v46, 1u);
            if ( v38 )
            {
              v36 = 3;
              v37 = v11 != 0 ? -2134114272 : 13369376;
            }
            else
            {
              BltIcon(v34, v16, CompatibleDC, v12, 1, v11 != 0 ? -2138570554 : 8913094);
              v36 = 2;
              v37 = v11 != 0 ? -2140798906 : 6684742;
            }
            BltIcon(v34, v16, CompatibleDC, v12, v36, v37);
            GreBitBltInternal(a1, a2, a3, DpiDependentMetric, v16, v34, 0, 0, 13369376, -1, 0);
            GreSelectBitmap(v34, v45);
            GreDeleteObject(v42);
            v10 = 1;
          }
          GreDeleteDC(v34);
        }
      }
      else
      {
        if ( v13 )
        {
          BltIcon((HDC)a1, v16, CompatibleDC, v12, 3, v11 != 0 ? -2134114272 : 13369376);
        }
        else
        {
          v21 = a & 1;
          v22 = a & 2;
          v41 = v21;
          if ( v21 )
          {
            if ( v22 )
              v23 = v11 != 0 ? -2138570554 : 8913094;
            else
              v23 = v11 != 0 ? -2134114272 : 13369376;
            v24 = *(_QWORD *)(v12 + 88);
            v39 = v23;
            GreSetBkColor((HDC)a1);
            GreSetTextColor((HDC)a1);
            GreSetStretchBltMode((HDC)a1);
            v25 = GreSelectBitmap(CompatibleDC, v24);
            LODWORD(v24) = *((_DWORD *)AnimatedCursorFrame + 35);
            v26 = *((_DWORD *)AnimatedCursorFrame + 36) >> 1;
            MAPIDCOBJ::MAPIDCOBJ((MAPIDCOBJ *)v50, (HDC)a1, CompatibleDC);
            GrepStretchBlt(
              (struct XDCOBJ *)v50,
              a2,
              a3,
              a5,
              a6,
              (struct OPTAPIDCOBJ *)v51,
              0,
              0,
              v24,
              v26,
              v39,
              0xFFFFFFFF,
              0);
            MAPIDCOBJ::~MAPIDCOBJ((MAPIDCOBJ *)v50);
            GreSetStretchBltMode((HDC)a1);
            GreSetTextColor((HDC)a1);
            GreSetBkColor((HDC)a1);
            GreSelectBitmap(CompatibleDC, v25);
            v20 = CompatibleDC;
            v21 = v41;
            v11 = v44;
            v12 = (__int64)AnimatedCursorFrame;
          }
          if ( v22 )
          {
            if ( v21 )
              v28 = v11 != 0 ? -2140798906 : 6684742;
            else
              v28 = v11 != 0 ? -2134114272 : 13369376;
            BltIcon((HDC)a1, a6, v20, v12, 2, v28);
          }
        }
        v10 = 1;
      }
      GreDeleteDC(CompatibleDC);
    }
  }
  else
  {
    UserSetLastError(87);
  }
  return v10;
}
