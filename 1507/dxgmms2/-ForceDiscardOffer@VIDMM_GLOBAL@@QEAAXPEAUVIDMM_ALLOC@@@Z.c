/*
 * XREFs of ?ForceDiscardOffer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C004D95C
 * Callers:
 *     ?OfferOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_D3DKMT_OFFER_PRIORITY@@U_D3DKMT_OFFER_FLAGS@@@Z @ 0x1C00509D0 (-OfferOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_D3DKMT_OFFER_PRIORITY@@U_D3DKMT_OFFER.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0005B60 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0005BE8 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     memset @ 0x1C0008500 (memset.c)
 *     ?WaitForFences@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1@Z @ 0x1C0035A78 (-WaitForFences@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1@Z.c)
 *     ?DiscardOfferedAllocation@VIDMM_GLOBAL@@QEAAHPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C004CB80 (-DiscardOfferedAllocation@VIDMM_GLOBAL@@QEAAHPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_NPEA_K@Z @ 0x1C00518BC (-QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_N.c)
 */

void __fastcall VIDMM_GLOBAL::ForceDiscardOffer(VIDMM_GLOBAL *this, __int64 **a2)
{
  __int64 v4; // rbx
  struct _VIDSCH_SYNC_OBJECT **v5; // rdi
  VIDMM_GLOBAL *v6; // rcx
  unsigned __int64 v7; // rsi
  int v8; // r14d
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  _QWORD v13[10]; // [rsp+30h] [rbp-50h] BYREF
  unsigned __int64 v14; // [rsp+B8h] [rbp+38h] BYREF
  struct _VIDSCH_SYNC_OBJECT *v15; // [rsp+C0h] [rbp+40h] BYREF

  v4 = **a2;
  v5 = (struct _VIDSCH_SYNC_OBJECT **)(a2[1][9] + 152LL * (*(_DWORD *)(v4 + 76) & 0x3F));
  DXGFASTMUTEX::Acquire(*(DXGFASTMUTEX **)(v4 + 312));
  v7 = 0LL;
  v8 = 0;
  v14 = 0LL;
  if ( *(_QWORD *)(v4 + 128) )
  {
    memset(v13, 0, sizeof(v13));
    v13[1] = a2[1];
    LODWORD(v13[0]) = 211;
    v13[4] = v4;
    v9 = VIDMM_GLOBAL::QueueDeferredCommand(
           this,
           (struct VIDMM_PAGING_QUEUE *)v5,
           (struct _VIDMM_DEFERRED_COMMAND *)v13,
           0,
           &v14);
    v7 = v14;
    v8 = v9;
  }
  else
  {
    VIDMM_GLOBAL::DiscardOfferedAllocation(v6, (struct _VIDMM_GLOBAL_ALLOC *)v4);
  }
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v4 + 312), v10, v11, v12);
  if ( v8 == 259 )
  {
    v15 = v5[11];
    v14 = v7;
    VIDMM_GLOBAL::WaitForFences(this, &v15, (char *)&v14, 1u, 0LL);
  }
}
