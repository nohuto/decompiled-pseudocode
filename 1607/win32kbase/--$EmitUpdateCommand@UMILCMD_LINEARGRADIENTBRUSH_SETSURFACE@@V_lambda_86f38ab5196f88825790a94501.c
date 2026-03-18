/*
 * XREFs of ??$EmitUpdateCommand@UMILCMD_LINEARGRADIENTBRUSH_SETSURFACE@@V_lambda_86f38ab5196f88825790a945019bd5ee_@@@CResourceMarshaler@DirectComposition@@KA_NPEAPEAVCBatch@1@AEBV_lambda_86f38ab5196f88825790a945019bd5ee_@@@Z @ 0x1C00EBA2C
 * Callers:
 *     ?EmitUpdateCommands@CLinearGradientBrushMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00EBAC0 (-EmitUpdateCommands@CLinearGradientBrushMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0044720 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     memset @ 0x1C008A080 (memset.c)
 */

char __fastcall DirectComposition::CResourceMarshaler::EmitUpdateCommand<MILCMD_LINEARGRADIENTBRUSH_SETSURFACE,_lambda_86f38ab5196f88825790a945019bd5ee_>(
        struct DirectComposition::CBatch **a1,
        __int64 *a2)
{
  int v3; // edi
  char *v4; // rax
  char *v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // xmm1_8
  char result; // al
  void *v10; // [rsp+40h] [rbp+18h] BYREF

  v3 = 0;
  if ( !DirectComposition::CBatch::EnsureBatchBuffer(a1, 0x28uLL, &v10) )
    return 0;
  v4 = (char *)v10;
  *(_DWORD *)v10 = 40;
  v5 = v4 + 4;
  memset(v4 + 4, 0, 0x24uLL);
  *(_DWORD *)v5 = 81;
  *((_DWORD *)v5 + 1) = *(_DWORD *)(*a2 + 24);
  v6 = *(_QWORD *)(*a2 + 64);
  if ( v6 )
    v3 = *(_DWORD *)(v6 + 24);
  *((_DWORD *)v5 + 2) = v3;
  v7 = *a2;
  *(_OWORD *)(v5 + 12) = *(_OWORD *)(*a2 + 72);
  v8 = *(_QWORD *)(v7 + 88);
  result = 1;
  *(_QWORD *)(v5 + 28) = v8;
  return result;
}
