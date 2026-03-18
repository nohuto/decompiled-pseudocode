/*
 * XREFs of ?OfferAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@W4_D3DKMT_OFFER_PRIORITY@@U_D3DKMT_OFFER_FLAGS@@@Z @ 0x1C00509A8
 * Callers:
 *     ?VidMmOfferAllocation@@YAJPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@W4_D3DKMT_OFFER_PRIORITY@@U_D3DKMT_OFFER_FLAGS@@@Z @ 0x1C000E2E0 (-VidMmOfferAllocation@@YAJPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@W4_D3DKMT_OFFER_PRIORITY@@U_.c)
 * Callees:
 *     ?OfferOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_D3DKMT_OFFER_PRIORITY@@U_D3DKMT_OFFER_FLAGS@@@Z @ 0x1C00509D0 (-OfferOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_D3DKMT_OFFER_PRIORITY@@U_D3DKMT_OFFER.c)
 */

__int64 __fastcall VIDMM_GLOBAL::OfferAllocation(
        VIDMM_GLOBAL *this,
        struct _VIDMM_MULTI_ALLOC *a2,
        enum _D3DKMT_OFFER_PRIORITY a3,
        struct _D3DKMT_OFFER_FLAGS a4)
{
  __int64 result; // rax

  result = (unsigned int)dword_1C00273A8;
  if ( dword_1C00273A8 != -1 )
  {
LABEL_4:
    if ( !(_DWORD)result )
      return result;
    return VIDMM_GLOBAL::OfferOneAllocation(this, a2, a3, a4);
  }
  if ( *((_DWORD *)this + 8) < 0x5022u )
  {
    result = 0LL;
    goto LABEL_4;
  }
  return VIDMM_GLOBAL::OfferOneAllocation(this, a2, a3, a4);
}
