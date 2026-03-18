/*
 * XREFs of ?OfferAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@W4_D3DKMT_OFFER_PRIORITY@@U_D3DKMT_OFFER_FLAGS@@@Z @ 0x1C0051A40
 * Callers:
 *     ?VidMmOfferAllocation@@YAJPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@W4_D3DKMT_OFFER_PRIORITY@@U_D3DKMT_OFFER_FLAGS@@@Z @ 0x1C0011940 (-VidMmOfferAllocation@@YAJPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@W4_D3DKMT_OFFER_PRIORITY@@U_.c)
 * Callees:
 *     ?OfferOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_D3DKMT_OFFER_PRIORITY@@U_D3DKMT_OFFER_FLAGS@@@Z @ 0x1C004CF30 (-OfferOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_D3DKMT_OFFER_PRIORITY@@U_D3DKMT_OFFER.c)
 */

__int64 __fastcall VIDMM_GLOBAL::OfferAllocation(
        struct DXGADAPTER **this,
        __int64 **a2,
        enum _D3DKMT_OFFER_PRIORITY a3,
        struct _D3DKMT_OFFER_FLAGS a4)
{
  int v4; // eax

  v4 = dword_1C002F3D0;
  if ( dword_1C002F3D0 == -1 )
  {
    if ( *((_DWORD *)this + 8) >= 0x5022u )
      return VIDMM_GLOBAL::OfferOneAllocation(this, a2, a3, a4);
    v4 = 0;
  }
  if ( v4 )
    return VIDMM_GLOBAL::OfferOneAllocation(this, a2, a3, a4);
  return 0LL;
}
