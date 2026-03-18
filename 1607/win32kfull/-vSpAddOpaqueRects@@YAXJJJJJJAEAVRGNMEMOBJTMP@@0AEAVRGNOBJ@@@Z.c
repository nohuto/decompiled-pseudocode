/*
 * XREFs of ?vSpAddOpaqueRects@@YAXJJJJJJAEAVRGNMEMOBJTMP@@0AEAVRGNOBJ@@@Z @ 0x1C02714B4
 * Callers:
 *     ?vSpComputeClipEffective@@YAXPEAVSPRITE@@AEAVRGNOBJ@@@Z @ 0x1C0272CD0 (-vSpComputeClipEffective@@YAXPEAVSPRITE@@AEAVRGNOBJ@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 */

void __fastcall vSpAddOpaqueRects(
        LONG a1,
        LONG a2,
        LONG a3,
        LONG a4,
        LONG a5,
        int a6,
        struct RGNMEMOBJTMP *a7,
        struct RGNMEMOBJTMP *a8,
        struct RGNOBJ *a9)
{
  LONG v9; // eax
  LONG v14; // eax
  bool v15; // cc
  struct _RECTL v16; // [rsp+28h] [rbp-18h] BYREF

  v9 = a5;
  if ( a2 == a4 )
  {
    v16.left = a3;
    v14 = a2 + 1;
    v16.top = a2;
    v16.right = a1;
    goto LABEL_20;
  }
  if ( a3 )
  {
    v16.right = a5;
    v16.left = a3;
    v16.bottom = a4 + 1;
    v16.top = a4;
    RGNOBJ::vSet(a8, &v16);
    if ( RGNOBJ::bMerge(a7, a9, a8, BYTE2(gafjRgnOp)) )
      RGNOBJ::vSwap(a7, a9);
    else
      RGNOBJ::vSet(a7);
    v15 = a2 <= a4 + 1;
    v9 = a5;
  }
  else
  {
    v15 = a2 <= a4;
  }
  if ( !v15 )
  {
    v16.left = 0;
    v16.right = v9;
    v16.bottom = a2;
    if ( a3 )
      v16.top = a4 + 1;
    else
      v16.top = a4;
    RGNOBJ::vSet(a8, &v16);
    if ( RGNOBJ::bMerge(a7, a9, a8, BYTE2(gafjRgnOp)) )
      RGNOBJ::vSwap(a7, a9);
    else
      RGNOBJ::vSet(a7);
    v9 = a5;
  }
  if ( a1 && a1 != v9 )
  {
    v16.left = 0;
    v14 = a2 + 1;
    v16.top = a2;
    v16.right = a1;
LABEL_20:
    v16.bottom = v14;
    RGNOBJ::vSet(a8, &v16);
    if ( RGNOBJ::bMerge(a7, a9, a8, BYTE2(gafjRgnOp)) )
      RGNOBJ::vSwap(a7, a9);
    else
      RGNOBJ::vSet(a7);
  }
}
