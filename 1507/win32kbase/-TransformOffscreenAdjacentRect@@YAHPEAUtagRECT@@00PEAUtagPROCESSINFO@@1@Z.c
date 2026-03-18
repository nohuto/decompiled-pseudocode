/*
 * XREFs of ?TransformOffscreenAdjacentRect@@YAHPEAUtagRECT@@00PEAUtagPROCESSINFO@@1@Z @ 0x1C0069970
 * Callers:
 *     TransformRectBetweenCoordinateSpaces @ 0x1C0055AC0 (TransformRectBetweenCoordinateSpaces.c)
 * Callees:
 *     ?TransformRectBetweenCoordinateSpacesPerMonitor@@YAHPEAUtagRECT@@0PEAUtagPROCESSINFO@@1PEAUtagMONITOR@@@Z @ 0x1C0055EDC (-TransformRectBetweenCoordinateSpacesPerMonitor@@YAHPEAUtagRECT@@0PEAUtagPROCESSINFO@@1PEAUtagMO.c)
 *     ?FindAdjacentMonitor@@YAPEAUtagMONITOR@@PEBUtagRECT@@PEAUtagPROCESSINFO@@@Z @ 0x1C0069A50 (-FindAdjacentMonitor@@YAPEAUtagMONITOR@@PEBUtagRECT@@PEAUtagPROCESSINFO@@@Z.c)
 *     __security_check_cookie @ 0x1C0085840 (__security_check_cookie.c)
 */

__int64 __fastcall TransformOffscreenAdjacentRect(
        struct tagRECT *a1,
        struct tagRECT *a2,
        struct tagRECT *a3,
        struct tagPROCESSINFO *a4,
        struct tagPROCESSINFO *a5)
{
  struct tagMONITOR *AdjacentMonitor; // rax
  LONG left; // r9d
  LONG top; // edx
  LONG right; // ecx
  LONG bottom; // ecx
  __int64 result; // rax
  LONG v15; // edx
  LONG v16; // ecx
  LONG v17; // edx
  bool v18; // cc
  LONG v19; // ecx
  struct tagRECT v20; // [rsp+30h] [rbp-48h] BYREF

  AdjacentMonitor = FindAdjacentMonitor(a3, a5);
  left = a3->left;
  if ( a1->left < a3->left )
    left = a1->left;
  a1->left = left;
  top = a3->top;
  if ( a1->top < top )
    top = a1->top;
  a1->top = top;
  right = a3->right;
  if ( a1->right > right )
    right = a1->right;
  a1->right = right;
  bottom = a3->bottom;
  if ( a1->bottom > bottom )
    bottom = a1->bottom;
  a1->bottom = bottom;
  result = TransformRectBetweenCoordinateSpacesPerMonitor(&v20, a3, a4, a5, AdjacentMonitor);
  v15 = v20.left;
  v16 = v20.right;
  if ( a2->left < v20.left )
    v15 = a2->left;
  a2->left = v15;
  v17 = v20.top;
  if ( a2->top < v20.top )
    v17 = a2->top;
  v18 = a2->right <= v16;
  a2->top = v17;
  if ( !v18 )
    v16 = a2->right;
  a2->right = v16;
  v19 = v20.bottom;
  if ( a2->bottom > v20.bottom )
    v19 = a2->bottom;
  a2->bottom = v19;
  return result;
}
