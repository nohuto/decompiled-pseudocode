/*
 * XREFs of TransformRectBetweenCoordinateSpaces @ 0x1C0047D40
 * Callers:
 *     xxxEnumDisplayMonitors @ 0x1C005E4F0 (xxxEnumDisplayMonitors.c)
 * Callees:
 *     Is_MonitorFromRectSupported_0 @ 0x1C0002500 (Is_MonitorFromRectSupported_0.c)
 *     _MonitorFromRect_0 @ 0x1C0002508 (_MonitorFromRect_0.c)
 *     IntersectRect @ 0x1C00446B8 (IntersectRect.c)
 *     SameCoordinateSpace @ 0x1C0047FB0 (SameCoordinateSpace.c)
 *     ?ExpandedMonitorRect@@YA?AUtagRECT@@PEAUtagMONITOR@@PEAUtagPROCESSINFO@@@Z @ 0x1C0048010 (-ExpandedMonitorRect@@YA-AUtagRECT@@PEAUtagMONITOR@@PEAUtagPROCESSINFO@@@Z.c)
 *     ?TransformRectBetweenCoordinateSpacesPerMonitor@@YAHPEAUtagRECT@@0PEAUtagPROCESSINFO@@1PEAUtagMONITOR@@@Z @ 0x1C0048084 (-TransformRectBetweenCoordinateSpacesPerMonitor@@YAHPEAUtagRECT@@0PEAUtagPROCESSINFO@@1PEAUtagMO.c)
 *     GetMonitorFlags @ 0x1C00482A0 (GetMonitorFlags.c)
 *     ?TransformOffscreenAdjacentRect@@YAHPEAUtagRECT@@00PEAUtagPROCESSINFO@@1@Z @ 0x1C00842D0 (-TransformOffscreenAdjacentRect@@YAHPEAUtagRECT@@00PEAUtagPROCESSINFO@@1@Z.c)
 *     __security_check_cookie @ 0x1C0088A80 (__security_check_cookie.c)
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
  int v29; // [rsp+30h] [rbp-89h]
  LONG left; // [rsp+40h] [rbp-79h]
  __int128 v32; // [rsp+58h] [rbp-61h] BYREF
  struct tagRECT v33; // [rsp+68h] [rbp-51h] BYREF
  struct tagRECT v34; // [rsp+80h] [rbp-39h] BYREF
  struct tagRECT v35; // [rsp+90h] [rbp-29h] BYREF
  struct tagRECT v36; // [rsp+A0h] [rbp-19h] BYREF
  struct tagRECT v37; // [rsp+B0h] [rbp-9h] BYREF

  if ( a3 )
    CurrentProcessWin32Process = *(struct tagPROCESSINFO **)(*(_QWORD *)(a3 + 16) + 376LL);
  else
    CurrentProcessWin32Process = (struct tagPROCESSINFO *)PsGetCurrentProcessWin32Process(a1);
  if ( a4 )
    v8 = *(struct tagPROCESSINFO **)(*(_QWORD *)(a4 + 16) + 376LL);
  else
    v8 = (struct tagPROCESSINFO *)PsGetCurrentProcessWin32Process(a1);
  v29 = 0;
  v36 = *a2;
  v9 = 0;
  v37 = 0LL;
  v35 = 0LL;
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
  right = v35.right;
  top = v35.top;
  left = v35.left;
  do
  {
    v32 = (__int128)*ExpandedMonitorRect(&v33, (struct tagMONITOR *)v11, v8);
    if ( (unsigned int)IntersectRect(&v34, (int *)&v32, &a2->left) )
    {
      if ( v29 )
      {
        v21 = left;
        if ( left >= v34.left )
          v21 = v34.left;
        left = v21;
        if ( top >= v34.top )
          top = v34.top;
        v35.left = v21;
        bottom = v35.bottom;
        if ( right <= v34.right )
          right = v34.right;
        v35.top = top;
        if ( v35.bottom <= v34.bottom )
          bottom = v34.bottom;
        v35.bottom = bottom;
        v35.right = right;
      }
      else
      {
        v35 = v34;
        right = v34.right;
        top = v34.top;
        left = v34.left;
      }
      v9 |= TransformRectBetweenCoordinateSpacesPerMonitor(
              &v34,
              &v34,
              CurrentProcessWin32Process,
              v8,
              (struct tagMONITOR *)v11);
      if ( !v29 )
      {
        v14 = 1;
        v37 = v34;
        v29 = 1;
        goto LABEL_18;
      }
      v23 = v37.left;
      if ( v37.left >= v34.left )
        v23 = v34.left;
      v37.left = v23;
      v24 = v37.top;
      if ( v37.top >= v34.top )
        v24 = v34.top;
      v37.top = v24;
      v25 = v37.right;
      if ( v37.right <= v34.right )
        v25 = v34.right;
      v37.right = v25;
      v26 = v37.bottom;
      if ( v37.bottom <= v34.bottom )
        v26 = v34.bottom;
      v37.bottom = v26;
    }
    v14 = v29;
LABEL_18:
    v11 = *(_QWORD *)(v11 + 16);
  }
  while ( v11 );
  if ( v14 )
  {
    v15 = v36.left;
    v16 = v36.right;
    v17 = *(_QWORD *)&v35.left - *(_QWORD *)&v36.left;
    if ( *(_QWORD *)&v35.left == *(_QWORD *)&v36.left )
      v17 = *(_QWORD *)&v35.right - *(_QWORD *)&v36.right;
    if ( v17 )
    {
      if ( left > v36.left )
      {
        v34.top = v36.top;
        v34.right = left;
        v34.bottom = v36.bottom;
        v34.left = v36.left;
        v27 = TransformOffscreenAdjacentRect(&v35, &v37, &v34, CurrentProcessWin32Process, v8);
        right = v35.right;
        v9 |= v27;
        top = v35.top;
      }
      if ( right < v16 )
      {
        v34.left = right;
        v20 = v36.bottom;
        v34.bottom = v36.bottom;
        v34.top = v36.top;
        v34.right = v16;
        v28 = TransformOffscreenAdjacentRect(&v35, &v37, &v34, CurrentProcessWin32Process, v8);
        top = v35.top;
        v9 |= v28;
      }
      else
      {
        v20 = v36.bottom;
      }
      if ( top > v36.top )
      {
        v36.left = v15;
        v36.right = v16;
        v36.bottom = top;
        v9 |= TransformOffscreenAdjacentRect(&v35, &v37, &v36, CurrentProcessWin32Process, v8);
      }
      if ( v35.bottom < v20 )
      {
        v36.left = v15;
        v36.top = v35.bottom;
        v36.right = v16;
        v36.bottom = v20;
        v19 = TransformOffscreenAdjacentRect(&v35, &v37, &v36, CurrentProcessWin32Process, v8);
LABEL_28:
        v9 |= v19;
      }
    }
    goto LABEL_23;
  }
LABEL_26:
  if ( (int)Is_MonitorFromRectSupported_0() >= 0 )
  {
    GetMonitorFlags(v8);
    v18 = (struct tagMONITOR *)MonitorFromRect_0();
    v19 = TransformRectBetweenCoordinateSpacesPerMonitor(&v37, a2, CurrentProcessWin32Process, v8, v18);
    goto LABEL_28;
  }
LABEL_23:
  *a1 = v37;
  return v9;
}
