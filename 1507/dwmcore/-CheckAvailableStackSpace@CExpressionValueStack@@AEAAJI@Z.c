/*
 * XREFs of ?CheckAvailableStackSpace@CExpressionValueStack@@AEAAJI@Z @ 0x180100B74
 * Callers:
 *     ?ProcessReferenceNode@CExpressionValueStack@@QEAAJPEAVCExpression@@PEAUExpressionReferenceNode@@_K@Z @ 0x180101850 (-ProcessReferenceNode@CExpressionValueStack@@QEAAJPEAVCExpression@@PEAUExpressionReferenceNode@@.c)
 *     ?PushConstant@CExpressionValueStack@@QEAAJAEBUD2DMatrix@@@Z @ 0x180101A04 (-PushConstant@CExpressionValueStack@@QEAAJAEBUD2DMatrix@@@Z.c)
 *     ?PushConstant@CExpressionValueStack@@QEAAJAEBUD2DVector2@@@Z @ 0x180101A80 (-PushConstant@CExpressionValueStack@@QEAAJAEBUD2DVector2@@@Z.c)
 *     ?PushConstant@CExpressionValueStack@@QEAAJAEBUD2DVector3@@@Z @ 0x180101B00 (-PushConstant@CExpressionValueStack@@QEAAJAEBUD2DVector3@@@Z.c)
 *     ?PushConstant@CExpressionValueStack@@QEAAJAEBUD2DVector4@@@Z @ 0x180101B88 (-PushConstant@CExpressionValueStack@@QEAAJAEBUD2DVector4@@@Z.c)
 *     ?PushConstant@CExpressionValueStack@@QEAAJAEBUD2D_MATRIX_3X2_F@@@Z @ 0x180101C08 (-PushConstant@CExpressionValueStack@@QEAAJAEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?PushConstant@CExpressionValueStack@@QEAAJAEBVCExpressionValue@@@Z @ 0x180101C84 (-PushConstant@CExpressionValueStack@@QEAAJAEBVCExpressionValue@@@Z.c)
 *     ?PushConstant@CExpressionValueStack@@QEAAJM@Z @ 0x180101D00 (-PushConstant@CExpressionValueStack@@QEAAJM@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CExpressionValueStack::CheckAvailableStackSpace(CExpressionValueStack *this)
{
  unsigned int v1; // ebx
  unsigned int v3; // [rsp+20h] [rbp-18h]

  if ( *((_DWORD *)this + 4) == -1 )
  {
    v3 = 570;
  }
  else
  {
    if ( *((_DWORD *)this + 12) != *((_DWORD *)this + 4) )
      return 0;
    v3 = 583;
  }
  v1 = -2147024882;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, v3);
  return v1;
}
