/*
 * XREFs of ?IsReadyToDraw@CEffectBrush@@QEBA_N_N@Z @ 0x18013C254
 * Callers:
 *     ?Draw@CEffectBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18013B900 (-Draw@CEffectBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRectF@@U.c)
 *     ?IsReadyToDraw@CEffectBrush@@UEBA_NXZ @ 0x18013C370 (-IsReadyToDraw@CEffectBrush@@UEBA_NXZ.c)
 *     ?PrepareForDrawing@CEffectBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x18013C520 (-PrepareForDrawing@CEffectBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 *     ?RenderSubgraphs@CEffectBrush@@QEAAJPEAVCDrawingContext@@_KPEAVCVisual@@AEBUCCommonDrawListCacheParameters@@_NPEAVCDrawListCache@@@Z @ 0x18013D4E8 (-RenderSubgraphs@CEffectBrush@@QEAAJPEAVCDrawingContext@@_KPEAVCVisual@@AEBUCCommonDrawListCache.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?HasValidTemplate@CEffectBrush@@QEBA_NXZ @ 0x18013C134 (-HasValidTemplate@CEffectBrush@@QEBA_NXZ.c)
 *     ?GetCompiledEffectNoRef@CCompiledEffectTemplate@@QEBAPEBUICompiledEffect@Composition@UI@Windows@@XZ @ 0x18014E3A0 (-GetCompiledEffectNoRef@CCompiledEffectTemplate@@QEBAPEBUICompiledEffect@Composition@UI@Windows@.c)
 */

char __fastcall CEffectBrush::IsReadyToDraw(CEffectBrush *this, char a2)
{
  __int64 v4; // rcx
  int v5; // esi
  unsigned int v6; // ebp
  __int64 i; // rdi
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx

  if ( CEffectBrush::HasValidTemplate(this)
    && CCompiledEffectTemplate::GetCompiledEffectNoRef(*(CCompiledEffectTemplate **)(v4 + 136)) )
  {
    v5 = 0;
    v6 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)this + 17) + 128LL) + 32LL))(*(_QWORD *)(*((_QWORD *)this + 17) + 128LL));
    if ( !v6 )
      return 1;
    for ( i = 0LL; ; i += 8LL )
    {
      v8 = *(_QWORD *)(i + *((_QWORD *)this + 31));
      if ( v8 )
      {
        if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v8 + 176LL))(v8) )
          return 0;
      }
      else if ( !a2 )
      {
        return 0;
      }
      v9 = *(_QWORD *)(i + *((_QWORD *)this + 31));
      if ( v9 )
      {
        if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 48LL))(v9, 84LL) )
        {
          v10 = *(_QWORD *)(*(_QWORD *)(i + *((_QWORD *)this + 31)) + 128LL);
          if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v10 + 48LL))(v10, 80LL) )
            break;
        }
      }
      if ( ++v5 >= v6 )
        return 1;
    }
  }
  return 0;
}
