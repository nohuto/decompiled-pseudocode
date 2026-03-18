/*
 * XREFs of ?HasBackdropInput@CEffectBrush@@QEBA_NPEA_N@Z @ 0x18013C050
 * Callers:
 *     ?UpdateRegistrationAsBackdropBlur@CVisual@@QEAAXXZ @ 0x180050A88 (-UpdateRegistrationAsBackdropBlur@CVisual@@QEAAXXZ.c)
 *     ?PostSubgraph@COcclusionContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18005D010 (-PostSubgraph@COcclusionContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PostSubgraph@CPreComputeContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180062110 (-PostSubgraph@CPreComputeContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?DrawBrushEffect@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCEffectBrush@@AEBUD2D_SIZE_F@@@Z @ 0x180121C8C (-DrawBrushEffect@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCEffectBrush@@AEBUD2D_SIZE_F@@@Z.c)
 *     ?RenderSubgraphs@CEffectBrush@@QEAAJPEAVCDrawingContext@@_KPEAVCVisual@@AEBUCCommonDrawListCacheParameters@@_NPEAVCDrawListCache@@@Z @ 0x18013D4E8 (-RenderSubgraphs@CEffectBrush@@QEAAJPEAVCDrawingContext@@_KPEAVCVisual@@AEBUCCommonDrawListCache.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?HasValidTemplate@CEffectBrush@@QEBA_NXZ @ 0x18013C134 (-HasValidTemplate@CEffectBrush@@QEBA_NXZ.c)
 */

char __fastcall CEffectBrush::HasBackdropInput(CEffectBrush *this, bool *a2)
{
  char v4; // r14
  char v5; // r15
  __int64 v6; // rcx
  unsigned int v7; // ebp
  unsigned int v8; // r12d
  __int64 v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // r8

  v4 = 0;
  v5 = 0;
  if ( CEffectBrush::HasValidTemplate(this) )
  {
    v7 = 0;
    v8 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)(v6 + 136) + 128LL) + 32LL))(*(_QWORD *)(*(_QWORD *)(v6 + 136) + 128LL));
    if ( v8 )
    {
      v9 = 0LL;
      while ( 1 )
      {
        v10 = *(_QWORD *)(v9 + *((_QWORD *)this + 31));
        if ( v10 )
        {
          if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v10 + 48LL))(v10, 79LL) )
            break;
        }
        ++v7;
        v9 += 8LL;
        if ( v7 >= v8 )
          goto LABEL_9;
      }
      v4 = 1;
      LOBYTE(v11) = 1;
      v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(*((_QWORD *)this + 17) + 128LL) + 104LL))(
             *(_QWORD *)(*((_QWORD *)this + 17) + 128LL),
             0LL,
             v11);
    }
  }
LABEL_9:
  if ( a2 )
    *a2 = v5;
  return v4;
}
