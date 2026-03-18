/*
 * XREFs of ?IsBackdropInput@CEffectBrush@@QEBA_NI@Z @ 0x18013C1E4
 * Callers:
 *     ?DoesBackdropInputContributeToSubgraph@CEffectBrush@@AEBA_NIPEA_N@Z @ 0x18013B7EC (-DoesBackdropInputContributeToSubgraph@CEffectBrush@@AEBA_NIPEA_N@Z.c)
 *     ?RenderSubgraphs@CEffectBrush@@QEAAJPEAVCDrawingContext@@_KPEAVCVisual@@AEBUCCommonDrawListCacheParameters@@_NPEAVCDrawListCache@@@Z @ 0x18013D4E8 (-RenderSubgraphs@CEffectBrush@@QEAAJPEAVCDrawingContext@@_KPEAVCVisual@@AEBUCCommonDrawListCache.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CEffectBrush::IsBackdropInput(CEffectBrush *this, unsigned int a2)
{
  char v2; // bl
  __int64 v3; // rcx

  v2 = 0;
  v3 = *(_QWORD *)(*((_QWORD *)this + 31) + 8LL * a2);
  if ( v3 )
    return (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 48LL))(v3, 79LL) != 0;
  return v2;
}
