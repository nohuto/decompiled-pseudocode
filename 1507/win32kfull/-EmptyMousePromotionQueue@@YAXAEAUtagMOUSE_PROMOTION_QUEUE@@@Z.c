/*
 * XREFs of ?EmptyMousePromotionQueue@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@@Z @ 0x1C012CB64
 * Callers:
 *     ?InitiateWin32kCleanup@@YAHXZ @ 0x1C012C708 (-InitiateWin32kCleanup@@YAHXZ.c)
 *     ?CancelAutoPromotion@@YAXXZ @ 0x1C0239C20 (-CancelAutoPromotion@@YAXXZ.c)
 *     ?OnPointerInputRetrieval@PointerPromotion@@YAXGKUtagPOINT@@H@Z @ 0x1C023A21C (-OnPointerInputRetrieval@PointerPromotion@@YAXGKUtagPOINT@@H@Z.c)
 *     ?PromotePointerInternal@@YAHGKPEAUtagMOUSE_PROMOTION_ENTRY@@0@Z @ 0x1C023A4D8 (-PromotePointerInternal@@YAHGKPEAUtagMOUSE_PROMOTION_ENTRY@@0@Z.c)
 *     ?ResetMousePromotionInfo@@YAXGG@Z @ 0x1C023A6EC (-ResetMousePromotionInfo@@YAXGG@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall EmptyMousePromotionQueue(struct tagMOUSE_PROMOTION_QUEUE *a1)
{
  _QWORD *v2; // rcx

  while ( *(_QWORD *)a1 )
  {
    v2 = *(_QWORD **)a1;
    *(_QWORD *)a1 = **(_QWORD **)a1;
    Win32FreePool(v2);
  }
  *((_QWORD *)a1 + 1) = 0LL;
}
