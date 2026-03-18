/*
 * XREFs of ?ProcessRangeInCache@@YAXPEAUtagMOUSE_PROMOTION_CACHE@@PEAUtagMOUSE_PROMOTION_ENTRY@@1HH@Z @ 0x1C0232084
 * Callers:
 *     ?PromotePointerInternal@@YAHGKPEAUtagMOUSE_PROMOTION_ENTRY@@0@Z @ 0x1C0232158 (-PromotePointerInternal@@YAHGKPEAUtagMOUSE_PROMOTION_ENTRY@@0@Z.c)
 * Callees:
 *     ?AppendMousePromotionQueue@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@PEAUtagMOUSE_PROMOTION_ENTRY@@1@Z @ 0x1C02318B4 (-AppendMousePromotionQueue@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@PEAUtagMOUSE_PROMOTION_ENTRY@@1@Z.c)
 *     ?ClearMousePromotionQueueUntil@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@PEAUtagMOUSE_PROMOTION_ENTRY@@@Z @ 0x1C02319B4 (-ClearMousePromotionQueueUntil@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@PEAUtagMOUSE_PROMOTION_ENTRY@@@.c)
 *     ?ExtractRangeFromQueue@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@0PEAUtagMOUSE_PROMOTION_ENTRY@@1@Z @ 0x1C0231B54 (-ExtractRangeFromQueue@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@0PEAUtagMOUSE_PROMOTION_ENTRY@@1@Z.c)
 *     ?ResetPendingPromotion@@YAXXZ @ 0x1C023241C (-ResetPendingPromotion@@YAXXZ.c)
 */

void __fastcall ProcessRangeInCache(
        struct tagMOUSE_PROMOTION_ENTRY **a1,
        struct tagMOUSE_PROMOTION_ENTRY *a2,
        struct tagMOUSE_PROMOTION_ENTRY *a3,
        int a4,
        int a5)
{
  struct tagMOUSE_PROMOTION_ENTRY **v5; // rbx
  __int64 v9; // rdx
  __int64 v10; // r8
  struct tagMOUSE_PROMOTION_ENTRY *v11; // rdi
  struct tagMOUSE_PROMOTION_ENTRY *v12; // rbx
  struct tagMOUSE_PROMOTION_ENTRY *v13; // rcx
  struct tagMOUSE_PROMOTION_ENTRY *i; // rax
  struct tagMOUSE_PROMOTION_ENTRY *v15; // rcx
  struct tagMOUSE_PROMOTION_ENTRY *v16[2]; // [rsp+20h] [rbp-18h] BYREF

  v5 = a1 + 1;
  ClearMousePromotionQueueUntil(a1 + 1, a2, (__int64)a3);
  *(_OWORD *)v16 = 0LL;
  ExtractRangeFromQueue(v5, (struct tagMOUSE_PROMOTION_QUEUE *)v16, a2, a3);
  v11 = v16[1];
  v12 = v16[0];
  if ( a4 )
  {
    *((_QWORD *)v16[1] + 1) = *((_QWORD *)v16[0] + 1);
    while ( 1 )
    {
      v13 = *(struct tagMOUSE_PROMOTION_ENTRY **)v12;
      if ( *(struct tagMOUSE_PROMOTION_ENTRY **)v12 == v11 )
        break;
      *(_QWORD *)v12 = *(_QWORD *)v13;
      Win32FreePool(v13, v9, v10);
    }
  }
  if ( a5 )
  {
    for ( i = v12; i; i = *(struct tagMOUSE_PROMOTION_ENTRY **)i )
      *((_DWORD *)i + 11) &= ~1u;
  }
  if ( word_1C0328C90 )
  {
    v15 = v12;
    v12 = *(struct tagMOUSE_PROMOTION_ENTRY **)v12;
    Win32FreePool(v15, v9, v10);
    ResetPendingPromotion();
  }
  if ( v12 )
    AppendMousePromotionQueue((struct tagMOUSE_PROMOTION_QUEUE *)&qword_1C0328C30, v12, v11);
}
