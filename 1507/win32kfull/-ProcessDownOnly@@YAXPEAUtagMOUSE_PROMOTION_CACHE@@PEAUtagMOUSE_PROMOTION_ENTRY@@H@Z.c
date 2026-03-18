/*
 * XREFs of ?ProcessDownOnly@@YAXPEAUtagMOUSE_PROMOTION_CACHE@@PEAUtagMOUSE_PROMOTION_ENTRY@@H@Z @ 0x1C023A360
 * Callers:
 *     ?PromotePointerInternal@@YAHGKPEAUtagMOUSE_PROMOTION_ENTRY@@0@Z @ 0x1C023A4D8 (-PromotePointerInternal@@YAHGKPEAUtagMOUSE_PROMOTION_ENTRY@@0@Z.c)
 * Callees:
 *     ?AppendMousePromotionQueue@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@PEAUtagMOUSE_PROMOTION_ENTRY@@1@Z @ 0x1C0239BCC (-AppendMousePromotionQueue@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@PEAUtagMOUSE_PROMOTION_ENTRY@@1@Z.c)
 *     ?ClearMousePromotionQueueUntil@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@PEAUtagMOUSE_PROMOTION_ENTRY@@@Z @ 0x1C0239CCC (-ClearMousePromotionQueueUntil@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@PEAUtagMOUSE_PROMOTION_ENTRY@@@.c)
 */

void __fastcall ProcessDownOnly(struct tagMOUSE_PROMOTION_ENTRY **a1, struct tagMOUSE_PROMOTION_ENTRY *a2, int a3)
{
  __int64 v6; // rax

  ClearMousePromotionQueueUntil(a1 + 1, a2);
  v6 = Win32AllocPoolZInit(48LL, 1886221141LL);
  if ( v6 )
  {
    *(_OWORD *)v6 = *(_OWORD *)a2;
    *(_OWORD *)(v6 + 16) = *((_OWORD *)a2 + 1);
    *(_OWORD *)(v6 + 32) = *((_OWORD *)a2 + 2);
    *(_QWORD *)v6 = 0LL;
    if ( a3 )
      *(_DWORD *)(v6 + 44) &= ~1u;
    AppendMousePromotionQueue(
      (struct tagMOUSE_PROMOTION_QUEUE *)&qword_1C0322CA0,
      (struct tagMOUSE_PROMOTION_ENTRY *)v6,
      (struct tagMOUSE_PROMOTION_ENTRY *)v6);
    word_1C0322D00 = *(_WORD *)a1;
    dword_1C0322D04 = *((_DWORD *)a2 + 8);
    qword_1C0322D08 = gptiCurrent;
    dword_1C0322D10 = a3;
  }
}
