/*
 * XREFs of ?xxxPromotePointer@PointerPromotion@@YAHGKK@Z @ 0x140134C48
 * Callers:
 *     ?xxxProcessPointerInputAsMouse@PointerPromotion@@YAXAEBUtagPOINTER_INFO@@GG@Z @ 0x140134268 (-xxxProcessPointerInputAsMouse@PointerPromotion@@YAXAEBUtagPOINTER_INFO@@GG@Z.c)
 *     EditionPromotePointer @ 0x140134C30 (EditionPromotePointer.c)
 * Callees:
 *     ?xxxProcessMousePromotionQueue@@YAXXZ @ 0x140134570 (-xxxProcessMousePromotionQueue@@YAXXZ.c)
 *     ?PromoteToMouse@Pointer@InputTraceLogging@@SAXKGKG@Z @ 0x140134864 (-PromoteToMouse@Pointer@InputTraceLogging@@SAXKGKG@Z.c)
 *     ?PromotePointerInternal@@YAHGKPEAUtagMOUSE_PROMOTION_ENTRY@@0@Z @ 0x140135DBC (-PromotePointerInternal@@YAHGKPEAUtagMOUSE_PROMOTION_ENTRY@@0@Z.c)
 *     ?HasPendingPromotion@@YAHXZ @ 0x1401366C0 (-HasPendingPromotion@@YAHXZ.c)
 *     ?ValidatePointerPromotion@@YAHGKPEAKPEAPEAUtagMOUSE_PROMOTION_ENTRY@@1@Z @ 0x1401366EC (-ValidatePointerPromotion@@YAHGKPEAKPEAPEAUtagMOUSE_PROMOTION_ENTRY@@1@Z.c)
 *     ?ForceCompletePendingPromotion@@YAXXZ @ 0x1402CBEA4 (-ForceCompletePendingPromotion@@YAXXZ.c)
 */

__int64 __fastcall PointerPromotion::xxxPromotePointer(PointerPromotion *this, unsigned int a2, __int64 a3)
{
  unsigned __int16 v4; // di
  unsigned int v5; // r15d
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 UserSessionState; // rsi
  __int64 v9; // rdx
  __int64 v10; // rcx
  struct tagMOUSE_PROMOTION_ENTRY *v11; // rbx
  __int64 v12; // rdx
  unsigned int v13; // ebx
  __int64 v14; // rdx
  __int64 v15; // rcx
  int v17; // r14d
  __int64 v18; // rax
  unsigned int v19; // ecx
  int v20; // r8d
  __int64 v21; // rax
  struct tagMOUSE_PROMOTION_ENTRY *v22[2]; // [rsp+30h] [rbp-10h] BYREF
  unsigned int v23; // [rsp+80h] [rbp+40h] BYREF
  struct tagMOUSE_PROMOTION_ENTRY *v24; // [rsp+88h] [rbp+48h] BYREF

  v24 = 0LL;
  v22[0] = 0LL;
  v4 = (unsigned __int16)this;
  v23 = a3;
  v5 = a3;
  InputTraceLogging::Pointer::PromoteToMouse(a2, (__int16)this, a3, 0LL);
  if ( !ValidatePointerPromotion(v4, a2, &v23, &v24, v22) )
    return 0LL;
  UserSessionState = W32GetUserSessionState(v7, v6);
  if ( !(unsigned int)HasPendingPromotion() )
  {
LABEL_3:
    v11 = v24;
    v12 = v23;
    goto LABEL_4;
  }
  v11 = v24;
  v17 = *((_DWORD *)v24 + 8);
  v18 = W32GetUserSessionState(v10, v9);
  if ( *(_WORD *)(v18 + 16632) != v4 || *(_DWORD *)(v18 + 16636) != v17 )
  {
    ForceCompletePendingPromotion();
    v23 = v5;
    if ( ValidatePointerPromotion(v4, a2, &v23, &v24, v22) )
      goto LABEL_3;
    return 0LL;
  }
  LOBYTE(v19) = v23;
  v20 = *(_DWORD *)(UserSessionState + 16648);
  if ( (v23 & 0x80000) == 0 )
  {
    v10 = v23 & 0xFFFF00;
    v12 = (unsigned int)v10 | ((v20 != 0) + 1) | (*(_DWORD *)(UserSessionState + 16652) != 0 ? 50331648 : 0x1000000);
LABEL_4:
    if ( (_DWORD)v12 == 0x10000000 )
    {
      v21 = W32GetUserSessionState(v10, v12);
      *(_DWORD *)(v21 + 16672) |= 8u;
      return 1LL;
    }
    else
    {
      v13 = PromotePointerInternal(v4, v12, v11, v22[0]);
      xxxProcessMousePromotionQueue(v15, v14);
      return v13;
    }
  }
  if ( v20 )
    v19 = v23 >> 1;
  return v19 & 1;
}
