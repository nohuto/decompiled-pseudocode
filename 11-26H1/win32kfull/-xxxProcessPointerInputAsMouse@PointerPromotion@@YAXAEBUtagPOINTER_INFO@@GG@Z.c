/*
 * XREFs of ?xxxProcessPointerInputAsMouse@PointerPromotion@@YAXAEBUtagPOINTER_INFO@@GG@Z @ 0x140134268
 * Callers:
 *     EditionProcessPointerInputAsMouse @ 0x140134250 (EditionProcessPointerInputAsMouse.c)
 * Callees:
 *     GetAppCompatFlags2QuadWord @ 0x1400A8130 (GetAppCompatFlags2QuadWord.c)
 *     ?xxxProcessMousePromotionQueue@@YAXXZ @ 0x140134570 (-xxxProcessMousePromotionQueue@@YAXXZ.c)
 *     ?PromoteToMouse@Pointer@InputTraceLogging@@SAXKGKG@Z @ 0x140134864 (-PromoteToMouse@Pointer@InputTraceLogging@@SAXKGKG@Z.c)
 *     ?CoalesceMousePromotionEntry@@YAHAEBUtagPOINTER_INFO@@G@Z @ 0x1401348EC (-CoalesceMousePromotionEntry@@YAHAEBUtagPOINTER_INFO@@G@Z.c)
 *     ?CreateMousePromotionEntry@@YAPEAUtagMOUSE_PROMOTION_ENTRY@@AEBUtagPOINTER_INFO@@GG@Z @ 0x1401349D0 (-CreateMousePromotionEntry@@YAPEAUtagMOUSE_PROMOTION_ENTRY@@AEBUtagPOINTER_INFO@@GG@Z.c)
 *     ?QueueMousePromotionEntry@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@PEAUtagMOUSE_PROMOTION_ENTRY@@@Z @ 0x140134A38 (-QueueMousePromotionEntry@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@PEAUtagMOUSE_PROMOTION_ENTRY@@@Z.c)
 *     ?xxxPromotePointer@PointerPromotion@@YAHGKK@Z @ 0x140134C48 (-xxxPromotePointer@PointerPromotion@@YAHGKK@Z.c)
 *     ?ResetMousePromotionInfo@@YAXGG@Z @ 0x140137DF4 (-ResetMousePromotionInfo@@YAXGG@Z.c)
 *     ?DetectPromotionType@@YAKPEBUtagMOUSE_PROMOTION_ENTRY@@0@Z @ 0x140258E74 (-DetectPromotionType@@YAKPEBUtagMOUSE_PROMOTION_ENTRY@@0@Z.c)
 *     ?HandleLossOfPrimary@@YAHAEAUtagPOINTER_INFO@@@Z @ 0x1402969C0 (-HandleLossOfPrimary@@YAHAEAUtagPOINTER_INFO@@@Z.c)
 *     ?CancelAutoPromotion@@YAXXZ @ 0x1402CBDAC (-CancelAutoPromotion@@YAXXZ.c)
 */

