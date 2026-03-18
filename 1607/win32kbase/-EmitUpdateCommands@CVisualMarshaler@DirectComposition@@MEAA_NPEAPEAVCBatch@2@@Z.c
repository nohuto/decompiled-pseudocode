/*
 * XREFs of ?EmitUpdateCommands@CVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0044290
 * Callers:
 *     ?EmitUpdateCommands@CHostVisualMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0004220 (-EmitUpdateCommands@CHostVisualMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CSpriteVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00EAF30 (-EmitUpdateCommands@CSpriteVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EmitOpacity@CVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0042BEC (-EmitOpacity@CVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitOptions@CVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0042C54 (-EmitOptions@CVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitRenderOptions@CVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0042CD4 (-EmitRenderOptions@CVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitInteraction@CVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0042DD4 (-EmitInteraction@CVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitContent@CVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0042E48 (-EmitContent@CVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitClip@CVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0042EBC (-EmitClip@CVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitEffect@CVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0042F30 (-EmitEffect@CVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitTransformParent@CVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0042FA0 (-EmitTransformParent@CVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitTransform@CVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C004302C (-EmitTransform@CVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitRelativeSize@CVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00430A0 (-EmitRelativeSize@CVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitRelativeOffset@CVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0043120 (-EmitRelativeOffset@CVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSize@CVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00431A0 (-EmitSize@CVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitOffset@CVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C004321C (-EmitOffset@CVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitRemoveAllChildren@CVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00432B0 (-EmitRemoveAllChildren@CVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitInsertChildren@CVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C004330C (-EmitInsertChildren@CVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitPendingRemoves@CVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00433C8 (-EmitPendingRemoves@CVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0044720 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?EmitUpdateCommands@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C004479C (-EmitUpdateCommands@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ??$EmitUpdateCommand@UMILCMD_VISUAL_SETTREEEFFECT@@V_lambda_a544e32b2e06f76f338d0d414fc3b7bd_@@@CResourceMarshaler@DirectComposition@@KA_NPEAPEAVCBatch@1@AEBV_lambda_a544e32b2e06f76f338d0d414fc3b7bd_@@@Z @ 0x1C00E6394 (--$EmitUpdateCommand@UMILCMD_VISUAL_SETTREEEFFECT@@V_lambda_a544e32b2e06f76f338d0d414fc3b7bd_@@@.c)
 */

char __fastcall DirectComposition::CVisualMarshaler::EmitUpdateCommands(
        DirectComposition::CVisualMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // si
  bool v5; // zf
  char *v7; // rcx
  char *v8; // rcx
  void *v9; // [rsp+40h] [rbp+18h] BYREF

  if ( !DirectComposition::CPropertyChangeResourceMarshaler::EmitUpdateCommands(this, a2)
    || !DirectComposition::CVisualMarshaler::EmitPendingRemoves(this, a2)
    || !DirectComposition::CVisualMarshaler::EmitRemoveAllChildren(this, a2)
    || !DirectComposition::CVisualMarshaler::EmitInsertChildren(this, a2)
    || !DirectComposition::CVisualMarshaler::EmitOffset(this, a2)
    || !DirectComposition::CVisualMarshaler::EmitSize(this, a2)
    || !DirectComposition::CVisualMarshaler::EmitRelativeOffset(this, a2)
    || !DirectComposition::CVisualMarshaler::EmitRelativeSize(this, a2)
    || !DirectComposition::CVisualMarshaler::EmitTransform(this, a2)
    || !DirectComposition::CVisualMarshaler::EmitTransformParent(this, a2)
    || !DirectComposition::CVisualMarshaler::EmitEffect(this, a2)
    || !DirectComposition::CVisualMarshaler::EmitClip(this, a2)
    || !DirectComposition::CVisualMarshaler::EmitContent(this, a2)
    || !DirectComposition::CVisualMarshaler::EmitRenderOptions(this, a2)
    || !DirectComposition::CVisualMarshaler::EmitOptions(this, a2) )
  {
    return 0;
  }
  v4 = 1;
  if ( (*((_DWORD *)this + 4) & 0x40000) != 0 )
  {
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v9) )
      return 0;
    v7 = (char *)v9;
    *(_DWORD *)v9 = 16;
    *(_QWORD *)(v7 + 4) = 0LL;
    *((_DWORD *)v7 + 3) = 0;
    *((_DWORD *)v7 + 1) = 62;
    *((_DWORD *)v7 + 2) = *((_DWORD *)this + 6);
    *((_DWORD *)v7 + 3) = (*((unsigned __int8 *)this + 232) >> 1) & 1;
    *((_DWORD *)this + 4) &= ~0x40000u;
  }
  if ( (*((_DWORD *)this + 4) & 0x20000) != 0 )
  {
    if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x20uLL, &v9) )
    {
      v8 = (char *)v9;
      *(_DWORD *)v9 = 32;
      *(_QWORD *)(v8 + 4) = 0LL;
      *(_QWORD *)(v8 + 12) = 0LL;
      *(_QWORD *)(v8 + 20) = 0LL;
      *((_DWORD *)v8 + 7) = 0;
      *((_DWORD *)v8 + 1) = 61;
      *((_DWORD *)v8 + 2) = *((_DWORD *)this + 6);
      *((_DWORD *)v8 + 7) = *((_BYTE *)this + 232) & 1;
      *(__m128i *)(v8 + 12) = _mm_loadu_si128((const __m128i *)((char *)this + 216));
      *((_DWORD *)this + 4) &= ~0x20000u;
      goto LABEL_18;
    }
    return 0;
  }
LABEL_18:
  if ( !DirectComposition::CVisualMarshaler::EmitInteraction(this, a2)
    || !DirectComposition::CVisualMarshaler::EmitOpacity(this, a2) )
  {
    return 0;
  }
  v5 = (*((_DWORD *)this + 4) & 0x1000000) == 0;
  v9 = this;
  if ( !v5 )
  {
    if ( (unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand<MILCMD_VISUAL_SETTREEEFFECT,_lambda_a544e32b2e06f76f338d0d414fc3b7bd_>(
                            a2,
                            &v9) )
    {
      *((_DWORD *)this + 4) &= ~0x1000000u;
      return v4;
    }
    return 0;
  }
  return v4;
}
