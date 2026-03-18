/*
 * XREFs of ?PushTransform@COcclusionContext@@UEAAJPEAVCTransform@@@Z @ 0x18001FE90
 * Callers:
 *     ?Draw@CRenderData@@QEAAJPEAUIDrawingContext@@@Z @ 0x18004E7A0 (-Draw@CRenderData@@QEAAJPEAUIDrawingContext@@@Z.c)
 * Callees:
 *     ?GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@XZ @ 0x18001AEB0 (-GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@XZ.c)
 *     ?PushTransformInternal@COcclusionContext@@AEAAJPEAVCTransform@@@Z @ 0x18001FD48 (-PushTransformInternal@COcclusionContext@@AEAAJPEAVCTransform@@@Z.c)
 *     ?Is2DAxisAlignedPreserving@CBaseMatrix@@QEBAHXZ @ 0x1800222FC (-Is2DAxisAlignedPreserving@CBaseMatrix@@QEBAHXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall COcclusionContext::PushTransform(COcclusionContext *this, struct CTransform *a2)
{
  unsigned int v2; // ebx
  CBaseMatrix *Matrix; // rax
  int v6; // eax

  v2 = 0;
  if ( !*((_DWORD *)this + 162)
    && a2
    && (Matrix = CTransform3D::GetMatrix(a2), (unsigned int)CBaseMatrix::Is2DAxisAlignedPreserving(Matrix)) )
  {
    v6 = COcclusionContext::PushTransformInternal((COcclusionContext *)((char *)this - 8), a2);
    v2 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x4EFu);
  }
  else
  {
    ++*((_DWORD *)this + 162);
  }
  return v2;
}
