/*
 * XREFs of ?GetBoundsWithEffects@CVisual@@QEBAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x180109F34
 * Callers:
 *     ?GetPolygonNoRef@CVisual@@IEAAJPEAVCMILMatrix@@MW4Enum@MilBitmapBorderMode@@W43MilCompositingMode@@W43MilBitmapInterpolationMode@@_N44PEAPEAVCPolygon@@@Z @ 0x18013846C (-GetPolygonNoRef@CVisual@@IEAAJPEAVCMILMatrix@@MW4Enum@MilBitmapBorderMode@@W43MilCompositingMod.c)
 * Callees:
 *     ?GetBounds@CFilterEffect@@QEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x180014F2C (-GetBounds@CFilterEffect@@QEAAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUni.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ @ 0x18004ED08 (-GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisual::GetBoundsWithEffects(CVisual *a1, __int128 *a2, __int64 a3)
{
  unsigned int v3; // ebx
  struct CEffect *EffectInternal; // rdi
  int Bounds; // eax

  v3 = 0;
  if ( (*(_DWORD *)(*((_QWORD *)a1 + 34) + 4LL) & 0x8000000) != 0 )
  {
    EffectInternal = CVisual::GetEffectInternal(a1);
    if ( (*(unsigned __int8 (__fastcall **)(struct CEffect *, __int64))(*(_QWORD *)EffectInternal + 48LL))(
           EffectInternal,
           9LL) )
    {
      Bounds = CFilterEffect::GetBounds((__int64)EffectInternal, a2, a3);
      v3 = Bounds;
      if ( Bounds < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, Bounds, 0x13C6u);
    }
  }
  return v3;
}
