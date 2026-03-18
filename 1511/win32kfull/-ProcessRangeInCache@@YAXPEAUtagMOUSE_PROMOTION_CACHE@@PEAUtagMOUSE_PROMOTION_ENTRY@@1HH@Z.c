/*
 * XREFs of ?ProcessRangeInCache@@YAXPEAUtagMOUSE_PROMOTION_CACHE@@PEAUtagMOUSE_PROMOTION_ENTRY@@1HH@Z @ 0x1C023A5D8
 * Callers:
 *     ?PromotePointerInternal@@YAHGKPEAUtagMOUSE_PROMOTION_ENTRY@@0@Z @ 0x1C023A6AC (-PromotePointerInternal@@YAHGKPEAUtagMOUSE_PROMOTION_ENTRY@@0@Z.c)
 * Callees:
 *     ?AppendMousePromotionQueue@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@PEAUtagMOUSE_PROMOTION_ENTRY@@1@Z @ 0x1C0239DB0 (-AppendMousePromotionQueue@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@PEAUtagMOUSE_PROMOTION_ENTRY@@1@Z.c)
 *     ?ClearMousePromotionQueueUntil@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@PEAUtagMOUSE_PROMOTION_ENTRY@@@Z @ 0x1C0239EB0 (-ClearMousePromotionQueueUntil@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@PEAUtagMOUSE_PROMOTION_ENTRY@@@.c)
 *     ?ExtractRangeFromQueue@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@0PEAUtagMOUSE_PROMOTION_ENTRY@@1@Z @ 0x1C023A044 (-ExtractRangeFromQueue@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@0PEAUtagMOUSE_PROMOTION_ENTRY@@1@Z.c)
 *     ?ResetPendingPromotion@@YAXXZ @ 0x1C023A970 (-ResetPendingPromotion@@YAXXZ.c)
 */

void __fastcall ProcessRangeInCache(
        struct tagMOUSE_PROMOTION_ENTRY **a1,
        struct tagMOUSE_PROMOTION_ENTRY *a2,
        struct tagMOUSE_PROMOTION_ENTRY *a3,
        int a4,
        int a5)
{
  struct tagMOUSE_PROMOTION_ENTRY **v5; // rbx
  struct tagMOUSE_PROMOTION_ENTRY *v9; // rdi
  struct tagMOUSE_PROMOTION_ENTRY *v10; // rbx
  struct tagMOUSE_PROMOTION_ENTRY *v11; // rcx
  struct tagMOUSE_PROMOTION_ENTRY *i; // rax
  struct tagMOUSE_PROMOTION_ENTRY *v13; // rcx
  struct tagMOUSE_PROMOTION_ENTRY *v14[2]; // [rsp+20h] [rbp-18h] BYREF

  v5 = a1 + 1;
  ClearMousePromotionQueueUntil(a1 + 1, a2);
  *(_OWORD *)v14 = 0LL;
  ExtractRangeFromQueue(v5, (struct tagMOUSE_PROMOTION_QUEUE *)v14, a2, a3);
  v9 = v14[1];
  v10 = v14[0];
  if ( a4 )
  {
    *((_QWORD *)v14[1] + 1) = *((_QWORD *)v14[0] + 1);
    while ( 1 )
    {
      v11 = *(struct tagMOUSE_PROMOTION_ENTRY **)v10;
      if ( *(struct tagMOUSE_PROMOTION_ENTRY **)v10 == v9 )
        break;
      *(_QWORD *)v10 = *(_QWORD *)v11;
      Win32FreePool(v11);
    }
  }
  if ( a5 )
  {
    for ( i = v10; i; i = *(struct tagMOUSE_PROMOTION_ENTRY **)i )
      *((_DWORD *)i + 10) &= ~1u;
  }
  if ( word_1C03235F0 )
  {
    v13 = v10;
    v10 = *(struct tagMOUSE_PROMOTION_ENTRY **)v10;
    Win32FreePool(v13);
    ResetPendingPromotion();
  }
  if ( v10 )
    AppendMousePromotionQueue((struct tagMOUSE_PROMOTION_QUEUE *)&qword_1C0323590, v10, v9);
}
