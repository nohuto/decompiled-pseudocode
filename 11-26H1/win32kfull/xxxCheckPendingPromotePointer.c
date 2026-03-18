/*
 * XREFs of xxxCheckPendingPromotePointer @ 0x140135CB0
 * Callers:
 *     xxxRealInternalGetMessage @ 0x140057CC8 (xxxRealInternalGetMessage.c)
 * Callees:
 *     ?xxxProcessMousePromotionQueue@@YAXXZ @ 0x140134570 (-xxxProcessMousePromotionQueue@@YAXXZ.c)
 *     ?MarkPendingPromotion@PointerPromotion@@YAXPEAUtagTHREADINFO@@G@Z @ 0x140135D58 (-MarkPendingPromotion@PointerPromotion@@YAXPEAUtagTHREADINFO@@G@Z.c)
 *     ?ForceCompletePendingPromotion@@YAXXZ @ 0x1402CBEA4 (-ForceCompletePendingPromotion@@YAXXZ.c)
 */

void __fastcall xxxCheckPendingPromotePointer(PointerPromotion *this, __int64 a2, unsigned __int16 a3)
{
  __int64 UserSessionState; // rsi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx

  if ( *((_DWORD *)this + 310) )
  {
    UserSessionState = W32GetUserSessionState(this, a2);
    if ( *(_WORD *)(W32GetUserSessionState(v7, v6) + 16632)
      && *(PointerPromotion **)(UserSessionState + 16640) == this
      && *(_DWORD *)(UserSessionState + 16636) == *((_DWORD *)this + 310) )
    {
      ForceCompletePendingPromotion();
      xxxProcessMousePromotionQueue(v9, v8);
    }
    else
    {
      *((_DWORD *)this + 310) = 0;
    }
  }
  if ( *(_DWORD *)(a2 + 8) == 583 )
  {
    if ( _bittest16((const signed __int16 *)(a2 + 18), 0xDu) )
      PointerPromotion::MarkPendingPromotion(this, (struct tagTHREADINFO *)*(unsigned __int16 *)(a2 + 16), a3);
  }
}
