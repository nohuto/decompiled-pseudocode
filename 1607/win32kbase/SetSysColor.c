/*
 * XREFs of SetSysColor @ 0x1C005B1F4
 * Callers:
 *     xxxSetSysColors @ 0x1C005B018 (xxxSetSysColors.c)
 * Callees:
 *     GreSetBrushOwner @ 0x1C00246C0 (GreSetBrushOwner.c)
 *     GreGetNearestColor @ 0x1C005B330 (GreGetNearestColor.c)
 *     ?GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z @ 0x1C005B448 (-GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z.c)
 *     ??1BRUSHSELOBJ@@QEAA@XZ @ 0x1C005B574 (--1BRUSHSELOBJ@@QEAA@XZ.c)
 *     ??0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z @ 0x1C005B5A0 (--0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z.c)
 *     GreMarkUndeletableBrush @ 0x1C005B600 (GreMarkUndeletableBrush.c)
 *     GreCreateSolidBrush @ 0x1C005B6F0 (GreCreateSolidBrush.c)
 *     GreSetMagicColors @ 0x1C00CA4B8 (GreSetMagicColors.c)
 */

__int64 __fastcall SetSysColor(__int64 a1, unsigned int NearestColor, char a3)
{
  __int64 v4; // rdi
  __int64 v6; // rcx
  HBRUSH v7; // rcx
  __int64 v8; // rcx
  __int64 SolidBrush; // rax
  _QWORD v11[7]; // [rsp+20h] [rbp-38h] BYREF

  v4 = (unsigned int)a1;
  PsEnterPriorityRegion(a1);
  ExEnterCriticalRegionAndAcquireResourceExclusive(gpresRender);
  *((_DWORD *)gpsi + v4 + 1209) = NearestColor;
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
  *((_DWORD *)gpsi + v4 + 1240) = NearestColor;
  v7 = (HBRUSH)*((_QWORD *)gpsi + v4 + 636);
  if ( v7 )
  {
    GreSetSolidBrushInternal(v7, NearestColor, 0, 1);
  }
  else
  {
    SolidBrush = GreCreateSolidBrush(NearestColor);
    *((_QWORD *)gpsi + v4 + 636) = SolidBrush;
    GreMarkUndeletableBrush(SolidBrush);
    GreSetBrushOwner(*((HBRUSH *)gpsi + v4 + 636), 0);
    BRUSHSELOBJ::BRUSHSELOBJ((BRUSHSELOBJ *)v11, *((HBRUSH *)gpsi + v4 + 636));
    if ( v11[0] )
      *(_DWORD *)(v11[0] + 48LL) |= 0x40200u;
    BRUSHSELOBJ::~BRUSHSELOBJ((BRUSHSELOBJ *)v11);
  }
  ExReleaseResourceAndLeaveCriticalRegion(gpresRender);
  return PsLeavePriorityRegion(v8);
}
