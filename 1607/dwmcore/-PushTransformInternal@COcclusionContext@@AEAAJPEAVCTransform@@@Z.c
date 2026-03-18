/*
 * XREFs of ?PushTransformInternal@COcclusionContext@@AEAAJPEAVCTransform@@@Z @ 0x18005C77C
 * Callers:
 *     ?PushTransform@COcclusionContext@@UEAAJPEAVCTransform@@@Z @ 0x18005C900 (-PushTransform@COcclusionContext@@UEAAJPEAVCTransform@@@Z.c)
 * Callees:
 *     ?GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z @ 0x180023F98 (-GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z.c)
 *     ?Push@CBaseMatrixStack@@IEAAJPEBVCMILMatrix@@_N@Z @ 0x180025440 (-Push@CBaseMatrixStack@@IEAAJPEBVCMILMatrix@@_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Push@?$CWatermarkStack@W4StackStateType@COcclusionContext@@$0EA@$01$09@@QEAAJAEBW4StackStateType@COcclusionContext@@@Z @ 0x1800A3324 (-Push@-$CWatermarkStack@W4StackStateType@COcclusionContext@@$0EA@$01$09@@QEAAJAEBW4StackStateTyp.c)
 */

__int64 __fastcall COcclusionContext::PushTransformInternal(COcclusionContext *this, struct CTransform *a2)
{
  const struct CMILMatrix *Matrix; // rax
  int v4; // eax
  unsigned int v5; // ebx
  int v6; // eax
  int v8; // [rsp+40h] [rbp+8h] BYREF

  Matrix = CTransform3D::GetMatrix(a2, 0LL);
  v4 = CBaseMatrixStack::Push((COcclusionContext *)((char *)this + 16), Matrix, 1);
  v5 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x63Eu);
  }
  else
  {
    v8 = 1;
    v6 = CWatermarkStack<enum COcclusionContext::StackStateType,64,2,10>::Push((char *)this + 896, &v8);
    v5 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x63Fu);
  }
  return v5;
}
