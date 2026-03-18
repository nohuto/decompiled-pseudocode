/*
 * XREFs of ??$EmitUpdateCommand@UMILCMD_COMPONENTTRANSFORM2D_SETTRANSFORMMATRIX@@V_lambda_8e27e368b213886017cbcce0d374cdc4_@@@CResourceMarshaler@DirectComposition@@KA_NPEAPEAVCBatch@1@AEBV_lambda_8e27e368b213886017cbcce0d374cdc4_@@@Z @ 0x1C00EE214
 * Callers:
 *     ?EmitUpdateCommands@CComponentTransform2DMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00EE290 (-EmitUpdateCommands@CComponentTransform2DMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0044720 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     memset @ 0x1C008A080 (memset.c)
 */

char __fastcall DirectComposition::CResourceMarshaler::EmitUpdateCommand<MILCMD_COMPONENTTRANSFORM2D_SETTRANSFORMMATRIX,_lambda_8e27e368b213886017cbcce0d374cdc4_>(
        struct DirectComposition::CBatch **a1,
        __int64 *a2)
{
  char *v3; // rax
  char *v4; // rbx
  __int64 v5; // rax
  __int64 v6; // xmm1_8
  char result; // al
  void *v8; // [rsp+40h] [rbp+18h] BYREF

  if ( !DirectComposition::CBatch::EnsureBatchBuffer(a1, 0x24uLL, &v8) )
    return 0;
  v3 = (char *)v8;
  *(_DWORD *)v8 = 36;
  v4 = v3 + 4;
  memset(v3 + 4, 0, 0x20uLL);
  *(_DWORD *)v4 = 266;
  *((_DWORD *)v4 + 1) = *(_DWORD *)(*a2 + 24);
  v5 = *a2;
  *(_OWORD *)(v4 + 8) = *(_OWORD *)(*a2 + 76);
  v6 = *(_QWORD *)(v5 + 92);
  result = 1;
  *((_QWORD *)v4 + 3) = v6;
  return result;
}
