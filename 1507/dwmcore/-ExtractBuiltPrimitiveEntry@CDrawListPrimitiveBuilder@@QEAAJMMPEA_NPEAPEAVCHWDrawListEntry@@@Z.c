/*
 * XREFs of ?ExtractBuiltPrimitiveEntry@CDrawListPrimitiveBuilder@@QEAAJMMPEA_NPEAPEAVCHWDrawListEntry@@@Z @ 0x180077D1C
 * Callers:
 *     ?ExtractBuiltPrimitive@CPrimitiveGroupDrawListGenerator@@AEAAJPEAVCDrawListPrimitiveBuilder@@PEAUHWDrawListCacheEntry@@MMW4Enum@CommonRenderingPixelShaders@@PEAVCCompositionSurfaceBitmap@@3PEAV?$DynArrayIA@UHWDrawListCacheEntry@@$03$0A@@@PEA_N@Z @ 0x18007685C (-ExtractBuiltPrimitive@CPrimitiveGroupDrawListGenerator@@AEAAJPEAVCDrawListPrimitiveBuilder@@PEA.c)
 *     ?DrawBrushEffect@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCPrimitive@@PEAVCCompiledEffect@@AEBUD2D_RECT_F@@@Z @ 0x1800F1A68 (-DrawBrushEffect@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCPrimitive@@PEAVCCompiledEffect@@AEBUD2D.c)
 *     ?DrawPrimitiveMesh@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCPrimitive@@AEBUD2D_MATRIX_3X2_F@@AEBUD2D_RECT_F@@@Z @ 0x1800F294C (-DrawPrimitiveMesh@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCPrimitive@@AEBUD2D_MATRIX_3X2_F@@AEBU.c)
 * Callees:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18001D430 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?Create@CDrawListPrimitive@@SAJ_NPEBVCVertexXYAAColorDUV2@@IPEBGIAEBUD2D_VECTOR_2F@@0PEAPEAV1@@Z @ 0x180041D10 (-Create@CDrawListPrimitive@@SAJ_NPEBVCVertexXYAAColorDUV2@@IPEBGIAEBUD2D_VECTOR_2F@@0PEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Create@CHWDrawListEntry@@SAJPEAVCDrawListPrimitive@@PEAPEAV1@@Z @ 0x180073E0C (-Create@CHWDrawListEntry@@SAJPEAVCDrawListPrimitive@@PEAPEAV1@@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall CDrawListPrimitiveBuilder::ExtractBuiltPrimitiveEntry(
        CDrawListPrimitiveBuilder *this,
        double a2,
        double a3,
        bool *a4,
        struct CHWDrawListEntry **a5)
{
  struct CDrawListPrimitive *v5; // rbx
  struct CHWDrawListEntry *v6; // rdi
  unsigned int v8; // ecx
  unsigned int v9; // ebp
  unsigned __int16 *v10; // r9
  unsigned int v11; // r8d
  const struct CVertexXYAAColorDUV2 *v12; // rdx
  int v13; // eax
  int v14; // eax
  __int64 (__fastcall *v15)(CMILRefCountBase *); // rsi
  char v17; // [rsp+30h] [rbp-38h]
  unsigned __int64 v18; // [rsp+40h] [rbp-28h] BYREF
  struct CDrawListPrimitive *v19; // [rsp+70h] [rbp+8h] BYREF
  struct CHWDrawListEntry *v20; // [rsp+88h] [rbp+20h] BYREF

  v5 = 0LL;
  v6 = 0LL;
  *a4 = *((_BYTE *)this + 2185);
  v19 = 0LL;
  v8 = *((_DWORD *)this + 522);
  v9 = 0;
  v20 = 0LL;
  if ( !v8 )
    goto LABEL_5;
  v10 = (unsigned __int16 *)*((_QWORD *)this + 258);
  v11 = *((_DWORD *)this + 34);
  v12 = (const struct CVertexXYAAColorDUV2 *)*((_QWORD *)this + 14);
  v17 = *((_BYTE *)this + 2184);
  v18 = _mm_unpacklo_ps(*(__m128 *)&a2, *(__m128 *)&a3).m128_u64[0];
  v13 = CDrawListPrimitive::Create(0, v12, v11, v10, v8, (const struct D2D_VECTOR_2F *)&v18, v17, &v19);
  v9 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x2BFu);
    v5 = v19;
  }
  else
  {
    v5 = v19;
    v14 = CHWDrawListEntry::Create(v19, &v20);
    v9 = v14;
    if ( v14 >= 0 )
    {
      v6 = v20;
LABEL_5:
      *a5 = v6;
      v6 = 0LL;
      *((_DWORD *)this + 34) = 0;
      *((_DWORD *)this + 522) = 0;
      *((_WORD *)this + 1092) = 1;
      goto LABEL_6;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x2C4u);
    v6 = v20;
  }
LABEL_6:
  if ( v5 )
  {
    v15 = *(__int64 (__fastcall **)(CMILRefCountBase *))(*(_QWORD *)v5 + 8LL);
    if ( v15 == CMILRefCountBase::Release )
      CMILRefCountBase::Release(v5);
    else
      v15(v5);
  }
  if ( v6 )
    CMILRefCountBase::Release(v6);
  return v9;
}
