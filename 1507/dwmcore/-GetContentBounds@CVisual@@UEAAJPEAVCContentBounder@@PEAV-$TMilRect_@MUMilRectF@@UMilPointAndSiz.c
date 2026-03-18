/*
 * XREFs of ?GetContentBounds@CVisual@@UEAAJPEAVCContentBounder@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800369A0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetBounds@CRenderData@@UEAAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18004F2B0 (-GetBounds@CRenderData@@UEAAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UM.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetBounds@CPrimitiveGroup@@UEAAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18006E1B0 (-GetBounds@CPrimitiveGroup@@UEAAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CVisual::GetContentBounds(__int64 a1, __int64 a2, _DWORD *a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rsi
  __int64 (__fastcall *v6)(CRenderData *); // rbx
  int Bounds; // eax

  v3 = 0;
  a3[3] = 0;
  a3[2] = 0;
  a3[1] = 0;
  *a3 = 0;
  v4 = *(_QWORD *)(a1 + 376);
  if ( v4 )
  {
    v6 = *(__int64 (__fastcall **)(CRenderData *))(*(_QWORD *)v4 + 112LL);
    if ( v6 == CRenderData::GetBounds )
    {
      Bounds = CRenderData::GetBounds(*(CRenderData **)(a1 + 376));
    }
    else if ( (char *)v6 == (char *)CPrimitiveGroup::GetBounds )
    {
      Bounds = CPrimitiveGroup::GetBounds(*(_QWORD *)(a1 + 376), a2, a1 + 148, a3);
    }
    else
    {
      Bounds = ((__int64 (__fastcall *)(_QWORD, __int64, __int64, _DWORD *))v6)(*(_QWORD *)(a1 + 376), a2, a1 + 148, a3);
    }
    v3 = Bounds;
    if ( Bounds < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, Bounds, 0xB68u);
  }
  return v3;
}
