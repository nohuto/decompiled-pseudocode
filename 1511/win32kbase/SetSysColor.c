/*
 * XREFs of SetSysColor @ 0x1C0049E44
 * Callers:
 *     xxxSetSysColors @ 0x1C0049F7C (xxxSetSysColors.c)
 * Callees:
 *     GreSetBrushOwner @ 0x1C00357B0 (GreSetBrushOwner.c)
 *     GreGetNearestColor @ 0x1C0046DA0 (GreGetNearestColor.c)
 *     ??0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z @ 0x1C00494B8 (--0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z.c)
 *     ??1BRUSHSELOBJ@@QEAA@XZ @ 0x1C00494F4 (--1BRUSHSELOBJ@@QEAA@XZ.c)
 *     ?GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z @ 0x1C004A1DC (-GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z.c)
 *     GreCreateSolidBrush @ 0x1C005CFC0 (GreCreateSolidBrush.c)
 *     GreMarkUndeletableBrush @ 0x1C005D9C0 (GreMarkUndeletableBrush.c)
 *     GreSetMagicColors @ 0x1C00BE85C (GreSetMagicColors.c)
 */

__int64 __fastcall SetSysColor(__int64 a1, unsigned int NearestColor, char a3)
{
  __int64 v4; // rdi
  __int64 v6; // rcx
  HBRUSH v7; // rcx
  __int64 v8; // rcx
  __int64 SolidBrush; // rax
  _QWORD v11[3]; // [rsp+20h] [rbp-18h] BYREF

  v4 = (unsigned int)a1;
  PsEnterPriorityRegion(a1);
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
    NearestColor = GreGetNearestColor(*(HDC *)(v6 + 24), NearestColor);
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
