/*
 * XREFs of ?PromotePointerInternal@@YAHGKPEAUtagMOUSE_PROMOTION_ENTRY@@0@Z @ 0x1C0232158
 * Callers:
 *     ?ForceCompletePendingPromotion@@YAXXZ @ 0x1C0231C94 (-ForceCompletePendingPromotion@@YAXXZ.c)
 *     ?xxxPromotePointer@PointerPromotion@@YAHGKK@Z @ 0x1C0232A2C (-xxxPromotePointer@PointerPromotion@@YAHGKK@Z.c)
 * Callees:
 *     ?EmptyMousePromotionQueue@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@@Z @ 0x1C00ECFE0 (-EmptyMousePromotionQueue@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@@Z.c)
 *     memset @ 0x1C015A380 (memset.c)
 *     ?FindCacheById@@YAPEAUtagMOUSE_PROMOTION_CACHE@@GPEAK@Z @ 0x1C0231BE4 (-FindCacheById@@YAPEAUtagMOUSE_PROMOTION_CACHE@@GPEAK@Z.c)
 *     ?ProcessDownOnly@@YAXPEAUtagMOUSE_PROMOTION_CACHE@@PEAUtagMOUSE_PROMOTION_ENTRY@@H@Z @ 0x1C0231FE0 (-ProcessDownOnly@@YAXPEAUtagMOUSE_PROMOTION_CACHE@@PEAUtagMOUSE_PROMOTION_ENTRY@@H@Z.c)
 *     ?ProcessRangeInCache@@YAXPEAUtagMOUSE_PROMOTION_CACHE@@PEAUtagMOUSE_PROMOTION_ENTRY@@1HH@Z @ 0x1C0232084 (-ProcessRangeInCache@@YAXPEAUtagMOUSE_PROMOTION_CACHE@@PEAUtagMOUSE_PROMOTION_ENTRY@@1HH@Z.c)
 *     ?ValidateDoubleClick@@YAHAEBUtagTAP_INFO@@KKH@Z @ 0x1C023244C (-ValidateDoubleClick@@YAHAEBUtagTAP_INFO@@KKH@Z.c)
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
  unsigned int v11; // edi
  int v12; // r13d
  __int64 v13; // rdx
  __int64 v14; // rbx
  __int64 v15; // r8
  __int64 v16; // r13
  struct tagMOUSE_PROMOTION_QUEUE *v17; // r15
  unsigned int v18; // eax
  int v20; // [rsp+30h] [rbp-48h]
  unsigned int v23; // [rsp+90h] [rbp+18h] BYREF

  v4 = a2;
  CacheById = FindCacheById(a1, &v23);
  v8 = (struct tagMOUSE_PROMOTION_ENTRY **)CacheById;
  if ( (dword_1C0328CB8 & 8) != 0
    && CacheById == (struct tagMOUSE_PROMOTION_CACHE *)word_1C0328BB8
    && (!a4 || a4 == *((struct tagMOUSE_PROMOTION_ENTRY **)CacheById + 2)) )
  {
    dword_1C0328CB8 &= ~8u;
  }
  v9 = v23;
  v20 = (v4 >> 19) & 1;
  v10 = (v4 >> 17) & 1;
  v11 = ((unsigned __int8)v4 >> 1) & 1;
  if ( ((v4 >> 18) & 1) != 0
    && (unsigned int)ValidateDoubleClick((const struct tagTAP_INFO *)&qword_1C0328C70, v23, *((_DWORD *)a3 + 4), v11) )
  {
    *((_QWORD *)a3 + 1) = qword_1C0328C7C;
  }
  v12 = *((_DWORD *)a3 + 4);
  v13 = v9 + 1;
  v14 = *((_QWORD *)a3 + 1);
  v23 = v12;
  if ( (unsigned int)v13 < 5 )
  {
    v15 = (unsigned int)(5 - v13);
    v16 = (unsigned int)v15;
    v17 = (struct tagMOUSE_PROMOTION_QUEUE *)((char *)&unk_1C0328BC0 + 24 * v13);
    do
    {
      EmptyMousePromotionQueue(v17, v13, v15);
      v17 = (struct tagMOUSE_PROMOTION_QUEUE *)((char *)v17 + 24);
      --v16;
    }
    while ( v16 );
    v4 = a2;
    v12 = v23;
  }
  if ( v20 )
  {
    ProcessDownOnly(v8, a3, v11);
  }
  else
  {
    ProcessRangeInCache(v8, a3, a4, v10, v11);
    if ( !a4 )
    {
      if ( v11 )
        v18 = dword_1C0328CB8 | 4;
      else
        v18 = dword_1C0328CB8 & 0xFFFFFFFB;
      dword_1C0328CB8 = v18 | 2;
    }
  }
  if ( v10 )
  {
    word_1C0328C78 = a1;
    qword_1C0328C70 = gptiCurrent;
    qword_1C0328C7C = v14;
    dword_1C0328C84 = v12;
    dword_1C0328C88 = v11;
  }
  else if ( v4 )
  {
    memset(&qword_1C0328C70, 0, 0x20uLL);
  }
  return 1LL;
}
