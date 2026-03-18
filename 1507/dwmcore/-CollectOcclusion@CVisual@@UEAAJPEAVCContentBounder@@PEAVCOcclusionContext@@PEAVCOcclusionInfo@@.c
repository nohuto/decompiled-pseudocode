/*
 * XREFs of ?CollectOcclusion@CVisual@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x180036880
 * Callers:
 *     <none>
 * Callees:
 *     ?IsOpaque@CFilterEffect@@QEAA_NPEBVCVisual@@@Z @ 0x1800026A0 (-IsOpaque@CFilterEffect@@QEAA_NPEBVCVisual@@@Z.c)
 *     ?IsOfType@CEffectGroup@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18003C7E0 (-IsOfType@CEffectGroup@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?Draw@CRenderData@@QEAAJPEAUIDrawingContext@@@Z @ 0x18004E7A0 (-Draw@CRenderData@@QEAAJPEAUIDrawingContext@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddOcclusionInformation@CPrimitiveGroup@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z @ 0x18006E3A0 (-AddOcclusionInformation@CPrimitiveGroup@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CVisual::CollectOcclusion(
        CVisual *this,
        struct CContentBounder *a2,
        struct COcclusionContext *a3,
        struct COcclusionInfo *a4)
{
  struct IDrawingContext *v4; // rdi
  __int64 v7; // r14
  const struct D2D_SIZE_F *v8; // r14
  CRenderData *v9; // rbx
  __int64 (__fastcall *v10)(CPrimitiveGroup *__hidden, struct COcclusionContext *, const struct D2D_SIZE_F *); // rbp
  int v11; // eax
  unsigned int v12; // ebx
  unsigned __int8 (__fastcall *v14)(_QWORD, __int64, struct COcclusionContext *, struct COcclusionInfo *); // rbp
  CFilterEffect *v16; // rcx

  v4 = 0LL;
  if ( !*((_QWORD *)this + 47) )
    return 0LL;
  v7 = *((_QWORD *)this + 51);
  if ( v7 )
  {
    v14 = *(unsigned __int8 (__fastcall **)(_QWORD, __int64, struct COcclusionContext *, struct COcclusionInfo *))(*(_QWORD *)v7 + 48LL);
    if ( (char *)v14 == (char *)CEffectGroup::IsOfType
       ? CEffectGroup::IsOfType(*((_QWORD *)this + 51), 9LL)
       : v14(*((_QWORD *)this + 51), 9LL, a3, a4) )
    {
      v16 = (CFilterEffect *)*((_QWORD *)this + 51);
      if ( v16 )
      {
        if ( !CFilterEffect::IsOpaque(v16, this) )
          return 0LL;
      }
    }
  }
  v8 = (const struct D2D_SIZE_F *)((char *)this + 148);
  v9 = (CRenderData *)*((_QWORD *)this + 47);
  v10 = *(__int64 (__fastcall **)(CPrimitiveGroup *__hidden, struct COcclusionContext *, const struct D2D_SIZE_F *))(*(_QWORD *)v9 + 96LL);
  if ( v10 == CRenderData::AddOcclusionInformation )
  {
    if ( a3 )
      v4 = (struct COcclusionContext *)((char *)a3 + 8);
    v11 = CRenderData::Draw(v9, v4);
  }
  else if ( v10 == CPrimitiveGroup::AddOcclusionInformation )
  {
    v11 = CPrimitiveGroup::AddOcclusionInformation(v9, a3, v8);
  }
  else
  {
    v11 = ((__int64 (__fastcall *)(CRenderData *, struct COcclusionContext *, const struct D2D_SIZE_F *, struct COcclusionInfo *))v10)(
            v9,
            a3,
            v8,
            a4);
  }
  v12 = v11;
  if ( v11 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0xBB5u);
  return v12;
}
