/*
 * XREFs of TransformRectBetweenCoordinateSpaces @ 0x1C0055AC0
 * Callers:
 *     xxxEnumDisplayMonitors @ 0x1C0052BD0 (xxxEnumDisplayMonitors.c)
 * Callees:
 *     Is_MonitorFromRectSupported_0 @ 0x1C00024D0 (Is_MonitorFromRectSupported_0.c)
 *     _MonitorFromRect_0 @ 0x1C00024D8 (_MonitorFromRect_0.c)
 *     IntersectRect @ 0x1C00553DC (IntersectRect.c)
 *     SameCoordinateSpace @ 0x1C0055D2C (SameCoordinateSpace.c)
 *     ?ExpandedMonitorRect@@YA?AUtagRECT@@PEAUtagMONITOR@@PEAUtagPROCESSINFO@@@Z @ 0x1C0055E68 (-ExpandedMonitorRect@@YA-AUtagRECT@@PEAUtagMONITOR@@PEAUtagPROCESSINFO@@@Z.c)
 *     ?TransformRectBetweenCoordinateSpacesPerMonitor@@YAHPEAUtagRECT@@0PEAUtagPROCESSINFO@@1PEAUtagMONITOR@@@Z @ 0x1C0055EDC (-TransformRectBetweenCoordinateSpacesPerMonitor@@YAHPEAUtagRECT@@0PEAUtagPROCESSINFO@@1PEAUtagMO.c)
 *     GetMonitorFlags @ 0x1C00560B0 (GetMonitorFlags.c)
 *     ?TransformOffscreenAdjacentRect@@YAHPEAUtagRECT@@00PEAUtagPROCESSINFO@@1@Z @ 0x1C0069970 (-TransformOffscreenAdjacentRect@@YAHPEAUtagRECT@@00PEAUtagPROCESSINFO@@1@Z.c)
 *     __security_check_cookie @ 0x1C0085840 (__security_check_cookie.c)
 */

