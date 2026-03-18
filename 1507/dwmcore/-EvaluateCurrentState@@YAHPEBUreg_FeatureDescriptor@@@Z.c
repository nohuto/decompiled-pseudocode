/*
 * XREFs of ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x18010F2C8
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18010EBC0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?EnsureCacheBounds@CExpression@@AEAAJI_K@Z @ 0x18010F210 (-EnsureCacheBounds@CExpression@@AEAAJI_K@Z.c)
 *     ?ProcessSetNodesInfo@CExpression@@QEAAJPEAVCResourceTable@@PEBUMILCMD_EXPRESSION_SETNODESINFO@@@Z @ 0x18010FB94 (-ProcessSetNodesInfo@CExpression@@QEAAJPEAVCResourceTable@@PEBUMILCMD_EXPRESSION_SETNODESINFO@@@.c)
 * Callees:
 *     <none>
 */

char __fastcall EvaluateCurrentState(int **a1)
{
  unsigned int v1; // r9d
  __int64 v2; // rdx
  int v3; // ecx

  v1 = *((_DWORD *)a1 + 2);
  v2 = *((unsigned int *)a1 + 3);
  v3 = **a1;
  if ( v3 )
    return v3 != 1;
  else
    return EvaluateCurrentStateFromRegistry(v1, v2);
}
