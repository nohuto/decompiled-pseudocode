/*
 * XREFs of ?ResetMousePromotionInfo@@YAXGG@Z @ 0x1C023236C
 * Callers:
 *     ?HandleLossOfPrimary@@YAHAEAUtagPOINTER_INFO@@@Z @ 0x1C0231D14 (-HandleLossOfPrimary@@YAHAEAUtagPOINTER_INFO@@@Z.c)
 *     ?xxxProcessPointerInputAsMouse@PointerPromotion@@YAXAEBUtagPOINTER_INFO@@GG@Z @ 0x1C023285C (-xxxProcessPointerInputAsMouse@PointerPromotion@@YAXAEBUtagPOINTER_INFO@@GG@Z.c)
 * Callees:
 *     ?EmptyMousePromotionQueue@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@@Z @ 0x1C00ECFE0 (-EmptyMousePromotionQueue@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@@Z.c)
 *     ?ForceCompletePendingPromotion@@YAXXZ @ 0x1C0231C94 (-ForceCompletePendingPromotion@@YAXXZ.c)
 */

void __fastcall ResetMousePromotionInfo(__int16 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdx
  __int64 *v5; // rax
  __int16 *v6; // rax
  __int64 v7; // rcx
  __int64 v8; // xmm1_8

  v3 = 0LL;
  if ( word_1C0328BB0 )
  {
    if ( word_1C0328C90 )
    {
      if ( word_1C0328C18 == word_1C0328C90 )
      {
        v5 = (__int64 *)qword_1C0328C20;
        if ( qword_1C0328C20 )
        {
          while ( v5 != (__int64 *)qword_1C0328C28 )
          {
            if ( *((_DWORD *)v5 + 8) == dword_1C0328C94 )
            {
              ForceCompletePendingPromotion();
              break;
            }
            v5 = (__int64 *)*v5;
            if ( !v5 )
              break;
          }
        }
      }
    }
    EmptyMousePromotionQueue((struct tagMOUSE_PROMOTION_QUEUE *)&qword_1C0328C20, v3, a3);
    v6 = &word_1C0328C18;
    v7 = 4LL;
    do
    {
      v8 = *((_QWORD *)v6 - 1);
      *(_OWORD *)v6 = *(_OWORD *)(v6 - 12);
      *((_QWORD *)v6 + 2) = v8;
      v6 -= 12;
      --v7;
    }
    while ( v7 );
    unk_1C0328BC0 = 0LL;
  }
  word_1C0328BB0 = a1;
  word_1C0328BB8[0] = a1;
}
