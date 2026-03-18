/*
 * XREFs of ?ProcessSetTransformMatrix@CComponentTransform2D@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPONENTTRANSFORM2D_SETTRANSFORMMATRIX@@@Z @ 0x180020900
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18003CEA0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?SetTransformMatrix@CComponentTransform2D@@AEAAJAEBUD2D_MATRIX_3X2_F@@@Z @ 0x180020528 (-SetTransformMatrix@CComponentTransform2D@@AEAAJAEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CComponentTransform2D::ProcessSetTransformMatrix(
        CComponentTransform2D *this,
        struct CResourceTable *a2,
        const struct MILCMD_COMPONENTTRANSFORM2D_SETTRANSFORMMATRIX *a3)
{
  int v3; // eax
  unsigned int v4; // ebx

  v3 = CComponentTransform2D::SetTransformMatrix(this, (const struct D2D_MATRIX_3X2_F *)((char *)a3 + 8));
  v4 = v3;
  if ( v3 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x78u);
  return v4;
}
