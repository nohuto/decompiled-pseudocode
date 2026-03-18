/*
 * XREFs of ??$EmitUpdateCommand@UMILCMD_COMPONENTTRANSFORM3D_SETTRANSFORMMATRIX@@V_lambda_952b6b000c999d04aa5713e06a78ee9c_@@@CResourceMarshaler@DirectComposition@@KA_NPEAPEAVCBatch@1@AEBV_lambda_952b6b000c999d04aa5713e06a78ee9c_@@@Z @ 0x1C0044C94
 * Callers:
 *     ?EmitUpdateCommands@CComponentTransform3DMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0044920 (-EmitUpdateCommands@CComponentTransform3DMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0044720 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     memset @ 0x1C008A080 (memset.c)
 */

char __fastcall DirectComposition::CResourceMarshaler::EmitUpdateCommand<MILCMD_COMPONENTTRANSFORM3D_SETTRANSFORMMATRIX,_lambda_952b6b000c999d04aa5713e06a78ee9c_>(
        struct DirectComposition::CBatch **a1,
        __int64 *a2)
{
  char *v3; // rax
  char *v4; // rbx
  __int64 v5; // rax
  __int128 v6; // xmm1
  char result; // al
  void *v8; // [rsp+40h] [rbp+18h] BYREF

  if ( !DirectComposition::CBatch::EnsureBatchBuffer(a1, 0x4CuLL, &v8) )
    return 0;
  v3 = (char *)v8;
  *(_DWORD *)v8 = 76;
  v4 = v3 + 4;
  memset(v3 + 4, 0, 0x48uLL);
  *(_DWORD *)v4 = 273;
  *((_DWORD *)v4 + 1) = *(_DWORD *)(*a2 + 24);
  v5 = *a2;
  *(_OWORD *)(v4 + 8) = *(_OWORD *)(*a2 + 120);
  *(_OWORD *)(v4 + 24) = *(_OWORD *)(v5 + 136);
  *(_OWORD *)(v4 + 40) = *(_OWORD *)(v5 + 152);
  v6 = *(_OWORD *)(v5 + 168);
  result = 1;
  *(_OWORD *)(v4 + 56) = v6;
  return result;
}
