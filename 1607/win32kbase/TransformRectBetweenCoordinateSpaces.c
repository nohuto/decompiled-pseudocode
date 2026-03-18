/*
 * XREFs of TransformRectBetweenCoordinateSpaces @ 0x1C00588F0
 * Callers:
 *     xxxEnumDisplayMonitors @ 0x1C0058B60 (xxxEnumDisplayMonitors.c)
 * Callees:
 *     Is_MonitorFromRectSupported_0 @ 0x1C00027F0 (Is_MonitorFromRectSupported_0.c)
 *     _MonitorFromRect_0 @ 0x1C00027F8 (_MonitorFromRect_0.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C00352B8 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     MonitorFlagsFromDpiAwarenessContext @ 0x1C0037BB0 (MonitorFlagsFromDpiAwarenessContext.c)
 *     ?TransformRectBetweenCoordinateSpacesPerMonitor@@YAHPEAUtagRECT@@0KKPEAUtagMONITOR@@@Z @ 0x1C0058AF4 (-TransformRectBetweenCoordinateSpacesPerMonitor@@YAHPEAUtagRECT@@0KKPEAUtagMONITOR@@@Z.c)
 *     IntersectRect @ 0x1C005903C (IntersectRect.c)
 *     ?ExpandedMonitorRect@@YA?AUtagRECT@@PEAUtagMONITOR@@K@Z @ 0x1C005910C (-ExpandedMonitorRect@@YA-AUtagRECT@@PEAUtagMONITOR@@K@Z.c)
 *     __security_check_cookie @ 0x1C0089A80 (__security_check_cookie.c)
 *     ?TransformOffscreenAdjacentRect@@YAHPEAUtagRECT@@00KK@Z @ 0x1C00B92C8 (-TransformOffscreenAdjacentRect@@YAHPEAUtagRECT@@00KK@Z.c)
 */

