/*
 * XREFs of IntersectRect @ 0x1C00553DC
 * Callers:
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x1C00433D0 (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     xxxEnumDisplayMonitors @ 0x1C0052BD0 (xxxEnumDisplayMonitors.c)
 *     GetMonitorDC @ 0x1C0053E98 (GetMonitorDC.c)
 *     TransformRectBetweenCoordinateSpaces @ 0x1C0055AC0 (TransformRectBetweenCoordinateSpaces.c)
 *     ?SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z @ 0x1C005A4BC (-SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z.c)
 *     ?AdjustDisplayMonitor@@YAPEAUtagMONITOR@@PEAU1@PEAUtagRECT@@@Z @ 0x1C008403C (-AdjustDisplayMonitor@@YAPEAUtagMONITOR@@PEAU1@PEAUtagRECT@@@Z.c)
 *     AddNextContiguousRectangle @ 0x1C00D354C (AddNextContiguousRectangle.c)
 *     RemoveOverlaps @ 0x1C00D3B18 (RemoveOverlaps.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IntersectRect(_DWORD *a1, int *a2, int *a3)
{
  int v3; // r10d
  int v6; // r9d
  int v7; // edx
  int v8; // ecx
  __int64 result; // rax

  v3 = *a3;
  if ( *a2 > *a3 )
    v3 = *a2;
  *a1 = v3;
  v6 = a3[2];
  if ( a2[2] < v6 )
    v6 = a2[2];
  a1[2] = v6;
  if ( v3 < v6 )
  {
    v7 = a3[1];
    if ( a2[1] > v7 )
      v7 = a2[1];
    a1[1] = v7;
    v8 = a3[3];
    if ( a2[3] < v8 )
      v8 = a2[3];
    a1[3] = v8;
    if ( v7 < v8 )
      return 1LL;
  }
  result = 0LL;
  *(_QWORD *)a1 = 0LL;
  *((_QWORD *)a1 + 1) = 0LL;
  return result;
}
