/*
 * XREFs of ?FindCacheById@@YAPEAUtagMOUSE_PROMOTION_CACHE@@GPEAK@Z @ 0x1C0231BE4
 * Callers:
 *     ?OnPointerInputRetrieval@PointerPromotion@@YAXGKUtagPOINT@@H@Z @ 0x1C0231E9C (-OnPointerInputRetrieval@PointerPromotion@@YAXGKUtagPOINT@@H@Z.c)
 *     ?PromotePointerInternal@@YAHGKPEAUtagMOUSE_PROMOTION_ENTRY@@0@Z @ 0x1C0232158 (-PromotePointerInternal@@YAHGKPEAUtagMOUSE_PROMOTION_ENTRY@@0@Z.c)
 *     ?ValidatePointerPromotion@@YAHGKPEAKPEAPEAUtagMOUSE_PROMOTION_ENTRY@@1@Z @ 0x1C02324C4 (-ValidatePointerPromotion@@YAHGKPEAKPEAPEAUtagMOUSE_PROMOTION_ENTRY@@1@Z.c)
 * Callees:
 *     <none>
 */

struct tagMOUSE_PROMOTION_CACHE *__fastcall FindCacheById(__int16 a1, unsigned int *a2)
{
  __int64 v2; // rax
  __int16 *i; // r8

  v2 = 0LL;
  for ( i = word_1C0328BB8; *i != a1; i += 12 )
  {
    v2 = (unsigned int)(v2 + 1);
    if ( (unsigned int)v2 >= 5 )
      return 0LL;
  }
  *a2 = v2;
  return (struct tagMOUSE_PROMOTION_CACHE *)&word_1C0328BB8[12 * v2];
}