__int64 __fastcall TransformRectBetweenCoordinateSpaces(struct tagRECT *a1, struct tagRECT *a2, __int64 a3, __int64 a4)
{
  unsigned int CurrentThreadDpiAwarenessContext; // r14d
  unsigned int v8; // esi
  struct tagRECT v9; // xmm1
  unsigned int v10; // ebx
  __int64 result; // rax
  __int64 v12; // r15
  LONG right; // r13d
  LONG top; // r12d
  int v15; // eax
  LONG v16; // r15d
  LONG v17; // edi
  __int64 v18; // rax
  struct tagMONITOR *v19; // rax
  int v20; // eax
  LONG v21; // eax
  LONG bottom; // eax
  LONG v23; // eax
  LONG v24; // eax
  LONG v25; // eax
  LONG v26; // eax
  int v27; // eax
  LONG v28; // r13d
  int v29; // eax
  int v30; // [rsp+30h] [rbp-89h]
  LONG left; // [rsp+40h] [rbp-79h]
  __int128 v33; // [rsp+58h] [rbp-61h] BYREF
  struct tagRECT v34; // [rsp+68h] [rbp-51h] BYREF
  struct tagRECT v35; // [rsp+80h] [rbp-39h] BYREF
  struct tagRECT v36; // [rsp+90h] [rbp-29h] BYREF
  struct tagRECT v37; // [rsp+A0h] [rbp-19h] BYREF
  struct tagRECT v38; // [rsp+B0h] [rbp-9h] BYREF

  if ( a3 )
    CurrentThreadDpiAwarenessContext = *(_DWORD *)(a3 + 352);
  else
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
  if ( a4 )
    v8 = *(_DWORD *)(a4 + 352);
  else
    v8 = W32GetCurrentThreadDpiAwarenessContext();
  v9 = *a2;
  v30 = 0;
  v10 = 0;
  v38 = 0LL;
  v36 = 0LL;
  v37 = v9;
  if ( (((unsigned __int8)CurrentThreadDpiAwarenessContext ^ (unsigned __int8)v8) & 0xF) == 0
    || (a2->left >= a2->right || a2->top >= a2->bottom) && !a2->left && !a2->top )
  {
    result = 0LL;
    *a1 = v9;
    return result;
  }
  v12 = *(_QWORD *)(gpDispInfo + 96);
  if ( !v12 )
    goto LABEL_26;
  right = v36.right;
  top = v36.top;
  left = v36.left;
  do
  {
    v33 = (__int128)*ExpandedMonitorRect(&v34, (struct tagMONITOR *)v12, v8);
    if ( (unsigned int)IntersectRect(&v35, &v33, a2) )
    {
      if ( v30 )
      {
        v21 = left;
        if ( left >= v35.left )
          v21 = v35.left;
        left = v21;
        if ( top >= v35.top )
          top = v35.top;
        v36.left = v21;
        bottom = v36.bottom;
        if ( right <= v35.right )
          right = v35.right;
        v36.top = top;
        if ( v36.bottom <= v35.bottom )
          bottom = v35.bottom;
        v36.bottom = bottom;
        v36.right = right;
      }
      else
      {
        v36 = v35;
        right = v35.right;
        top = v35.top;
        left = v35.left;
      }
      v10 |= TransformRectBetweenCoordinateSpacesPerMonitor(
               &v35,
               &v35,
               CurrentThreadDpiAwarenessContext,
               v8,
               (struct tagMONITOR *)v12);
      if ( !v30 )
      {
        v15 = 1;
        v38 = v35;
        v30 = 1;
        goto LABEL_18;
      }
      v23 = v38.left;
      if ( v38.left >= v35.left )
        v23 = v35.left;
      v38.left = v23;
      v24 = v38.top;
      if ( v38.top >= v35.top )
        v24 = v35.top;
      v38.top = v24;
      v25 = v38.right;
      if ( v38.right <= v35.right )
        v25 = v35.right;
      v38.right = v25;
      v26 = v38.bottom;
      if ( v38.bottom <= v35.bottom )
        v26 = v35.bottom;
      v38.bottom = v26;
    }
    v15 = v30;
LABEL_18:
    v12 = *(_QWORD *)(v12 + 16);
  }
  while ( v12 );
  if ( v15 )
  {
    v16 = v37.left;
    v17 = v37.right;
    v18 = *(_QWORD *)&v36.left - *(_QWORD *)&v37.left;
    if ( *(_QWORD *)&v36.left == *(_QWORD *)&v37.left )
      v18 = *(_QWORD *)&v36.right - *(_QWORD *)&v37.right;
    if ( v18 )
    {
      if ( left > v37.left )
      {
        v35.top = v37.top;
        v35.right = left;
        v35.bottom = v37.bottom;
        v35.left = v37.left;
        v27 = TransformOffscreenAdjacentRect(&v36, &v38, &v35, CurrentThreadDpiAwarenessContext, v8);
        right = v36.right;
        v10 |= v27;
        top = v36.top;
      }
      if ( right >= v17 )
      {
        v28 = v37.bottom;
      }
      else
      {
        v35.left = right;
        v28 = v37.bottom;
        v35.bottom = v37.bottom;
        v35.top = v37.top;
        v35.right = v17;
        v29 = TransformOffscreenAdjacentRect(&v36, &v38, &v35, CurrentThreadDpiAwarenessContext, v8);
        top = v36.top;
        v10 |= v29;
      }
      if ( top > v37.top )
      {
        v37.left = v16;
        v37.right = v17;
        v37.bottom = top;
        v10 |= TransformOffscreenAdjacentRect(&v36, &v38, &v37, CurrentThreadDpiAwarenessContext, v8);
      }
      if ( v36.bottom < v28 )
      {
        v37.left = v16;
        v37.top = v36.bottom;
        v37.right = v17;
        v37.bottom = v28;
        v20 = TransformOffscreenAdjacentRect(&v36, &v38, &v37, CurrentThreadDpiAwarenessContext, v8);
LABEL_28:
        v10 |= v20;
      }
    }
    goto LABEL_23;
  }
LABEL_26:
  if ( (int)Is_MonitorFromRectSupported_0() >= 0 )
  {
    MonitorFlagsFromDpiAwarenessContext(v8);
    v19 = (struct tagMONITOR *)MonitorFromRect_0();
    v20 = TransformRectBetweenCoordinateSpacesPerMonitor(&v38, a2, CurrentThreadDpiAwarenessContext, v8, v19);
    goto LABEL_28;
  }
LABEL_23:
  *a1 = v38;
  return v10;
}
