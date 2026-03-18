/*
 * XREFs of PointerPromotionOnPointerInputRetrieval @ 0x140136390
 * Callers:
 *     <none>
 * Callees:
 *     ?EmptyMousePromotionQueue@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@@Z @ 0x1401364A0 (-EmptyMousePromotionQueue@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@@Z.c)
 *     ?HasPendingPromotion@@YAHXZ @ 0x1401366C0 (-HasPendingPromotion@@YAHXZ.c)
 *     ?ClearMousePromotionQueueUntil@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@PEAUtagMOUSE_PROMOTION_ENTRY@@@Z @ 0x140136EE8 (-ClearMousePromotionQueueUntil@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@PEAUtagMOUSE_PROMOTION_ENTRY@@@.c)
 */

void __fastcall PointerPromotionOnPointerInputRetrieval(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  unsigned int v6; // r15d
  __int16 v7; // di
  __int64 UserSessionState; // r13
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned int v11; // esi
  __int64 v12; // rdx
  __int64 v13; // rax
  struct tagMOUSE_PROMOTION_QUEUE *v14; // r14
  __int64 *i; // rdi
  __int64 v16; // rsi
  __int64 v17; // rcx
  __int64 v18; // rsi
  struct tagMOUSE_PROMOTION_QUEUE *v19; // rbx

  v6 = a2;
  v7 = a1;
  UserSessionState = W32GetUserSessionState(a1, a2);
  v11 = 0;
  v12 = W32GetUserSessionState(v10, v9);
  while ( v11 < 5 )
  {
    v13 = v12 + 24 * (v11 + 684LL);
    if ( *(_WORD *)v13 == v7 )
    {
      if ( v13 )
      {
        v14 = (struct tagMOUSE_PROMOTION_QUEUE *)(v13 + 8);
        for ( i = *(__int64 **)(v13 + 8); i && (*((_DWORD *)i + 8) > v6 || *((_DWORD *)i + 9) < v6); i = (__int64 *)*i )
          ;
        if ( i )
        {
          i[1] = a3;
          if ( !a4 && !(unsigned int)HasPendingPromotion() )
          {
            v16 = v11 + 1;
            if ( (unsigned int)v16 < 5 )
            {
              v17 = 3 * v16;
              v18 = (unsigned int)(5 - v16);
              v19 = (struct tagMOUSE_PROMOTION_QUEUE *)(UserSessionState + 16424 + 8 * v17);
              do
              {
                EmptyMousePromotionQueue(v19);
                v19 = (struct tagMOUSE_PROMOTION_QUEUE *)((char *)v19 + 24);
                --v18;
              }
              while ( v18 );
            }
            if ( (*((_DWORD *)i + 5) & 0x40004) == 0 )
              ClearMousePromotionQueueUntil(v14, (struct tagMOUSE_PROMOTION_ENTRY *)i);
          }
        }
      }
      return;
    }
    ++v11;
  }
}