__int64 __fastcall TransformRectBetweenCoordinateSpaces(struct tagRECT *a1, struct tagRECT *a2, __int64 a3, __int64 a4)
{
  struct tagPROCESSINFO *CurrentProcessWin32Process; // r14
  struct tagPROCESSINFO *v8; // rsi
  unsigned int v9; // ebx
  __int64 result; // rax
  __int64 v11; // r15
  LONG right; // r13d
  LONG top; // r12d
  int v14; // eax
  LONG v15; // r15d
  LONG v16; // edi
  __int64 v17; // rax
  struct tagMONITOR *v18; // rax
  int v19; // eax
  LONG v20; // r13d
  LONG v21; // eax
  LONG bottom; // eax
  LONG v23; // eax
  LONG v24; // eax
  LONG v25; // eax
  LONG v26; // eax
  int v27; // eax
  int v28; // eax
  struct tagMONITOR *v29; // [rsp+20h] [rbp-99h]
  __int64 v30; // [rsp+28h] [rbp-91h]
  int v31; // [rsp+30h] [rbp-89h]
  LONG left; // [rsp+40h] [rbp-79h]
  __int128 v34; // [rsp+58h] [rbp-61h] BYREF
  struct tagRECT v35; // [rsp+68h] [rbp-51h] BYREF
  struct tagRECT v36; // [rsp+80h] [rbp-39h] BYREF
  struct tagRECT v37; // [rsp+90h] [rbp-29h] BYREF
  struct tagRECT v38; // [rsp+A0h] [rbp-19h] BYREF
  struct tagRECT v39; // [rsp+B0h] [rbp-9h] BYREF

  if ( a3 )
    CurrentProcessWin32Process = *(struct tagPROCESSINFO **)(*(_QWORD *)(a3 + 16) + 384LL);
  else
    CurrentProcessWin32Process = (struct tagPROCESSINFO *)PsGetCurrentProcessWin32Process(a1, a2, 0LL, a4, v29, v30);
  if ( a4 )
    v8 = *(struct tagPROCESSINFO **)(*(_QWORD *)(a4 + 16) + 384LL);
  else
    v8 = (struct tagPROCESSINFO *)PsGetCurrentProcessWin32Process(a1, a2, a3, a4, v29, v30);
  v31 = 0;
  v38 = *a2;
  v9 = 0;
  v39 = 0LL;
  v37 = 0LL;
  if ( (unsigned int)SameCoordinateSpace(CurrentProcessWin32Process, v8)
    || (a2->left >= a2->right || a2->top >= a2->bottom) && !a2->left && !a2->top )
  {
    result = 0LL;
    *a1 = *a2;
    return result;
  }
  v11 = *(_QWORD *)(gpDispInfo + 96);
  if ( !v11 )
    goto LABEL_26;
  right = v37.right;
  top = v37.top;
  left = v37.left;
  do
  {
    v34 = (__int128)*ExpandedMonitorRect(&v35, (struct tagMONITOR *)v11, v8);
    if ( (unsigned int)IntersectRect(&v36, (int *)&v34, &a2->left) )
    {
      if ( v31 )
      {
        v21 = left;
        if ( left >= v36.left )
          v21 = v36.left;
        left = v21;
        if ( top >= v36.top )
          top = v36.top;
        v37.left = v21;
        bottom = v37.bottom;
        if ( right <= v36.right )
          right = v36.right;
        v37.top = top;
        if ( v37.bottom <= v36.bottom )
          bottom = v36.bottom;
        v37.bottom = bottom;
        v37.right = right;
      }
      else
      {
        v37 = v36;
        right = v36.right;
        top = v36.top;
        left = v36.left;
      }
      v9 |= TransformRectBetweenCoordinateSpacesPerMonitor(
              &v36,
              &v36,
              CurrentProcessWin32Process,
              v8,
              (struct tagMONITOR *)v11);
      if ( !v31 )
      {
        v14 = 1;
        v39 = v36;
        v31 = 1;
        goto LABEL_19;
      }
      v23 = v39.left;
      if ( v39.left >= v36.left )
        v23 = v36.left;
      v39.left = v23;
      v24 = v39.top;
      if ( v39.top >= v36.top )
        v24 = v36.top;
      v39.top = v24;
      v25 = v39.right;
      if ( v39.right <= v36.right )
        v25 = v36.right;
      v39.right = v25;
      v26 = v39.bottom;
      if ( v39.bottom <= v36.bottom )
        v26 = v36.bottom;
      v39.bottom = v26;
    }
    v14 = v31;
LABEL_19:
    v11 = *(_QWORD *)(v11 + 16);
  }
  while ( v11 );
  if ( v14 )
  {
    v15 = v38.left;
    v16 = v38.right;
    v17 = *(_QWORD *)&v37.left - *(_QWORD *)&v38.left;
    if ( *(_QWORD *)&v37.left == *(_QWORD *)&v38.left )
      v17 = *(_QWORD *)&v37.right - *(_QWORD *)&v38.right;
    if ( v17 )
    {
      if ( left > v38.left )
      {
        v36.top = v38.top;
        v36.right = left;
        v36.bottom = v38.bottom;
        v36.left = v38.left;
        v27 = TransformOffscreenAdjacentRect(&v37, &v39, &v36, CurrentProcessWin32Process, v8);
        right = v37.right;
        v9 |= v27;
        top = v37.top;
      }
      if ( right < v16 )
      {
        v36.left = right;
        v20 = v38.bottom;
        v36.bottom = v38.bottom;
        v36.top = v38.top;
        v36.right = v16;
        v28 = TransformOffscreenAdjacentRect(&v37, &v39, &v36, CurrentProcessWin32Process, v8);
        top = v37.top;
        v9 |= v28;
      }
      else
      {
        v20 = v38.bottom;
      }
      if ( top > v38.top )
      {
        v38.left = v15;
        v38.right = v16;
        v38.bottom = top;
        v9 |= TransformOffscreenAdjacentRect(&v37, &v39, &v38, CurrentProcessWin32Process, v8);
      }
      if ( v37.bottom < v20 )
      {
        v38.left = v15;
        v38.top = v37.bottom;
        v38.right = v16;
        v38.bottom = v20;
        v19 = TransformOffscreenAdjacentRect(&v37, &v39, &v38, CurrentProcessWin32Process, v8);
LABEL_28:
        v9 |= v19;
      }
    }
    goto LABEL_24;
  }
LABEL_26:
  if ( (int)Is_MonitorFromRectSupported_0() >= 0 )
  {
    GetMonitorFlags(v8);
    v18 = (struct tagMONITOR *)MonitorFromRect_0();
    v19 = TransformRectBetweenCoordinateSpacesPerMonitor(&v39, a2, CurrentProcessWin32Process, v8, v18);
    goto LABEL_28;
  }
LABEL_24:
  *a1 = v39;
  return v9;
}
