/*
 * XREFs of OutputDuplProcessRemoteSessionSetPointerShape @ 0x1C017FA08
 * Callers:
 *     ?DxgkSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@IIH@Z @ 0x1C007A500 (-DxgkSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@IIH@.c)
 * Callees:
 *     ?ProcessPointerShapeChange@OUTPUTDUPL_MGR@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@II@Z @ 0x1C0077E80 (-ProcessPointerShapeChange@OUTPUTDUPL_MGR@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SE.c)
 *     ?FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ @ 0x1C0078654 (-FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ.c)
 */

OUTPUTDUPL_MGR *__fastcall OutputDuplProcessRemoteSessionSetPointerShape(
        struct _DXGKARG_SETPOINTERPOSITION *a1,
        struct _DXGKARG_SETPOINTERSHAPE *a2,
        unsigned int a3,
        UINT a4)
{
  OUTPUTDUPL_MGR *result; // rax

  result = FindRemoteOutputDuplMgr();
  if ( result )
    return (OUTPUTDUPL_MGR *)OUTPUTDUPL_MGR::ProcessPointerShapeChange(result, a1, a2, a3, a4);
  return result;
}
