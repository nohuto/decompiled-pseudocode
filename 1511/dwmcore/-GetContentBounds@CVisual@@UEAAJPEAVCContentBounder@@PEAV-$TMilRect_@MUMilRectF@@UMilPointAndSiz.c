/*
 * XREFs of ?GetContentBounds@CVisual@@UEAAJPEAVCContentBounder@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180049710
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetBounds@CPrimitiveGroup@@UEAAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180091900 (-GetBounds@CPrimitiveGroup@@UEAAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF.c)
 *     ?GetBounds@CRenderData@@UEAAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18009EB00 (-GetBounds@CRenderData@@UEAAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UM.c)
 */

__int64 __fastcall CVisual::GetContentBounds(__int64 a1, CContentBounder *a2, _QWORD *a3)
{
  __int64 result; // rax
  CRenderData *v4; // rdi
  __int64 (__fastcall *v5)(CRenderData *, CContentBounder *); // rbp
  int Bounds; // eax
  unsigned int v7; // ebx

  result = 0LL;
  a3[1] = 0LL;
  *a3 = 0LL;
  v4 = *(CRenderData **)(a1 + 360);
  if ( v4 )
  {
    v5 = *(__int64 (__fastcall **)(CRenderData *, CContentBounder *))(*(_QWORD *)v4 + 120LL);
    if ( v5 == CRenderData::GetBounds )
    {
      Bounds = CRenderData::GetBounds(v4, a2);
    }
    else if ( (char *)v5 == (char *)CPrimitiveGroup::GetBounds )
    {
      Bounds = CPrimitiveGroup::GetBounds(v4, a2, a1 + 132, a3);
    }
    else
    {
      Bounds = ((__int64 (__fastcall *)(CRenderData *, CContentBounder *, __int64, _QWORD *))v5)(v4, a2, a1 + 132, a3);
    }
    v7 = Bounds;
    if ( Bounds < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, Bounds, 0xACEu);
    return v7;
  }
  return result;
}
