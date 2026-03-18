/*
 * XREFs of ?CancelAutoPromotion@@YAXXZ @ 0x1C0239C20
 * Callers:
 *     ?xxxProcessPointerInputAsMouse@PointerPromotion@@YAXAEBUtagPOINTER_INFO@@GG@Z @ 0x1C023AB70 (-xxxProcessPointerInputAsMouse@PointerPromotion@@YAXAEBUtagPOINTER_INFO@@GG@Z.c)
 * Callees:
 *     ?EmptyMousePromotionQueue@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@@Z @ 0x1C012CB64 (-EmptyMousePromotionQueue@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@@Z.c)
 *     ?ExtractRangeFromQueue@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@0PEAUtagMOUSE_PROMOTION_ENTRY@@1@Z @ 0x1C0239E6C (-ExtractRangeFromQueue@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@0PEAUtagMOUSE_PROMOTION_ENTRY@@1@Z.c)
 *     ?FindMousePromotionInContactRange@@YAHAEBUtagMOUSE_PROMOTION_QUEUE@@KPEAPEAUtagMOUSE_PROMOTION_ENTRY@@1@Z @ 0x1C0239F40 (-FindMousePromotionInContactRange@@YAHAEBUtagMOUSE_PROMOTION_QUEUE@@KPEAPEAUtagMOUSE_PROMOTION_E.c)
 *     ?QueueMousePromotionEntry@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@PEAUtagMOUSE_PROMOTION_ENTRY@@@Z @ 0x1C023A698 (-QueueMousePromotionEntry@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@PEAUtagMOUSE_PROMOTION_ENTRY@@@Z.c)
 */

void CancelAutoPromotion(void)
{
  __int64 v0; // rax
  __int128 v1; // [rsp+20h] [rbp-18h] BYREF
  struct tagMOUSE_PROMOTION_ENTRY *v2; // [rsp+40h] [rbp+8h] BYREF
  struct tagMOUSE_PROMOTION_ENTRY *v3; // [rsp+48h] [rbp+10h] BYREF

  if ( (unsigned int)FindMousePromotionInContactRange(
                       (const struct tagMOUSE_PROMOTION_QUEUE *)&qword_1C0322CA0,
                       dword_1C0322C24,
                       &v3,
                       &v2) )
  {
    v1 = 0LL;
    ExtractRangeFromQueue(
      (struct tagMOUSE_PROMOTION_QUEUE *)&qword_1C0322CA0,
      (struct tagMOUSE_PROMOTION_QUEUE *)&v1,
      v3,
      v2);
    EmptyMousePromotionQueue((struct tagMOUSE_PROMOTION_QUEUE *)&v1);
  }
  else
  {
    v0 = Win32AllocPoolZInit(48LL, 1886221141LL);
    if ( v0 )
    {
      *(_OWORD *)v0 = xmmword_1C0322CB0;
      *(_OWORD *)(v0 + 16) = xmmword_1C0322CC0;
      *(_OWORD *)(v0 + 32) = xmmword_1C0322CD0;
      *(_DWORD *)(v0 + 20) = 303104;
      QueueMousePromotionEntry(
        (struct tagMOUSE_PROMOTION_QUEUE *)&qword_1C0322CA0,
        (struct tagMOUSE_PROMOTION_ENTRY *)v0);
    }
  }
  dword_1C0322D28 &= 0xFFFFFFF9;
}
