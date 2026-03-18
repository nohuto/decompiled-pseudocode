/*
 * XREFs of ?PromotePointerInternal@@YAHGKPEAUtagMOUSE_PROMOTION_ENTRY@@0@Z @ 0x1C023A6AC
 * Callers:
 *     ?ForceCompletePendingPromotion@@YAXXZ @ 0x1C023A194 (-ForceCompletePendingPromotion@@YAXXZ.c)
 *     ?xxxPromotePointer@PointerPromotion@@YAHGKK@Z @ 0x1C023AF18 (-xxxPromotePointer@PointerPromotion@@YAHGKK@Z.c)
 * Callees:
 *     ?EmptyMousePromotionQueue@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@@Z @ 0x1C009F228 (-EmptyMousePromotionQueue@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@@Z.c)
 *     memset @ 0x1C0152CC0 (memset.c)
 *     ?FindCacheById@@YAPEAUtagMOUSE_PROMOTION_CACHE@@GPEAK@Z @ 0x1C023A0D4 (-FindCacheById@@YAPEAUtagMOUSE_PROMOTION_CACHE@@GPEAK@Z.c)
 *     ?ProcessDownOnly@@YAXPEAUtagMOUSE_PROMOTION_CACHE@@PEAUtagMOUSE_PROMOTION_ENTRY@@H@Z @ 0x1C023A534 (-ProcessDownOnly@@YAXPEAUtagMOUSE_PROMOTION_CACHE@@PEAUtagMOUSE_PROMOTION_ENTRY@@H@Z.c)
 *     ?ProcessRangeInCache@@YAXPEAUtagMOUSE_PROMOTION_CACHE@@PEAUtagMOUSE_PROMOTION_ENTRY@@1HH@Z @ 0x1C023A5D8 (-ProcessRangeInCache@@YAXPEAUtagMOUSE_PROMOTION_CACHE@@PEAUtagMOUSE_PROMOTION_ENTRY@@1HH@Z.c)
 *     ?ValidateDoubleClick@@YAHAEBUtagTAP_INFO@@KKH@Z @ 0x1C023A9A0 (-ValidateDoubleClick@@YAHAEBUtagTAP_INFO@@KKH@Z.c)
 */

__int64 __fastcall PromotePointerInternal(
        __int16 a1,
        unsigned int a2,
        struct tagMOUSE_PROMOTION_ENTRY *a3,
        struct tagMOUSE_PROMOTION_ENTRY *a4)
{
  unsigned int v4; // r15d
  struct tagMOUSE_PROMOTION_CACHE *CacheById; // rax
  struct tagMOUSE_PROMOTION_ENTRY **v8; // rbp
  unsigned int v9; // edx
  int v10; // r12d
  int v11; // edi
  int v12; // r13d
  __int64 v13; // rdx
  __int64 v14; // rbx
  __int64 v15; // r13
  struct tagMOUSE_PROMOTION_QUEUE *v16; // r15
  unsigned int v17; // eax
  int v19; // [rsp+30h] [rbp-48h]
  unsigned int v22; // [rsp+90h] [rbp+18h] BYREF

  v4 = a2;
  CacheById = FindCacheById(a1, &v22);
  v8 = (struct tagMOUSE_PROMOTION_ENTRY **)CacheById;
  if ( (dword_1C0323618 & 8) != 0
    && CacheById == (struct tagMOUSE_PROMOTION_CACHE *)word_1C0323518
    && (!a4 || a4 == *((struct tagMOUSE_PROMOTION_ENTRY **)CacheById + 2)) )
  {
    dword_1C0323618 &= ~8u;
  }
  v9 = v22;
  v19 = (v4 >> 19) & 1;
  v10 = (v4 >> 17) & 1;
  v11 = ((unsigned __int8)v4 >> 1) & 1;
  if ( ((v4 >> 18) & 1) != 0
    && (unsigned int)ValidateDoubleClick((const struct tagTAP_INFO *)&qword_1C03235D0, v22, *((_DWORD *)a3 + 4), v11) )
  {
    *((_QWORD *)a3 + 1) = qword_1C03235DC;
  }
  v12 = *((_DWORD *)a3 + 4);
  v13 = v9 + 1;
  v14 = *((_QWORD *)a3 + 1);
  v22 = v12;
  if ( (unsigned int)v13 < 5 )
  {
    v15 = (unsigned int)(5 - v13);
    v16 = (struct tagMOUSE_PROMOTION_QUEUE *)((char *)&unk_1C0323520 + 24 * v13);
    do
    {
      EmptyMousePromotionQueue(v16);
      v16 = (struct tagMOUSE_PROMOTION_QUEUE *)((char *)v16 + 24);
      --v15;
    }
    while ( v15 );
    v4 = a2;
    v12 = v22;
  }
  if ( v19 )
  {
    ProcessDownOnly(v8, a3, v11);
  }
  else
  {
    ProcessRangeInCache(v8, a3, a4, v10, v11);
    if ( !a4 )
    {
      if ( v11 )
        v17 = dword_1C0323618 | 4;
      else
        v17 = dword_1C0323618 & 0xFFFFFFFB;
      dword_1C0323618 = v17 | 2;
    }
  }
  if ( v10 )
  {
    word_1C03235D8 = a1;
    qword_1C03235D0 = gptiCurrent;
    qword_1C03235DC = v14;
    dword_1C03235E4 = v12;
    dword_1C03235E8 = v11;
  }
  else if ( v4 )
  {
    memset(&qword_1C03235D0, 0, 0x20uLL);
  }
  return 1LL;
}
