/*
 * XREFs of ?ProcessDownOnly@@YAXPEAUtagMOUSE_PROMOTION_CACHE@@PEAUtagMOUSE_PROMOTION_ENTRY@@H@Z @ 0x1C0231FE0
 * Callers:
 *     ?PromotePointerInternal@@YAHGKPEAUtagMOUSE_PROMOTION_ENTRY@@0@Z @ 0x1C0232158 (-PromotePointerInternal@@YAHGKPEAUtagMOUSE_PROMOTION_ENTRY@@0@Z.c)
 * Callees:
 *     ?AppendMousePromotionQueue@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@PEAUtagMOUSE_PROMOTION_ENTRY@@1@Z @ 0x1C02318B4 (-AppendMousePromotionQueue@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@PEAUtagMOUSE_PROMOTION_ENTRY@@1@Z.c)
 *     ?ClearMousePromotionQueueUntil@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@PEAUtagMOUSE_PROMOTION_ENTRY@@@Z @ 0x1C02319B4 (-ClearMousePromotionQueueUntil@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@PEAUtagMOUSE_PROMOTION_ENTRY@@@.c)
 */

void __fastcall ProcessDownOnly(struct tagMOUSE_PROMOTION_ENTRY **a1, struct tagMOUSE_PROMOTION_ENTRY *a2, __int64 a3)
{
  int v4; // edi
  __int64 v6; // rax

  v4 = a3;
  ClearMousePromotionQueueUntil(a1 + 1, a2, a3);
  v6 = Win32AllocPoolZInit(48LL, 1886221141LL);
  if ( v6 )
  {
    *(_OWORD *)v6 = *(_OWORD *)a2;
    *(_OWORD *)(v6 + 16) = *((_OWORD *)a2 + 1);
    *(_OWORD *)(v6 + 32) = *((_OWORD *)a2 + 2);
    *(_QWORD *)v6 = 0LL;
    if ( v4 )
      *(_DWORD *)(v6 + 44) &= ~1u;
    AppendMousePromotionQueue(
      (struct tagMOUSE_PROMOTION_QUEUE *)&qword_1C0328C30,
      (struct tagMOUSE_PROMOTION_ENTRY *)v6,
      (struct tagMOUSE_PROMOTION_ENTRY *)v6);
    word_1C0328C90 = *(_WORD *)a1;
    dword_1C0328C94 = *((_DWORD *)a2 + 8);
    qword_1C0328C98 = gptiCurrent;
    dword_1C0328CA0 = v4;
  }
}