void __fastcall PointerPromotion::xxxProcessPointerInputAsMouse(
        PointerPromotion *this,
        const struct tagPOINTER_INFO *a2,
        unsigned __int16 a3)
{
  unsigned __int16 v4; // r12
  __int128 v5; // xmm1
  struct tagMOUSE_PROMOTION_ENTRY *MousePromotionEntry; // rbx
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int64 v10; // rdi
  unsigned __int16 v11; // si
  __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned __int16 v14; // ax
  __int64 v15; // rdx
  __int64 v16; // rcx
  int v17; // r15d
  __int64 v18; // r14
  int v19; // esi
  __int64 v20; // rdx
  __int64 v21; // rcx
  int v22; // ebx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rax
  unsigned int v30; // r9d
  unsigned int v31; // r8d
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rax
  unsigned __int16 v35; // dx
  __int64 UserSessionState; // rax
  __int64 v37; // rax
  unsigned int v38; // eax
  unsigned __int16 v39[8]; // [rsp+38h] [rbp-19h] BYREF
  __int128 v40; // [rsp+48h] [rbp-9h]
  __int128 v41; // [rsp+58h] [rbp+7h]
  __int128 v42; // [rsp+68h] [rbp+17h]
  __int128 v43; // [rsp+78h] [rbp+27h]
  __int128 v44; // [rsp+88h] [rbp+37h]

  v4 = (unsigned __int16)a2;
  v5 = *((_OWORD *)this + 2);
  MousePromotionEntry = 0LL;
  *(_OWORD *)v39 = *(_OWORD *)this;
  v7 = *((_OWORD *)this + 1);
  v41 = v5;
  v8 = *((_OWORD *)this + 4);
  v40 = v7;
  v9 = *((_OWORD *)this + 3);
  v43 = v8;
  v42 = v9;
  v44 = *((_OWORD *)this + 5);
  v10 = W32GetUserSessionState(this, a2) + 16408;
  v11 = _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)v39, 4));
  InputTraceLogging::Pointer::PromoteToMouse(_mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)v39, 8)), v11, 0, a3);
  v14 = _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)v39, 12));
  if ( (v14 & 0x2000) == 0 )
  {
    if ( !(unsigned int)HandleLossOfPrimary((struct tagPOINTER_INFO *)v39) )
      goto LABEL_8;
    v14 = v39[6];
    v11 = v39[2];
  }
  if ( (v14 & 0x8000) != 0 )
  {
    UserSessionState = W32GetUserSessionState(v13, v12);
    *(_DWORD *)(UserSessionState + 16672) &= ~8u;
  }
  if ( v11 != *(_WORD *)v10 || (a3 & 0x10) != 0 )
  {
    v32 = *(unsigned int *)(W32GetUserSessionState(v13, v12) + 16672);
    if ( (v32 & 2) != 0 )
      CancelAutoPromotion();
    v34 = W32GetUserSessionState(v33, v32);
    *(_DWORD *)(v34 + 16672) &= ~8u;
    ResetMousePromotionInfo(v11, v35);
  }
  v17 = CoalesceMousePromotionEntry((const struct tagPOINTER_INFO *)v39, a3);
  if ( v17 || (MousePromotionEntry = CreateMousePromotionEntry((const struct tagPOINTER_INFO *)v39, v4, a3)) != 0LL )
  {
    v18 = *((_QWORD *)&v40 + 1);
    v19 = *(_DWORD *)&v39[4];
    *(_QWORD *)(v10 + 248) = *((_QWORD *)&v40 + 1);
    *(_DWORD *)(v10 + 4) = v19;
    if ( MousePromotionEntry )
    {
      v24 = *(unsigned int *)(W32GetUserSessionState(v16, v15) + 16672);
      if ( (v24 & 2) != 0 )
      {
        if ( (*(_DWORD *)(v10 + 264) & 4) != 0 )
          *((_DWORD *)MousePromotionEntry + 11) &= ~1u;
        if ( (*(_DWORD *)(v10 + 264) & 0x10) != 0 )
          *((_DWORD *)MousePromotionEntry + 11) |= 0x40u;
        QueueMousePromotionEntry((struct tagMOUSE_PROMOTION_QUEUE *)(v10 + 128), MousePromotionEntry);
        if ( (*((_DWORD *)MousePromotionEntry + 5) & 0x40000) != 0 )
        {
          v28 = W32GetUserSessionState(v27, v26);
          *(_DWORD *)(v28 + 16672) &= 0xFFFFFFE9;
        }
        goto LABEL_8;
      }
      v25 = W32GetUserSessionState(v24, v23);
      QueueMousePromotionEntry((struct tagMOUSE_PROMOTION_QUEUE *)(v25 + 16424), MousePromotionEntry);
    }
    if ( !v17 && !MousePromotionEntry )
      goto LABEL_8;
    v21 = *(unsigned int *)(W32GetUserSessionState(v16, v15) + 16672);
    if ( (v21 & 8) != 0 )
    {
      v37 = W32GetUserSessionState(v21, v20);
      v38 = DetectPromotionType(0LL, *(const struct tagMOUSE_PROMOTION_ENTRY **)(v37 + 16432));
      if ( v38 == 0x10000000 )
        goto LABEL_8;
      v31 = v38;
    }
    else
    {
      if ( (*(_DWORD *)&v39[6] & 0x10000) != 0 )
      {
        v22 = 0x10000000;
      }
      else
      {
        if ( (*(_DWORD *)&v39[6] & 0x40004) != 0 )
          goto LABEL_8;
        v22 = 0;
      }
      v29 = ValidateHwnd(v18);
      if ( !v29 || (GetAppCompatFlags2QuadWord(*(_QWORD *)(v29 + 16)) & 0x40000000000LL) == 0 )
        goto LABEL_8;
      v31 = v22;
    }
    PointerPromotion::xxxPromotePointer((PointerPromotion *)v39[2], v19, v31, v30);
  }
LABEL_8:
  xxxProcessMousePromotionQueue();
}
