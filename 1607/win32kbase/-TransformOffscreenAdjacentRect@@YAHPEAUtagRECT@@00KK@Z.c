/*
 * XREFs of ?TransformOffscreenAdjacentRect@@YAHPEAUtagRECT@@00KK@Z @ 0x1C00B92C8
 * Callers:
 *     TransformRectBetweenCoordinateSpaces @ 0x1C00588F0 (TransformRectBetweenCoordinateSpaces.c)
 * Callees:
 *     ?TransformRectBetweenCoordinateSpacesPerMonitor@@YAHPEAUtagRECT@@0KKPEAUtagMONITOR@@@Z @ 0x1C0058AF4 (-TransformRectBetweenCoordinateSpacesPerMonitor@@YAHPEAUtagRECT@@0KKPEAUtagMONITOR@@@Z.c)
 *     __security_check_cookie @ 0x1C0089A80 (__security_check_cookie.c)
 *     ?FindAdjacentMonitor@@YAPEAUtagMONITOR@@PEBUtagRECT@@K@Z @ 0x1C00B9224 (-FindAdjacentMonitor@@YAPEAUtagMONITOR@@PEBUtagRECT@@K@Z.c)
 */

__int64 __fastcall TransformOffscreenAdjacentRect(
        struct tagRECT *a1,
        struct tagRECT *a2,
        struct tagRECT *a3,
        char a4,
        char a5)
{
  struct tagMONITOR *AdjacentMonitor; // rax
  LONG left; // ecx
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
  result = TransformRectBetweenCoordinateSpacesPerMonitor((__m128i *)&v20, a3, a4, a5, AdjacentMonitor);
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
