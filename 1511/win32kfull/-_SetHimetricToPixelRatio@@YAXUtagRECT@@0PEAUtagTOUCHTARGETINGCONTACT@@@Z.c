/*
 * XREFs of ?_SetHimetricToPixelRatio@@YAXUtagRECT@@0PEAUtagTOUCHTARGETINGCONTACT@@@Z @ 0x1C022BF74
 * Callers:
 *     PointerSpeedHitTest @ 0x1C022D63C (PointerSpeedHitTest.c)
 *     xxxPerformTargetingWithinPwnd @ 0x1C022DD08 (xxxPerformTargetingWithinPwnd.c)
 *     xxxPointerWindowHitTest @ 0x1C022DEF4 (xxxPointerWindowHitTest.c)
 * Callees:
 *     LongLongToLong @ 0x1C01C3C60 (LongLongToLong.c)
 */

void __fastcall _SetHimetricToPixelRatio(struct tagRECT *a1, struct tagRECT *a2, struct tagTOUCHTARGETINGCONTACT *a3)
{
  __int64 v5; // r11
  __int64 v6; // r11
  LONG plResult; // [rsp+30h] [rbp+8h] BYREF

  if ( LongLongToLong(1000LL * (a2->right - a2->left) / (a1->right - a1->left), &plResult) >= 0 )
    *(_DWORD *)(v5 + 184) = plResult;
  if ( LongLongToLong(1000LL * (a2->bottom - a2->top) / (a1->bottom - a1->top), &plResult) >= 0 )
    *(_DWORD *)(v6 + 188) = plResult;
}
