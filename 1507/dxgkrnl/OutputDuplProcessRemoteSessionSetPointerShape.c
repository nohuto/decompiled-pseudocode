/*
 * XREFs of OutputDuplProcessRemoteSessionSetPointerShape @ 0x1C01566FC
 * Callers:
 *     ?DxgkCddSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@IIH@Z @ 0x1C008EBC0 (-DxgkCddSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@I.c)
 * Callees:
 *     ?FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ @ 0x1C008D638 (-FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ.c)
 *     ?ProcessPointerShapeChange@OUTPUTDUPL_MGR@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@II@Z @ 0x1C008E260 (-ProcessPointerShapeChange@OUTPUTDUPL_MGR@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SE.c)
 */

OUTPUTDUPL_MGR *__fastcall OutputDuplProcessRemoteSessionSetPointerShape(
        struct _DXGKARG_SETPOINTERPOSITION *a1,
        struct _DXGKARG_SETPOINTERSHAPE *a2,
        __int64 a3,
        __int64 a4)
{
  UINT v4; // ebx
  unsigned int v5; // edi
  OUTPUTDUPL_MGR *result; // rax

  v4 = a4;
  v5 = a3;
  result = FindRemoteOutputDuplMgr((__int64)a1, (__int64)a2, a3, a4);
  if ( result )
    return (OUTPUTDUPL_MGR *)OUTPUTDUPL_MGR::ProcessPointerShapeChange(result, a1, a2, v5, v4);
  return result;
}
