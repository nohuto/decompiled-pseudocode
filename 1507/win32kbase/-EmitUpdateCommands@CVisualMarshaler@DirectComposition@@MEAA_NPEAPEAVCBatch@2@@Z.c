/*
 * XREFs of ?EmitUpdateCommands@CVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C002A520
 * Callers:
 *     ?EmitUpdateCommands@CHostVisualMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0003330 (-EmitUpdateCommands@CHostVisualMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EmitOptions@CVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00297A0 (-EmitOptions@CVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitRenderOptions@CVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0029820 (-EmitRenderOptions@CVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitInteraction@CVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0029930 (-EmitInteraction@CVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitContent@CVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00299A4 (-EmitContent@CVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitClip@CVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0029A18 (-EmitClip@CVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitEffect@CVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0029A88 (-EmitEffect@CVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitTransformParent@CVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0029AF8 (-EmitTransformParent@CVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitTransform@CVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0029B74 (-EmitTransform@CVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitRelativeSize@CVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0029BE8 (-EmitRelativeSize@CVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitRelativeOffset@CVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0029C68 (-EmitRelativeOffset@CVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSize@CVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0029CE8 (-EmitSize@CVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitOffset@CVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0029D68 (-EmitOffset@CVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitRemoveAllChildren@CVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0029E00 (-EmitRemoveAllChildren@CVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitInsertChildren@CVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0029E5C (-EmitInsertChildren@CVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitPendingRemoves@CVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0029F0C (-EmitPendingRemoves@CVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C002AC84 (-EmitUpdateCommands@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C002BAC0 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CVisualMarshaler::EmitUpdateCommands(
        __m128i *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // si
  char *v6; // rcx
  char *v7; // rcx
  char *v8; // rcx
  void *v9; // [rsp+40h] [rbp+18h] BYREF

  if ( !DirectComposition::CPropertyChangeResourceMarshaler::EmitUpdateCommands(
          (DirectComposition::CPropertyChangeResourceMarshaler *)this,
          a2)
    || !DirectComposition::CVisualMarshaler::EmitPendingRemoves((DirectComposition::CVisualMarshaler *)this, a2)
    || !DirectComposition::CVisualMarshaler::EmitRemoveAllChildren((DirectComposition::CVisualMarshaler *)this, a2)
    || !DirectComposition::CVisualMarshaler::EmitInsertChildren((DirectComposition::CVisualMarshaler *)this, a2)
    || !DirectComposition::CVisualMarshaler::EmitOffset((DirectComposition::CVisualMarshaler *)this, a2)
    || !DirectComposition::CVisualMarshaler::EmitSize((DirectComposition::CVisualMarshaler *)this, a2)
    || !DirectComposition::CVisualMarshaler::EmitRelativeOffset((DirectComposition::CVisualMarshaler *)this, a2)
    || !DirectComposition::CVisualMarshaler::EmitRelativeSize((DirectComposition::CVisualMarshaler *)this, a2)
    || !DirectComposition::CVisualMarshaler::EmitTransform((DirectComposition::CVisualMarshaler *)this, a2)
    || !DirectComposition::CVisualMarshaler::EmitTransformParent((DirectComposition::CVisualMarshaler *)this, a2)
    || !DirectComposition::CVisualMarshaler::EmitEffect((DirectComposition::CVisualMarshaler *)this, a2)
    || !DirectComposition::CVisualMarshaler::EmitClip((DirectComposition::CVisualMarshaler *)this, a2)
    || !DirectComposition::CVisualMarshaler::EmitContent((DirectComposition::CVisualMarshaler *)this, a2)
    || !DirectComposition::CVisualMarshaler::EmitRenderOptions((DirectComposition::CVisualMarshaler *)this, a2)
    || !DirectComposition::CVisualMarshaler::EmitOptions((DirectComposition::CVisualMarshaler *)this, a2) )
  {
    return 0;
  }
  v4 = 1;
  if ( (this[1].m128i_i32[0] & 0x100000) != 0 )
  {
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v9) )
      return 0;
    v6 = (char *)v9;
    *(_DWORD *)v9 = 16;
    *(_QWORD *)(v6 + 4) = 0LL;
    *((_DWORD *)v6 + 3) = 0;
    *((_DWORD *)v6 + 1) = 62;
    *((_DWORD *)v6 + 2) = this[1].m128i_i32[2];
    *((_DWORD *)v6 + 3) = (this[14].m128i_u8[4] >> 1) & 1;
    this[1].m128i_i32[0] &= ~0x100000u;
  }
  if ( (this[1].m128i_i32[0] & 0x80000) != 0 )
  {
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x20uLL, &v9) )
      return 0;
    v7 = (char *)v9;
    *(_DWORD *)v9 = 32;
    *(_QWORD *)(v7 + 4) = 0LL;
    *(_QWORD *)(v7 + 12) = 0LL;
    *(_QWORD *)(v7 + 20) = 0LL;
    *((_DWORD *)v7 + 7) = 0;
    *((_DWORD *)v7 + 1) = 61;
    *((_DWORD *)v7 + 2) = this[1].m128i_i32[2];
    *((_DWORD *)v7 + 7) = this[14].m128i_i8[4] & 1;
    *(__m128i *)(v7 + 12) = _mm_loadu_si128(this + 13);
    this[1].m128i_i32[0] &= ~0x80000u;
  }
  if ( !DirectComposition::CVisualMarshaler::EmitInteraction((DirectComposition::CVisualMarshaler *)this, a2) )
    return 0;
  if ( (this[1].m128i_i32[0] & 0x800000) != 0 )
  {
    if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v9) )
    {
      v8 = (char *)v9;
      *(_DWORD *)v9 = 16;
      *(_QWORD *)(v8 + 4) = 0LL;
      *((_DWORD *)v8 + 3) = 0;
      *((_DWORD *)v8 + 1) = 65;
      *((_DWORD *)v8 + 2) = this[1].m128i_i32[2];
      *((_DWORD *)v8 + 3) = this[5].m128i_i32[3];
      this[1].m128i_i32[0] &= ~0x800000u;
      return v4;
    }
    return 0;
  }
  return v4;
}
