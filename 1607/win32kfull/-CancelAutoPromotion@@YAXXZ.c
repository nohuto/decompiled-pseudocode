/*
 * XREFs of ?CancelAutoPromotion@@YAXXZ @ 0x1C0231908
 * Callers:
 *     ?xxxProcessPointerInputAsMouse@PointerPromotion@@YAXAEBUtagPOINTER_INFO@@GG@Z @ 0x1C023285C (-xxxProcessPointerInputAsMouse@PointerPromotion@@YAXAEBUtagPOINTER_INFO@@GG@Z.c)
 * Callees:
 *     ?EmptyMousePromotionQueue@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@@Z @ 0x1C00ECFE0 (-EmptyMousePromotionQueue@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@@Z.c)
 *     ?ExtractRangeFromQueue@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@0PEAUtagMOUSE_PROMOTION_ENTRY@@1@Z @ 0x1C0231B54 (-ExtractRangeFromQueue@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@0PEAUtagMOUSE_PROMOTION_ENTRY@@1@Z.c)
 *     ?FindMousePromotionInContactRange@@YAHAEBUtagMOUSE_PROMOTION_QUEUE@@KPEAPEAUtagMOUSE_PROMOTION_ENTRY@@1@Z @ 0x1C0231C28 (-FindMousePromotionInContactRange@@YAHAEBUtagMOUSE_PROMOTION_QUEUE@@KPEAPEAUtagMOUSE_PROMOTION_E.c)
 *     ?QueueMousePromotionEntry@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@PEAUtagMOUSE_PROMOTION_ENTRY@@@Z @ 0x1C0232318 (-QueueMousePromotionEntry@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@PEAUtagMOUSE_PROMOTION_ENTRY@@@Z.c)
 */

void CancelAutoPromotion(void)
{
  __int64 v0; // rdx
  __int64 v1; // r8
  __int64 v2; // rax
  __int128 v3; // [rsp+20h] [rbp-18h] BYREF
  struct tagMOUSE_PROMOTION_ENTRY *v4; // [rsp+40h] [rbp+8h] BYREF
  struct tagMOUSE_PROMOTION_ENTRY *v5; // [rsp+48h] [rbp+10h] BYREF

  if ( (unsigned int)FindMousePromotionInContactRange(
                       (const struct tagMOUSE_PROMOTION_QUEUE *)&qword_1C0328C30,
                       dword_1C0328BB4,
                       &v5,
                       &v4) )
  {
    v3 = 0LL;
    ExtractRangeFromQueue(
      (struct tagMOUSE_PROMOTION_QUEUE *)&qword_1C0328C30,
      (struct tagMOUSE_PROMOTION_QUEUE *)&v3,
      v5,
      v4);
    EmptyMousePromotionQueue((struct tagMOUSE_PROMOTION_QUEUE *)&v3, v0, v1);
  }
  else
  {
    v2 = Win32AllocPoolZInit(48LL, 1886221141LL);
    if ( v2 )
    {
      *(_OWORD *)v2 = xmmword_1C0328C40;
      *(_OWORD *)(v2 + 16) = xmmword_1C0328C50;
      *(_OWORD *)(v2 + 32) = xmmword_1C0328C60;
      *(_DWORD *)(v2 + 20) = 303104;
      QueueMousePromotionEntry(
        (struct tagMOUSE_PROMOTION_QUEUE *)&qword_1C0328C30,
        (struct tagMOUSE_PROMOTION_ENTRY *)v2);
    }
  }
  dword_1C0328CB8 &= 0xFFFFFFF9;
}
