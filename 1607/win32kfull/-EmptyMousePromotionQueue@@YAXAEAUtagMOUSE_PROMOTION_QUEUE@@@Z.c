/*
 * XREFs of ?EmptyMousePromotionQueue@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@@Z @ 0x1C00ECFE0
 * Callers:
 *     ?InitiateWin32kCleanup@@YAHXZ @ 0x1C00EC928 (-InitiateWin32kCleanup@@YAHXZ.c)
 *     ?CancelAutoPromotion@@YAXXZ @ 0x1C0231908 (-CancelAutoPromotion@@YAXXZ.c)
 *     ?OnPointerInputRetrieval@PointerPromotion@@YAXGKUtagPOINT@@H@Z @ 0x1C0231E9C (-OnPointerInputRetrieval@PointerPromotion@@YAXGKUtagPOINT@@H@Z.c)
 *     ?PromotePointerInternal@@YAHGKPEAUtagMOUSE_PROMOTION_ENTRY@@0@Z @ 0x1C0232158 (-PromotePointerInternal@@YAHGKPEAUtagMOUSE_PROMOTION_ENTRY@@0@Z.c)
 *     ?ResetMousePromotionInfo@@YAXGG@Z @ 0x1C023236C (-ResetMousePromotionInfo@@YAXGG@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall EmptyMousePromotionQueue(struct tagMOUSE_PROMOTION_QUEUE *a1, __int64 a2, __int64 a3)
{
  _QWORD *v4; // rcx

  while ( *(_QWORD *)a1 )
  {
    v4 = *(_QWORD **)a1;
    *(_QWORD *)a1 = **(_QWORD **)a1;
    Win32FreePool(v4, a2, a3);
  }
  *((_QWORD *)a1 + 1) = 0LL;
}
