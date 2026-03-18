/*
 * XREFs of ??$EmitUpdateCommand@UMILCMD_COMPONENTTRANSFORM3D_SETANCHORPOINT@@V_lambda_ae326120eec07a33cfa3124b4300c4b1_@@@CResourceMarshaler@DirectComposition@@KA_NPEAPEAVCBatch@1@AEBV_lambda_ae326120eec07a33cfa3124b4300c4b1_@@@Z @ 0x1C0047A24
 * Callers:
 *     ?EmitUpdateCommands@CComponentTransform3DMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0044920 (-EmitUpdateCommands@CComponentTransform3DMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0044720 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CResourceMarshaler::EmitUpdateCommand<MILCMD_COMPONENTTRANSFORM3D_SETANCHORPOINT,_lambda_ae326120eec07a33cfa3124b4300c4b1_>(
        struct DirectComposition::CBatch **a1,
        __int64 a2)
{
  char *v3; // r8
  char result; // al
  void *v5; // [rsp+40h] [rbp+18h] BYREF

  if ( !DirectComposition::CBatch::EnsureBatchBuffer(a1, 0x14uLL, &v5) )
    return 0;
  v3 = (char *)v5;
  *(_DWORD *)v5 = 20;
  *(_QWORD *)(v3 + 4) = 0LL;
  *(_QWORD *)(v3 + 12) = 0LL;
  *((_DWORD *)v3 + 1) = 267;
  *((_DWORD *)v3 + 2) = *(_DWORD *)(*(_QWORD *)a2 + 24LL);
  *((_DWORD *)v3 + 3) = *(_DWORD *)(*(_QWORD *)a2 + 68LL);
  result = 1;
  *((_DWORD *)v3 + 4) = *(_DWORD *)(*(_QWORD *)a2 + 72LL);
  return result;
}
