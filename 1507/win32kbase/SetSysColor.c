/*
 * XREFs of SetSysColor @ 0x1C0025420
 * Callers:
 *     xxxSetSysColors @ 0x1C0025244 (xxxSetSysColors.c)
 * Callees:
 *     GreCreateSolidBrush @ 0x1C000C2B0 (GreCreateSolidBrush.c)
 *     ?GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z @ 0x1C0025074 (-GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z.c)
 *     ??1BRUSHSELOBJ@@QEAA@XZ @ 0x1C00251C0 (--1BRUSHSELOBJ@@QEAA@XZ.c)
 *     ??0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z @ 0x1C00251EC (--0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z.c)
 *     GreGetNearestColor @ 0x1C0025760 (GreGetNearestColor.c)
 *     GreSetBrushOwner @ 0x1C00367D0 (GreSetBrushOwner.c)
 *     GreMarkUndeletableBrush @ 0x1C0081500 (GreMarkUndeletableBrush.c)
 *     GreSetMagicColors @ 0x1C00BD108 (GreSetMagicColors.c)
 */

__int64 __fastcall SetSysColor(unsigned int a1, unsigned int NearestColor, char a3)
{
  __int64 v4; // rdi
  __int64 v6; // rcx
  HBRUSH v7; // rcx
  __int64 v8; // rcx
  __int64 SolidBrush; // rax
  _QWORD v11[7]; // [rsp+20h] [rbp-38h] BYREF

  v4 = a1;
  PsEnterPriorityRegion();
  ExEnterCriticalRegionAndAcquireResourceExclusive(gpresRender);
  *((_DWORD *)gpsi + v4 + 861) = NearestColor;
  v6 = gpDispInfo;
  if ( (a3 & 4) != 0
    && (*(_DWORD *)(gpDispInfo + 180) & 2) != 0
    && ((_DWORD)v4 == 1 || (_DWORD)v4 == 15 || (_DWORD)v4 == 16 || (_DWORD)v4 == 20) )
  {
    GreSetMagicColors(*(HDC *)(gpDispInfo + 24));
    v6 = gpDispInfo;
  }
  if ( (a3 & 8) != 0
    || (a3 & 2) != 0
    && (_DWORD)v4 != 1
    && ((unsigned int)v4 <= 9
     || (unsigned int)v4 > 0xC && (_DWORD)v4 != 24 && ((unsigned int)v4 <= 0x1A || (unsigned int)v4 > 0x1C)) )
  {
    NearestColor = GreGetNearestColor(*(HDC *)(v6 + 24));
  }
  *((_DWORD *)gpsi + v4 + 892) = NearestColor;
  v7 = (HBRUSH)*((_QWORD *)gpsi + v4 + 462);
  if ( v7 )
  {
    GreSetSolidBrushInternal(v7, NearestColor, 0, 1);
  }
  else
  {
    SolidBrush = GreCreateSolidBrush(NearestColor);
    *((_QWORD *)gpsi + v4 + 462) = SolidBrush;
    GreMarkUndeletableBrush(SolidBrush);
    GreSetBrushOwner(*((HBRUSH *)gpsi + v4 + 462), 0);
    BRUSHSELOBJ::BRUSHSELOBJ((BRUSHSELOBJ *)v11, *((HBRUSH *)gpsi + v4 + 462));
    if ( v11[0] )
      *(_DWORD *)(v11[0] + 48LL) |= 0x40200u;
    BRUSHSELOBJ::~BRUSHSELOBJ((BRUSHSELOBJ *)v11);
  }
  ExReleaseResourceAndLeaveCriticalRegion(gpresRender);
  return PsLeavePriorityRegion(v8);
}
