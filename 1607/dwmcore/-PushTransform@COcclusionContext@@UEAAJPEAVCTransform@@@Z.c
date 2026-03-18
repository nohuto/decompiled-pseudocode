/*
 * XREFs of ?PushTransform@COcclusionContext@@UEAAJPEAVCTransform@@@Z @ 0x18005C900
 * Callers:
 *     ?Draw@CRenderData@@QEAAJPEAUIDrawingContext@@@Z @ 0x18004DC00 (-Draw@CRenderData@@QEAAJPEAUIDrawingContext@@@Z.c)
 * Callees:
 *     ?GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z @ 0x180023F98 (-GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?PushTransformInternal@COcclusionContext@@AEAAJPEAVCTransform@@@Z @ 0x18005C77C (-PushTransformInternal@COcclusionContext@@AEAAJPEAVCTransform@@@Z.c)
 *     ?CheckTransformAllowsOcclusion@COcclusionContext@@AEAAJAEBVCMILMatrix@@PEA_N@Z @ 0x18005C7E8 (-CheckTransformAllowsOcclusion@COcclusionContext@@AEAAJAEBVCMILMatrix@@PEA_N@Z.c)
 */

__int64 __fastcall COcclusionContext::PushTransform(COcclusionContext *this, struct CTransform *a2)
{
  unsigned int v2; // ebx
  const struct CMILMatrix *Matrix; // rax
  COcclusionContext *v6; // rcx
  int v7; // eax
  int v8; // eax
  bool v10; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  v10 = 0;
  if ( *((_DWORD *)this + 221) || !a2 )
    goto LABEL_8;
  Matrix = CTransform3D::GetMatrix(a2, 0LL);
  v7 = COcclusionContext::CheckTransformAllowsOcclusion(v6, Matrix, &v10);
  v2 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x53Du);
    return v2;
  }
  if ( v10 )
  {
    v8 = COcclusionContext::PushTransformInternal((COcclusionContext *)((char *)this - 8), a2);
    v2 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x541u);
  }
  else
  {
LABEL_8:
    ++*((_DWORD *)this + 221);
  }
  return v2;
}
